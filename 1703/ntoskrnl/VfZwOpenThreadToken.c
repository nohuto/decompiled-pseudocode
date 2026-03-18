/*
 * XREFs of VfZwOpenThreadToken @ 0x140785A90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ViZwCheckVirtualAddress @ 0x140787DFC (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x140787E44 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwOpenThreadToken(__int64 a1, unsigned int a2, char a3, __int64 a4)
{
  __int64 v8; // r8
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
    ViZwCheckVirtualAddress(a4, retaddr);
  LOBYTE(v8) = a3;
  return ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64))pXdvZwOpenThreadToken)(a1, a2, v8, a4);
}
