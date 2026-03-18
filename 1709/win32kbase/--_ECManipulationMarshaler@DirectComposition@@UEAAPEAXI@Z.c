/*
 * XREFs of ??_ECManipulationMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C013FC00
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     ?Reset@?$CDynamicArray@PEAUInjectManipulationArgs@@$0HHHAHDFF@@@QEAAX_N@Z @ 0x1C0140470 (-Reset@-$CDynamicArray@PEAUInjectManipulationArgs@@$0HHHAHDFF@@@QEAAX_N@Z.c)
 */

DirectComposition::CManipulationMarshaler *__fastcall DirectComposition::CManipulationMarshaler::`vector deleting destructor'(
        DirectComposition::CManipulationMarshaler *this,
        char a2)
{
  char *v2; // rbx
  __int64 v3; // rsi
  __int64 v6; // rcx

  v2 = (char *)this + 96;
  v3 = 0LL;
  if ( *((_DWORD *)this + 26) )
  {
    do
    {
      v6 = *(_QWORD *)(*(_QWORD *)v2 + 8 * v3);
      if ( v6 )
        Win32FreePool(v6);
      v3 = (unsigned int)(v3 + 1);
    }
    while ( (unsigned int)v3 < *((_DWORD *)v2 + 2) );
  }
  CDynamicArray<InjectManipulationArgs *,2003858261>::Reset(v2);
  CDynamicArray<InjectManipulationArgs *,2003858261>::Reset(v2);
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}
