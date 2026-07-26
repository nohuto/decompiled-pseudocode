/*
 * XREFs of NdisMResetMiniport @ 0x1C005E520
 * Callers:
 *     ndisMOidRequest @ 0x1C00094B0 (ndisMOidRequest.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C0009270 (ndisReferenceMiniport.c)
 *     ndisDereferenceMiniport @ 0x1C0009380 (ndisDereferenceMiniport.c)
 *     ndisScheduleWorkItemInternal @ 0x1C0022FEC (ndisScheduleWorkItemInternal.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 */

void __fastcall NdisMResetMiniport(__int64 a1)
{
  _QWORD *PoolWithTag; // rax

  if ( (unsigned __int8)byte_1C0098758 >= 4u )
    WPP_SF_q(0xE7u, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, a1);
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 3784) + 216LL) && ndisReferenceMiniport(a1) )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x6977444Eu);
    if ( PoolWithTag )
    {
      *PoolWithTag = a1;
      PoolWithTag[1] = ndisQueuedResetMiniport;
      ndisScheduleWorkItemInternal((__int64)PoolWithTag);
    }
    else
    {
      ndisDereferenceMiniport(a1, 8u);
    }
  }
}
