/*
 * XREFs of Display_PSS @ 0x1C000263C
 * Callers:
 *     InitAcpiPerfStates @ 0x1C001F3AC (InitAcpiPerfStates.c)
 *     ValidatePssCore @ 0x1C0020E70 (ValidatePssCore.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002A20 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0002CD8 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_x @ 0x1C000B90C (WPP_RECORDER_SF_x.c)
 */

__int64 __fastcall Display_PSS(unsigned int *a1, char a2, int a3)
{
  unsigned int i; // esi
  __int64 result; // rax
  int v6; // [rsp+20h] [rbp-28h]

  if ( a1 )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      result = WPP_RECORDER_SF_(
                 WPP_GLOBAL_Control->DeviceExtension,
                 5,
                 2,
                 83,
                 (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      result = WPP_RECORDER_SF_(
                 WPP_GLOBAL_Control->DeviceExtension,
                 5,
                 2,
                 84,
                 (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
    for ( i = 0; i < *a1; ++i )
    {
      result = i;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        result = WPP_RECORDER_SF_D(
                   WPP_GLOBAL_Control->DeviceExtension,
                   5,
                   2,
                   85,
                   (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids,
                   i);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        result = WPP_RECORDER_SF_D(
                   WPP_GLOBAL_Control->DeviceExtension,
                   5,
                   2,
                   86,
                   (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids,
                   a1[12 * i + 2]);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        result = WPP_RECORDER_SF_D(
                   WPP_GLOBAL_Control->DeviceExtension,
                   5,
                   2,
                   87,
                   (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids,
                   a1[12 * i + 3]);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        result = WPP_RECORDER_SF_D(
                   WPP_GLOBAL_Control->DeviceExtension,
                   5,
                   2,
                   88,
                   (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids,
                   a1[12 * i + 4]);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        result = WPP_RECORDER_SF_D(
                   WPP_GLOBAL_Control->DeviceExtension,
                   5,
                   2,
                   89,
                   (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids,
                   a1[12 * i + 5]);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        result = WPP_RECORDER_SF_x(WPP_GLOBAL_Control->DeviceExtension, a2, a3, 90, v6, *(_QWORD *)&a1[12 * i + 6]);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        result = WPP_RECORDER_SF_x(WPP_GLOBAL_Control->DeviceExtension, a2, a3, 91, v6, *(_QWORD *)&a1[12 * i + 8]);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        result = WPP_RECORDER_SF_x(WPP_GLOBAL_Control->DeviceExtension, a2, a3, 92, v6, *(_QWORD *)&a1[12 * i + 10]);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        result = WPP_RECORDER_SF_x(WPP_GLOBAL_Control->DeviceExtension, a2, a3, 93, v6, *(_QWORD *)&a1[12 * i + 12]);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        result = WPP_RECORDER_SF_(
                   WPP_GLOBAL_Control->DeviceExtension,
                   5,
                   2,
                   94,
                   (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
    }
  }
  return result;
}
