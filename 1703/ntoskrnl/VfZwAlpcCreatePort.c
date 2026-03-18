/*
 * XREFs of VfZwAlpcCreatePort @ 0x140783BD0
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckObjectAttributes @ 0x140787D18 (ViZwCheckObjectAttributes.c)
 *     ViZwCheckVirtualAddress @ 0x140787DFC (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x140787E44 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwAlpcCreatePort(__int64 a1, __int64 a2, __int64 a3)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress(a1, retaddr);
    ViZwCheckVirtualAddress(a3, retaddr);
    ViZwCheckObjectAttributes(a2, retaddr);
  }
  return ((__int64 (__fastcall *)(__int64, __int64, __int64))pXdvZwAlpcCreatePort)(a1, a2, a3);
}
