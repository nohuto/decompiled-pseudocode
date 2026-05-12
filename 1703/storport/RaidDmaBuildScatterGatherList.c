/*
 * XREFs of RaidDmaBuildScatterGatherList @ 0x1C0006910
 * Callers:
 *     RaidAdapterScatterGatherExecute @ 0x1C0006814 (RaidAdapterScatterGatherExecute.c)
 *     RaidAdapterScatterGatherExecuteBidirectionalRequest @ 0x1C002D630 (RaidAdapterScatterGatherExecuteBidirectionalRequest.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001ED80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RaidDmaBuildScatterGatherList(__int64 *a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 (__fastcall *v4)(__int64, __int64); // rax

  if ( a1
    && (v2 = *a1) != 0
    && (v3 = *(_QWORD *)(v2 + 8)) != 0
    && (v4 = *(__int64 (__fastcall **)(__int64, __int64))(v3 + 112)) != 0LL )
  {
    return v4(v2, a2);
  }
  else
  {
    return 3221225485LL;
  }
}
