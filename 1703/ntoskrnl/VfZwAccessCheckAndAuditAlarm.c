/*
 * XREFs of VfZwAccessCheckAndAuditAlarm @ 0x140783660
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ViZwCheckUnicodeString @ 0x140787D68 (ViZwCheckUnicodeString.c)
 *     ViZwCheckVirtualAddress @ 0x140787DFC (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x140787E44 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwAccessCheckAndAuditAlarm(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7,
        char a8,
        __int64 a9,
        __int64 a10,
        __int64 a11)
{
  void *retaddr; // [rsp+88h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckUnicodeString(a1, retaddr);
    ViZwCheckUnicodeString(a3, retaddr);
    ViZwCheckUnicodeString(a4, retaddr);
    ViZwCheckVirtualAddress(a5, retaddr);
    ViZwCheckVirtualAddress(a7, retaddr);
    ViZwCheckVirtualAddress(a9, retaddr);
    ViZwCheckVirtualAddress(a11, retaddr);
  }
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64, int, __int64, char, __int64, __int64, __int64))pXdvZwAccessCheckAndAuditAlarm)(
           a1,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11);
}
