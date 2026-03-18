/*
 * XREFs of UsbhResetNotifyDownstreamHub @ 0x1C004C988
 * Callers:
 *     Usbh_HRS_WaitReady @ 0x1C0007670 (Usbh_HRS_WaitReady.c)
 *     Usbh_HRS_Queued @ 0x1C0047DC4 (Usbh_HRS_Queued.c)
 *     UsbhResetNotificationIrpCompletion @ 0x1C004C7F0 (UsbhResetNotificationIrpCompletion.c)
 * Callees:
 *     UsbhGetPortData @ 0x1C000A320 (UsbhGetPortData.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     PdoExt @ 0x1C001B570 (PdoExt.c)
 *     WPP_RECORDER_SF_q @ 0x1C003D59C (WPP_RECORDER_SF_q.c)
 *     UsbhSetPdo_FailIo @ 0x1C0044DF8 (UsbhSetPdo_FailIo.c)
 */

_DWORD *__fastcall UsbhResetNotifyDownstreamHub(__int64 a1)
{
  unsigned int i; // edi
  _DWORD *result; // rax
  __int64 PortData; // rax
  __int64 v5; // rsi
  _DWORD *v6; // rax
  _DWORD *v7; // rbx
  __int64 v8; // rax

  for ( i = 1; ; ++i )
  {
    result = FdoExt(a1);
    if ( i > *((unsigned __int8 *)result + 2938) )
      break;
    PortData = UsbhGetPortData(a1, i);
    v5 = *(_QWORD *)(PortData + 392);
    if ( v5 )
    {
      v6 = PdoExt(*(_QWORD *)(PortData + 392));
      v7 = v6;
      if ( *((_BYTE *)v6 + 2732) )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_q(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            *((_QWORD *)v6 + 147),
            3u,
            0x18u,
            (__int64)&WPP_6271d31ce3fc35b37f87279b5c49118e_Traceguids,
            *((_QWORD *)v6 + 147));
        v8 = *((_QWORD *)v7 + 348);
        if ( v8 )
        {
          *(_QWORD *)(v8 + 56) = 1LL;
          *(_DWORD *)(*((_QWORD *)v7 + 348) + 48LL) = 0;
          IofCompleteRequest(*((PIRP *)v7 + 348), 0);
        }
        UsbhSetPdo_FailIo(v5);
        Log(a1, 2, 1380861000, *((unsigned __int8 *)v7 + 2733), v5);
        *((_BYTE *)v7 + 2733) = 0;
      }
    }
  }
  return result;
}
