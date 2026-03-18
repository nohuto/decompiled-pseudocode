/*
 * XREFs of ??_ECDirectFlipInfo@@UEAAPEAXI@Z @ 0x180163730
 * Callers:
 *     <none>
 * Callees:
 *     ?Reset@CDirectFlipInfo@@UEAAXXZ @ 0x180079010 (-Reset@CDirectFlipInfo@@UEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 */

CDirectFlipInfo *__fastcall CDirectFlipInfo::`vector deleting destructor'(CDirectFlipInfo *this, char a2)
{
  *(_QWORD *)this = &CDirectFlipInfo::`vftable';
  CDirectFlipInfo::Reset(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
