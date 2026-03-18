/*
 * XREFs of MUIBugCheck @ 0x14025EEF0
 * Callers:
 *     NtGetMUIRegistryInfo @ 0x140568580 (NtGetMUIRegistryInfo.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

void __fastcall __noreturn MUIBugCheck(int a1)
{
  KeBugCheckEx(0x12Au, 2uLL, a1, 0LL, 0LL);
}
