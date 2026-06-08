/*
 * XREFs of DisplayGenAddr @ 0x1C0002BA8
 * Callers:
 *     Display_PCT_PTC @ 0x1C0002A58 (Display_PCT_PTC.c)
 *     Display_CST @ 0x1C0002B00 (Display_CST.c)
 *     Display_CPC @ 0x1C0009B58 (Display_CPC.c)
 *     Display_LPI @ 0x1C0009F84 (Display_LPI.c)
 * Callees:
 *     WPP_RECORDER_SF_s @ 0x1C0002830 (WPP_RECORDER_SF_s.c)
 *     WPP_RECORDER_SF_sD @ 0x1C0008E8C (WPP_RECORDER_SF_sD.c)
 *     GetGenAddrType @ 0x1C000A5B4 (GetGenAddrType.c)
 *     WPP_RECORDER_SF_sDs @ 0x1C000AE08 (WPP_RECORDER_SF_sDs.c)
 *     WPP_RECORDER_SF_sx @ 0x1C000B460 (WPP_RECORDER_SF_sx.c)
 */

unsigned __int8 __fastcall DisplayGenAddr(char *a1, const char *a2)
{
  unsigned __int8 result; // al
  __int64 v3; // rsi
  PDEVICE_OBJECT v5; // r10
  __int64 v6; // r10
  int v7; // edx
  int v8; // r8d
  int v9; // r9d
  int v10; // r9d
  int v11; // edx
  int v12; // r8d
  int v13; // r9d
  int v14; // [rsp+20h] [rbp-28h]
  __int64 v15; // [rsp+28h] [rbp-20h]

  result = *a1;
  v3 = (__int64)a2;
  if ( *a1 == 126 )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v15 = (__int64)a2;
      LOBYTE(a2) = 5;
      return WPP_RECORDER_SF_sD(
               WPP_GLOBAL_Control->DeviceExtension,
               (_DWORD)a2,
               2,
               148,
               (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids,
               v15,
               *((_DWORD *)a1 + 1));
    }
  }
  else if ( result || *(_QWORD *)(a1 + 4) )
  {
    v5 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      GetGenAddrType(result);
      result = WPP_RECORDER_SF_sDs(*(_QWORD *)(v6 + 64), v7, v8, v9);
      v5 = WPP_GLOBAL_Control;
    }
    if ( LOWORD(v5->DeviceType) )
    {
      LOBYTE(a2) = 5;
      result = WPP_RECORDER_SF_sD(
                 v5->DeviceExtension,
                 (_DWORD)a2,
                 2,
                 151,
                 (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids,
                 v3,
                 a1[1]);
      v5 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(a2) = 5;
        result = WPP_RECORDER_SF_sD(
                   WPP_GLOBAL_Control->DeviceExtension,
                   (_DWORD)a2,
                   2,
                   152,
                   (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids,
                   v3,
                   a1[2]);
        v5 = WPP_GLOBAL_Control;
      }
    }
    if ( *a1 == 10 )
    {
      if ( !LOWORD(v5->DeviceType) )
        return result;
      v10 = 153;
    }
    else
    {
      if ( !LOWORD(v5->DeviceType) )
        return result;
      v10 = 154;
    }
    LOBYTE(a2) = 5;
    result = WPP_RECORDER_SF_sD(
               v5->DeviceExtension,
               (_DWORD)a2,
               2,
               v10,
               (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids,
               v3,
               a1[3]);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return WPP_RECORDER_SF_sx(WPP_GLOBAL_Control->DeviceExtension, v11, v12, v13, v14, v3, *(_QWORD *)(a1 + 4));
  }
  else if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    return WPP_RECORDER_SF_s(
             (__int64)WPP_GLOBAL_Control->DeviceExtension,
             5u,
             2u,
             0x95u,
             (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids,
             a2);
  }
  return result;
}
