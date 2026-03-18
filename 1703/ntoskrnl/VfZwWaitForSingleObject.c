/*
 * XREFs of VfZwWaitForSingleObject @ 0x140787B50
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x140787DFC (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x140787E44 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwWaitForSingleObject(__int64 a1, char a2, __int64 a3)
{
  __int64 v6; // rdx
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
    ViZwCheckVirtualAddress(a3, retaddr);
  LOBYTE(v6) = a2;
  return ((__int64 (__fastcall *)(__int64, __int64, __int64))pXdvZwWaitForSingleObject)(a1, v6, a3);
}
