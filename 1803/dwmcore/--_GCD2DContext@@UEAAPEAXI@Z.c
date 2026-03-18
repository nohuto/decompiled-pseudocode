/*
 * XREFs of ??_GCD2DContext@@UEAAPEAXI@Z @ 0x1801DECC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CD2DContext@@UEAA@XZ @ 0x1800D84E8 (--1CD2DContext@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 */

CD2DTarget **__fastcall CD2DContext::`scalar deleting destructor'(CD2DTarget **this, char a2)
{
  CD2DContext::~CD2DContext(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
