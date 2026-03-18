/*
 * XREFs of DxgkFreePathsModality @ 0x1C00F0740
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall DxgkFreePathsModality(struct _D3DKMT_GETPATHSMODALITY *a1)
{
  BmlFreePathsModality(a1);
}
