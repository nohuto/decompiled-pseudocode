/*
 * XREFs of ??_ECConditionalExpressionMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C013FA90
 * Callers:
 *     <none>
 * Callees:
 *     ??1CBaseExpressionMarshaler@DirectComposition@@UEAA@XZ @ 0x1C002B288 (--1CBaseExpressionMarshaler@DirectComposition@@UEAA@XZ.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 */

DirectComposition::CConditionalExpressionMarshaler *__fastcall DirectComposition::CConditionalExpressionMarshaler::`vector deleting destructor'(
        DirectComposition::CConditionalExpressionMarshaler *this,
        __int64 a2,
        __int64 a3)
{
  char v3; // bl

  v3 = a2;
  *(_QWORD *)this = &DirectComposition::CConditionalExpressionMarshaler::`vftable';
  DirectComposition::CBaseExpressionMarshaler::~CBaseExpressionMarshaler(this, a2, a3);
  if ( (v3 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}
