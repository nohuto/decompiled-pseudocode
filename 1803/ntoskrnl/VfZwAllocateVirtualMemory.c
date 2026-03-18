/*
 * XREFs of VfZwAllocateVirtualMemory @ 0x140833220
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     VfCheckPageProtection @ 0x140815308 (VfCheckPageProtection.c)
 *     ViZwCheckVirtualAddress @ 0x1408377C4 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x14083780C (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwAllocateVirtualMemory(
        __int64 a1,
        ULONG_PTR a2,
        __int64 a3,
        ULONG_PTR a4,
        int a5,
        unsigned int a6)
{
  ULONG_PTR retaddr; // [rsp+58h] [rbp+0h]

  VfCheckPageProtection(a6, retaddr);
  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress(a2, retaddr);
    ViZwCheckVirtualAddress(a4, retaddr);
  }
  return ((__int64 (__fastcall *)(__int64, ULONG_PTR, __int64, ULONG_PTR, int, unsigned int))pXdvZwAllocateVirtualMemory)(
           a1,
           a2,
           a3,
           a4,
           a5,
           a6);
}
