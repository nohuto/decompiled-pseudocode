/*
 * XREFs of ??_ECFlipToken@@MEAAPEAXI@Z @ 0x1C0037D50
 * Callers:
 *     <none>
 * Callees:
 *     ??1CFlipToken@@MEAA@XZ @ 0x1C00383EC (--1CFlipToken@@MEAA@XZ.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 */

CFlipToken *__fastcall CFlipToken::`vector deleting destructor'(CFlipToken *this, char a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8

  CFlipToken::~CFlipToken(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool(this, v4, v5);
  return this;
}
