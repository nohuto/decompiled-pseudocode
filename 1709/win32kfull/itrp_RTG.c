/*
 * XREFs of itrp_RTG @ 0x1C02D1B50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_RTG(__int64 a1)
{
  __int64 v1; // r8
  int v2; // eax

  v1 = qword_1C0327C90;
  *(_WORD *)(qword_1C0327C90 + 132) = 3;
  if ( word_1C0327D04 && ((*(_BYTE *)(qword_1C0327C90 + 120) & 4) != 0 || *(_BYTE *)(qword_1C0327C90 + 333)) )
    v2 = 12;
  else
    v2 = 4;
  *(_DWORD *)(v1 + 128) = v2;
  return a1;
}
