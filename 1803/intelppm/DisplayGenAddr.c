/*
 * XREFs of DisplayGenAddr @ 0x1C0002B38
 * Callers:
 *     Display_PCT_PTC @ 0x1C0002944 (Display_PCT_PTC.c)
 *     Display_CST @ 0x1C0002A10 (Display_CST.c)
 *     Display_CPC @ 0x1C000A338 (Display_CPC.c)
 *     Display_LPI @ 0x1C000A730 (Display_LPI.c)
 * Callees:
 *     WPP_RECORDER_SF_s @ 0x1C000374C (WPP_RECORDER_SF_s.c)
 *     WPP_RECORDER_SF_sD @ 0x1C000963C (WPP_RECORDER_SF_sD.c)
 *     GetGenAddrType @ 0x1C000AD30 (GetGenAddrType.c)
 *     WPP_RECORDER_SF_sDs @ 0x1C000B534 (WPP_RECORDER_SF_sDs.c)
 *     WPP_RECORDER_SF_sx @ 0x1C000BB98 (WPP_RECORDER_SF_sx.c)
 */

unsigned __int8 __fastcall DisplayGenAddr(char *a1, __int64 a2, __int64 a3, int a4)
{
  unsigned __int8 result; // al
  __int64 v5; // rsi
  int v7; // r8d
  PDEVICE_OBJECT v8; // rcx
  __int64 v9; // r8
  int v10; // edx
  int v11; // r9d
  int v12; // r9d
  int v13; // [rsp+20h] [rbp-28h]
  __int64 v14; // [rsp+28h] [rbp-20h]
  __int64 v15; // [rsp+28h] [rbp-20h]

  result = *a1;
  v5 = a2;
  if ( *a1 != 126 )
  {
    if ( !result && !*(_QWORD *)(a1 + 4) )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v15 = a2;
        LOBYTE(a2) = 5;
        return WPP_RECORDER_SF_s(
                 WPP_GLOBAL_Control->DeviceExtension,
                 a2,
                 2,
                 149,
                 (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids,
                 v15);
      }
      return result;
    }
    v7 = (int)WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      GetGenAddrType(result);
      result = WPP_RECORDER_SF_sDs(*(_QWORD *)(v9 + 64), v10, v9, v11);
    }
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(a2) = 5;
      result = WPP_RECORDER_SF_sD(
                 WPP_GLOBAL_Control->DeviceExtension,
                 a2,
                 2,
                 151,
                 (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids,
                 v5,
                 a1[1]);
    }
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(a2) = 5;
      result = WPP_RECORDER_SF_sD(
                 WPP_GLOBAL_Control->DeviceExtension,
                 a2,
                 2,
                 152,
                 (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids,
                 v5,
                 a1[2]);
    }
    if ( *a1 == 10 )
    {
      v8 = WPP_GLOBAL_Control;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        goto LABEL_11;
      v12 = 153;
    }
    else
    {
      v8 = WPP_GLOBAL_Control;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        goto LABEL_11;
      v12 = 154;
    }
    LOBYTE(a2) = 5;
    result = WPP_RECORDER_SF_sD(
               v8->DeviceExtension,
               a2,
               2,
               v12,
               (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids,
               v5,
               a1[3]);
LABEL_11:
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return WPP_RECORDER_SF_sx(WPP_GLOBAL_Control->DeviceExtension, a2, v7, a4, v13, v5, *(_QWORD *)(a1 + 4));
    return result;
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v14 = a2;
    LOBYTE(a2) = 5;
    return WPP_RECORDER_SF_sD(
             WPP_GLOBAL_Control->DeviceExtension,
             a2,
             2,
             148,
             (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids,
             v14,
             *((_DWORD *)a1 + 1));
  }
  return result;
}
