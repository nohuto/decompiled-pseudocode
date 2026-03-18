/*
 * XREFs of ?Reset@?$CDynamicArray@PEAUInjectManipulationArgs@@$0HHHAHDFF@@@QEAAX_N@Z @ 0x1C015FC20
 * Callers:
 *     ??_ECManipulationMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0145CD0 (--_ECManipulationMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??_GCInputManager@@IEAAPEAXI@Z @ 0x1C015F5F8 (--_GCInputManager@@IEAAPEAXI@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 */

__int64 __fastcall CDynamicArray<InjectManipulationArgs *,2003858261>::Reset(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)a1;
  if ( v2 )
  {
    result = Win32FreePool(v2);
    *(_QWORD *)a1 = 0LL;
  }
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  return result;
}
