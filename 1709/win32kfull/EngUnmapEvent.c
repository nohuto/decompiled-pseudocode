/*
 * XREFs of EngUnmapEvent @ 0x1C0258270
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOL __stdcall EngUnmapEvent(PEVENT pEvent)
{
  __int64 v2; // rdx

  if ( (pEvent->fFlags & 1) == 0 )
    return 0;
  ObfDereferenceObject(pEvent->pKEvent);
  Win32FreePool(pEvent, v2);
  return 1;
}
