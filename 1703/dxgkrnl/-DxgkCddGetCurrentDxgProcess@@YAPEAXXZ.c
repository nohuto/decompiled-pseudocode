/*
 * XREFs of ?DxgkCddGetCurrentDxgProcess@@YAPEAXXZ @ 0x1C00A6EB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
struct DXGPROCESS *DxgkCddGetCurrentDxgProcess(void)
{
  return DXGPROCESS::GetCurrent();
}
