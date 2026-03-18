/*
 * XREFs of NtosSecureKernelImportBugcheck @ 0x14024ED30
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

void __noreturn NtosSecureKernelImportBugcheck()
{
  KeBugCheckEx(0x123u, 0LL, 0LL, 0LL, 0LL);
}
