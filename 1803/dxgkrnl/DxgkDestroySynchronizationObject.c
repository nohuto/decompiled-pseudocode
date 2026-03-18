/*
 * XREFs of DxgkDestroySynchronizationObject @ 0x1C00E3170
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C00E5B10 (-DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z.c)
 */

__int64 __fastcall DxgkDestroySynchronizationObject(const struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT *a1)
{
  return DxgkDestroySynchronizationObjectImpl(a1, 1);
}
