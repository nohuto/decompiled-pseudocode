/*
 * XREFs of McGenEventUnregister @ 0x180001BE4
 * Callers:
 *     ??_GOneCoreUAPInputHost@@MEAAPEAXI@Z @ 0x180004234 (--_GOneCoreUAPInputHost@@MEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

ULONG McGenEventUnregister()
{
  ULONG result; // eax

  if ( !MinInput_Context )
    return 0;
  result = EventUnregister(MinInput_Context);
  MinInput_Context = 0LL;
  return result;
}
