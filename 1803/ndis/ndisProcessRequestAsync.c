/*
 * XREFs of ndisProcessRequestAsync @ 0x1C0047EB0
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009F08 (ndisDereferenceMiniport.c)
 *     ndisQueueOidRequest @ 0x1C000C3B0 (ndisQueueOidRequest.c)
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 *     WPP_SF_qqq @ 0x1C003A95C (WPP_SF_qqq.c)
 */

void __fastcall ndisProcessRequestAsync(_QWORD *P)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // rdi
  void *v3; // rbx
  __int64 v4; // r8
  __int64 v5; // r9

  v1 = (struct _NDIS_MINIPORT_BLOCK *)P[7];
  v3 = (void *)P[6];
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qq(0x41u, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, v1, v3);
  if ( (unsigned int)ndisQueueOidRequest((__int64)v3, v1, 0LL, 0LL) != 259 )
  {
    ExFreePoolWithTag(v3, 0);
    v3 = 0LL;
  }
  ExFreePoolWithTag(P, 0);
  ndisDereferenceMiniport((__int64)v1, 0x4Au, v4, v5);
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qqq(0x42u, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, v1, v3, 0LL);
}
