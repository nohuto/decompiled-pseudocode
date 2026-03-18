/*
 * XREFs of ??_ECBaseExpressionMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0018520
 * Callers:
 *     <none>
 * Callees:
 *     ??1CBaseExpressionMarshaler@DirectComposition@@UEAA@XZ @ 0x1C001F36C (--1CBaseExpressionMarshaler@DirectComposition@@UEAA@XZ.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 */

DirectComposition::CBaseExpressionMarshaler *__fastcall DirectComposition::CBaseExpressionMarshaler::`vector deleting destructor'(
        DirectComposition::CBaseExpressionMarshaler *this,
        char a2)
{
  DirectComposition::CBaseExpressionMarshaler::~CBaseExpressionMarshaler(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool(this);
  return this;
}
