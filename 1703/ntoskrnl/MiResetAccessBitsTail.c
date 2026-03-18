/*
 * XREFs of MiResetAccessBitsTail @ 0x14013F6E0
 * Callers:
 *     <none>
 * Callees:
 *     MiFlushTbList @ 0x1400D64A0 (MiFlushTbList.c)
 */

void __fastcall MiResetAccessBitsTail(__int64 a1, _KPROCESS *a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 136) + 8LL);
  if ( v2 )
    MiFlushTbList(v2, a2);
}
