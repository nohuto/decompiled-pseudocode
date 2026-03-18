/*
 * XREFs of EtwpCancelStackWalkApc @ 0x14027F980
 * Callers:
 *     <none>
 * Callees:
 *     EtwpFinalizePendingApc @ 0x14027F99C (EtwpFinalizePendingApc.c)
 */

__int64 __fastcall EtwpCancelStackWalkApc(__int64 a1)
{
  return EtwpFinalizePendingApc(*(_QWORD *)(a1 + 56), a1);
}
