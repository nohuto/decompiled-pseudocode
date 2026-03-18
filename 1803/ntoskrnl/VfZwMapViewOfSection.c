/*
 * XREFs of VfZwMapViewOfSection @ 0x140834B90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     VfCheckPageProtection @ 0x140815308 (VfCheckPageProtection.c)
 *     ViZwCheckVirtualAddress @ 0x1408377C4 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x14083780C (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwMapViewOfSection(
        __int64 a1,
        __int64 a2,
        ULONG_PTR a3,
        __int64 a4,
        __int64 a5,
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR a7,
        int a8,
        int a9,
        unsigned int a10)
{
  ULONG_PTR retaddr; // [rsp+88h] [rbp+0h]

  VfCheckPageProtection(a10, retaddr);
  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress(a3, retaddr);
    ViZwCheckVirtualAddress(BugCheckParameter3, retaddr);
    ViZwCheckVirtualAddress(a7, retaddr);
  }
  return ((__int64 (__fastcall *)(__int64, __int64, ULONG_PTR, __int64, __int64, ULONG_PTR, ULONG_PTR, int, int, unsigned int))pXdvZwMapViewOfSection)(
           a1,
           a2,
           a3,
           a4,
           a5,
           BugCheckParameter3,
           a7,
           a8,
           a9,
           a10);
}
