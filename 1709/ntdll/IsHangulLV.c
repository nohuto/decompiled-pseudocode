/*
 * XREFs of IsHangulLV @ 0x1800905C0
 * Callers:
 *     Normalization__NormalizeCharacter @ 0x180080920 (Normalization__NormalizeCharacter.c)
 *     CanComposeHangul @ 0x1800F8BCC (CanComposeHangul.c)
 *     ComposeHangulLVT @ 0x1800F8C34 (ComposeHangulLVT.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsHangulLV(int a1)
{
  return (unsigned int)(a1 - 44032) <= 0x2BA3 && a1 - 44032 == 28 * ((a1 - 44032) / 28);
}
