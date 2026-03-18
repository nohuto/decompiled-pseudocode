/*
 * XREFs of IopLiveDumpTrace @ 0x140238980
 * Callers:
 *     IopLiveDumpEndMirroringCallback @ 0x140481F00 (IopLiveDumpEndMirroringCallback.c)
 *     IoCaptureLiveDump @ 0x14071EC24 (IoCaptureLiveDump.c)
 *     IoWriteDeferredLiveDumpData @ 0x14071F208 (IoWriteDeferredLiveDumpData.c)
 * Callees:
 *     EtwWriteEx @ 0x1400EF860 (EtwWriteEx.c)
 *     IopLiveDumpIsTracingEnabled @ 0x140238928 (IopLiveDumpIsTracingEnabled.c)
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
