/*
 * XREFs of VfZwAdjustPrivilegesToken @ 0x140783840
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ViZwCheckVirtualAddress @ 0x140787DFC (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x140787E44 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwAdjustPrivilegesToken(__int64 a1, char a2, __int64 a3, unsigned int a4, __int64 a5, __int64 a6)
{
  __int64 v10; // rdx
  __int64 v11; // r8
  void *retaddr; // [rsp+58h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress(v11, retaddr);
    ViZwCheckVirtualAddress(a5, retaddr);
    ViZwCheckVirtualAddress(a6, retaddr);
  }
  LOBYTE(v10) = a2;
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, __int64, __int64))pXdvZwAdjustPrivilegesToken)(
           a1,
           v10,
           a3,
           a4,
           a5,
           a6);
}
