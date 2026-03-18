/*
 * XREFs of itrp_ROFF @ 0x1C02D17B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_ROFF(__int64 a1)
{
  __int64 v1; // r8
  int v2; // eax
  __int64 result; // rax

  v1 = qword_1C0327C90;
  *(_WORD *)(qword_1C0327C90 + 132) = 5;
  if ( word_1C0327D04 && ((*(_BYTE *)(qword_1C0327C90 + 120) & 4) != 0 || *(_BYTE *)(qword_1C0327C90 + 333)) )
    v2 = 14;
  else
    v2 = 6;
  *(_DWORD *)(v1 + 128) = v2;
  result = a1;
  word_1C0327CDC = 0;
  return result;
}
