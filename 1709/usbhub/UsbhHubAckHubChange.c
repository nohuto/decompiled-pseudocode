/*
 * XREFs of UsbhHubAckHubChange @ 0x1C0044450
 * Callers:
 *     UsbhHubProcessIsr @ 0x1C0014D30 (UsbhHubProcessIsr.c)
 * Callees:
 *     UsbhSyncSendCommand @ 0x1C0011D30 (UsbhSyncSendCommand.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D10C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C003D1DC (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhHubAckHubChange(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int16 v6; // ax
  unsigned __int16 v7; // di
  __int64 v8; // rbx
  int v10; // [rsp+20h] [rbp-38h]
  __int64 v11; // [rsp+28h] [rbp-30h]
  __int16 v12; // [rsp+68h] [rbp+10h] BYREF
  __int16 v13; // [rsp+78h] [rbp+20h] BYREF
  unsigned __int16 v14; // [rsp+7Ah] [rbp+22h]
  int v15; // [rsp+7Ch] [rbp+24h]

  v12 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x1Du,
      (__int64)&WPP_e3e41794e16d35283050e58212bb38b7_Traceguids);
  v6 = *(_WORD *)(a2 + 2);
  if ( (v6 & 2) != 0 )
  {
    v7 = 1;
  }
  else
  {
    if ( (v6 & 1) == 0 )
      return 0LL;
    v7 = 0;
  }
  v13 = 288;
  v14 = v7;
  v15 = 0;
  v8 = (int)UsbhSyncSendCommand(a1, (__int64)&v13, 0LL, &v12, v10, a3);
  Log(a1, 4, 1095460967, v7, v8);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v11) = v8;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x1Eu,
      (__int64)&WPP_e3e41794e16d35283050e58212bb38b7_Traceguids,
      v11);
  }
  return (unsigned int)v8;
}
