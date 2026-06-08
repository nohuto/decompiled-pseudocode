/*
 * XREFs of Display_CPC @ 0x1C000425C
 * Callers:
 *     InitAcpiCpc @ 0x1C0024918 (InitAcpiCpc.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000127C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C000134C (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_s @ 0x1C00026B8 (WPP_RECORDER_SF_s.c)
 *     DisplayGenAddr @ 0x1C00043E4 (DisplayGenAddr.c)
 */

__int64 __fastcall Display_CPC(_DWORD *a1)
{
  const char **v2; // rdi
  __int64 v3; // rbp
  char *v4; // rsi
  __int64 result; // rax
  __int64 v6; // [rsp+28h] [rbp-20h]

  if ( a1 )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        5u,
        2u,
        0x8Eu,
        (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        5u,
        2u,
        0x8Fu,
        (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        5u,
        2u,
        0x90u,
        (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids,
        *a1);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LODWORD(v6) = a1[1];
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        5u,
        2u,
        0x91u,
        (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids,
        v6);
    }
    v2 = (const char **)&off_1C000D1D8;
    v3 = 15LL;
    do
    {
      v4 = (char *)a1 + *((unsigned int *)v2 - 2);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_s(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          2u,
          0x92u,
          (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids,
          *v2);
      result = DisplayGenAddr(v4, "  ");
      v2 += 3;
      --v3;
    }
    while ( v3 );
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return WPP_RECORDER_SF_(
               (__int64)WPP_GLOBAL_Control->DeviceExtension,
               5u,
               2u,
               0x93u,
               (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
  }
  return result;
}
