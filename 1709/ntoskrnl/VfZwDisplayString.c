/*
 * XREFs of VfZwDisplayString @ 0x1407C6F70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ViZwCheckUnicodeString @ 0x1407CA1CC (ViZwCheckUnicodeString.c)
 *     ViZwShouldCheck @ 0x1407CA2AC (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwDisplayString(ULONG_PTR BugCheckParameter3)
{
  ULONG_PTR retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
    ViZwCheckUnicodeString(BugCheckParameter3, retaddr);
  return ((__int64 (__fastcall *)(ULONG_PTR))pXdvZwDisplayString)(BugCheckParameter3);
}
