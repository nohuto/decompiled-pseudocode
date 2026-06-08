/*
 * XREFs of Display_LPI @ 0x1C000A730
 * Callers:
 *     InitAcpiLpiStates @ 0x1C00214D0 (InitAcpiLpiStates.c)
 *     AcpiGetCoordinatedLpiStates @ 0x1C002DF7C (AcpiGetCoordinatedLpiStates.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001D9C (WPP_RECORDER_SF_D.c)
 *     DisplayGenAddr @ 0x1C0002B38 (DisplayGenAddr.c)
 *     WPP_RECORDER_SF_ @ 0x1C0003834 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0008CF8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_DS @ 0x1C000AEC0 (WPP_RECORDER_SF_DS.c)
 *     WPP_RECORDER_SF_S @ 0x1C000B148 (WPP_RECORDER_SF_S.c)
 *     WPP_RECORDER_SF_x @ 0x1C000BCDC (WPP_RECORDER_SF_x.c)
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
                     (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(a2) = 5;
      LOBYTE(v4) = WPP_RECORDER_SF_S(
                     WPP_GLOBAL_Control->DeviceExtension,
                     a2,
                     2,
                     157,
                     (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids,
                     v5);
    }
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      LOBYTE(v4) = WPP_RECORDER_SF_D(
                     (__int64)WPP_GLOBAL_Control->DeviceExtension,
                     5u,
                     2u,
                     0x9Eu,
                     (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      LOBYTE(v4) = WPP_RECORDER_SF_D(
                     (__int64)WPP_GLOBAL_Control->DeviceExtension,
                     5u,
                     2u,
                     0x9Fu,
                     (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      LOBYTE(v4) = WPP_RECORDER_SF_x(WPP_GLOBAL_Control->DeviceExtension, a2, a3, 160, v14, *(_QWORD *)(a1 + 8));
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      LOBYTE(v4) = WPP_RECORDER_SF_(
                     (__int64)WPP_GLOBAL_Control->DeviceExtension,
                     5u,
                     2u,
                     0xA1u,
                     (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids);
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
          (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          2u,
          0xA4u,
          (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          2u,
          0xA5u,
          (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          2u,
          0xA6u,
          (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          2u,
          0xA7u,
          (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_d(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          2u,
          0xA8u,
          (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          2u,
          0xA9u,
          (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids);
      DisplayGenAddr((char *)(v8 + a1 + 48), (__int64)"    ", a3, a4);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          2u,
          0xAAu,
          (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids);
      DisplayGenAddr((char *)(v8 + a1 + 60), (__int64)"    ", v9, v10);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          2u,
          0xABu,
          (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids);
      LOBYTE(v4) = DisplayGenAddr((char *)(v8 + a1 + 72), (__int64)"    ", v11, v12);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        LOBYTE(v4) = WPP_RECORDER_SF_(
                       (__int64)WPP_GLOBAL_Control->DeviceExtension,
                       5u,
                       2u,
                       0xACu,
                       (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids);
    }
  }
  return (char)v4;
}
