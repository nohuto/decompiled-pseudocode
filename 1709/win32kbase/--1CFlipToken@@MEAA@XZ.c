/*
 * XREFs of ??1CFlipToken@@MEAA@XZ @ 0x1C00383EC
 * Callers:
 *     ??_ECFlipToken@@MEAAPEAXI@Z @ 0x1C0037D50 (--_ECFlipToken@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1CToken@@UEAA@XZ @ 0x1C0025940 (--1CToken@@UEAA@XZ.c)
 *     ?Discard@CFlipToken@@UEAAXXZ @ 0x1C0037F50 (-Discard@CFlipToken@@UEAAXXZ.c)
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
