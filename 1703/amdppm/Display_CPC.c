/*
 * XREFs of Display_CPC @ 0x1C000420C
 * Callers:
 *     InitAcpiCpc @ 0x1C0021788 (InitAcpiCpc.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000122C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C00012FC (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_s @ 0x1C0002614 (WPP_RECORDER_SF_s.c)
 *     DisplayGenAddr @ 0x1C00043A0 (DisplayGenAddr.c)
 */

__int64 __fastcall Display_CPC(_DWORD *a1)
{
  PDEVICE_OBJECT v2; // rcx
  const char **v3; // rdi
  __int64 v4; // rbp
  char *v5; // rsi
  __int64 result; // rax
  __int64 v7; // [rsp+28h] [rbp-20h]

  if ( a1 )
  {
    v2 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        5u,
        2u,
        0x8Eu,
        (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
      v2 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          2u,
          0x8Fu,
          (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
        v2 = WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            5u,
            2u,
            0x90u,
            (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids,
            *a1);
          v2 = WPP_GLOBAL_Control;
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            LODWORD(v7) = a1[1];
            WPP_RECORDER_SF_D(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              5u,
              2u,
              0x91u,
              (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids,
              v7);
            v2 = WPP_GLOBAL_Control;
          }
        }
      }
    }
    v3 = (const char **)&off_1C000D1D8;
    v4 = 15LL;
    while ( 1 )
    {
      v5 = (char *)a1 + *((unsigned int *)v3 - 2);
      if ( LOWORD(v2->DeviceType) )
        WPP_RECORDER_SF_s(
          (__int64)v2->DeviceExtension,
          5u,
          2u,
          0x92u,
          (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids,
          *v3);
      result = DisplayGenAddr(v5, "  ");
      v3 += 3;
      if ( !--v4 )
        break;
      v2 = WPP_GLOBAL_Control;
    }
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
