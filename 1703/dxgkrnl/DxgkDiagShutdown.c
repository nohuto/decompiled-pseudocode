/*
 * XREFs of DxgkDiagShutdown @ 0x1C0036084
 * Callers:
 *     DxgkUnload @ 0x1C01910D0 (DxgkUnload.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 DxgkDiagShutdown()
{
  return WdDiagShutdown();
}
