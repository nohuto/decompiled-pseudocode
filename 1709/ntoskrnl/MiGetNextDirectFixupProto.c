/*
 * XREFs of MiGetNextDirectFixupProto @ 0x1406EA8CC
 * Callers:
 *     MiWalkEntireImage @ 0x140039480 (MiWalkEntireImage.c)
 * Callees:
 *     MiGetLeafPfnBuddy @ 0x1400D00B8 (MiGetLeafPfnBuddy.c)
 */

unsigned __int64 __fastcall MiGetNextDirectFixupProto(__int64 a1, _QWORD *a2)
{
  if ( a2 )
    return MiGetLeafPfnBuddy(a2);
  else
    return *(_QWORD *)(**(_QWORD **)(a1 + 96) + 88LL);
}
