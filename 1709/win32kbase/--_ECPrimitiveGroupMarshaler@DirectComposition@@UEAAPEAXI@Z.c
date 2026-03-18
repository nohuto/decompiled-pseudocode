/*
 * XREFs of ??_ECPrimitiveGroupMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0027B20
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 */

DirectComposition::CPrimitiveGroupMarshaler *__fastcall DirectComposition::CPrimitiveGroupMarshaler::`vector deleting destructor'(
        DirectComposition::CPrimitiveGroupMarshaler *this,
        __int64 a2,
        __int64 a3)
{
  *(_QWORD *)this = &DirectComposition::CPrimitiveGroupMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    Win32FreePool(this, a2, a3);
  return this;
}
