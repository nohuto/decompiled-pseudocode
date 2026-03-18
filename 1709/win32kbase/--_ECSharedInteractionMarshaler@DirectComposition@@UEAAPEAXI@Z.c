/*
 * XREFs of ??_ECSharedInteractionMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C008AE90
 * Callers:
 *     <none>
 * Callees:
 *     ??1CInteractionMarshaler@DirectComposition@@UEAA@XZ @ 0x1C0021CA8 (--1CInteractionMarshaler@DirectComposition@@UEAA@XZ.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 */

DirectComposition::CSharedInteractionMarshaler *__fastcall DirectComposition::CSharedInteractionMarshaler::`vector deleting destructor'(
        DirectComposition::CSharedInteractionMarshaler *this,
        __int64 a2,
        __int64 a3)
{
  char v3; // bl

  v3 = a2;
  *(_QWORD *)this = &DirectComposition::CSharedInteractionMarshaler::`vftable';
  DirectComposition::CInteractionMarshaler::~CInteractionMarshaler(this, a2, a3);
  if ( (v3 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}
