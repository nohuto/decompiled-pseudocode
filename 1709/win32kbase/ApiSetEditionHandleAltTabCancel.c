/*
 * XREFs of ApiSetEditionHandleAltTabCancel @ 0x1C0010E30
 * Callers:
 *     xxxKeyEvent @ 0x1C0010760 (xxxKeyEvent.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
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
      290,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
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
      291,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  }
  return v11;
}
