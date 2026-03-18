/*
 * XREFs of EtwpDisableKernelTrace @ 0x14057BDC8
 * Callers:
 *     EtwpUpdateGlobalGroupMasks @ 0x14057B938 (EtwpUpdateGlobalGroupMasks.c)
 *     EtwpEnableKernelTrace @ 0x14057BB2C (EtwpEnableKernelTrace.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeCancelTimer2 @ 0x1400873D0 (KeCancelTimer2.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     IoPerfReset @ 0x1402380AC (IoPerfReset.c)
 *     KeStopProfile @ 0x140246090 (KeStopProfile.c)
 *     DbgSetDebugPrintCallback @ 0x1402863F0 (DbgSetDebugPrintCallback.c)
 *     EtwpUpdateFileInfoDriverState @ 0x14057BF54 (EtwpUpdateFileInfoDriverState.c)
 *     AlpcUnregisterLogRoutine @ 0x14074923C (AlpcUnregisterLogRoutine.c)
 *     WmiSetNetworkNotify @ 0x1407A49E4 (WmiSetNetworkNotify.c)
 */

__int64 __fastcall EtwpDisableKernelTrace(__int64 a1, int *a2, int a3, int a4)
{
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  unsigned int i; // ebx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9

  if ( a2 )
  {
    v8 = *a2;
    if ( (*a2 & 0x20000) != 0 )
    {
      CmpTraceRoutine = 0LL;
      CmpTraceTxrRoutine = 0LL;
    }
    if ( (v8 & 0x100000) != 0 )
    {
      AlpcUnregisterLogRoutine();
      v8 = *a2;
    }
    if ( (v8 & 0x2000000) != 0 )
    {
      qword_140396390 = 0LL;
      v8 = *a2;
    }
    if ( (v8 & 0x4000000) != 0 )
    {
      qword_140396388 = 0LL;
      v8 = *a2;
    }
    if ( (v8 & 0x200) != 0 )
    {
      qword_140396380 = 0LL;
      v8 = *a2;
    }
    if ( (v8 & 0x100) != 0 )
    {
      EtwpDiskIoNotifyRoutines = 0LL;
      qword_140396370 = 0LL;
      v8 = *a2;
    }
    if ( (v8 & 0x400) != 0 )
      qword_1403CADB8 = 0LL;
    v9 = a2[4];
    if ( (v9 & 1) != 0 )
    {
      qword_1403CADC0 = 0LL;
      v9 = a2[4];
    }
    if ( (v9 & 2) != 0 )
      qword_1403CADC8 = 0LL;
    v10 = *a2;
    if ( (*a2 & 0x200000) != 0 )
    {
      EtwpSplitIoNotifyRoutines = 0LL;
      v10 = *a2;
    }
    if ( (v10 & 0x10000) != 0 )
      WmiSetNetworkNotify(0LL);
    if ( (a2[1] & 0x10) != 0 )
      IoPerfReset(1);
    v11 = a2[4];
    if ( (v11 & 0x400000) != 0 )
    {
      qword_140396350 = 0LL;
      v11 = a2[4];
    }
    if ( (v11 & 0x80000) != 0 )
    {
      qword_140396358 = 0LL;
      v11 = a2[4];
    }
    if ( (v11 & 0x100000) != 0 )
    {
      qword_140396360 = 0LL;
      v11 = a2[4];
    }
    if ( (v11 & 0x200000) != 0 )
    {
      qword_140396368 = 0LL;
      v11 = a2[4];
    }
    if ( (v11 & 0x1000000) != 0 )
    {
      qword_14039C760 = 0LL;
      v11 = a2[4];
    }
    if ( (v11 & 0x2000000) != 0 )
      qword_14039C768 = 0LL;
    if ( (a2[2] & 0x8000000) != 0 )
      qword_14039C770 = 0LL;
    if ( (*a2 & 0x40000) != 0 )
      DbgSetDebugPrintCallback((PDEBUG_PRINT_CALLBACK)EtwpTraceDebugPrint, 0);
    v12 = a2[1];
    if ( (v12 & 2) != 0 )
    {
      KeStopProfile((ULONG_PTR)&EtwpProfileObject);
      v12 = a2[1];
    }
    if ( (v12 & 0x400) != 0 )
    {
      for ( i = 0; i < EtwpPmcProfile; ++i )
        KeStopProfile((ULONG_PTR)qword_1403A20B8 + 248 * i);
    }
    if ( (a2[4] & 0x80u) != 0 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&ObpStackTraceLock, 0LL);
      ObpTraceFlags &= ~4u;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&ObpStackTraceLock, v16, v17, v18);
      KeAbPostRelease((ULONG_PTR)&ObpStackTraceLock);
      KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    }
    if ( (a2[1] & 0x880000) != 0 && (!a1 || (*(_DWORD *)(a1 + 4) & 0x880000) == 0) )
      KeCancelTimer2((__int64)&EtwpMemInfoTimer);
  }
  return EtwpUpdateFileInfoDriverState(a1, (_DWORD)a2, 0, a3, a4);
}
