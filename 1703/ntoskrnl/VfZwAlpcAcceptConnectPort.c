/*
 * XREFs of VfZwAlpcAcceptConnectPort @ 0x140783990
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ViZwCheckObjectAttributes @ 0x140787D18 (ViZwCheckObjectAttributes.c)
 *     ViZwCheckVirtualAddress @ 0x140787DFC (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x140787E44 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwAlpcAcceptConnectPort(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char a9)
{
  void *retaddr; // [rsp+78h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress(a1, retaddr);
    ViZwCheckVirtualAddress(a5, retaddr);
    ViZwCheckVirtualAddress(a7, retaddr);
    ViZwCheckVirtualAddress(a8, retaddr);
    ViZwCheckObjectAttributes(a4, retaddr);
  }
  return ((__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64, __int64, __int64, __int64, __int64, char))pXdvZwAlpcAcceptConnectPort)(
           a1,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9);
}
