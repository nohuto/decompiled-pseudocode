/*
 * XREFs of VfZwSetSecurityObject @ 0x140837050
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     ViZwCheckVirtualAddress @ 0x1408377C4 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x14083780C (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwSetSecurityObject(__int64 a1, unsigned int a2, ULONG_PTR a3)
{
  ULONG_PTR retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
    ViZwCheckVirtualAddress(a3, retaddr);
  return ((__int64 (__fastcall *)(__int64, _QWORD, ULONG_PTR))pXdvZwSetSecurityObject)(a1, a2, a3);
}
