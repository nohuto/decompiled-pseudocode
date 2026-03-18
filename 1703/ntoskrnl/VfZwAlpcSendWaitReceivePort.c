/*
 * XREFs of VfZwAlpcSendWaitReceivePort @ 0x140783EC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ViZwCheckVirtualAddress @ 0x140787DFC (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x140787E44 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwAlpcSendWaitReceivePort(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v11; // r8
  void *retaddr; // [rsp+78h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress(v11, retaddr);
    ViZwCheckVirtualAddress(a4, retaddr);
    ViZwCheckVirtualAddress(a5, retaddr);
    ViZwCheckVirtualAddress(a6, retaddr);
    ViZwCheckVirtualAddress(a7, retaddr);
    ViZwCheckVirtualAddress(a8, retaddr);
  }
  return ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64, __int64, __int64, __int64))pXdvZwAlpcSendWaitReceivePort)(
           a1,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8);
}
