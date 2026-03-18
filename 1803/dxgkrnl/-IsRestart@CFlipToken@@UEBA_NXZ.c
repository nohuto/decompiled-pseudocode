/*
 * XREFs of ?IsRestart@CFlipToken@@UEBA_NXZ @ 0x1C000EA00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CFlipToken::IsRestart(CFlipToken *this)
{
  return *((_BYTE *)this + 116);
}
