/*
 * XREFs of EtwpDisableKernelTrace @ 0x1405970E0
 * Callers:
 *     EtwpUpdateGlobalGroupMasks @ 0x140596CD8 (EtwpUpdateGlobalGroupMasks.c)
 *     EtwpEnableKernelTrace @ 0x140596E88 (EtwpEnableKernelTrace.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     KeCancelTimer2 @ 0x1400E3990 (KeCancelTimer2.c)
 *     IoPerfReset @ 0x1401FB378 (IoPerfReset.c)
 *     KeStopProfile @ 0x140208460 (KeStopProfile.c)
 *     DbgSetDebugPrintCallback @ 0x140250990 (DbgSetDebugPrintCallback.c)
 *     EtwpUpdateFileInfoDriverState @ 0x14059726C (EtwpUpdateFileInfoDriverState.c)
 *     CmSetTraceNotifyRoutines @ 0x140689DB4 (CmSetTraceNotifyRoutines.c)
 *     AlpcUnregisterLogRoutine @ 0x1406DE350 (AlpcUnregisterLogRoutine.c)
 *     WmiSetNetworkNotify @ 0x140742968 (WmiSetNetworkNotify.c)
 */

__int64 __fastcall EtwpDisableKernelTrace(__int64 a1, _DWORD *a2, __int64 a3)
{
  unsigned int v3; // ebp
  unsigned int i; // ebx
  struct _KTHREAD *CurrentThread; // rax

  v3 = a3;
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
      qword_1403560C8 = 0LL;
    if ( (*a2 & 0x4000000) != 0 )
      qword_1403560C0 = 0LL;
    if ( (*a2 & 0x200) != 0 )
      qword_1403560B8 = 0LL;
    if ( (*a2 & 0x100) != 0 )
    {
      EtwpDiskIoNotifyRoutines = 0LL;
      qword_1403554A8 = 0LL;
    }
    if ( (*a2 & 0x400) != 0 )
      qword_1403A2D00 = 0LL;
    if ( (a2[4] & 1) != 0 )
      qword_1403A2D08 = 0LL;
    if ( (a2[4] & 2) != 0 )
      qword_1403A2D10 = 0LL;
    if ( (*a2 & 0x200000) != 0 )
      EtwpSplitIoNotifyRoutines = 0LL;
    if ( (*a2 & 0x10000) != 0 )
      WmiSetNetworkNotify(0LL);
    if ( (a2[1] & 0x10) != 0 )
      IoPerfReset(1);
    if ( (a2[4] & 0x400000) != 0 )
      qword_140355488 = 0LL;
    if ( (a2[4] & 0x80000) != 0 )
      qword_140355490 = 0LL;
    if ( (a2[4] & 0x100000) != 0 )
      qword_140355498 = 0LL;
    if ( (a2[4] & 0x200000) != 0 )
      qword_1403554A0 = 0LL;
    if ( (a2[4] & 0x1000000) != 0 )
      qword_140358A88 = 0LL;
    if ( (a2[4] & 0x2000000) != 0 )
      qword_140358A90 = 0LL;
    if ( (a2[2] & 0x8000000) != 0 )
      qword_140358A98 = 0LL;
    if ( (*a2 & 0x40000) != 0 )
      DbgSetDebugPrintCallback((PDEBUG_PRINT_CALLBACK)EtwpTraceDebugPrint, 0);
    if ( (a2[1] & 2) != 0 )
      KeStopProfile((ULONG_PTR)&EtwpProfileObject);
    if ( (a2[1] & 0x400) != 0 )
    {
      for ( i = 0; i < EtwpPmcProfile; ++i )
        KeStopProfile((ULONG_PTR)qword_14035EC28 + 248 * i);
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
  return EtwpUpdateFileInfoDriverState(a1, a2, 0LL, v3);
}
