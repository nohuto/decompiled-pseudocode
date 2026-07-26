/*
 * XREFs of ndisProcessRequestAsync @ 0x1C0046C20
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009380 (ndisDereferenceMiniport.c)
 *     ndisQueueOidRequest @ 0x1C000B550 (ndisQueueOidRequest.c)
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 *     WPP_SF_qqq @ 0x1C00395C4 (WPP_SF_qqq.c)
 */

void __fastcall ndisProcessRequestAsync(_QWORD *P)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // rdi
  void *v3; // rbx

  v1 = (struct _NDIS_MINIPORT_BLOCK *)P[7];
  v3 = (void *)P[6];
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qq(0x41u, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, v1, v3);
  if ( (unsigned int)ndisQueueOidRequest((__int64)v3, v1, 0LL, 0LL) != 259 )
  {
    ExFreePoolWithTag(v3, 0);
    v3 = 0LL;
  }
  ExFreePoolWithTag(P, 0);
  ndisDereferenceMiniport((__int64)v1, 0x4Au);
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qqq(0x42u, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, v1, v3, 0LL);
}
