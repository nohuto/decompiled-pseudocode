/*
 * XREFs of ?ndisAllocateCombinedRSSParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAPEAU_NDIS_VPORT_BLOCK@@PEAPEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@33@Z @ 0x1C0079E88
 * Callers:
 *     ?ndisSetMiniportRSSv1ParametersForMiniportV2@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C007B338 (-ndisSetMiniportRSSv1ParametersForMiniportV2@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST.c)
 *     ?ndisSetMiniportRSSv2Parameters@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C007B6BC (-ndisSetMiniportRSSv2Parameters@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 * Callees:
 *     memset @ 0x1C0025280 (memset.c)
 *     ?ndisCreateRssV1Parameters@@YAXPEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@KK@Z @ 0x1C007A118 (-ndisCreateRssV1Parameters@@YAXPEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@KK@Z.c)
 *     ?ndisGetVPortBlockForRequest@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x1C007A4EC (-ndisGetVPortBlockForRequest@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_OID_R.c)
 *     ?ndisShouldCacheRSSv2ParametersInMiniport@@YAEPEBU_NDIS_OID_REQUEST@@@Z @ 0x1C007BCD8 (-ndisShouldCacheRSSv2ParametersInMiniport@@YAEPEBU_NDIS_OID_REQUEST@@@Z.c)
 */

__int64 __fastcall ndisAllocateCombinedRSSParameters(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OID_REQUEST *a2,
        struct _NDIS_VPORT_BLOCK **a3,
        struct _NDIS_RECEIVE_SCALE_PARAMETERS **a4,
        struct _NDIS_RECEIVE_SCALE_PARAMETERS **a5,
        struct _NDIS_RECEIVE_SCALE_PARAMETERS **a6)
{
  struct _NDIS_VPORT_BLOCK *VPortBlockForRequest; // rsi
  const struct _NDIS_OID_REQUEST *v10; // r11
  unsigned int v11; // edi
  _NDIS_MINIPORT_RSS_PARAMETERS_CACHE *PoolWithTag; // rax
  _NDIS_MINIPORT_RSS_PARAMETERS_CACHE *RssParametersBuffer; // rbp
  unsigned __int64 v14; // rcx
  _NDIS_MINIPORT_RSS_PARAMETERS_CACHE *v15; // rax
  _NDIS_MINIPORT_RSS_PARAMETERS_CACHE *v16; // rbx
  unsigned __int64 v17; // rcx
  __int64 v18; // rcx

  VPortBlockForRequest = ndisGetVPortBlockForRequest(a1, a2);
  v11 = 0;
  if ( ndisShouldCacheRSSv2ParametersInMiniport(v10) )
  {
    if ( !a1->RssParametersBuffer )
    {
      PoolWithTag = (_NDIS_MINIPORT_RSS_PARAMETERS_CACHE *)ExAllocatePoolWithTag(
                                                             NonPagedPoolNxCacheAligned,
                                                             0x728uLL,
                                                             0x7372444Eu);
      a1->RssParametersBuffer = PoolWithTag;
      if ( !PoolWithTag )
        return (unsigned int)-1073741670;
      memset(PoolWithTag, 0, sizeof(_NDIS_MINIPORT_RSS_PARAMETERS_CACHE));
    }
    if ( !a1->CombinedNdisRSSParameters )
    {
      RssParametersBuffer = a1->RssParametersBuffer;
      ndisCreateRssV1Parameters((struct _NDIS_RECEIVE_SCALE_PARAMETERS *)RssParametersBuffer, 1u, 1u);
      *(_WORD *)&RssParametersBuffer->Combined[4] = 16;
      if ( VPortBlockForRequest )
      {
        _BitScanForward64(&v14, VPortBlockForRequest->VPortParams.ProcessorAffinity.Mask);
        *(_WORD *)&RssParametersBuffer->Combined[42] = (unsigned __int8)v14;
        *(_WORD *)&RssParametersBuffer->Combined[40] = VPortBlockForRequest->VPortParams.ProcessorAffinity.Group;
      }
      else
      {
        *(_PROCESSOR_NUMBER *)&RssParametersBuffer->Combined[40] = a1->RssBaseProcessor;
      }
      *(_DWORD *)&RssParametersBuffer->Combined[*(unsigned int *)&RssParametersBuffer->Combined[16]] = *(_DWORD *)&RssParametersBuffer->Combined[40];
      a1->CombinedNdisRSSParameters = (_NDIS_RECEIVE_SCALE_PARAMETERS *)RssParametersBuffer;
    }
    if ( a4 )
      *a4 = a1->CombinedNdisRSSParameters;
    if ( a5 )
      *a5 = (struct _NDIS_RECEIVE_SCALE_PARAMETERS *)a1->RssParametersBuffer;
    if ( a6 )
      *a6 = (struct _NDIS_RECEIVE_SCALE_PARAMETERS *)a1->RssParametersBuffer->Oid;
  }
  else
  {
    if ( !VPortBlockForRequest->RssParametersBuffer )
    {
      v15 = (_NDIS_MINIPORT_RSS_PARAMETERS_CACHE *)ExAllocatePoolWithTag(
                                                     NonPagedPoolNxCacheAligned,
                                                     0x728uLL,
                                                     0x7372444Eu);
      VPortBlockForRequest->RssParametersBuffer = v15;
      if ( !v15 )
        return (unsigned int)-1073741670;
      memset(v15, 0, sizeof(_NDIS_MINIPORT_RSS_PARAMETERS_CACHE));
    }
    if ( !VPortBlockForRequest->CombinedNdisRSSParameters )
    {
      v16 = VPortBlockForRequest->RssParametersBuffer;
      ndisCreateRssV1Parameters((struct _NDIS_RECEIVE_SCALE_PARAMETERS *)v16, 1u, 1u);
      *(_WORD *)&v16->Combined[4] = 16;
      _BitScanForward64(&v17, VPortBlockForRequest->VPortParams.ProcessorAffinity.Mask);
      *(_WORD *)&v16->Combined[42] = (unsigned __int8)v17;
      v18 = *(unsigned int *)&v16->Combined[16];
      *(_WORD *)&v16->Combined[40] = VPortBlockForRequest->VPortParams.ProcessorAffinity.Group;
      *(_DWORD *)&v16->Combined[v18] = *(_DWORD *)&v16->Combined[40];
      VPortBlockForRequest->CombinedNdisRSSParameters = (_NDIS_RECEIVE_SCALE_PARAMETERS *)v16;
    }
    if ( a4 )
      *a4 = VPortBlockForRequest->CombinedNdisRSSParameters;
    if ( a5 )
      *a5 = (struct _NDIS_RECEIVE_SCALE_PARAMETERS *)VPortBlockForRequest->RssParametersBuffer;
    if ( a6 )
      *a6 = (struct _NDIS_RECEIVE_SCALE_PARAMETERS *)VPortBlockForRequest->RssParametersBuffer->Oid;
  }
  if ( a3 )
    *a3 = VPortBlockForRequest;
  return v11;
}
