/*
 * XREFs of VrpDereferenceDiffHiveEntry @ 0x14067DA6C
 * Callers:
 *     VrpLoadDifferencingHive @ 0x14067DF68 (VrpLoadDifferencingHive.c)
 *     VrpUnloadDifferencingHive @ 0x14067E278 (VrpUnloadDifferencingHive.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     VrpDereferenceDiffHiveEntryWithLock @ 0x14067DAEC (VrpDereferenceDiffHiveEntryWithLock.c)
 */

__int64 __fastcall VrpDereferenceDiffHiveEntry(_QWORD *P)
{
  __int64 result; // rax
  __int64 v3; // rtt
  struct _KTHREAD *CurrentThread; // rax

  _m_prefetchw(P + 2);
  result = P[2];
  while ( result - 1 > 0 )
  {
    v3 = result;
    result = _InterlockedCompareExchange64(P + 2, result - 1, result);
    if ( v3 == result )
      return result;
  }
  if ( result != 1 )
    __fastfail(0xEu);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&gLoadedDiffHivesLock, 0LL);
  VrpDereferenceDiffHiveEntryWithLock(P);
  ExReleasePushLockEx((ULONG_PTR)&gLoadedDiffHivesLock, 0LL);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
