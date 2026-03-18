/*
 * XREFs of VrpDereferenceDiffHiveEntry @ 0x14070D198
 * Callers:
 *     VrpLoadDifferencingHive @ 0x14070D6EC (VrpLoadDifferencingHive.c)
 *     VrpUnloadDifferencingHive @ 0x14070DA14 (VrpUnloadDifferencingHive.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     VrpDereferenceDiffHiveEntryWithLock @ 0x14070D21C (VrpDereferenceDiffHiveEntryWithLock.c)
 */

_QWORD *__fastcall VrpDereferenceDiffHiveEntry(_QWORD *P)
{
  _QWORD *result; // rax
  signed __int64 i; // rdx
  _QWORD *v4; // rtt
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // r8
  __int64 v7; // r9

  _m_prefetchw(P + 2);
  result = (_QWORD *)P[2];
  for ( i = (signed __int64)result - 1; i > 0; i = (signed __int64)result - 1 )
  {
    v4 = result;
    result = (_QWORD *)_InterlockedCompareExchange64(P + 2, i, (signed __int64)result);
    if ( v4 == result )
      return result;
  }
  if ( i )
    __fastfail(0xEu);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&gLoadedDiffHivesLock, 0LL);
  VrpDereferenceDiffHiveEntryWithLock(P);
  ExReleasePushLockEx((ULONG_PTR)&gLoadedDiffHivesLock, 0LL, v6, v7);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
