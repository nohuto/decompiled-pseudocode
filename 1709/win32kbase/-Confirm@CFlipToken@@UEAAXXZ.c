/*
 * XREFs of ?Confirm@CFlipToken@@UEAAXXZ @ 0x1C0038020
 * Callers:
 *     <none>
 * Callees:
 *     ?TraceStateChanged@CFlipToken@@AEBAXXZ @ 0x1C0037D88 (-TraceStateChanged@CFlipToken@@AEBAXXZ.c)
 *     ?ConfirmIndependentFlipEntry@CFlipToken@@IEAAXXZ @ 0x1C0037E14 (-ConfirmIndependentFlipEntry@CFlipToken@@IEAAXXZ.c)
 */

void __fastcall CFlipToken::Confirm(CFlipToken *this)
{
  *((_DWORD *)this + 6) = 4;
  CFlipToken::TraceStateChanged(this);
  CFlipToken::ConfirmIndependentFlipEntry(this);
}
