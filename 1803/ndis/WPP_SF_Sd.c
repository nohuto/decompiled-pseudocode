/*
 * XREFs of WPP_SF_Sd @ 0x1C0041BF8
 * Callers:
 *     NdisQueryDiagnosticSetting @ 0x1C00AC010 (NdisQueryDiagnosticSetting.c)
 *     ?ndisReadRegistryKnobs@@YAJPEAU_DRIVER_OBJECT@@PEBUNDIS_REGISTRY_KNOB@@_K@Z @ 0x1C00B5340 (-ndisReadRegistryKnobs@@YAJPEAU_DRIVER_OBJECT@@PEBUNDIS_REGISTRY_KNOB@@_K@Z.c)
 *     ndisReadKnob @ 0x1C00B5460 (ndisReadKnob.c)
 *     ?ndisBindReadFilterDriverFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z @ 0x1C00B61F8 (-ndisBindReadFilterDriverFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z.c)
 *     Ndis::BindRegistry::LoadNetworkInterfaceString @ 0x1C00B7D8C (Ndis--BindRegistry--LoadNetworkInterfaceString.c)
 *     ?ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEBU_GUID@@AEAVKRegKey@@PEAT_NET_LUID_LH@@PEAU_NDIS_NSI_INTERFACE_PERSIST_RW@@@Z @ 0x1C00BA180 (-ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEBU_GUID@@AEAVKRegKey@@PEAT_NET_LUID_LH@@PEAU_NDI.c)
 *     ndisQueryDeviceFlags @ 0x1C00C8884 (ndisQueryDeviceFlags.c)
 *     ?ndisBindReadFilterDriverFromV1Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z @ 0x1C00FCB80 (-ndisBindReadFilterDriverFromV1Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F104 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_Sd(unsigned __int16 a1, const struct _GUID *a2, const wchar_t *a3, int a4)
{
  __int64 v4; // r9
  __int64 v5; // r9
  __int64 v6; // r9
  int v7; // [rsp+68h] [rbp+20h] BYREF

  v7 = a4;
  if ( a3 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( a3[v4] );
    v5 = v4 + 1;
  }
  else
  {
    v5 = 5LL;
  }
  v6 = 2 * v5;
  if ( !a3 )
    a3 = L"NULL";
  ndisWppFastTraceMessage(a2, a1, a3, v6, &v7, 4LL, 0LL);
}
