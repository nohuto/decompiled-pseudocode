/*
 * XREFs of WPP_SF_Z @ 0x1C0041C64
 * Callers:
 *     NdisFRegisterFilterDriver @ 0x1C00162A0 (NdisFRegisterFilterDriver.c)
 *     ?ndisIfUpdateStringIfNeeded@@YAXPEAU_NDIS_IF_BLOCK@@PEBU_UNICODE_STRING@@PEAU_IF_COUNTED_STRING_LH@@W4_NSI_STRUCT_TYPE@@K@Z @ 0x1C003F3AC (-ndisIfUpdateStringIfNeeded@@YAXPEAU_NDIS_IF_BLOCK@@PEBU_UNICODE_STRING@@PEAU_IF_COUNTED_STRING_.c)
 *     NdisReadConfiguration @ 0x1C00B9A70 (NdisReadConfiguration.c)
 *     NdisOpenProtocolConfiguration @ 0x1C00BA6E0 (NdisOpenProtocolConfiguration.c)
 *     ?ReadNetworkInterfaceListV2@BindRegistry@Ndis@@YAJXZ @ 0x1C00C1690 (-ReadNetworkInterfaceListV2@BindRegistry@Ndis@@YAJXZ.c)
 *     NdisRegisterProtocolDriver @ 0x1C00C18B0 (NdisRegisterProtocolDriver.c)
 *     ndisValidate60Protocol @ 0x1C00C1FB4 (ndisValidate60Protocol.c)
 *     ndisCreateAdapterInstanceName @ 0x1C00C7D24 (ndisCreateAdapterInstanceName.c)
 *     ndisHandleBindNotification @ 0x1C00E4EE4 (ndisHandleBindNotification.c)
 *     ndisHandleProtocolUnloadNotification @ 0x1C00E4FFC (ndisHandleProtocolUnloadNotification.c)
 *     NdisWdfReadConfiguration @ 0x1C00E51B0 (NdisWdfReadConfiguration.c)
 *     NdisOpenFile @ 0x1C00E6030 (NdisOpenFile.c)
 *     NdisRegisterProtocol @ 0x1C00E79E0 (NdisRegisterProtocol.c)
 *     ndisValidateLegacyProtocols @ 0x1C00E8140 (ndisValidateLegacyProtocols.c)
 *     ?DereferenceWdi@@YAXXZ @ 0x1C00FDDE8 (-DereferenceWdi@@YAXXZ.c)
 *     ?ReferenceWdi@@YA_NXZ @ 0x1C00FDEF0 (-ReferenceWdi@@YA_NXZ.c)
 *     ndisReferenceMiniportByName @ 0x1C01003B4 (ndisReferenceMiniportByName.c)
 *     ndisFindRootDevice @ 0x1C010D030 (ndisFindRootDevice.c)
 *     ndisHandleProtocolReconfigNotification @ 0x1C010D2D0 (ndisHandleProtocolReconfigNotification.c)
 *     ndisReferenceProtocolByName @ 0x1C010E318 (ndisReferenceProtocolByName.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F104 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_Z(unsigned __int16 a1, const struct _GUID *a2, const wchar_t *a3)
{
  __int64 v5; // rax
  const wchar_t *v6; // rcx

  if ( a3 )
    v5 = *a3;
  else
    v5 = 8LL;
  if ( a3 && *a3 )
    v6 = (const wchar_t *)*((_QWORD *)a3 + 1);
  else
    v6 = L"NULL";
  if ( !a3 )
    a3 = L"\b";
  ndisWppFastTraceMessage(a2, a1, a3, 2LL, v6, v5, 0LL);
}
