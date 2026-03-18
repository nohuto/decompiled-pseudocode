/*
 * XREFs of UsbhPortCycle @ 0x1C0051A30
 * Callers:
 *     UsbhReset2CycleDevice @ 0x1C0052850 (UsbhReset2CycleDevice.c)
 * Callees:
 *     UsbhSignalResumeEvent @ 0x1C00066B0 (UsbhSignalResumeEvent.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     PdoExt @ 0x1C001B570 (PdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x1C003D1DC (WPP_RECORDER_SF_d.c)
 *     UsbhQueueSoftConnectChange @ 0x1C0041ECC (UsbhQueueSoftConnectChange.c)
 *     UsbhPortDisconnect @ 0x1C0051BD0 (UsbhPortDisconnect.c)
 */

__int64 __fastcall UsbhPortCycle(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v6; // rbx
  _DWORD *v7; // r14
  __int64 v8; // rax
  int v10; // [rsp+28h] [rbp-20h]

  v6 = PdoExt(a3);
  v7 = FdoExt(a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v10 = *(unsigned __int16 *)(a2 + 4);
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x23u,
      (__int64)&WPP_d88ed72d10863ed7c1a47d127bebfa74_Traceguids,
      v10);
  }
  Log(a1, 1024, 1883461955, a2, a3);
  if ( *((_BYTE *)v6 + 2732) )
  {
    if ( v7[702] == 2 )
    {
      v8 = *((_QWORD *)v6 + 348);
      if ( v8 )
      {
        *(_DWORD *)(v8 + 48) = 0;
        IofCompleteRequest(*((PIRP *)v6 + 348), 0);
      }
    }
  }
  else
  {
    v6[353] |= 0x20000u;
    UsbhPortDisconnect(a1, a2, a3);
    UsbhSignalResumeEvent(a1, a2);
    UsbhQueueSoftConnectChange(a1, *(_WORD *)(a2 + 4), *(_QWORD *)(a2 + 376), 0);
  }
  return 0LL;
}
