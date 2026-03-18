/*
 * XREFs of ?DxgkCddWaitForSynchronizationObject@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2@@@Z @ 0x1C00D2710
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkWaitForSynchronizationObjectInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2@@H@Z @ 0x1C00D2728 (-DxgkWaitForSynchronizationObjectInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2@@H@Z.c)
 */

__int64 __fastcall DxgkCddWaitForSynchronizationObject(const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2 *a1)
{
  return DxgkWaitForSynchronizationObjectInternal(a1, 0);
}
