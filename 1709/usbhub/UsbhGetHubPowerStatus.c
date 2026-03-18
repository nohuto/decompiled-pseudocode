/*
 * XREFs of UsbhGetHubPowerStatus @ 0x1C0024248
 * Callers:
 *     UsbhInitialize @ 0x1C0015CC0 (UsbhInitialize.c)
 *     UsbhGetMaxPowerPerPort @ 0x1C0024148 (UsbhGetMaxPowerPerPort.c)
 * Callees:
 *     Log @ 0x1C00155F0 (Log.c)
 *     UsbhQueryHubState @ 0x1C0024330 (UsbhQueryHubState.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002935C (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D10C (WPP_RECORDER_SF_.c)
 */

void __fastcall UsbhGetHubPowerStatus(__int64 a1)
{
  __int64 v2; // rbx
  int HubState; // eax
  int v4; // r10d

  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v2 = *(_QWORD *)(a1 + 64);
  if ( !v2 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v2 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      31,
      (__int64)&WPP_d37a3ce2334c39017fdc7968bb1b570f_Traceguids);
  if ( *(_QWORD *)(v2 + 2624) )
  {
    HubState = UsbhQueryHubState(a1);
    Log(a1, 8, 1752396916, 0LL, HubState);
    if ( v4 >= 0 )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          33,
          (__int64)&WPP_d37a3ce2334c39017fdc7968bb1b570f_Traceguids);
      *(_DWORD *)(v2 + 3048) = 500;
    }
  }
  else
  {
    *(_DWORD *)(v2 + 3048) = 0;
  }
}
