/*
 * XREFs of IopLiveDumpTrace @ 0x1401FBCA8
 * Callers:
 *     IopLiveDumpEndMirroringCallback @ 0x14042B400 (IopLiveDumpEndMirroringCallback.c)
 *     IoCaptureLiveDump @ 0x1406B9C84 (IoCaptureLiveDump.c)
 *     IoWriteDeferredLiveDumpData @ 0x1406BA268 (IoWriteDeferredLiveDumpData.c)
 * Callees:
 *     EtwWriteEx @ 0x140087CE0 (EtwWriteEx.c)
 *     IopLiveDumpIsTracingEnabled @ 0x1401FBC50 (IopLiveDumpIsTracingEnabled.c)
 */

char IopLiveDumpTrace()
{
  char result; // al
  const EVENT_DESCRIPTOR *v1; // rcx

  result = IopLiveDumpIsTracingEnabled();
  if ( result )
    return EtwWriteEx(IopLiveDumpEtwRegHandle, v1, 0LL, 0, 0LL, 0LL, 0, 0LL);
  return result;
}
