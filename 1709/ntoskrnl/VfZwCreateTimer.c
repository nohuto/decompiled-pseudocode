/*
 * XREFs of VfZwCreateTimer @ 0x1407C6B90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ViZwCheckObjectAttributes @ 0x1407CA17C (ViZwCheckObjectAttributes.c)
 *     ViZwCheckVirtualAddress @ 0x1407CA264 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x1407CA2AC (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwCreateTimer(ULONG_PTR BugCheckParameter3, unsigned int a2, __int64 a3, unsigned int a4)
{
  ULONG_PTR retaddr; // [rsp+38h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress(BugCheckParameter3, retaddr);
    ViZwCheckObjectAttributes(a3, retaddr);
  }
  return ((__int64 (__fastcall *)(ULONG_PTR, _QWORD, __int64, _QWORD))pXdvZwCreateTimer)(BugCheckParameter3, a2, a3, a4);
}
