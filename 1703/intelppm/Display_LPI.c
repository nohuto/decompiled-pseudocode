/*
 * XREFs of Display_LPI @ 0x1C0009F84
 * Callers:
 *     InitAcpiLpiStates @ 0x1C001C4E0 (InitAcpiLpiStates.c)
 *     AcpiGetCoordinatedLpiStates @ 0x1C0029548 (AcpiGetCoordinatedLpiStates.c)
 * Callees:
 *     DisplayGenAddr @ 0x1C0002BA8 (DisplayGenAddr.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002C2C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0002EE4 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_d @ 0x1C0008350 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_DS @ 0x1C000A7A4 (WPP_RECORDER_SF_DS.c)
 *     WPP_RECORDER_SF_S @ 0x1C000AA24 (WPP_RECORDER_SF_S.c)
 *     WPP_RECORDER_SF_x @ 0x1C000B59C (WPP_RECORDER_SF_x.c)
 */

char __fastcall Display_LPI(__int64 a1, __int64 a2, int a3, int a4)
{
  _UNKNOWN **v4; // rax
  __int64 v5; // rdi
  PDEVICE_OBJECT v7; // rcx
  unsigned int i; // esi
  __int64 v9; // rdi
  int v11; // [rsp+20h] [rbp-38h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  if ( a1 )
  {
    v4 = &retaddr;
    v5 = a2;
    v7 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v4) = WPP_RECORDER_SF_(
                     (__int64)WPP_GLOBAL_Control->DeviceExtension,
                     5u,
                     2u,
                     0x9Cu,
                     (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
      v7 = WPP_GLOBAL_Control;
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
        v7 = WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          LOBYTE(v4) = WPP_RECORDER_SF_D(
                         (__int64)WPP_GLOBAL_Control->DeviceExtension,
                         5u,
                         2u,
                         0x9Eu,
                         (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
          v7 = WPP_GLOBAL_Control;
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            LOBYTE(v4) = WPP_RECORDER_SF_D(
                           (__int64)WPP_GLOBAL_Control->DeviceExtension,
                           5u,
                           2u,
                           0x9Fu,
                           (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
            v7 = WPP_GLOBAL_Control;
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              LOBYTE(v4) = WPP_RECORDER_SF_x(WPP_GLOBAL_Control->DeviceExtension, a2, a3, 160, v11, *(_QWORD *)(a1 + 8));
              v7 = WPP_GLOBAL_Control;
              if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
              {
                LOBYTE(v4) = WPP_RECORDER_SF_(
                               (__int64)WPP_GLOBAL_Control->DeviceExtension,
                               5u,
                               2u,
                               0xA1u,
                               (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
                v7 = WPP_GLOBAL_Control;
              }
            }
          }
        }
      }
    }
    for ( i = 0; i < *(_DWORD *)(a1 + 16); ++i )
    {
      v9 = 80LL * i;
      if ( LOWORD(v7->DeviceType) )
      {
        WPP_RECORDER_SF_DS(v7->DeviceExtension, a2, a3, a4, v11, i, *(_QWORD *)(v9 + a1 + 96));
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            5u,
            2u,
            0xA3u,
            (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            WPP_RECORDER_SF_D(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              5u,
              2u,
              0xA4u,
              (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              WPP_RECORDER_SF_D(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                5u,
                2u,
                0xA5u,
                (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
              if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
              {
                WPP_RECORDER_SF_D(
                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                  5u,
                  2u,
                  0xA6u,
                  (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
                if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                {
                  WPP_RECORDER_SF_D(
                    (__int64)WPP_GLOBAL_Control->DeviceExtension,
                    5u,
                    2u,
                    0xA7u,
                    (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
                  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                  {
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
                  }
                }
              }
            }
          }
        }
      }
      DisplayGenAddr((char *)(v9 + a1 + 48), "    ");
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          2u,
          0xAAu,
          (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
      DisplayGenAddr((char *)(v9 + a1 + 60), "    ");
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          2u,
          0xABu,
          (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
      LOBYTE(v4) = DisplayGenAddr((char *)(v9 + a1 + 72), "    ");
      v7 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(v4) = WPP_RECORDER_SF_(
                       (__int64)WPP_GLOBAL_Control->DeviceExtension,
                       5u,
                       2u,
                       0xACu,
                       (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
        v7 = WPP_GLOBAL_Control;
      }
    }
  }
  return (char)v4;
}
