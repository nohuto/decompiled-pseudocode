/*
 * XREFs of NtosSecureKernelImportBugcheck @ 0x1402850C0
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

void __noreturn NtosSecureKernelImportBugcheck()
{
  KeBugCheckEx(0x123u, 0LL, 0LL, 0LL, 0LL);
}
