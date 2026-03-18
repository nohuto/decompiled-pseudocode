/*
 * XREFs of IsHangulLV @ 0x14028DBF8
 * Callers:
 *     CanComposeHangul @ 0x14028DB50 (CanComposeHangul.c)
 *     ComposeHangulLVT @ 0x14028DBC4 (ComposeHangulLVT.c)
 *     Normalization__NormalizeCharacter @ 0x14078A100 (Normalization__NormalizeCharacter.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsHangulLV(int a1)
{
  return (unsigned int)(a1 - 44032) <= 0x2BA3 && a1 - 44032 == 28 * ((a1 - 44032) / 28);
}
