/*
 * XREFs of VfZwProtectVirtualMemory @ 0x140785EC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     VfCheckPageProtection @ 0x14076673C (VfCheckPageProtection.c)
 *     ViZwCheckVirtualAddress @ 0x140787DFC (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x140787E44 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwProtectVirtualMemory(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  VfCheckPageProtection(a4, retaddr);
  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress(a2, retaddr);
    ViZwCheckVirtualAddress(a3, retaddr);
    ViZwCheckVirtualAddress(a5, retaddr);
  }
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, __int64))pXdvZwProtectVirtualMemory)(
           a1,
           a2,
           a3,
           a4,
           a5);
}
