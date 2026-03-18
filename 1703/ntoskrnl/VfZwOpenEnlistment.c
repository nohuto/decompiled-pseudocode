/*
 * XREFs of VfZwOpenEnlistment @ 0x140785540
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ViZwCheckObjectAttributes @ 0x140787D18 (ViZwCheckObjectAttributes.c)
 *     ViZwCheckVirtualAddress @ 0x140787DFC (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x140787E44 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwOpenEnlistment(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5)
{
  void *retaddr; // [rsp+48h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress(a1, retaddr);
    ViZwCheckObjectAttributes(a5, retaddr);
  }
  return ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64))pXdvZwOpenEnlistment)(a1, a2, a3, a4, a5);
}
