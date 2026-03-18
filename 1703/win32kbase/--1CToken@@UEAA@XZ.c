/*
 * XREFs of ??1CToken@@UEAA@XZ @ 0x1C00070B0
 * Callers:
 *     ??1CFlipToken@@MEAA@XZ @ 0x1C00063F8 (--1CFlipToken@@MEAA@XZ.c)
 *     ??_GCToken@@UEAAPEAXI@Z @ 0x1C0152710 (--_GCToken@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CRegion@@QEBAJXZ @ 0x1C0012A44 (-Release@CRegion@@QEBAJXZ.c)
 */

void __fastcall CToken::~CToken(CToken *this)
{
  CRegion *v2; // rcx
  bool v3; // zf

  *(_QWORD *)this = &CToken::`vftable';
  v2 = (CRegion *)*((_QWORD *)this + 10);
  if ( v2 )
    CRegion::Release(v2);
  ObfDereferenceObject(*((PVOID *)this + 4));
  v3 = *((_DWORD *)this + 6) == 6;
  *(_QWORD *)this = &CTokenBase::`vftable';
  if ( !v3 )
    *((_DWORD *)this + 6) = 6;
}
