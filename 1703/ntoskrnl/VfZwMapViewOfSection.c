/*
 * XREFs of VfZwMapViewOfSection @ 0x140785250
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     VfCheckPageProtection @ 0x14076673C (VfCheckPageProtection.c)
 *     ViZwCheckVirtualAddress @ 0x140787DFC (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x140787E44 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwMapViewOfSection(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        int a9,
        int a10)
{
  __int64 retaddr; // [rsp+88h] [rbp+0h]

  VfCheckPageProtection(a10, retaddr);
  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress(a3, retaddr);
    ViZwCheckVirtualAddress(a6, retaddr);
    ViZwCheckVirtualAddress(a7, retaddr);
  }
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64, __int64, __int64, int, int, int))pXdvZwMapViewOfSection)(
           a1,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10);
}
