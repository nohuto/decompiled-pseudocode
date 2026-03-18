/*
 * XREFs of IsHangulLV @ 0x140255B28
 * Callers:
 *     CanComposeHangul @ 0x140255A80 (CanComposeHangul.c)
 *     ComposeHangulLVT @ 0x140255AF4 (ComposeHangulLVT.c)
 *     Normalization__NormalizeCharacter @ 0x140726788 (Normalization__NormalizeCharacter.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsHangulLV(int a1)
{
  return (unsigned int)(a1 - 44032) <= 0x2BA3 && a1 - 44032 == 28 * ((a1 - 44032) / 28);
}
