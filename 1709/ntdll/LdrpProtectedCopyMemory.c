/*
 * XREFs of LdrpProtectedCopyMemory @ 0x1800177A0
 * Callers:
 *     LdrpReadMemory @ 0x1800175CC (LdrpReadMemory.c)
 *     LdrQueryModuleInfoFromLdrEntry @ 0x180017650 (LdrQueryModuleInfoFromLdrEntry.c)
 * Callees:
 *     LdrpGenericExceptionFilter @ 0x180002B68 (LdrpGenericExceptionFilter.c)
 *     memmove @ 0x1800A6940 (memmove.c)
 */

__int64 __fastcall LdrpProtectedCopyMemory(__int64 a1, const void *a2, void *a3, size_t a4, size_t *a5)
{
  memmove(a3, a2, a4);
  *a5 = a4;
  return 0LL;
}
