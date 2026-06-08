/*
 * XREFs of Display_CPC @ 0x1C0009F68
 * Callers:
 *     InitAcpiCpc @ 0x1C001EEC0 (InitAcpiCpc.c)
 * Callees:
 *     WPP_RECORDER_SF_s @ 0x1C00023E0 (WPP_RECORDER_SF_s.c)
 *     DisplayGenAddr @ 0x1C000296C (DisplayGenAddr.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002A20 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0008840 (WPP_RECORDER_SF_d.c)
 */

unsigned __int8 __fastcall Display_CPC(_DWORD *a1, __int64 a2, __int64 a3, int a4)
{
  const char **v5; // rdi
  __int64 v6; // rbp
  char *v7; // rsi
  unsigned __int8 result; // al
  __int64 v9; // [rsp+28h] [rbp-20h]

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
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        5u,
        2u,
        0x90u,
        (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids,
        *a1);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LODWORD(v9) = a1[1];
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        5u,
        2u,
        0x91u,
        (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids,
        v9);
    }
    v5 = (const char **)&off_1C000F338;
    v6 = 15LL;
    do
    {
      v7 = (char *)a1 + *((unsigned int *)v5 - 2);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_s(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          2u,
          0x92u,
          (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids,
          *v5);
      result = DisplayGenAddr(v7, "  ", a3, a4);
      v5 += 3;
      --v6;
    }
    while ( v6 );
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
