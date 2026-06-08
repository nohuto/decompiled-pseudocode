/*
 * XREFs of Display_LPI @ 0x1C000A360
 * Callers:
 *     InitAcpiLpiStates @ 0x1C001F750 (InitAcpiLpiStates.c)
 *     AcpiGetCoordinatedLpiStates @ 0x1C002CDA0 (AcpiGetCoordinatedLpiStates.c)
 * Callees:
 *     DisplayGenAddr @ 0x1C000296C (DisplayGenAddr.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002A20 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0002CD8 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_d @ 0x1C0008840 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_DS @ 0x1C000AAF0 (WPP_RECORDER_SF_DS.c)
 *     WPP_RECORDER_SF_S @ 0x1C000AD78 (WPP_RECORDER_SF_S.c)
 *     WPP_RECORDER_SF_x @ 0x1C000B90C (WPP_RECORDER_SF_x.c)
 */

char __fastcall Display_LPI(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  _UNKNOWN **v4; // rax
  __int64 v5; // rdi
  unsigned int i; // esi
  __int64 v8; // rdi
  __int64 v9; // r8
  int v10; // r9d
  __int64 v11; // r8
  int v12; // r9d
  int v14; // [rsp+20h] [rbp-38h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  if ( a1 )
  {
    v4 = &retaddr;
    v5 = a2;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      LOBYTE(v4) = WPP_RECORDER_SF_(
                     (__int64)WPP_GLOBAL_Control->DeviceExtension,
                     5u,
                     2u,
                     0x9Cu,
                     (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(a2) = 5;
      LOBYTE(v4) = WPP_RECORDER_SF_S(
                     WPP_GLOBAL_Control->DeviceExtension,
                     a2,
                     2,
                     157,
                     (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids,
                     v5);
    }
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      LOBYTE(v4) = WPP_RECORDER_SF_D(
                     (__int64)WPP_GLOBAL_Control->DeviceExtension,
                     5u,
                     2u,
                     0x9Eu,
                     (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      LOBYTE(v4) = WPP_RECORDER_SF_D(
                     (__int64)WPP_GLOBAL_Control->DeviceExtension,
                     5u,
                     2u,
                     0x9Fu,
                     (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      LOBYTE(v4) = WPP_RECORDER_SF_x(WPP_GLOBAL_Control->DeviceExtension, a2, a3, 160, v14, *(_QWORD *)(a1 + 8));
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      LOBYTE(v4) = WPP_RECORDER_SF_(
                     (__int64)WPP_GLOBAL_Control->DeviceExtension,
                     5u,
                     2u,
                     0xA1u,
                     (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
    for ( i = 0; i < *(_DWORD *)(a1 + 16); ++i )
    {
      v8 = 80LL * i;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_DS(WPP_GLOBAL_Control->DeviceExtension, a2, a3, a4, v14, i, *(_QWORD *)(v8 + a1 + 96));
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          2u,
          0xA3u,
          (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          2u,
          0xA4u,
          (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          2u,
          0xA5u,
          (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          2u,
          0xA6u,
          (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          2u,
          0xA7u,
          (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_d(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          2u,
          0xA8u,
          (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          2u,
          0xA9u,
          (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
      DisplayGenAddr((char *)(v8 + a1 + 48), "    ", a3, a4);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          2u,
          0xAAu,
          (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
      DisplayGenAddr((char *)(v8 + a1 + 60), "    ", v9, v10);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          2u,
          0xABu,
          (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
      LOBYTE(v4) = DisplayGenAddr((char *)(v8 + a1 + 72), "    ", v11, v12);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        LOBYTE(v4) = WPP_RECORDER_SF_(
                       (__int64)WPP_GLOBAL_Control->DeviceExtension,
                       5u,
                       2u,
                       0xACu,
                       (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
    }
  }
  return (char)v4;
}
