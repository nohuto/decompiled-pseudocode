/*
 * XREFs of IopLiveDumpTrace @ 0x1401F5E60
 * Callers:
 *     IopLiveDumpEndMirroringCallback @ 0x1404163C0 (IopLiveDumpEndMirroringCallback.c)
 *     IoCaptureLiveDump @ 0x14068DFA4 (IoCaptureLiveDump.c)
 *     IoWriteDeferredLiveDumpData @ 0x14068E59C (IoWriteDeferredLiveDumpData.c)
 * Callees:
 *     EtwWriteEx @ 0x140094690 (EtwWriteEx.c)
 *     IopLiveDumpIsTracingEnabled @ 0x1401F5E08 (IopLiveDumpIsTracingEnabled.c)
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
