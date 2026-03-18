/*
 * XREFs of ?Release@CArrayBasedCoverageSet@@UEAAKXZ @ 0x18006F330
 * Callers:
 *     ?Release@CCoRenderVisualProxy@@W7EAAKXZ @ 0x1800D5530 (-Release@CCoRenderVisualProxy@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CArrayBasedCoverageSet::Release(CArrayBasedCoverageSet *this)
{
  return CMILCOMBase::InternalRelease((CArrayBasedCoverageSet *)((char *)this + 8));
}
