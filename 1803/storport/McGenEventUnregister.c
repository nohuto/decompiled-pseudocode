/*
 * XREFs of McGenEventUnregister @ 0x1C002CC78
 * Callers:
 *     RaSqmAndEtwCleanup @ 0x1C00658D0 (RaSqmAndEtwCleanup.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall McGenEventUnregister(PREGHANDLE RegHandle)
{
  ULONG result; // eax

  if ( !StorPortEventProvider_Context )
    return 0;
  result = EtwUnregister(StorPortEventProvider_Context);
  StorPortEventProvider_Context = 0LL;
  return result;
}
