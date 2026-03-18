/*
 * XREFs of EngCreateFastMutex @ 0x1C00FBAE0
 * Callers:
 *     <none>
 * Callees:
 *     GreCreateFastMutex @ 0x1C009BD80 (GreCreateFastMutex.c)
 */

HFASTMUTEX EngCreateFastMutex(void)
{
  return (HFASTMUTEX)GreCreateFastMutex();
}
