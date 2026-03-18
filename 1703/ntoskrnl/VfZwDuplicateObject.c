/*
 * XREFs of VfZwDuplicateObject @ 0x140784C00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ViZwCheckVirtualAddress @ 0x140787DFC (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x140787E44 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwDuplicateObject(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6, int a7)
{
  void *retaddr; // [rsp+48h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
    ViZwCheckVirtualAddress(a4, retaddr);
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64, int, int, int))pXdvZwDuplicateObject)(
           a1,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7);
}
