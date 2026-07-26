/*
 * XREFs of ndisOidPreRSSParameters @ 0x1C00B59A0
 * Callers:
 *     <none>
 * Callees:
 *     ndisSetMiniportRSSParameters @ 0x1C001553C (ndisSetMiniportRSSParameters.c)
 *     ndisSetOpenRSSParameters @ 0x1C0015640 (ndisSetOpenRSSParameters.c)
 *     ndisShouldCacheRSSParameters @ 0x1C00159F8 (ndisShouldCacheRSSParameters.c)
 *     WPP_SF_qqDD @ 0x1C003A8FC (WPP_SF_qqDD.c)
 *     WPP_SF_qqq @ 0x1C003A95C (WPP_SF_qqq.c)
 *     ndisQueryMiniportRSSParameters @ 0x1C0048100 (ndisQueryMiniportRSSParameters.c)
 *     ndisQueryOpenRSSParameters @ 0x1C0048250 (ndisQueryOpenRSSParameters.c)
 *     ?ndisSetMiniportRSSv1ParametersForMiniportV2@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C007C234 (-ndisSetMiniportRSSv1ParametersForMiniportV2@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST.c)
 */

unsigned __int8 __fastcall ndisOidPreRSSParameters(__int64 a1)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // rsi
  __int64 v3; // rbx
  unsigned __int8 v4; // di
  _NDIS_OPEN_BLOCK *v5; // rbp
  int v6; // eax
  int *v7; // r15
  __int64 v9; // [rsp+20h] [rbp-28h]

  v1 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v3 = *(_QWORD *)(a1 + 32);
  v4 = 0;
  v5 = *(_NDIS_OPEN_BLOCK **)(a1 + 24);
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qqq(0xB0u, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, v1, v5, v3);
  v6 = *(_DWORD *)(v3 + 4);
  if ( v6 == 2 )
  {
    if ( !*(_QWORD *)a1 )
      goto LABEL_9;
    v7 = (int *)(a1 + 40);
    *(_DWORD *)(a1 + 40) = ndisQueryMiniportRSSParameters(v1, v3);
    v4 = 1;
    v6 = *(_DWORD *)(v3 + 4);
  }
  else
  {
    v7 = (int *)(a1 + 40);
  }
  if ( v6 )
    goto LABEL_6;
  if ( v5 )
  {
    *v7 = ndisQueryOpenRSSParameters((__int64)v5, v3);
    v4 = 1;
    goto LABEL_9;
  }
  if ( v1 )
  {
    *v7 = ndisQueryMiniportRSSParameters(v1, v3);
    v4 = 1;
    v6 = *(_DWORD *)(v3 + 4);
LABEL_6:
    if ( v6 == 1 )
    {
      if ( !v5 || !ndisShouldCacheRSSParameters(v3) || (v4 = ndisSetOpenRSSParameters(v5, v3, v7), v4 != 1) )
      {
        if ( v1 )
        {
          if ( (*(_BYTE *)(*(_QWORD *)(v3 + 40) + 4LL) & 4) == 0 )
          {
            if ( (v1->PcwDatapathCycleMask & 0x800) != 0 )
              *(_QWORD *)(v3 + 144) = __rdtsc();
            else
              *(_QWORD *)(v3 + 144) = 0LL;
          }
          v4 = ndisSetMiniportRSSParameters((__int64)v1, v3, v7);
          if ( v4 != 1 && (v1->RecvScaleCapabilities.CapabilitiesFlags & 0x40000000) != 0 )
            v4 = ndisSetMiniportRSSv1ParametersForMiniportV2(v1, (struct _NDIS_OID_REQUEST *)v3, v7);
        }
      }
    }
  }
LABEL_9:
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
  {
    LODWORD(v9) = v4;
    WPP_SF_qqDD(0xB1u, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, v1, v5, v9, *(_DWORD *)(a1 + 40));
  }
  return v4;
}
