/*
 * XREFs of VfZwCreateKey @ 0x1407C6970
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ViZwCheckObjectAttributes @ 0x1407CA17C (ViZwCheckObjectAttributes.c)
 *     ViZwCheckUnicodeString @ 0x1407CA1CC (ViZwCheckUnicodeString.c)
 *     ViZwCheckVirtualAddress @ 0x1407CA264 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x1407CA2AC (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwCreateKey(
        ULONG_PTR BugCheckParameter3,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        ULONG_PTR a5,
        int a6,
        ULONG_PTR BugCheckParameter3a)
{
  ULONG_PTR retaddr; // [rsp+58h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress(BugCheckParameter3, retaddr);
    ViZwCheckObjectAttributes(a3, retaddr);
    ViZwCheckUnicodeString(a5, retaddr);
    ViZwCheckVirtualAddress(BugCheckParameter3a, retaddr);
  }
  return ((__int64 (__fastcall *)(ULONG_PTR, _QWORD, __int64, _QWORD, ULONG_PTR, int, ULONG_PTR))pXdvZwCreateKey)(
           BugCheckParameter3,
           a2,
           a3,
           a4,
           a5,
           a6,
           BugCheckParameter3a);
}
