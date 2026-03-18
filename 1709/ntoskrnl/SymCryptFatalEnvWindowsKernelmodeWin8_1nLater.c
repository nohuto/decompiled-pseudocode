/*
 * XREFs of SymCryptFatalEnvWindowsKernelmodeWin8_1nLater @ 0x140176FB4
 * Callers:
 *     SymCryptFatal @ 0x140203CE0 (SymCryptFatal.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140131CB0 (xHalTimerWatchdogStop.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

void __fastcall __noreturn SymCryptFatalEnvWindowsKernelmodeWin8_1nLater(ULONG_PTR BugCheckParameter1)
{
  unsigned int v1; // ebx

  v1 = BugCheckParameter1;
  xHalTimerWatchdogStop();
  KeBugCheckEx(0x171u, v1, 0LL, 0LL, 0LL);
}
