/*
 * XREFs of WPP_SF_Z @ 0x1C0040B38
 * Callers:
 *     NdisFRegisterFilterDriver @ 0x1C00206B0 (NdisFRegisterFilterDriver.c)
 *     ?ndisIfUpdateStringIfNeeded@@YAXPEAU_NDIS_IF_BLOCK@@PEBU_UNICODE_STRING@@PEAU_IF_COUNTED_STRING_LH@@W4_NSI_STRUCT_TYPE@@K@Z @ 0x1C003E05C (-ndisIfUpdateStringIfNeeded@@YAXPEAU_NDIS_IF_BLOCK@@PEBU_UNICODE_STRING@@PEAU_IF_COUNTED_STRING_.c)
 *     NdisReadConfiguration @ 0x1C00B30F0 (NdisReadConfiguration.c)
 *     NdisOpenProtocolConfiguration @ 0x1C00B3A10 (NdisOpenProtocolConfiguration.c)
 *     NdisRegisterProtocolDriver @ 0x1C00BEDB0 (NdisRegisterProtocolDriver.c)
 *     ndisValidate60Protocol @ 0x1C00BF40C (ndisValidate60Protocol.c)
 *     ndisCreateAdapterInstanceName @ 0x1C00C1C68 (ndisCreateAdapterInstanceName.c)
 *     ?ReadNetworkInterfaceListV2@BindRegistry@Ndis@@YAJXZ @ 0x1C00C7300 (-ReadNetworkInterfaceListV2@BindRegistry@Ndis@@YAJXZ.c)
 *     ndisHandleBindNotification @ 0x1C00E3784 (ndisHandleBindNotification.c)
 *     ndisHandleProtocolUnloadNotification @ 0x1C00E389C (ndisHandleProtocolUnloadNotification.c)
 *     NdisWdfReadConfiguration @ 0x1C00E3A50 (NdisWdfReadConfiguration.c)
 *     NdisOpenFile @ 0x1C00E47D0 (NdisOpenFile.c)
 *     NdisRegisterProtocol @ 0x1C00E6190 (NdisRegisterProtocol.c)
 *     ndisValidateLegacyProtocols @ 0x1C00E67D0 (ndisValidateLegacyProtocols.c)
 *     ?DereferenceWdi@@YAXXZ @ 0x1C00FB2C0 (-DereferenceWdi@@YAXXZ.c)
 *     ?ReferenceWdi@@YA_NXZ @ 0x1C00FB3C8 (-ReferenceWdi@@YA_NXZ.c)
 *     ndisReferenceMiniportByName @ 0x1C0101EBC (ndisReferenceMiniportByName.c)
 *     ndisFindRootDevice @ 0x1C010B0B0 (ndisFindRootDevice.c)
 *     ndisHandleProtocolReconfigNotification @ 0x1C010B350 (ndisHandleProtocolReconfigNotification.c)
 *     ndisReferenceProtocolByName @ 0x1C010C388 (ndisReferenceProtocolByName.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004E79C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_Z(unsigned __int16 a1, const struct _GUID *a2, const wchar_t *a3)
{
  __int64 v5; // rax
  const wchar_t *v6; // rcx

  if ( a3 )
    v5 = *a3;
  else
    v5 = 8LL;
  if ( a3 )
    v6 = (const wchar_t *)*((_QWORD *)a3 + 1);
  else
    v6 = L"NULL";
  if ( !a3 )
    a3 = L"\b";
  ndisWppFastTraceMessage(a2, a1, a3, 2LL, v6, v5, 0LL);
}
