/*
 * XREFs of VfZwEnumerateKey @ 0x140784DF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ViZwCheckVirtualAddress @ 0x140787DFC (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x140787E44 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwEnumerateKey(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4, int a5, __int64 a6)
{
  __int64 v10; // r9
  void *retaddr; // [rsp+58h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress(v10, retaddr);
    ViZwCheckVirtualAddress(a6, retaddr);
  }
  return ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, __int64, int, __int64))pXdvZwEnumerateKey)(
           a1,
           a2,
           a3,
           a4,
           a5,
           a6);
}
