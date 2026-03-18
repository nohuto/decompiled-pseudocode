/*
 * XREFs of MUIBugCheck @ 0x140288AA8
 * Callers:
 *     NtGetMUIRegistryInfo @ 0x1404F25F8 (NtGetMUIRegistryInfo.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

void __fastcall __noreturn MUIBugCheck(int a1)
{
  KeBugCheckEx(0x12Au, 2uLL, a1, 0LL, 0LL);
}
