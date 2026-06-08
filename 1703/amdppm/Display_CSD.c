/*
 * XREFs of Display_CSD @ 0x1C0003F44
 * Callers:
 *     InitAcpiIdleDomain @ 0x1C0021130 (InitAcpiIdleDomain.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000122C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C00012FC (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_Ds @ 0x1C00020F4 (WPP_RECORDER_SF_Ds.c)
 */

void __fastcall Display_CSD(int *a1)
{
  PDEVICE_OBJECT v2; // rcx
  unsigned int i; // edi
  __int64 v4; // r8
  __int64 v5; // rdx
  const char *v6; // rax
  int v7; // [rsp+20h] [rbp-38h]
  __int64 v8; // [rsp+28h] [rbp-30h]
  int v9; // [rsp+28h] [rbp-30h]

  if ( a1 )
  {
    v2 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        5u,
        2u,
        0x82u,
        (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
      v2 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          2u,
          0x83u,
          (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
        v2 = WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v9 = *a1;
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            5u,
            2u,
            0x84u,
            (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids,
            v9);
          v2 = WPP_GLOBAL_Control;
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            WPP_RECORDER_SF_(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              5u,
              2u,
              0x85u,
              (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
            v2 = WPP_GLOBAL_Control;
          }
        }
      }
    }
    for ( i = 0; i < *a1; ++i )
    {
      if ( LOWORD(v2->DeviceType) )
      {
        LODWORD(v8) = i;
        WPP_RECORDER_SF_D(
          (__int64)v2->DeviceExtension,
          5u,
          2u,
          0x86u,
          (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids,
          v8);
        v2 = WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          LODWORD(v8) = a1[6 * i + 1];
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            5u,
            2u,
            0x87u,
            (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids,
            v8);
          v2 = WPP_GLOBAL_Control;
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            LODWORD(v8) = a1[6 * i + 2];
            WPP_RECORDER_SF_D(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              5u,
              2u,
              0x88u,
              (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids,
              v8);
            v2 = WPP_GLOBAL_Control;
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              WPP_RECORDER_SF_D(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                5u,
                2u,
                0x89u,
                (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
              v2 = WPP_GLOBAL_Control;
              if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
              {
                switch ( a1[6 * i + 4] )
                {
                  case 1:
                    v6 = "MS Software All";
                    break;
                  case 252:
                    v6 = "ACPI Software All";
                    break;
                  case 253:
                    v6 = "ACPI Software Any";
                    break;
                  case 254:
                    v6 = "ACPI Hardware All";
                    break;
                  default:
                    v6 = "Unknown Coordination Type";
                    break;
                }
                v5 = (unsigned int)a1[6 * i + 4];
                WPP_RECORDER_SF_Ds((__int64)WPP_GLOBAL_Control->DeviceExtension, v5, v4, 0x8Au, v7, v5, v6);
                v2 = WPP_GLOBAL_Control;
                if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                {
                  LODWORD(v8) = a1[6 * i + 5];
                  WPP_RECORDER_SF_D(
                    (__int64)WPP_GLOBAL_Control->DeviceExtension,
                    5u,
                    2u,
                    0x8Bu,
                    (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids,
                    v8);
                  v2 = WPP_GLOBAL_Control;
                  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                  {
                    LODWORD(v8) = a1[6 * i + 6];
                    WPP_RECORDER_SF_D(
                      (__int64)WPP_GLOBAL_Control->DeviceExtension,
                      5u,
                      2u,
                      0x8Cu,
                      (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids,
                      v8);
                    v2 = WPP_GLOBAL_Control;
                    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                    {
                      WPP_RECORDER_SF_(
                        (__int64)WPP_GLOBAL_Control->DeviceExtension,
                        5u,
                        2u,
                        0x8Du,
                        (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
                      v2 = WPP_GLOBAL_Control;
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
}
