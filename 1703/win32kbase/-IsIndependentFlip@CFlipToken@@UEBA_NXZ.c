/*
 * XREFs of ?IsIndependentFlip@CFlipToken@@UEBA_NXZ @ 0x1C0010D00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CFlipToken::IsIndependentFlip(CFlipToken *this)
{
  return *((_BYTE *)this + 220);
}
