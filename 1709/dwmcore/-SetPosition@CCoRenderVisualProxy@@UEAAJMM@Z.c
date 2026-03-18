/*
 * XREFs of ?SetPosition@CCoRenderVisualProxy@@UEAAJMM@Z @ 0x180129E20
 * Callers:
 *     <none>
 * Callees:
 *     ?SetOffset@CVisual@@QEAAXMMM@Z @ 0x18011A87C (-SetOffset@CVisual@@QEAAXMMM@Z.c)
 */

__int64 __fastcall CCoRenderVisualProxy::SetPosition(CVisual **this, float a2, float a3)
{
  CVisual::SetOffset(this[3], a2, a3, 0.0);
  return 0LL;
}
