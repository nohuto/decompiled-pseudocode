/*
 * XREFs of Display_xSD @ 0x1C0003B0C
 * Callers:
 *     InitAcpiPerfDomain @ 0x1C00242BC (InitAcpiPerfDomain.c)
 *     InitAcpiThrottleDomain @ 0x1C00244F4 (InitAcpiThrottleDomain.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000127C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C000134C (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_Ds @ 0x1C000218C (WPP_RECORDER_SF_Ds.c)
 *     WPP_RECORDER_SF_s @ 0x1C00026B8 (WPP_RECORDER_SF_s.c)
 */

void __fastcall Display_xSD(unsigned int *a1, const char *a2, __int64 a3)
{
  unsigned int i; // edi
  __int64 v6; // rdx
  const char *v7; // rax
  int v8; // [rsp+20h] [rbp-38h]

  if ( a1 && a2 )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        5u,
        2u,
        0x6Du,
        (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_s(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        5u,
        2u,
        0x6Eu,
        (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids,
        a2);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        5u,
        2u,
        0x6Fu,
        (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        5u,
        2u,
        0x70u,
        (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
    for ( i = 0; i < *a1; ++i )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          2u,
          0x71u,
          (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          2u,
          0x72u,
          (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          2u,
          0x73u,
          (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          2u,
          0x74u,
          (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        switch ( a1[5 * i + 4] )
        {
          case 1u:
            v7 = "MS Software All";
            break;
          case 0xFCu:
            v7 = "ACPI Software All";
            break;
          case 0xFDu:
            v7 = "ACPI Software Any";
            break;
          case 0xFEu:
            v7 = "ACPI Hardware All";
            break;
          default:
            v7 = "Unknown Coordination Type";
            break;
        }
        v6 = a1[5 * i + 4];
        WPP_RECORDER_SF_Ds((__int64)WPP_GLOBAL_Control->DeviceExtension, v6, a3, 0x75u, v8, v6, v7);
      }
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          2u,
          0x76u,
          (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          2u,
          0x77u,
          (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
    }
  }
}
