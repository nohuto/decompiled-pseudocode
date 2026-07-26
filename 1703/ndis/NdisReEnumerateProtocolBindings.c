/*
 * XREFs of NdisReEnumerateProtocolBindings @ 0x1C00DC030
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceProtocol @ 0x1C001802C (ndisDereferenceProtocol.c)
 *     ndisReferenceProtocol @ 0x1C0019DB4 (ndisReferenceProtocol.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     Template_qqq @ 0x1C0043A1C (Template_qqq.c)
 *     ?ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ @ 0x1C005BB50 (-ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ.c)
 *     ?EndBindOperation@BindEngine@Ndis@@SAXXZ @ 0x1C00AFBD8 (-EndBindOperation@BindEngine@Ndis@@SAXXZ.c)
 *     ?ForEachLink@NDIS_BIND_DRIVER_BASE@@QEAAXP6AXPEAUNDIS_BIND_LINK_BASE@@@Z@Z @ 0x1C00B2380 (-ForEachLink@NDIS_BIND_DRIVER_BASE@@QEAAXP6AXPEAUNDIS_BIND_LINK_BASE@@@Z@Z.c)
 */

void __stdcall NdisReEnumerateProtocolBindings(NDIS_HANDLE NdisProtocolHandle)
{
  __int64 v2; // rcx
  __int64 v3; // rdx

  if ( (unsigned __int8)byte_1C009260D >= 4u )
    WPP_SF_q(0x1Fu, &WPP_766e1c326e8d3beaf7bd49aa3741dac3_Traceguids, (__int64)NdisProtocolHandle);
  if ( (*((_DWORD *)NdisProtocolHandle + 16) & 0x20000000) != 0 )
    ndisCheckForNdisTestBindingsOnAllMiniports();
  if ( ndisReferenceProtocol((__int64)NdisProtocolHandle, 0xAu) )
  {
    *(_BYTE *)(*((_QWORD *)NdisProtocolHandle + 115) + 9LL) = 1;
    _InterlockedIncrement((volatile signed __int32 *)&Ndis::BindEngine::s_NumBindOperationsInProgress);
    NDIS_BIND_DRIVER_BASE::ForEachLink(
      (NDIS_BIND_DRIVER_BASE *)(*((_QWORD *)NdisProtocolHandle + 115) + 8LL),
      (void (__fastcall *)(_LIST_ENTRY *))lambda_892a0bee19b69ccfc43518a9a1aed1a5_::_lambda_invoker_cdecl_);
    if ( *((struct _KTHREAD **)NdisProtocolHandle + 52) != KeGetCurrentThread() )
      NDIS_BIND_DRIVER_BASE::ForEachLink(
        (NDIS_BIND_DRIVER_BASE *)(*((_QWORD *)NdisProtocolHandle + 115) + 8LL),
        (void (__fastcall *)(_LIST_ENTRY *))lambda_1f70e7b164a43a0d336a36d71bfafc03_::_lambda_invoker_cdecl_);
    Ndis::BindEngine::EndBindOperation();
    ndisDereferenceProtocol((_NDIS_PROTOCOL_BLOCK *)NdisProtocolHandle, v3, 0xAu);
  }
  else
  {
    if ( (unsigned __int8)byte_1C0092614 >= 2u )
      WPP_SF_q(0x21u, &WPP_766e1c326e8d3beaf7bd49aa3741dac3_Traceguids, (__int64)NdisProtocolHandle);
    if ( (Microsoft_Windows_NDISEnableBits & 0x800000) != 0 )
      Template_qqq(v2, &ReferenceProtocolFailed, &NDIS_PROVIDER_ID, 0, 106, (char)NdisProtocolHandle);
  }
  if ( (unsigned __int8)byte_1C009260D >= 4u )
    WPP_SF_q(0x22u, &WPP_766e1c326e8d3beaf7bd49aa3741dac3_Traceguids, (__int64)NdisProtocolHandle);
}
