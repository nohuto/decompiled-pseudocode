/*
 * XREFs of VfZwDuplicateToken @ 0x140784C90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ViZwCheckObjectAttributes @ 0x140787D18 (ViZwCheckObjectAttributes.c)
 *     ViZwCheckVirtualAddress @ 0x140787DFC (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x140787E44 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwDuplicateToken(__int64 a1, unsigned int a2, __int64 a3, char a4, int a5, __int64 a6)
{
  __int64 v10; // r8
  __int64 v11; // r9
  void *retaddr; // [rsp+58h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckObjectAttributes(v10, retaddr);
    ViZwCheckVirtualAddress(a6, retaddr);
  }
  LOBYTE(v11) = a4;
  return ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, int, __int64))pXdvZwDuplicateToken)(
           a1,
           a2,
           a3,
           v11,
           a5,
           a6);
}
