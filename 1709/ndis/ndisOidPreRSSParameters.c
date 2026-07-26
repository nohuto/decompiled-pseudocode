/*
 * XREFs of ndisOidPreRSSParameters @ 0x1C00C4530
 * Callers:
 *     <none>
 * Callees:
 *     ndisSetMiniportRSSParameters @ 0x1C001CC10 (ndisSetMiniportRSSParameters.c)
 *     ndisSetOpenRSSParameters @ 0x1C001CD14 (ndisSetOpenRSSParameters.c)
 *     ndisShouldCacheRSSParameters @ 0x1C001CF70 (ndisShouldCacheRSSParameters.c)
 *     WPP_SF_qqDD @ 0x1C0039564 (WPP_SF_qqDD.c)
 *     WPP_SF_qqq @ 0x1C00395C4 (WPP_SF_qqq.c)
 *     ndisQueryMiniportRSSParameters @ 0x1C0046E70 (ndisQueryMiniportRSSParameters.c)
 *     ndisQueryOpenRSSParameters @ 0x1C0046FC8 (ndisQueryOpenRSSParameters.c)
 *     ?ndisSetMiniportRSSv1ParametersForMiniportV2@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C007B338 (-ndisSetMiniportRSSv1ParametersForMiniportV2@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST.c)
 */

unsigned __int8 __fastcall ndisOidPreRSSParameters(__int64 a1)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // rdi
  __int64 v2; // rbx
  unsigned __int8 v3; // si
  _NDIS_OPEN_BLOCK *v4; // rbp
  __int64 v7; // [rsp+20h] [rbp-28h]

  v1 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v2 = *(_QWORD *)(a1 + 32);
  v3 = 0;
  v4 = *(_NDIS_OPEN_BLOCK **)(a1 + 24);
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qqq(0xB3u, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, v1, v4, v2);
  if ( *(_DWORD *)(v2 + 4) == 2 )
  {
    if ( !*(_QWORD *)a1 )
      goto LABEL_8;
    *(_DWORD *)(a1 + 40) = ndisQueryMiniportRSSParameters(v1, v2);
    v3 = 1;
  }
  if ( !*(_DWORD *)(v2 + 4) )
  {
    if ( v4 )
    {
      *(_DWORD *)(a1 + 40) = ndisQueryOpenRSSParameters((__int64)v4, v2);
      v3 = 1;
      goto LABEL_8;
    }
    if ( v1 )
    {
      *(_DWORD *)(a1 + 40) = ndisQueryMiniportRSSParameters(v1, v2);
      v3 = 1;
    }
  }
  if ( *(_DWORD *)(v2 + 4) == 1 )
  {
    if ( !v4 || !ndisShouldCacheRSSParameters(v2) || (v3 = ndisSetOpenRSSParameters(v4, v2, (int *)(a1 + 40)), v3 != 1) )
    {
      if ( v1 )
      {
        if ( (*(_BYTE *)(*(_QWORD *)(v2 + 40) + 4LL) & 4) == 0 )
        {
          if ( (v1->PcwDatapathCycleMask & 0x800) != 0 )
            *(_QWORD *)(v2 + 144) = __rdtsc();
          else
            *(_QWORD *)(v2 + 144) = 0LL;
        }
        v3 = ndisSetMiniportRSSParameters((__int64)v1, v2, (int *)(a1 + 40));
        if ( v3 != 1 && (v1->RecvScaleCapabilities.CapabilitiesFlags & 0x40000000) != 0 )
          v3 = ndisSetMiniportRSSv1ParametersForMiniportV2(v1, (struct _NDIS_OID_REQUEST *)v2, (int *)(a1 + 40));
      }
    }
  }
LABEL_8:
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
  {
    LODWORD(v7) = v3;
    WPP_SF_qqDD(0xB4u, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, v1, v4, v7, *(_DWORD *)(a1 + 40));
  }
  return v3;
}
