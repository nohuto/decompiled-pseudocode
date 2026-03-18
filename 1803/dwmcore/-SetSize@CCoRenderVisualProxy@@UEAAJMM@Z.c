/*
 * XREFs of ?SetSize@CCoRenderVisualProxy@@UEAAJMM@Z @ 0x18014BAF0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetSize@CVisual@@QEAAXMM@Z @ 0x18013CC48 (-SetSize@CVisual@@QEAAXMM@Z.c)
 */

__int64 __fastcall CCoRenderVisualProxy::SetSize(CVisual **this, float a2, float a3)
{
  CVisual::SetSize(this[3], a2, a3);
  return 0LL;
}
