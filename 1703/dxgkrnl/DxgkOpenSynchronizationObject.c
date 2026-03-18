/*
 * XREFs of DxgkOpenSynchronizationObject @ 0x1C01A7B40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkOpenSynchronizationObject(struct _D3DKMT_OPENSYNCHRONIZATIONOBJECT *a1, __int64 a2, __int64 a3)
{
  return DxgkOpenSynchronizationObjectInternal(a1, 1, a3);
}
