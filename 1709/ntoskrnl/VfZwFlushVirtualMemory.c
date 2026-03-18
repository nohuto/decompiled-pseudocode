/*
 * XREFs of VfZwFlushVirtualMemory @ 0x1407C7360
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ViZwCheckVirtualAddress @ 0x1407CA264 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x1407CA2AC (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwFlushVirtualMemory(__int64 a1, ULONG_PTR a2, ULONG_PTR a3, ULONG_PTR a4)
{
  ULONG_PTR retaddr; // [rsp+38h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress(a2, retaddr);
    ViZwCheckVirtualAddress(a3, retaddr);
    ViZwCheckVirtualAddress(a4, retaddr);
  }
  return ((__int64 (__fastcall *)(__int64, ULONG_PTR, ULONG_PTR, ULONG_PTR))pXdvZwFlushVirtualMemory)(a1, a2, a3, a4);
}
