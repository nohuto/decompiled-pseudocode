/*
 * XREFs of NdisReEnumerateProtocolBindings @ 0x1C00E78C0
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceProtocol @ 0x1C001A8FC (ndisDereferenceProtocol.c)
 *     ndisReferenceProtocol @ 0x1C001AC14 (ndisReferenceProtocol.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     McTemplateK0qqq @ 0x1C00412A4 (McTemplateK0qqq.c)
 *     ?ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ @ 0x1C005BDEC (-ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ.c)
 *     ?ForEachLink@NDIS_BIND_DRIVER_BASE@@QEAAXP6AXPEAUNDIS_BIND_LINK_BASE@@@Z@Z @ 0x1C00BFEA8 (-ForEachLink@NDIS_BIND_DRIVER_BASE@@QEAAXP6AXPEAUNDIS_BIND_LINK_BASE@@@Z@Z.c)
 *     ?EndBindOperation@BindEngine@Ndis@@SAXXZ @ 0x1C00C0A70 (-EndBindOperation@BindEngine@Ndis@@SAXXZ.c)
 */

void __stdcall NdisReEnumerateProtocolBindings(NDIS_HANDLE NdisProtocolHandle)
{
  struct _MCGEN_TRACE_CONTEXT *v2; // rcx
  __int64 v3; // rdx

  if ( (unsigned __int8)byte_1C009960D >= 4u )
    WPP_SF_q(0x1Fu, &WPP_0f5804d9ba813936e0c202df1238e587_Traceguids, (__int64)NdisProtocolHandle);
  if ( (*((_DWORD *)NdisProtocolHandle + 16) & 0x20000000) != 0 )
    ndisCheckForNdisTestBindingsOnAllMiniports();
  if ( ndisReferenceProtocol((__int64)NdisProtocolHandle, 0xAu) )
  {
    *(_BYTE *)(*((_QWORD *)NdisProtocolHandle + 115) + 1LL) = 1;
    _InterlockedIncrement((volatile signed __int32 *)&Ndis::BindEngine::s_NumBindOperationsInProgress);
    NDIS_BIND_DRIVER_BASE::ForEachLink(
      *((NDIS_BIND_DRIVER_BASE **)NdisProtocolHandle + 115),
      (void (__fastcall *)(_LIST_ENTRY *))lambda_ca1e2bc5e6e9f1385062736cf79e2ec3_::_lambda_invoker_cdecl_);
    if ( *((struct _KTHREAD **)NdisProtocolHandle + 52) != KeGetCurrentThread() )
      NDIS_BIND_DRIVER_BASE::ForEachLink(
        *((NDIS_BIND_DRIVER_BASE **)NdisProtocolHandle + 115),
        (void (__fastcall *)(_LIST_ENTRY *))lambda_1f70e7b164a43a0d336a36d71bfafc03_::_lambda_invoker_cdecl_);
    Ndis::BindEngine::EndBindOperation();
    ndisDereferenceProtocol((_NDIS_PROTOCOL_BLOCK *)NdisProtocolHandle, v3, 0xAu);
  }
  else
  {
    if ( (unsigned __int8)byte_1C0099614 >= 2u )
      WPP_SF_q(0x21u, &WPP_0f5804d9ba813936e0c202df1238e587_Traceguids, (__int64)NdisProtocolHandle);
    if ( (Microsoft_Windows_NDISEnableBits & 0x800000) != 0 )
      McTemplateK0qqq(
        v2,
        &ReferenceProtocolFailed,
        &NDIS_PROVIDER_ID,
        0,
        0x714u,
        (const unsigned int)NdisProtocolHandle);
  }
  if ( (unsigned __int8)byte_1C009960D >= 4u )
    WPP_SF_q(0x22u, &WPP_0f5804d9ba813936e0c202df1238e587_Traceguids, (__int64)NdisProtocolHandle);
}
