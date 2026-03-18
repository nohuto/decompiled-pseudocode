/*
 * XREFs of ?DxgkCddAdapterDereference@@YAXQEAX_K@Z @ 0x1C00FAD40
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00026E0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 */

void __fastcall DxgkCddAdapterDereference(DXGADAPTER *a1)
{
  DXGADAPTER::ReleaseReferenceNoTracking(a1);
}
