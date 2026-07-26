/*
 * XREFs of ndisProcessRequestAsync @ 0x1C0049840
 * Callers:
 *     <none>
 * Callees:
 *     ndisQueueOidRequest @ 0x1C000A240 (ndisQueueOidRequest.c)
 *     ndisDereferenceMiniport @ 0x1C0011A54 (ndisDereferenceMiniport.c)
 *     WPP_SF_qq @ 0x1C003CA44 (WPP_SF_qq.c)
 *     WPP_SF_qqq @ 0x1C003CB3C (WPP_SF_qqq.c)
 */

void __fastcall ndisProcessRequestAsync(_QWORD *P)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // rdi
  void *v3; // rbx

  v1 = (struct _NDIS_MINIPORT_BLOCK *)P[7];
  v3 = (void *)P[6];
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_qq(0x41u, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, v1, v3);
  if ( (unsigned int)ndisQueueOidRequest((__int64)v3, v1, 0LL, 0LL) != 259 )
  {
    ExFreePoolWithTag(v3, 0);
    v3 = 0LL;
  }
  ExFreePoolWithTag(P, 0);
  ndisDereferenceMiniport((__int64)v1, 0x4Au);
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_qqq(0x42u, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, v1, v3, 0LL);
}
