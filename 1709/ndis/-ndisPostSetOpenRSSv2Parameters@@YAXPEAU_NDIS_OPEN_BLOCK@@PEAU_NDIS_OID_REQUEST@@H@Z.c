/*
 * XREFs of ?ndisPostSetOpenRSSv2Parameters@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C007AD40
 * Callers:
 *     ndisOidPostRSSv2Parameters @ 0x1C007C010 (ndisOidPostRSSv2Parameters.c)
 * Callees:
 *     ndisPostSetOpenRSSParametersHelper @ 0x1C00242E8 (ndisPostSetOpenRSSParametersHelper.c)
 *     WPP_SF_qqqL @ 0x1C0042F34 (WPP_SF_qqqL.c)
 *     WPP_SF_qqd @ 0x1C0051268 (WPP_SF_qqd.c)
 *     ?ndisPostSetMiniportRSSv2Parameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C007ABE4 (-ndisPostSetMiniportRSSv2Parameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z.c)
 *     ?ndisShouldCacheRSSv2ParametersInMiniport@@YAEPEBU_NDIS_OID_REQUEST@@@Z @ 0x1C007BCD8 (-ndisShouldCacheRSSv2ParametersInMiniport@@YAEPEBU_NDIS_OID_REQUEST@@@Z.c)
 */

void __fastcall ndisPostSetOpenRSSv2Parameters(struct _NDIS_OPEN_BLOCK *a1, struct _NDIS_OID_REQUEST *a2, int a3)
{
  _NDIS_MINIPORT_BLOCK *MiniportHandle; // rsi
  _NDIS_RECEIVE_SCALE_PARAMETERS *NdisRSSParameters; // rdx

  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qqd(0x25u, &WPP_f2ba63df2d4e3a1d5681283389008951_Traceguids, a1, a2, a3);
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
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qqqL(0x26u, &WPP_f2ba63df2d4e3a1d5681283389008951_Traceguids, MiniportHandle, a1, a2, a3);
}
