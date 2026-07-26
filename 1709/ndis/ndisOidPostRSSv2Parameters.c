/*
 * XREFs of ndisOidPostRSSv2Parameters @ 0x1C007C010
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qqq @ 0x1C00395C4 (WPP_SF_qqq.c)
 *     WPP_SF_qqd @ 0x1C0051268 (WPP_SF_qqd.c)
 *     ?ndisPostSetMiniportRSSv2Parameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C007ABE4 (-ndisPostSetMiniportRSSv2Parameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z.c)
 *     ?ndisPostSetOpenRSSv2Parameters@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C007AD40 (-ndisPostSetOpenRSSv2Parameters@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z.c)
 */

void __fastcall ndisOidPostRSSv2Parameters(__int64 a1)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // rbp
  __int64 v3; // rdi
  struct _NDIS_OPEN_BLOCK *v4; // rsi
  __int64 v5; // [rsp+20h] [rbp-18h]

  v1 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v3 = *(_QWORD *)(a1 + 32);
  v4 = *(struct _NDIS_OPEN_BLOCK **)(a1 + 24);
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qqq(0x29u, &WPP_f2ba63df2d4e3a1d5681283389008951_Traceguids, v1, v4, v3);
  if ( *(_DWORD *)(v3 + 4) == 1 )
  {
    if ( v1 )
      ndisPostSetMiniportRSSv2Parameters(v1, (struct _NDIS_OID_REQUEST *)v3, *(_DWORD *)(a1 + 40));
    if ( v4 )
      ndisPostSetOpenRSSv2Parameters(v4, (struct _NDIS_OID_REQUEST *)v3, *(_DWORD *)(a1 + 40));
  }
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
  {
    LODWORD(v5) = *(_DWORD *)(a1 + 40);
    WPP_SF_qqd(0x2Au, &WPP_f2ba63df2d4e3a1d5681283389008951_Traceguids, v1, v4, v5);
  }
}
