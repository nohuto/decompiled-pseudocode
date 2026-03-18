/*
 * XREFs of ??1CFlipToken@@MEAA@XZ @ 0x1C00063F8
 * Callers:
 *     ??_ECFlipToken@@MEAAPEAXI@Z @ 0x1C0005D60 (--_ECFlipToken@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Discard@CFlipToken@@UEAAXXZ @ 0x1C0005F60 (-Discard@CFlipToken@@UEAAXXZ.c)
 */

void __fastcall CFlipToken::~CFlipToken(CFlipToken *this)
{
  bool v1; // zf

  v1 = *((_DWORD *)this + 6) == 6;
  *(_QWORD *)this = &CFlipToken::`vftable';
  if ( !v1 )
    CFlipToken::Discard(this);
  CToken::~CToken(this);
}
