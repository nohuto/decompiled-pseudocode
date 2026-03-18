/*
 * XREFs of ??_ECSharedSectionMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C002A550
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 */

DirectComposition::CSharedSectionMarshaler *__fastcall DirectComposition::CSharedSectionMarshaler::`vector deleting destructor'(
        DirectComposition::CSharedSectionMarshaler *this,
        __int64 a2,
        __int64 a3)
{
  char v4; // di
  void *v5; // rcx

  *(_QWORD *)this = &DirectComposition::CSharedSectionMarshaler::`vftable';
  v4 = a2;
  v5 = (void *)*((_QWORD *)this + 5);
  if ( v5 )
    ObfDereferenceObject(v5);
  if ( (v4 & 1) != 0 )
    Win32FreePool(this, a2, a3);
  return this;
}
