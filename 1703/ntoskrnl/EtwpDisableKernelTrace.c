/*
 * XREFs of EtwpDisableKernelTrace @ 0x1404354A0
 * Callers:
 *     EtwpUpdateKernelGroupMasks @ 0x1404350C0 (EtwpUpdateKernelGroupMasks.c)
 *     EtwpEnableKernelTrace @ 0x140435210 (EtwpEnableKernelTrace.c)
 * Callees:
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     KeCancelTimer2 @ 0x14012ACD0 (KeCancelTimer2.c)
 *     IoPerfReset @ 0x1401F558C (IoPerfReset.c)
 *     KeStopProfile @ 0x140201E90 (KeStopProfile.c)
 *     DbgSetDebugPrintCallback @ 0x14023B0F0 (DbgSetDebugPrintCallback.c)
 *     CmSetTraceNotifyRoutines @ 0x140660E30 (CmSetTraceNotifyRoutines.c)
 *     AlpcUnregisterLogRoutine @ 0x1406B2600 (AlpcUnregisterLogRoutine.c)
 *     WmiSetNetworkNotify @ 0x140708DD4 (WmiSetNetworkNotify.c)
 */

__int64 __fastcall EtwpDisableKernelTrace(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4, int a5)
{
  unsigned int v5; // ebp
  unsigned int i; // ebx
  struct _KTHREAD *CurrentThread; // rax

  v5 = a3;
  if ( a2 )
  {
    if ( (*a2 & 0x20000) != 0 )
    {
      LOBYTE(a3) = 1;
      CmSetTraceNotifyRoutines(0LL, 0LL, a3);
    }
    if ( (*a2 & 0x100000) != 0 )
      AlpcUnregisterLogRoutine();
    if ( (*a2 & 0x2000000) != 0 )
      qword_14033B780 = 0LL;
    if ( (*a2 & 0x4000000) != 0 )
      qword_14033B778 = 0LL;
    if ( (*a2 & 0x200) != 0 )
      qword_14033B770 = 0LL;
    if ( (*a2 & 0x100) != 0 )
    {
      EtwpDiskIoNotifyRoutines = 0LL;
      qword_14033B760 = 0LL;
    }
    if ( (*a2 & 0x400) != 0 )
      qword_14036B938 = 0LL;
    if ( (a2[4] & 1) != 0 )
      qword_14036B940 = 0LL;
    if ( (a2[4] & 2) != 0 )
      qword_14036B948 = 0LL;
    if ( (*a2 & 0x200000) != 0 )
      EtwpSplitIoNotifyRoutines = 0LL;
    if ( (*a2 & 0x10000) != 0 )
      WmiSetNetworkNotify(0LL);
    if ( (a2[1] & 0x10) != 0 )
      IoPerfReset(1);
    if ( (a2[4] & 0x400000) != 0 )
      qword_14033B740 = 0LL;
    if ( (a2[4] & 0x80000) != 0 )
      qword_14033B748 = 0LL;
    if ( (a2[4] & 0x100000) != 0 )
      qword_14033B750 = 0LL;
    if ( (a2[4] & 0x200000) != 0 )
      qword_14033B758 = 0LL;
    if ( (a2[4] & 0x1000000) != 0 )
      qword_140340030 = 0LL;
    if ( (a2[4] & 0x2000000) != 0 )
      qword_140340038 = 0LL;
    if ( (a2[2] & 0x8000000) != 0 )
      qword_140340040 = 0LL;
    if ( (*a2 & 0x40000) != 0 )
      DbgSetDebugPrintCallback((PDEBUG_PRINT_CALLBACK)EtwpTraceDebugPrint, 0);
    if ( (a2[1] & 2) != 0 )
      KeStopProfile((ULONG_PTR)&EtwpProfileObject);
    if ( (a2[1] & 0x400) != 0 )
    {
      for ( i = 0; i < EtwpPmcProfile; ++i )
        KeStopProfile((ULONG_PTR)qword_140345208 + 248 * i);
    }
    if ( (a2[4] & 0x80u) != 0 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&ObpStackTraceLock, 0LL);
      ObpTraceFlags &= ~4u;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&ObpStackTraceLock);
      KeAbPostRelease((ULONG_PTR)&ObpStackTraceLock);
      KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    }
    if ( (a2[1] & 0x880000) != 0 && (!a1 || (*(_DWORD *)(a1 + 4) & 0x880000) == 0) )
      KeCancelTimer2((__int64)&EtwpMemInfoTimer);
  }
  return EtwpUpdateFileInfoDriverState(a1, a2, 0LL, v5, a5);
}
