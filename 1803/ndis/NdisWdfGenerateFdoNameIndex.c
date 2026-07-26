/*
 * XREFs of NdisWdfGenerateFdoNameIndex @ 0x1C00EC1E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NdisWdfGenerateFdoNameIndex()
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)&ndisFdoIndex);
}
