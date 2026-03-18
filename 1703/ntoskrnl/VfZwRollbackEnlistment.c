/*
 * XREFs of VfZwRollbackEnlistment @ 0x140787150
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x140787DFC (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x140787E44 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwRollbackEnlistment(__int64 a1, __int64 a2)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
    ViZwCheckVirtualAddress(a2, retaddr);
  return ((__int64 (__fastcall *)(__int64, __int64))pXdvZwRollbackEnlistment)(a1, a2);
}
