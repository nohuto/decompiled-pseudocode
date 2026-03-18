/*
 * XREFs of LdrFindResourceEx_U @ 0x1406E6690
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall LdrFindResourceEx_U(int a1, char *a2, __int64 *a3, unsigned int a4, unsigned int **a5)
{
  return LdrpSearchResourceSection_U(a2, a3, a4, a1, a5);
}
