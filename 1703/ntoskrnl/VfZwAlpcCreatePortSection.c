/*
 * XREFs of VfZwAlpcCreatePortSection @ 0x140783C50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ViZwCheckVirtualAddress @ 0x140787DFC (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x140787E44 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwAlpcCreatePortSection(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  void *retaddr; // [rsp+58h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress(a5, retaddr);
    ViZwCheckVirtualAddress(a6, retaddr);
  }
  return ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64, __int64))pXdvZwAlpcCreatePortSection)(
           a1,
           a2,
           a3,
           a4,
           a5,
           a6);
}
