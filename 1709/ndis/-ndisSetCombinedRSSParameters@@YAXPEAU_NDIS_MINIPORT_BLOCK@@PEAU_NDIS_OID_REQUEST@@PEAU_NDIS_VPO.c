/*
 * XREFs of ?ndisSetCombinedRSSParameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@@Z @ 0x1C007B2E8
 * Callers:
 *     ?ndisPostSetMiniportRSSv2Parameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C007ABE4 (-ndisPostSetMiniportRSSv2Parameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z.c)
 *     ?ndisSetMiniportRSSv1ParametersForMiniportV2@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C007B338 (-ndisSetMiniportRSSv1ParametersForMiniportV2@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST.c)
 * Callees:
 *     ?ndisShouldCacheRSSv2ParametersInMiniport@@YAEPEBU_NDIS_OID_REQUEST@@@Z @ 0x1C007BCD8 (-ndisShouldCacheRSSv2ParametersInMiniport@@YAEPEBU_NDIS_OID_REQUEST@@@Z.c)
 */

void __fastcall ndisSetCombinedRSSParameters(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OID_REQUEST *a2,
        struct _NDIS_VPORT_BLOCK *a3,
        struct _NDIS_RECEIVE_SCALE_PARAMETERS *a4)
{
  __int64 v4; // r9
  __int64 v5; // r10
  __int64 v6; // r11

  if ( ndisShouldCacheRSSv2ParametersInMiniport(a2) )
    *(_QWORD *)(v5 + 552) = v4;
  else
    *(_QWORD *)(v6 + 896) = v4;
}
