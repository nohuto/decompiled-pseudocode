/*
 * XREFs of VfZwOpenThreadTokenEx @ 0x140785B00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ViZwCheckVirtualAddress @ 0x140787DFC (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x140787E44 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwOpenThreadTokenEx(__int64 a1, unsigned int a2, char a3, unsigned int a4, __int64 a5)
{
  __int64 v9; // r8
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
    ViZwCheckVirtualAddress(a5, retaddr);
  LOBYTE(v9) = a3;
  return ((__int64 (__fastcall *)(__int64, _QWORD, __int64, _QWORD, __int64))pXdvZwOpenThreadTokenEx)(
           a1,
           a2,
           v9,
           a4,
           a5);
}
