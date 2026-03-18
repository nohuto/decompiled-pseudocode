/*
 * XREFs of VfZwQueryInformationFile @ 0x1407864F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ViZwCheckVirtualAddress @ 0x140787DFC (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x140787E44 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwQueryInformationFile(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, int a5)
{
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress(a2, retaddr);
    ViZwCheckVirtualAddress(a3, retaddr);
  }
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, int))pXdvZwQueryInformationFile)(
           a1,
           a2,
           a3,
           a4,
           a5);
}
