/*
 * XREFs of Usbh_HRS_ResetStop @ 0x1C00471DC
 * Callers:
 *     UsbhDispatch_HardResetEvent @ 0x1C0009330 (UsbhDispatch_HardResetEvent.c)
 * Callees:
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x1C003BE5C (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall Usbh_HRS_ResetStop(__int64 a1, int a2)
{
  __int64 v3; // rdi
  _DWORD *v4; // rsi
  unsigned int v5; // ebp
  unsigned int v6; // r8d

  v3 = a2;
  v4 = FdoExt(*(_QWORD *)(a1 + 8));
  FdoExt(*(_QWORD *)(a1 + 8));
  v5 = *(_DWORD *)(a1 + 68);
  Log(*(_QWORD *)(a1 + 8), 16, 1651722574, a1, v3);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0xEu,
      (__int64)&WPP_358ef723348832925fa562e6167d1570_Traceguids,
      v3);
  if ( (int)v3 > 0 )
  {
    if ( (int)v3 < 4 )
      goto LABEL_11;
    if ( (_DWORD)v3 == 9 )
    {
      KeResetEvent((PRKEVENT)(v4 + 712));
      IoQueueWorkItem(*((PIO_WORKITEM *)v4 + 148), (PIO_WORKITEM_ROUTINE)UsbhHardResetWorker, DelayedWorkQueue, 0LL);
      v6 = 3;
      return UsbhReleaseResetLock(*(_QWORD *)(a1 + 8), a1, v6);
    }
    if ( (int)v3 > 9 && (int)v3 <= 11 )
    {
LABEL_11:
      v6 = 4;
      return UsbhReleaseResetLock(*(_QWORD *)(a1 + 8), a1, v6);
    }
  }
  v6 = v5;
  return UsbhReleaseResetLock(*(_QWORD *)(a1 + 8), a1, v6);
}
