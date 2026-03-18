/*
 * XREFs of VfZwAlpcCreatePort @ 0x140833500
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     ViZwCheckObjectAttributes @ 0x1408376DC (ViZwCheckObjectAttributes.c)
 *     ViZwCheckVirtualAddress @ 0x1408377C4 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x14083780C (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwAlpcCreatePort(ULONG_PTR BugCheckParameter3, __int64 a2, ULONG_PTR a3)
{
  ULONG_PTR retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress(BugCheckParameter3, retaddr);
    ViZwCheckVirtualAddress(a3, retaddr);
    ViZwCheckObjectAttributes(a2, retaddr);
  }
  return ((__int64 (__fastcall *)(ULONG_PTR, __int64, ULONG_PTR))pXdvZwAlpcCreatePort)(BugCheckParameter3, a2, a3);
}
