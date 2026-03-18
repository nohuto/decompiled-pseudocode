/*
 * XREFs of SymCryptFatalEnvWindowsKernelmodeWin8_1nLater @ 0x140177774
 * Callers:
 *     SymCryptFatal @ 0x1401FDBE0 (SymCryptFatal.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14014A440 (xHalTimerWatchdogStop.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

void __fastcall __noreturn SymCryptFatalEnvWindowsKernelmodeWin8_1nLater(ULONG_PTR BugCheckParameter1)
{
  unsigned int v1; // ebx

  v1 = BugCheckParameter1;
  xHalTimerWatchdogStop();
  KeBugCheckEx(0x171u, v1, 0LL, 0LL, 0LL);
}
