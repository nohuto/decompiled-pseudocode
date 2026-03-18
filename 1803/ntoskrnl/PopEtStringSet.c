/*
 * XREFs of PopEtStringSet @ 0x140538578
 * Callers:
 *     PopEtEnergyContextSetState @ 0x140532154 (PopEtEnergyContextSetState.c)
 *     PopEtProcessSnapshotCreate @ 0x1405326C0 (PopEtProcessSnapshotCreate.c)
 *     PopEtProcessSnapshotUpdateFromSnapshotContext @ 0x140538498 (PopEtProcessSnapshotUpdateFromSnapshotContext.c)
 * Callees:
 *     RtlInternEntryDereference @ 0x140535108 (RtlInternEntryDereference.c)
 */

void __fastcall PopEtStringSet(__int64 *a1, __int64 a2)
{
  signed __int64 v4; // rax
  unsigned __int64 i; // rcx
  signed __int64 v6; // rtt

  if ( *a1 )
    RtlInternEntryDereference(PopEtGlobals + 56, *a1);
  *a1 = a2;
  if ( a2 )
  {
    _m_prefetchw((const void *)(a2 + 16));
    v4 = *(_QWORD *)(a2 + 16);
    for ( i = v4 + 1; i > 1; i = v4 + 1 )
    {
      v6 = v4;
      v4 = _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 16), i, v4);
      if ( v6 == v4 )
        return;
    }
    if ( i != 1 )
      __fastfail(0xEu);
  }
}
