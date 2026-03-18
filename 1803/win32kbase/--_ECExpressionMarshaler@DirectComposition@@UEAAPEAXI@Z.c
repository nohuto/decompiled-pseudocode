/*
 * XREFs of ??_ECExpressionMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0009A70
 * Callers:
 *     <none>
 * Callees:
 *     ??1CBaseExpressionMarshaler@DirectComposition@@UEAA@XZ @ 0x1C000A050 (--1CBaseExpressionMarshaler@DirectComposition@@UEAA@XZ.c)
 */

DirectComposition::CExpressionMarshaler *__fastcall DirectComposition::CExpressionMarshaler::`vector deleting destructor'(
        DirectComposition::CExpressionMarshaler *this,
        char a2)
{
  DirectComposition::CBaseExpressionMarshaler::~CBaseExpressionMarshaler(this);
  if ( (a2 & 1) != 0 && (int)IsWin32FreePoolImplSupported() >= 0 )
    Win32FreePoolImpl(this);
  return this;
}
