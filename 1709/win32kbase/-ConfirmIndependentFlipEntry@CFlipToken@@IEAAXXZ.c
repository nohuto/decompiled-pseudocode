/*
 * XREFs of ?ConfirmIndependentFlipEntry@CFlipToken@@IEAAXXZ @ 0x1C0037E14
 * Callers:
 *     ?Discard@CFlipToken@@UEAAXXZ @ 0x1C0037F50 (-Discard@CFlipToken@@UEAAXXZ.c)
 *     ?Confirm@CFlipToken@@UEAAXXZ @ 0x1C0038020 (-Confirm@CFlipToken@@UEAAXXZ.c)
 * Callees:
 *     ?ConfirmIndependentFlipEntry@CompositionSurfaceObject@@QEAAJ_K00II0@Z @ 0x1C0154030 (-ConfirmIndependentFlipEntry@CompositionSurfaceObject@@QEAAJ_K00II0@Z.c)
 */

void __fastcall CFlipToken::ConfirmIndependentFlipEntry(CFlipToken *this)
{
  if ( *((_BYTE *)this + 221) )
  {
    CompositionSurfaceObject::ConfirmIndependentFlipEntry(
      *((CompositionSurfaceObject **)this + 4),
      *((_QWORD *)this + 5),
      *((_QWORD *)this + 28),
      *((_QWORD *)this + 13),
      *((_DWORD *)this + 60),
      *((_DWORD *)this + 61),
      *((_QWORD *)this + 29));
    *((_BYTE *)this + 221) = 0;
  }
}
