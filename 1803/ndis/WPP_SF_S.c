/*
 * XREFs of WPP_SF_S @ 0x1C0062434
 * Callers:
 *     NdisQueryDiagnosticSetting @ 0x1C00AC010 (NdisQueryDiagnosticSetting.c)
 *     ndisDoesSystemSupportSriov @ 0x1C00B5D40 (ndisDoesSystemSupportSriov.c)
 *     ?ndisBindReadFilterDriverFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z @ 0x1C00B61F8 (-ndisBindReadFilterDriverFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z.c)
 *     ?ndisCheckIfDeviceNeedsFullMigration@@YAJAEAVKRegKey@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@AEA_N@Z @ 0x1C00B67B0 (-ndisCheckIfDeviceNeedsFullMigration@@YAJAEAVKRegKey@@AEAV-$unique_ptr@UKString@Rtl@@U-$default_.c)
 *     ndisPnPAddDevice @ 0x1C00B6980 (ndisPnPAddDevice.c)
 *     ?ndisBindReadFilterDriverSettingsFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@AEAVKRegKey@@@Z @ 0x1C00B7EA0 (-ndisBindReadFilterDriverSettingsFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@AEAVKRegKey@@@.c)
 *     ?ndisBindReadFilterDriverFromV1Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z @ 0x1C00FCB80 (-ndisBindReadFilterDriverFromV1Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F104 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_S(unsigned __int16 a1, const struct _GUID *a2, const wchar_t *a3)
{
  __int64 v3; // r9
  __int64 v4; // r9
  __int64 v5; // r9

  if ( a3 )
  {
    v3 = -1LL;
    do
      ++v3;
    while ( a3[v3] );
    v4 = v3 + 1;
  }
  else
  {
    v4 = 5LL;
  }
  v5 = 2 * v4;
  if ( !a3 )
    a3 = L"NULL";
  ndisWppFastTraceMessage(a2, a1, a3, v5, 0LL);
}
