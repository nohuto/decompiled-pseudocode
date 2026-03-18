/*
 * XREFs of UsbhRequestPortSuspend @ 0x1C00261D4
 * Callers:
 *     UsbhWaitConnect @ 0x1C0014410 (UsbhWaitConnect.c)
 * Callees:
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
 *     UsbhSuspendPort @ 0x1C0026320 (UsbhSuspendPort.c)
 *     WPP_RECORDER_SF_d @ 0x1C003BE5C (WPP_RECORDER_SF_d.c)
 *     UsbhSignalSuspendEvent @ 0x1C0041390 (UsbhSignalSuspendEvent.c)
 *     UsbhBusUnlatchPdo @ 0x1C005059C (UsbhBusUnlatchPdo.c)
 *     UsbhDeletePdo @ 0x1C0054F90 (UsbhDeletePdo.c)
 */

__int64 __fastcall UsbhRequestPortSuspend(__int64 a1, __int64 a2, char a3, __int64 a4, __int64 a5)
{
  unsigned int v8; // edi
  __int64 v9; // rbx
  int v10; // r9d
  __int64 v11; // rax

  v8 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      47,
      (__int64)&WPP_d88ed72d10863ed7c1a47d127bebfa74_Traceguids,
      *(_WORD *)(a4 + 4));
  Log(a1, 1024, 1936937808, a4, 0LL);
  FdoExt(a1);
  if ( !a5 )
  {
    UsbhSignalSuspendEvent(a1, a4);
    return v8;
  }
  v9 = *(_QWORD *)(a4 + 376);
  *(_BYTE *)(v9 + 132) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  *(_DWORD *)(v9 + 136) = 1;
  *(_DWORD *)(v9 + 88) = 2018460752;
  *(_DWORD *)(v9 + 92) = 19;
  WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))v9;
  *(_QWORD *)(v9 + 24) = KeGetCurrentThread();
  if ( PdoExt(a5)[281] == 2 )
  {
    UsbhBusUnlatchPdo(a1, a5, a4, v10, v9 + 132);
    UsbhDeletePdo(a1, a5, 2LL);
  }
  else
  {
    v11 = *(_QWORD *)(a4 + 376);
    *(_DWORD *)(v11 + 136) = 0;
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    *(_DWORD *)(v11 + 88) = 1734964085;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *(_BYTE *)(v11 + 132));
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      48,
      (__int64)&WPP_d88ed72d10863ed7c1a47d127bebfa74_Traceguids,
      *(_WORD *)(a4 + 4));
  if ( a3 == 25 )
  {
    UsbhSuspendPort(a1);
  }
  else if ( a3 != 27 )
  {
    return v8;
  }
  return 5;
}
