/*
 * XREFs of McGenEventUnregister @ 0x1C0031280
 * Callers:
 *     RaSqmAndEtwCleanup @ 0x1C0067D64 (RaSqmAndEtwCleanup.c)
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
