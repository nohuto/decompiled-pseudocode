/*
 * XREFs of PopEtStringSet @ 0x1406D3460
 * Callers:
 *     PopEtEnergyContextSetState @ 0x1406D0FDC (PopEtEnergyContextSetState.c)
 *     PopEtProcessSnapshotCreate @ 0x1406D2CD8 (PopEtProcessSnapshotCreate.c)
 *     PopEtProcessSnapshotUpdateFromSnapshotContext @ 0x1406D32B0 (PopEtProcessSnapshotUpdateFromSnapshotContext.c)
 * Callees:
 *     RtlInternEntryDereference @ 0x1406EF188 (RtlInternEntryDereference.c)
 */

void __fastcall PopEtStringSet(_QWORD *a1, __int64 a2)
{
  signed __int64 v4; // rax
  signed __int64 v5; // rtt

  if ( *a1 )
    RtlInternEntryDereference(PopEtGlobals + 56);
  *a1 = a2;
  if ( a2 )
  {
    _m_prefetchw((const void *)(a2 + 16));
    v4 = *(_QWORD *)(a2 + 16);
    while ( (unsigned __int64)(v4 + 1) > 1 )
    {
      v5 = v4;
      v4 = _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 16), v4 + 1, v4);
      if ( v5 == v4 )
        return;
    }
    if ( v4 )
      __fastfail(0xEu);
  }
}
