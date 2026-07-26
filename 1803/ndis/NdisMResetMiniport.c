/*
 * XREFs of NdisMResetMiniport @ 0x1C005EF20
 * Callers:
 *     ndisMOidRequest @ 0x1C000A070 (ndisMOidRequest.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C000977C (ndisReferenceMiniport.c)
 *     ndisDereferenceMiniport @ 0x1C0009F08 (ndisDereferenceMiniport.c)
 *     ndisScheduleWorkItemInternal @ 0x1C001A1A0 (ndisScheduleWorkItemInternal.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 */

void __fastcall NdisMResetMiniport(__int64 a1)
{
  _QWORD *PoolWithTag; // rax
  __int64 v3; // r8
  __int64 v4; // r9

  if ( (unsigned __int8)byte_1C0099618 >= 4u )
    WPP_SF_q(0xEAu, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, a1);
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
      ndisDereferenceMiniport(a1, 8u, v3, v4);
    }
  }
}
