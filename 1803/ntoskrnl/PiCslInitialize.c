/*
 * XREFs of PiCslInitialize @ 0x1408DFDAC
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1408A3B0C (IopInitializePlugPlayServices.c)
 * Callees:
 *     ExRegisterCallback @ 0x14016BF30 (ExRegisterCallback.c)
 *     PipCslCreateCallback @ 0x140897E30 (PipCslCreateCallback.c)
 */

__int64 PiCslInitialize()
{
  NTSTATUS Callback; // ebx

  PipCslConsoleLockState = 0;
  Callback = PipCslCreateCallback();
  if ( Callback >= 0 )
  {
    ExRegisterCallback((PCALLBACK_OBJECT)PipCslCallbackObject, (PCALLBACK_FUNCTION)PipCslStateChangeCallback, 0LL);
    PipCslInitialized = 1;
  }
  return (unsigned int)Callback;
}
