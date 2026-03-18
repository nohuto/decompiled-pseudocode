/*
 * XREFs of VfZwWaitForMultipleObjects @ 0x140787AC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ViZwCheckVirtualAddress @ 0x140787DFC (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x140787E44 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwWaitForMultipleObjects(unsigned int a1, __int64 a2, unsigned int a3, char a4, __int64 a5)
{
  __int64 v9; // r9
  void *retaddr; // [rsp+48h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress(a2, retaddr);
    ViZwCheckVirtualAddress(a5, retaddr);
  }
  LOBYTE(v9) = a4;
  return ((__int64 (__fastcall *)(_QWORD, __int64, _QWORD, __int64, __int64))pXdvZwWaitForMultipleObjects)(
           a1,
           a2,
           a3,
           v9,
           a5);
}
