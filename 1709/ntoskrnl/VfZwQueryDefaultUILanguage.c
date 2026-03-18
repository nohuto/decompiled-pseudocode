/*
 * XREFs of VfZwQueryDefaultUILanguage @ 0x1407C84C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ViZwCheckVirtualAddress @ 0x1407CA264 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x1407CA2AC (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwQueryDefaultUILanguage(ULONG_PTR BugCheckParameter3)
{
  ULONG_PTR retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
    ViZwCheckVirtualAddress(BugCheckParameter3, retaddr);
  return ((__int64 (__fastcall *)(ULONG_PTR))pXdvZwQueryDefaultUILanguage)(BugCheckParameter3);
}
