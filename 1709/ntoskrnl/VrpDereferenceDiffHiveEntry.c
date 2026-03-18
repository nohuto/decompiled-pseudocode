/*
 * XREFs of VrpDereferenceDiffHiveEntry @ 0x1406A8B00
 * Callers:
 *     VrpLoadDifferencingHive @ 0x1406A8FE8 (VrpLoadDifferencingHive.c)
 *     VrpUnloadDifferencingHive @ 0x1406A92F8 (VrpUnloadDifferencingHive.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     VrpDereferenceDiffHiveEntryWithLock @ 0x1406A8B80 (VrpDereferenceDiffHiveEntryWithLock.c)
 */

_QWORD *__fastcall VrpDereferenceDiffHiveEntry(_QWORD *P)
{
  _QWORD *result; // rax
  _QWORD *v3; // rtt
  struct _KTHREAD *CurrentThread; // rax

  _m_prefetchw(P + 2);
  result = (_QWORD *)P[2];
  while ( (__int64)result - 1 > 0 )
  {
    v3 = result;
    result = (_QWORD *)_InterlockedCompareExchange64(P + 2, (signed __int64)result - 1, (signed __int64)result);
    if ( v3 == result )
      return result;
  }
  if ( result != (_QWORD *)1 )
    __fastfail(0xEu);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&gLoadedDiffHivesLock, 0LL);
  VrpDereferenceDiffHiveEntryWithLock(P);
  ExReleasePushLockEx((ULONG_PTR)&gLoadedDiffHivesLock, 0LL);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
