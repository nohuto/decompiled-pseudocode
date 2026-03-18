/*
 * XREFs of NtLoadHotPatch @ 0x140722798
 * Callers:
 *     <none>
 * Callees:
 *     IopLoadDriverImage @ 0x140160304 (IopLoadDriverImage.c)
 */

__int64 __fastcall NtLoadHotPatch(_OWORD *a1, int a2)
{
  if ( a2 )
    return 3221225712LL;
  else
    return IopLoadDriverImage(a1, 1);
}
