/*
 * XREFs of ndisOidPreRSSv2Parameters @ 0x1C007C0D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qqDD @ 0x1C0039564 (WPP_SF_qqDD.c)
 *     WPP_SF_qqq @ 0x1C00395C4 (WPP_SF_qqq.c)
 *     ?ndisQueryMiniportRSSv2Parameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C007AE10 (-ndisQueryMiniportRSSv2Parameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisQueryOpenRSSv2Parameters@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C007AE84 (-ndisQueryOpenRSSv2Parameters@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisSetMiniportRSSv2Parameters@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C007B6BC (-ndisSetMiniportRSSv2Parameters@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ?ndisSetOpenRSSv2Parameters@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C007B9F4 (-ndisSetOpenRSSv2Parameters@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 */

unsigned __int8 __fastcall ndisOidPreRSSv2Parameters(__int64 a1)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // rbp
  __int64 v3; // rdi
  unsigned __int8 v4; // si
  struct _NDIS_OPEN_BLOCK *v5; // r14
  __int64 v7; // [rsp+20h] [rbp-18h]

  v1 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v3 = *(_QWORD *)(a1 + 32);
  v4 = 0;
  v5 = *(struct _NDIS_OPEN_BLOCK **)(a1 + 24);
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qqq(0x27u, &WPP_f2ba63df2d4e3a1d5681283389008951_Traceguids, v1, v5, v3);
  if ( *(_DWORD *)(v3 + 4) == 2 )
  {
    if ( !*(_QWORD *)a1 )
      goto LABEL_16;
    *(_DWORD *)(a1 + 40) = ndisQueryMiniportRSSv2Parameters(v1, (struct _NDIS_OID_REQUEST *)v3);
    v4 = 1;
  }
  if ( !*(_DWORD *)(v3 + 4) )
  {
    if ( v5 )
    {
      *(_DWORD *)(a1 + 40) = ndisQueryOpenRSSv2Parameters(v5, (struct _NDIS_OID_REQUEST *)v3);
      v4 = 1;
      goto LABEL_16;
    }
    if ( v1 )
    {
      *(_DWORD *)(a1 + 40) = ndisQueryMiniportRSSv2Parameters(v1, (struct _NDIS_OID_REQUEST *)v3);
      v4 = 1;
    }
  }
  if ( *(_DWORD *)(v3 + 4) == 1 )
  {
    if ( !v5 || (v4 = ndisSetOpenRSSv2Parameters(v5, (struct _NDIS_OID_REQUEST *)v3, (int *)(a1 + 40)), v4 != 1) )
    {
      if ( v1 )
        v4 = ndisSetMiniportRSSv2Parameters(v1, (struct _NDIS_OID_REQUEST *)v3, (int *)(a1 + 40));
    }
  }
LABEL_16:
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
  {
    LODWORD(v7) = v4;
    WPP_SF_qqDD(0x28u, &WPP_f2ba63df2d4e3a1d5681283389008951_Traceguids, v1, v5, v7, *(_DWORD *)(a1 + 40));
  }
  return v4;
}
