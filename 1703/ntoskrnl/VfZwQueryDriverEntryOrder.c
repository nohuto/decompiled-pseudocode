/*
 * XREFs of VfZwQueryDriverEntryOrder @ 0x1407862D0
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x140787DFC (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x140787E44 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwQueryDriverEntryOrder(__int64 a1, __int64 a2)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress(a1, retaddr);
    ViZwCheckVirtualAddress(a2, retaddr);
  }
  return ((__int64 (__fastcall *)(__int64, __int64))pXdvZwQueryDriverEntryOrder)(a1, a2);
}
