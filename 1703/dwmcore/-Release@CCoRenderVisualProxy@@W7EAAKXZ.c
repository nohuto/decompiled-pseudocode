/*
 * XREFs of ?Release@CCoRenderVisualProxy@@W7EAAKXZ @ 0x1800D5530
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCoRenderVisualProxy::Release(__int64 a1)
{
  return CArrayBasedCoverageSet::Release((CArrayBasedCoverageSet *)(a1 - 8));
}
