/*
 * XREFs of CmSiBugCheck @ 0x140223454
 * Callers:
 *     HvpAllExceptionsFatalFilter @ 0x140706C30 (HvpAllExceptionsFatalFilter.c)
 *     HvpInpageErrorFilter @ 0x140706C4C (HvpInpageErrorFilter.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn CmSiBugCheck(__int64 a1, ULONG_PTR a2, ULONG_PTR a3, ULONG_PTR BugCheckParameter4)
{
  KeBugCheckEx(0x51u, 0x21uLL, a2, a3, BugCheckParameter4);
}
