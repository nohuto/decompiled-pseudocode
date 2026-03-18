/*
 * XREFs of VfZwDisplayString @ 0x1408344D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     ViZwCheckUnicodeString @ 0x14083772C (ViZwCheckUnicodeString.c)
 *     ViZwShouldCheck @ 0x14083780C (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwDisplayString(ULONG_PTR BugCheckParameter3)
{
  ULONG_PTR retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
    ViZwCheckUnicodeString(BugCheckParameter3, retaddr);
  return ((__int64 (__fastcall *)(ULONG_PTR))pXdvZwDisplayString)(BugCheckParameter3);
}
