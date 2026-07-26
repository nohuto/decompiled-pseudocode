/*
 * XREFs of NdisMResetMiniport @ 0x1C005E760
 * Callers:
 *     ndisMOidRequest @ 0x1C000C330 (ndisMOidRequest.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0011A54 (ndisDereferenceMiniport.c)
 *     ndisReferenceMiniport @ 0x1C0011BCC (ndisReferenceMiniport.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 */

void __fastcall NdisMResetMiniport(__int64 a1)
{
  _QWORD *PoolWithTag; // rax

  if ( (unsigned __int8)byte_1C0092618 >= 4u )
    WPP_SF_q(0xDAu, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, a1);
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 3784) + 216LL) && ndisReferenceMiniport(a1, 8u) )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x6977444Eu);
    if ( PoolWithTag )
    {
      *PoolWithTag = a1;
      PoolWithTag[1] = &ndisQueuedResetMiniport;
      ndisScheduleWorkItemInternal((__int64)PoolWithTag);
    }
    else
    {
      ndisDereferenceMiniport(a1, 8u);
    }
  }
}
