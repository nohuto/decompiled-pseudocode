/*
 * XREFs of ?Confirm@CFlipToken@@UEAAXXZ @ 0x1C0006020
 * Callers:
 *     <none>
 * Callees:
 *     ?TraceStateChanged@CFlipToken@@AEBAXXZ @ 0x1C0005D98 (-TraceStateChanged@CFlipToken@@AEBAXXZ.c)
 */

void __fastcall CFlipToken::Confirm(CFlipToken *this)
{
  *((_DWORD *)this + 6) = 4;
  CFlipToken::TraceStateChanged(this);
  CFlipToken::ConfirmIndependentFlipEntry(this);
}
