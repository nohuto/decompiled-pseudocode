/*
 * XREFs of VfZwAllocateVirtualMemory @ 0x1407838F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     VfCheckPageProtection @ 0x14076673C (VfCheckPageProtection.c)
 *     ViZwCheckVirtualAddress @ 0x140787DFC (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x140787E44 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwAllocateVirtualMemory(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  VfCheckPageProtection(a6, retaddr);
  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress(a2, retaddr);
    ViZwCheckVirtualAddress(a4, retaddr);
  }
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64, int, int))pXdvZwAllocateVirtualMemory)(
           a1,
           a2,
           a3,
           a4,
           a5,
           a6);
}
