/*
 * XREFs of ??_ECSharedWriteScalarMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C014F808
 * Callers:
 *     ??_ECSharedWriteScalarMarshaler@DirectComposition@@WBA@EAAPEAXI@Z @ 0x1C00A6470 (--_ECSharedWriteScalarMarshaler@DirectComposition@@WBA@EAAPEAXI@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 */

DirectComposition::CSharedWriteScalarMarshaler *__fastcall DirectComposition::CSharedWriteScalarMarshaler::`vector deleting destructor'(
        DirectComposition::CSharedWriteScalarMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CAnimationMarshaler::`vftable'{for `DirectComposition::CBaseAnimation'};
  *((_QWORD *)this + 2) = &DirectComposition::CSharedWriteScalarMarshaler::`vftable'{for `DirectComposition::CResourceMarshaler'};
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}
