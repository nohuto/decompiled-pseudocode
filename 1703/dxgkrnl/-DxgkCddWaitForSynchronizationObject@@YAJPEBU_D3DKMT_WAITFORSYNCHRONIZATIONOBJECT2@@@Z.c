/*
 * XREFs of ?DxgkCddWaitForSynchronizationObject@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2@@@Z @ 0x1C008D680
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkCddWaitForSynchronizationObject(const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2 *a1)
{
  return DxgkWaitForSynchronizationObjectInternal(a1, 0);
}
