/*
 * XREFs of VfZwQueryValueKey @ 0x140836690
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     ViZwCheckUnicodeString @ 0x14083772C (ViZwCheckUnicodeString.c)
 *     ViZwCheckVirtualAddress @ 0x1408377C4 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x14083780C (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwQueryValueKey(
        __int64 a1,
        ULONG_PTR a2,
        unsigned int a3,
        ULONG_PTR a4,
        int a5,
        ULONG_PTR BugCheckParameter3)
{
  ULONG_PTR retaddr; // [rsp+58h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckUnicodeString(a2, retaddr);
    ViZwCheckVirtualAddress(a4, retaddr);
    ViZwCheckVirtualAddress(BugCheckParameter3, retaddr);
  }
  return ((__int64 (__fastcall *)(__int64, ULONG_PTR, _QWORD, ULONG_PTR, int, ULONG_PTR))pXdvZwQueryValueKey)(
           a1,
           a2,
           a3,
           a4,
           a5,
           BugCheckParameter3);
}
