/*
 * XREFs of DxgkWaitForSynchronizationObject @ 0x1C01A85C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkWaitForSynchronizationObject(
        const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2 *a1,
        __int64 a2,
        __int64 a3)
{
  return DxgkWaitForSynchronizationObjectInternal(a1, 1, a3);
}
