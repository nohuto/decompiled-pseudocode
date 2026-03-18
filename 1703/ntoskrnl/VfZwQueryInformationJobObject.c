/*
 * XREFs of VfZwQueryInformationJobObject @ 0x140786580
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ViZwCheckVirtualAddress @ 0x140787DFC (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x140787E44 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwQueryInformationJobObject(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4, __int64 a5)
{
  __int64 v9; // r8
  void *retaddr; // [rsp+48h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress(v9, retaddr);
    ViZwCheckVirtualAddress(a5, retaddr);
  }
  return ((__int64 (__fastcall *)(__int64, _QWORD, __int64, _QWORD, __int64))pXdvZwQueryInformationJobObject)(
           a1,
           a2,
           a3,
           a4,
           a5);
}
