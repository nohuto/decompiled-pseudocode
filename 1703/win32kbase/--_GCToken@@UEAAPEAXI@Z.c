/*
 * XREFs of ??_GCToken@@UEAAPEAXI@Z @ 0x1C0152710
 * Callers:
 *     <none>
 * Callees:
 *     ??1CToken@@UEAA@XZ @ 0x1C00070B0 (--1CToken@@UEAA@XZ.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 */

CToken *__fastcall CToken::`scalar deleting destructor'(CToken *this, char a2)
{
  CToken::~CToken(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}
