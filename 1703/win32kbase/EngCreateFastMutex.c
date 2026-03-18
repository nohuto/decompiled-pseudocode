/*
 * XREFs of EngCreateFastMutex @ 0x1C00FB6B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
HFASTMUTEX EngCreateFastMutex(void)
{
  return (HFASTMUTEX)GreCreateFastMutex();
}
