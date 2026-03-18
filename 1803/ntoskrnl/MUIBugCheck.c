/*
 * XREFs of MUIBugCheck @ 0x1402BCDF8
 * Callers:
 *     NtGetMUIRegistryInfo @ 0x140568A90 (NtGetMUIRegistryInfo.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn MUIBugCheck(int a1)
{
  KeBugCheckEx(0x12Au, 2uLL, a1, 0LL, 0LL);
}
