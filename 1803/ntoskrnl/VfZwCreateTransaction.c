/*
 * XREFs of VfZwCreateTransaction @ 0x140834180
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     ViZwCheckObjectAttributes @ 0x1408376DC (ViZwCheckObjectAttributes.c)
 *     ViZwCheckUnicodeString @ 0x14083772C (ViZwCheckUnicodeString.c)
 *     ViZwCheckVirtualAddress @ 0x1408377C4 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x14083780C (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwCreateTransaction(
        ULONG_PTR BugCheckParameter3,
        unsigned int a2,
        __int64 a3,
        ULONG_PTR a4,
        __int64 a5,
        int a6,
        int a7,
        int a8,
        ULONG_PTR BugCheckParameter3a,
        ULONG_PTR a10)
{
  ULONG_PTR retaddr; // [rsp+78h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress(BugCheckParameter3, retaddr);
    ViZwCheckVirtualAddress(a4, retaddr);
    ViZwCheckVirtualAddress(BugCheckParameter3a, retaddr);
    ViZwCheckObjectAttributes(a3, retaddr);
    ViZwCheckUnicodeString(a10, retaddr);
  }
  return ((__int64 (__fastcall *)(ULONG_PTR, _QWORD, __int64, ULONG_PTR, __int64, int, int, int, ULONG_PTR, ULONG_PTR))pXdvZwCreateTransaction)(
           BugCheckParameter3,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           BugCheckParameter3a,
           a10);
}
