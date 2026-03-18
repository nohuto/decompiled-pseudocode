/*
 * XREFs of ??_ECBaseExpressionMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0145A70
 * Callers:
 *     <none>
 * Callees:
 *     ??1CBaseExpressionMarshaler@DirectComposition@@UEAA@XZ @ 0x1C000A050 (--1CBaseExpressionMarshaler@DirectComposition@@UEAA@XZ.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 */

DirectComposition::CBaseExpressionMarshaler *__fastcall DirectComposition::CBaseExpressionMarshaler::`vector deleting destructor'(
        DirectComposition::CBaseExpressionMarshaler *this,
        char a2)
{
  DirectComposition::CBaseExpressionMarshaler::~CBaseExpressionMarshaler(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}
