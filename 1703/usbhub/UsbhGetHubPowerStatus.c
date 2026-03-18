/*
 * XREFs of UsbhGetHubPowerStatus @ 0x1C001AC50
 * Callers:
 *     UsbhInitialize @ 0x1C0017340 (UsbhInitialize.c)
 *     UsbhGetMaxPowerPerPort @ 0x1C00269E0 (UsbhGetMaxPowerPerPort.c)
 * Callees:
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     UsbhQueryHubState @ 0x1C001E6AC (UsbhQueryHubState.c)
 *     WPP_RECORDER_SF_ @ 0x1C003BD8C (WPP_RECORDER_SF_.c)
 */

void __fastcall UsbhGetHubPowerStatus(__int64 a1)
{
  _DWORD *v2; // rbx
  int HubState; // eax
  int v4; // r10d

  v2 = FdoExt(a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      31,
      (__int64)&WPP_769f670b4daf3a39507e1b81909708b8_Traceguids);
  if ( *((_QWORD *)v2 + 328) )
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
          (__int64)&WPP_769f670b4daf3a39507e1b81909708b8_Traceguids);
      v2[762] = 500;
    }
  }
  else
  {
    v2[762] = 0;
  }
}
