/*
 * XREFs of IsHangulLV @ 0x14023F80C
 * Callers:
 *     CanComposeHangul @ 0x14023F760 (CanComposeHangul.c)
 *     ComposeHangulLVT @ 0x14023F7D8 (ComposeHangulLVT.c)
 *     Normalization__NormalizeCharacter @ 0x1406EE17C (Normalization__NormalizeCharacter.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsHangulLV(int a1)
{
  return (unsigned int)(a1 - 44032) <= 0x2BA3 && a1 - 44032 == 28 * ((a1 - 44032) / 28);
}
