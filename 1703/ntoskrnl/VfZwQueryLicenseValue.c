/*
 * XREFs of VfZwQueryLicenseValue @ 0x1407869B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ViZwCheckUnicodeString @ 0x140787D68 (ViZwCheckUnicodeString.c)
 *     ViZwCheckVirtualAddress @ 0x140787DFC (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x140787E44 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwQueryLicenseValue(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  void *retaddr; // [rsp+48h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress(a2, retaddr);
    ViZwCheckVirtualAddress(a3, retaddr);
    ViZwCheckVirtualAddress(a5, retaddr);
    ViZwCheckUnicodeString(a1, retaddr);
  }
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, __int64))pXdvZwQueryLicenseValue)(
           a1,
           a2,
           a3,
           a4,
           a5);
}
