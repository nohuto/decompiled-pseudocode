/*
 * XREFs of ??_GCD2DBitmap@@MEAAPEAXI@Z @ 0x1800776E0
 * Callers:
 *     ?Release@CD2DBitmap@@UEAAKXZ @ 0x1800773C0 (-Release@CD2DBitmap@@UEAAKXZ.c)
 * Callees:
 *     ??1CD2DBitmap@@MEAA@XZ @ 0x1800774E0 (--1CD2DBitmap@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 */

CD2DBitmap *__fastcall CD2DBitmap::`scalar deleting destructor'(CD2DBitmap *this, char a2)
{
  CD2DBitmap::~CD2DBitmap(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x108uLL);
  return this;
}
