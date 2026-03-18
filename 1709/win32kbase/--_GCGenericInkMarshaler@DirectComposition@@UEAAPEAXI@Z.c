/*
 * XREFs of ??_GCGenericInkMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C013FAD0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 */

DirectComposition::CGenericInkMarshaler *__fastcall DirectComposition::CGenericInkMarshaler::`scalar deleting destructor'(
        DirectComposition::CGenericInkMarshaler *this,
        char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx

  *(_QWORD *)this = &DirectComposition::CGenericInkMarshaler::`vftable';
  v4 = *((_QWORD *)this + 10);
  if ( v4 )
    Win32FreePool(v4);
  v5 = *((_QWORD *)this + 5);
  if ( v5 )
    Win32FreePool(v5);
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}
