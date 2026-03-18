/*
 * XREFs of VfZwDeleteBootEntry @ 0x1407849F0
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x140787DFC (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x140787E44 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwDeleteBootEntry(unsigned int a1)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
    ViZwCheckVirtualAddress(0LL, retaddr);
  return ((__int64 (__fastcall *)(_QWORD))pXdvZwDeleteBootEntry)(a1);
}
