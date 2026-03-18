/*
 * XREFs of UsbhQueryChange @ 0x1C001A4D4
 * Callers:
 *     UsbhHubProcessIsr @ 0x1C0013F10 (UsbhHubProcessIsr.c)
 * Callees:
 *     UsbhQueryPortState @ 0x1C00130E0 (UsbhQueryPortState.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     UsbhGetPortData @ 0x1C0016C70 (UsbhGetPortData.c)
 *     WPP_RECORDER_SF_ @ 0x1C003BD8C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C003BE5C (WPP_RECORDER_SF_d.c)
 *     UsbhException @ 0x1C004F144 (UsbhException.c)
 */

__int64 __fastcall UsbhQueryChange(__int64 a1, unsigned __int16 a2, _WORD *a3, int *a4)
{
  __int16 v8; // bx
  __int64 PortData; // rax
  __int64 v10; // rsi
  int v11; // ebp
  int v13; // [rsp+48h] [rbp-40h]
  int v14; // [rsp+A0h] [rbp+18h] BYREF
  int v15; // [rsp+A8h] [rbp+20h] BYREF

  v8 = 1;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      19,
      (__int64)&WPP_104684de40073ce1937d0e9f4e1d15ba_Traceguids,
      a2);
  v14 = 0;
  PortData = UsbhGetPortData(a1, a2);
  *a3 = 0;
  v10 = PortData;
  v11 = UsbhQueryPortState(a1, a2, (__int64)&v15, &v14);
  if ( v11 >= 0 )
  {
    if ( (v15 & 0x10000) == 0 )
    {
      while ( 1 )
      {
        v8 *= 2;
        if ( (v8 & 0xFFE0) != 0 )
          break;
        if ( ((unsigned __int16)v8 & HIWORD(v15)) != 0 )
          goto LABEL_7;
      }
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          20,
          (__int64)&WPP_104684de40073ce1937d0e9f4e1d15ba_Traceguids);
      Log(a1, 4, 1666076515, 0LL, 0LL);
      if ( (FdoExt(a1)[640] & 1) == 0 || (++*(_DWORD *)(v10 + 408), *(int *)(v10 + 408) >= 3) )
      {
        LOBYTE(v13) = 0;
        v14 = -1073704960;
        UsbhException(a1, a2, 10, (int)&v15, 4, v11, -1073704960, usbfile_bus_c, 1463, v13);
        v8 = 0;
        v11 = -1073741823;
      }
    }
LABEL_7:
    if ( (v8 & 0x1F) != 0 )
      *a3 |= v8;
  }
  if ( *a3 )
    *(_DWORD *)(v10 + 408) = 0;
  Log(a1, 4, 1348692071, (unsigned __int16)*a3, v11);
  if ( a4 )
    *a4 = v14;
  return (unsigned int)v11;
}
