/*
 * XREFs of ?DxgkCddDestroySynchronizationObject@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@@Z @ 0x1C009F850
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkCddDestroySynchronizationObject(const struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT *a1)
{
  return DxgkDestroySynchronizationObjectInternal(a1, 0);
}
