/*
 * XREFs of IopLiveDumpTraceInterfaceStart @ 0x1401FC080
 * Callers:
 *     DbgkpWerCleanupContext @ 0x1406AE1B8 (DbgkpWerCleanupContext.c)
 *     IoCaptureLiveDump @ 0x1406B9C84 (IoCaptureLiveDump.c)
 *     IoWriteDeferredLiveDumpData @ 0x1406BA268 (IoWriteDeferredLiveDumpData.c)
 * Callees:
 *     EtwWriteEx @ 0x140087CE0 (EtwWriteEx.c)
 *     IopLiveDumpIsTracingEnabled @ 0x1401FBC50 (IopLiveDumpIsTracingEnabled.c)
 */

char IopLiveDumpTraceInterfaceStart()
{
  char result; // al
  int v1; // ecx
  const EVENT_DESCRIPTOR *v2; // rdx

  result = IopLiveDumpIsTracingEnabled();
  if ( result )
  {
    if ( v1 )
    {
      v2 = (const EVENT_DESCRIPTOR *)&LIVEDUMP_EVENT_WRITE_DEFERRED_DATA_API_START;
      if ( v1 != 1 )
        v2 = &LIVEDUMP_EVENT_DISCARD_DEFERRED_DATA_API_START;
    }
    else
    {
      v2 = (const EVENT_DESCRIPTOR *)&LIVEDUMP_EVENT_CAPTURE_API_START;
    }
    return EtwWriteEx(IopLiveDumpEtwRegHandle, v2, 0LL, 0, 0LL, 0LL, 0, 0LL);
  }
  return result;
}
