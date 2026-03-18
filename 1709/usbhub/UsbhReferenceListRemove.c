/*
 * XREFs of UsbhReferenceListRemove @ 0x1C00262E4
 * Callers:
 *     UsbhResetPort @ 0x1C0019070 (UsbhResetPort.c)
 *     UsbhCancelResetTimeout @ 0x1C0019250 (UsbhCancelResetTimeout.c)
 *     UsbhEnableTimerObject @ 0x1C001CF30 (UsbhEnableTimerObject.c)
 *     UsbhOutOfBandwidthTimerDpc @ 0x1C003C790 (UsbhOutOfBandwidthTimerDpc.c)
 *     UsbhSetTimer @ 0x1C003CC00 (UsbhSetTimer.c)
 *     UsbhSyncSendDeviceIoctl @ 0x1C003CCA0 (UsbhSyncSendDeviceIoctl.c)
 *     UsbhUninitialize @ 0x1C003CF00 (UsbhUninitialize.c)
 *     UsbhAutoOvercurrentResetWorker @ 0x1C003E000 (UsbhAutoOvercurrentResetWorker.c)
 *     UsbhDriverOvercurrentResetWorker @ 0x1C003E170 (UsbhDriverOvercurrentResetWorker.c)
 *     UsbhResetPortTimerDpc @ 0x1C0044C20 (UsbhResetPortTimerDpc.c)
 *     UsbhDmDisableTimer @ 0x1C00464D0 (UsbhDmDisableTimer.c)
 *     UsbhTimerPnpStop @ 0x1C0046710 (UsbhTimerPnpStop.c)
 *     UsbhReferenceListClose @ 0x1C004B78C (UsbhReferenceListClose.c)
 *     UsbhException @ 0x1C004FE34 (UsbhException.c)
 *     UsbhExceptionWorker @ 0x1C0050400 (UsbhExceptionWorker.c)
 * Callees:
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002935C (UsbhTrapFatal_Dbg.c)
 */

void __fastcall UsbhReferenceListRemove(__int64 a1, __int64 a2)
{
  KIRQL v4; // r14
  _DWORD *v5; // rax
  _DWORD *v6; // rsi
  _QWORD *v7; // rdi
  _QWORD *v8; // r8
  _QWORD *v9; // rcx
  _QWORD *v10; // rax
  _QWORD *v11; // rdx
  int v12; // eax

  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
  v5 = FdoExt(a1);
  v6 = v5;
  v7 = v5 + 628;
  v8 = (_QWORD *)*((_QWORD *)v5 + 314);
  if ( v8 == (_QWORD *)(v5 + 628) )
    goto LABEL_19;
  v9 = 0LL;
  if ( !v8 )
    goto LABEL_19;
  while ( v8 != v7 )
  {
    v9 = v8 - 3;
    if ( v8 == (_QWORD *)24 )
      UsbhTrapFatal_Dbg(a1, a1);
    if ( *(_DWORD *)v9 != 1397515890 )
      UsbhTrapFatal_Dbg(a1, a1);
    if ( v9[2] == a2 )
      break;
    v8 = (_QWORD *)*v8;
    if ( !v8 )
      UsbhTrapFatal_Dbg(a1, a1);
  }
  if ( !v9 || v8 == v7 )
  {
LABEL_19:
    v12 = v5[632];
    if ( v12 )
      v6[632] = v12 - 1;
  }
  else
  {
    v10 = (_QWORD *)*v8;
    if ( *(_QWORD **)(*v8 + 8LL) != v8 || (v11 = (_QWORD *)v8[1], (_QWORD *)*v11 != v8) )
      __fastfail(3u);
    *v11 = v10;
    v10[1] = v11;
    ExFreePoolWithTag(v9, 0);
  }
  if ( (_QWORD *)*v7 == v7 && !v6[632] )
    KeSetEvent((PRKEVENT)(v6 + 622), 0, 0);
  WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v4);
}
