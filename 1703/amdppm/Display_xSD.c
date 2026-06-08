/*
 * XREFs of Display_xSD @ 0x1C0003A70
 * Callers:
 *     InitAcpiPerfDomain @ 0x1C002124C (InitAcpiPerfDomain.c)
 *     InitAcpiThrottleDomain @ 0x1C0021484 (InitAcpiThrottleDomain.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000122C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C00012FC (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_Ds @ 0x1C00020F4 (WPP_RECORDER_SF_Ds.c)
 *     WPP_RECORDER_SF_s @ 0x1C0002614 (WPP_RECORDER_SF_s.c)
 */

void __fastcall Display_xSD(unsigned int *a1, const char *a2)
{
  PDEVICE_OBJECT v4; // rcx
  unsigned int i; // edi
  __int64 v6; // r8
  __int64 v7; // rdx
  const char *v8; // rax
  int v9; // [rsp+20h] [rbp-38h]
  __int64 v10; // [rsp+28h] [rbp-30h]

  if ( a1 && a2 )
  {
    v4 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        5u,
        2u,
        0x6Du,
        (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
      v4 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        WPP_RECORDER_SF_s(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          2u,
          0x6Eu,
          (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids,
          a2);
        v4 = WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          LODWORD(v10) = *a1;
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            5u,
            2u,
            0x6Fu,
            (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids,
            v10);
          v4 = WPP_GLOBAL_Control;
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            WPP_RECORDER_SF_(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              5u,
              2u,
              0x70u,
              (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
            v4 = WPP_GLOBAL_Control;
          }
        }
      }
    }
    for ( i = 0; i < *a1; ++i )
    {
      if ( LOWORD(v4->DeviceType) )
      {
        LODWORD(v10) = i;
        WPP_RECORDER_SF_D(
          (__int64)v4->DeviceExtension,
          5u,
          2u,
          0x71u,
          (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids,
          v10);
        v4 = WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          LODWORD(v10) = a1[5 * i + 1];
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            5u,
            2u,
            0x72u,
            (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids,
            v10);
          v4 = WPP_GLOBAL_Control;
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            LODWORD(v10) = a1[5 * i + 2];
            WPP_RECORDER_SF_D(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              5u,
              2u,
              0x73u,
              (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids,
              v10);
            v4 = WPP_GLOBAL_Control;
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              WPP_RECORDER_SF_D(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                5u,
                2u,
                0x74u,
                (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
              v4 = WPP_GLOBAL_Control;
              if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
              {
                switch ( a1[5 * i + 4] )
                {
                  case 1u:
                    v8 = "MS Software All";
                    break;
                  case 0xFCu:
                    v8 = "ACPI Software All";
                    break;
                  case 0xFDu:
                    v8 = "ACPI Software Any";
                    break;
                  case 0xFEu:
                    v8 = "ACPI Hardware All";
                    break;
                  default:
                    v8 = "Unknown Coordination Type";
                    break;
                }
                v7 = a1[5 * i + 4];
                WPP_RECORDER_SF_Ds((__int64)WPP_GLOBAL_Control->DeviceExtension, v7, v6, 0x75u, v9, v7, v8);
                v4 = WPP_GLOBAL_Control;
                if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                {
                  LODWORD(v10) = a1[5 * i + 5];
                  WPP_RECORDER_SF_D(
                    (__int64)WPP_GLOBAL_Control->DeviceExtension,
                    5u,
                    2u,
                    0x76u,
                    (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids,
                    v10);
                  v4 = WPP_GLOBAL_Control;
                  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                  {
                    WPP_RECORDER_SF_(
                      (__int64)WPP_GLOBAL_Control->DeviceExtension,
                      5u,
                      2u,
                      0x77u,
                      (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
                    v4 = WPP_GLOBAL_Control;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}
