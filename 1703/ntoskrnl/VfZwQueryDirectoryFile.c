/*
 * XREFs of VfZwQueryDirectoryFile @ 0x140786100
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ViZwCheckApcRequirement @ 0x140787CB4 (ViZwCheckApcRequirement.c)
 *     ViZwCheckUnicodeString @ 0x140787D68 (ViZwCheckUnicodeString.c)
 *     ViZwCheckVirtualAddress @ 0x140787DFC (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x140787E44 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwQueryDirectoryFile(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        char a9,
        __int64 a10,
        char a11)
{
  __int64 v15; // r8
  void *retaddr; // [rsp+88h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress(v15, retaddr);
    ViZwCheckVirtualAddress(a4, retaddr);
    ViZwCheckVirtualAddress(a5, retaddr);
    ViZwCheckVirtualAddress(a6, retaddr);
    ViZwCheckUnicodeString(a10, retaddr);
    ViZwCheckApcRequirement(retaddr);
  }
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64, __int64, int, int, char, __int64, char))pXdvZwQueryDirectoryFile)(
           a1,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11);
}
