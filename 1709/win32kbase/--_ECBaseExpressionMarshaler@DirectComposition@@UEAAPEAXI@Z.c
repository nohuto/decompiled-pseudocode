/*
 * XREFs of ??_ECBaseExpressionMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C002DB20
 * Callers:
 *     <none>
 * Callees:
 *     ??1CBaseExpressionMarshaler@DirectComposition@@UEAA@XZ @ 0x1C002B288 (--1CBaseExpressionMarshaler@DirectComposition@@UEAA@XZ.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 */

DirectComposition::CBaseExpressionMarshaler *__fastcall DirectComposition::CBaseExpressionMarshaler::`vector deleting destructor'(
        DirectComposition::CBaseExpressionMarshaler *this,
        __int64 a2,
        __int64 a3)
{
  char v3; // bl
  __int64 v5; // rdx
  __int64 v6; // r8

  v3 = a2;
  DirectComposition::CBaseExpressionMarshaler::~CBaseExpressionMarshaler(this, a2, a3);
  if ( (v3 & 1) != 0 )
    Win32FreePool(this, v5, v6);
  return this;
}
