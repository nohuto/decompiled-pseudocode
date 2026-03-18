/*
 * XREFs of VfZwSetTimer @ 0x1407877C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ViZwCheckVirtualAddress @ 0x140787DFC (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x140787E44 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwSetTimer(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, int a6, __int64 a7)
{
  void *retaddr; // [rsp+58h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress(a2, retaddr);
    ViZwCheckVirtualAddress(a3, retaddr);
    ViZwCheckVirtualAddress(a4, retaddr);
    ViZwCheckVirtualAddress(a7, retaddr);
  }
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64, char, int, __int64))pXdvZwSetTimer)(
           a1,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7);
}
