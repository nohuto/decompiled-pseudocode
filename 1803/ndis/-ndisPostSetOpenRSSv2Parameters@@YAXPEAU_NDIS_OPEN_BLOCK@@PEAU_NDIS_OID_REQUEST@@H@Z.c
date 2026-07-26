/*
 * XREFs of ?ndisPostSetOpenRSSv2Parameters@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C007BB38
 * Callers:
 *     ndisOidPostRSSv2Parameters @ 0x1C007CF60 (ndisOidPostRSSv2Parameters.c)
 * Callees:
 *     ndisPostSetOpenRSSParametersHelper @ 0x1C00153E4 (ndisPostSetOpenRSSParametersHelper.c)
 *     WPP_SF_qqd @ 0x1C0043E2C (WPP_SF_qqd.c)
 *     WPP_SF_qqqL @ 0x1C0043FB4 (WPP_SF_qqqL.c)
 *     ?ndisPostSetMiniportRSSv2Parameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C007B9DC (-ndisPostSetMiniportRSSv2Parameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z.c)
 *     ?ndisShouldCacheRSSv2ParametersInMiniport@@YAEPEBU_NDIS_OID_REQUEST@@@Z @ 0x1C007CBD0 (-ndisShouldCacheRSSv2ParametersInMiniport@@YAEPEBU_NDIS_OID_REQUEST@@@Z.c)
 */

void __fastcall ndisPostSetOpenRSSv2Parameters(struct _NDIS_OPEN_BLOCK *a1, struct _NDIS_OID_REQUEST *a2, int a3)
{
  _NDIS_MINIPORT_BLOCK *MiniportHandle; // rsi
  _NDIS_RECEIVE_SCALE_PARAMETERS *NdisRSSParameters; // rdx

  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qqd(0x28u, &WPP_4fecf6d36e163aabb9bd41260a763457_Traceguids, a1, a2, a3);
  MiniportHandle = a1->MiniportHandle;
  if ( !a3 )
  {
    NdisRSSParameters = a1->NdisRSSParameters;
    if ( NdisRSSParameters )
      NdisRSSParameters->HashInformation = *((_DWORD *)a2->DATA.QUERY_INFORMATION.InformationBuffer + 2);
    ndisPostSetMiniportRSSv2Parameters(MiniportHandle, a2, 0);
    if ( ndisShouldCacheRSSv2ParametersInMiniport(a2) )
      ndisPostSetOpenRSSParametersHelper(
        (__int64)MiniportHandle,
        (__int64)a1,
        (__int64)MiniportHandle->CombinedNdisRSSParameters);
  }
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qqqL(0x29u, &WPP_4fecf6d36e163aabb9bd41260a763457_Traceguids, MiniportHandle, a1, a2, a3);
}
