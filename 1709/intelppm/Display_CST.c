/*
 * XREFs of Display_CST @ 0x1C0002844
 * Callers:
 *     InitAcpiCStates @ 0x1C001F1E8 (InitAcpiCStates.c)
 * Callees:
 *     DisplayGenAddr @ 0x1C000296C (DisplayGenAddr.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002A20 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0002CD8 (WPP_RECORDER_SF_D.c)
 */

__int64 __fastcall Display_CST(unsigned int *a1)
{
  unsigned int i; // ebx
  unsigned int *v3; // rsi
  __int64 result; // rax

  if ( a1 )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      result = WPP_RECORDER_SF_(
                 WPP_GLOBAL_Control->DeviceExtension,
                 5,
                 2,
                 120,
                 (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      result = WPP_RECORDER_SF_(
                 WPP_GLOBAL_Control->DeviceExtension,
                 5,
                 2,
                 121,
                 (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      result = WPP_RECORDER_SF_D(
                 WPP_GLOBAL_Control->DeviceExtension,
                 5,
                 2,
                 122,
                 (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids,
                 *a1);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      result = WPP_RECORDER_SF_(
                 WPP_GLOBAL_Control->DeviceExtension,
                 5,
                 2,
                 123,
                 (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
    for ( i = 0; i < *a1; ++i )
    {
      v3 = &a1[5 * i];
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_D(
          WPP_GLOBAL_Control->DeviceExtension,
          5,
          2,
          124,
          (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids,
          i);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_D(
          WPP_GLOBAL_Control->DeviceExtension,
          5,
          2,
          125,
          (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids,
          *((_BYTE *)v3 + 16));
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_D(
          WPP_GLOBAL_Control->DeviceExtension,
          5,
          2,
          126,
          (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids,
          *((_WORD *)v3 + 9));
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_D(
          WPP_GLOBAL_Control->DeviceExtension,
          5,
          2,
          127,
          (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids,
          v3[5]);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          5,
          2,
          128,
          (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
      result = DisplayGenAddr(v3 + 1, "    ");
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        result = WPP_RECORDER_SF_(
                   WPP_GLOBAL_Control->DeviceExtension,
                   5,
                   2,
                   129,
                   (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
    }
  }
  return result;
}
