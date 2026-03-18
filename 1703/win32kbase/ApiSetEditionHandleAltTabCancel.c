/*
 * XREFs of ApiSetEditionHandleAltTabCancel @ 0x1C004DC50
 * Callers:
 *     xxxKeyEvent @ 0x1C004D5A0 (xxxKeyEvent.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionHandleAltTabCancel(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        char a5,
        int a6,
        int a7)
{
  unsigned int v9; // r14d
  unsigned int v11; // edi
  int v12; // edx
  int v14; // [rsp+20h] [rbp-38h]

  v9 = a2;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      14,
      278,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  }
  v11 = 0;
  if ( (int)IsEditionHandleAltTabCancelSupported() >= 0 )
  {
    LOBYTE(v14) = a5;
    v11 = EditionHandleAltTabCancel(a1, v9, a3, a4, v14, a6, a7);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v12) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v12,
      14,
      279,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  }
  return v11;
}
