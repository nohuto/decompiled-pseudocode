/*
 * XREFs of VfZwQueryDirectoryFile @ 0x1407C8500
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ViZwCheckApcRequirement @ 0x1407CA114 (ViZwCheckApcRequirement.c)
 *     ViZwCheckUnicodeString @ 0x1407CA1CC (ViZwCheckUnicodeString.c)
 *     ViZwCheckVirtualAddress @ 0x1407CA264 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x1407CA2AC (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwQueryDirectoryFile(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        ULONG_PTR a4,
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR a6,
        int a7,
        int a8,
        char a9,
        ULONG_PTR a10,
        char a11)
{
  ULONG_PTR v15; // r8
  ULONG_PTR retaddr; // [rsp+88h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress(v15, retaddr);
    ViZwCheckVirtualAddress(a4, retaddr);
    ViZwCheckVirtualAddress(BugCheckParameter3, retaddr);
    ViZwCheckVirtualAddress(a6, retaddr);
    ViZwCheckUnicodeString(a10, retaddr);
    ViZwCheckApcRequirement(retaddr);
  }
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, ULONG_PTR, ULONG_PTR, ULONG_PTR, int, int, char, ULONG_PTR, char))pXdvZwQueryDirectoryFile)(
           a1,
           a2,
           a3,
           a4,
           BugCheckParameter3,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11);
}
