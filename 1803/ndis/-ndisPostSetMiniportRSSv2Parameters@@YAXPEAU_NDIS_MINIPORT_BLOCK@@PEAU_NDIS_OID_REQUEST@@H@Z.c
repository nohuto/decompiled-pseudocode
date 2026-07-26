/*
 * XREFs of ?ndisPostSetMiniportRSSv2Parameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C007B9DC
 * Callers:
 *     ?ndisPostSetOpenRSSv2Parameters@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C007BB38 (-ndisPostSetOpenRSSv2Parameters@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z.c)
 *     ndisOidPostRSSv2Parameters @ 0x1C007CF60 (ndisOidPostRSSv2Parameters.c)
 * Callees:
 *     WPP_SF_qqd @ 0x1C0043E2C (WPP_SF_qqd.c)
 *     ?ndisCreateRssV1Parameters@@YAXPEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@KK@Z @ 0x1C007AF60 (-ndisCreateRssV1Parameters@@YAXPEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@KK@Z.c)
 *     ?ndisGetCombinedRSSParameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAPEAU_NDIS_VPORT_BLOCK@@PEAPEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@33@Z @ 0x1C007B288 (-ndisGetCombinedRSSParameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAPEAU_NDIS_.c)
 *     ?ndisSetCombinedRSSParameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@@Z @ 0x1C007C1E4 (-ndisSetCombinedRSSParameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_VPO.c)
 *     ?ndisUpdateRssV1ParametersFromV2@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@PEAU_NDIS_RECEIVE_SCALE_PARAMETERS_V2@@2@Z @ 0x1C007CC0C (-ndisUpdateRssV1ParametersFromV2@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_.c)
 */

void __fastcall ndisPostSetMiniportRSSv2Parameters(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OID_REQUEST *a2,
        int a3)
{
  struct _NDIS_RECEIVE_SCALE_PARAMETERS_V2 *InformationBuffer; // r14
  KIRQL v7; // r12
  struct _NDIS_MINIPORT_BLOCK *v8; // rcx
  struct _NDIS_RECEIVE_SCALE_PARAMETERS **v9; // [rsp+20h] [rbp-48h]
  struct _NDIS_VPORT_BLOCK *v10; // [rsp+30h] [rbp-38h] BYREF
  struct _NDIS_RECEIVE_SCALE_PARAMETERS *v11; // [rsp+38h] [rbp-30h] BYREF
  struct _NDIS_RECEIVE_SCALE_PARAMETERS *v12; // [rsp+40h] [rbp-28h] BYREF
  struct _NDIS_RECEIVE_SCALE_PARAMETERS *v13; // [rsp+88h] [rbp+20h] BYREF

  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qqd(0x26u, &WPP_4fecf6d36e163aabb9bd41260a763457_Traceguids, a1, a2, a3);
  if ( !a3 )
  {
    InformationBuffer = (struct _NDIS_RECEIVE_SCALE_PARAMETERS_V2 *)a2->DATA.QUERY_INFORMATION.InformationBuffer;
    v7 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    a1->MiniportThread = KeGetCurrentThread();
    a1->LockDbg = 4132012;
    ndisGetCombinedRSSParameters(a1, a2, &v10, &v11, &v13, &v12);
    if ( !v11 )
      ndisCreateRssV1Parameters(v13, *((_DWORD *)InformationBuffer + 6), 0x14u);
    ndisUpdateRssV1ParametersFromV2(v8, v10, v13, InformationBuffer, v12);
    ndisSetCombinedRSSParameters(a1, a2, v10, v13);
    a1->MiniportThread = 0LL;
    a1->LockDbg = 0;
    KeReleaseSpinLock(&a1->Lock, v7);
  }
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
  {
    LODWORD(v9) = a3;
    WPP_SF_qqd(0x27u, &WPP_4fecf6d36e163aabb9bd41260a763457_Traceguids, a1, a2, v9);
  }
}
