/*
 * XREFs of VfZwQueryDirectoryObject @ 0x140786210
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ViZwCheckVirtualAddress @ 0x140787DFC (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x140787E44 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwQueryDirectoryObject(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        char a4,
        char a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v11; // r9
  void *retaddr; // [rsp+58h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress(a2, retaddr);
    ViZwCheckVirtualAddress(a6, retaddr);
    ViZwCheckVirtualAddress(a7, retaddr);
  }
  LOBYTE(v11) = a4;
  return ((__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64, char, __int64, __int64))pXdvZwQueryDirectoryObject)(
           a1,
           a2,
           a3,
           v11,
           a5,
           a6,
           a7);
}
