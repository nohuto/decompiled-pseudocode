/*
 * XREFs of ?DxgkCddOpenSynchronizationObject@@YAJPEAU_D3DKMT_OPENSYNCHRONIZATIONOBJECT@@@Z @ 0x1C00CFDD0
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkOpenSynchronizationObjectInternal@@YAJPEAU_D3DKMT_OPENSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C00CFDF0 (-DxgkOpenSynchronizationObjectInternal@@YAJPEAU_D3DKMT_OPENSYNCHRONIZATIONOBJECT@@H@Z.c)
 */

__int64 __fastcall DxgkCddOpenSynchronizationObject(struct _D3DKMT_OPENSYNCHRONIZATIONOBJECT *a1)
{
  return DxgkOpenSynchronizationObjectInternal(a1, 0);
}
