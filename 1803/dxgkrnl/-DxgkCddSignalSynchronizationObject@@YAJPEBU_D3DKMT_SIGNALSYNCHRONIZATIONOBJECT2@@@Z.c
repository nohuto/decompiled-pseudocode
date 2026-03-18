/*
 * XREFs of ?DxgkCddSignalSynchronizationObject@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECT2@@@Z @ 0x1C00D20A0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkSignalSynchronizationObjectInternal @ 0x1C00D20B8 (DxgkSignalSynchronizationObjectInternal.c)
 */

__int64 __fastcall DxgkCddSignalSynchronizationObject(const struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECT2 *a1)
{
  return DxgkSignalSynchronizationObjectInternal(a1, 0LL);
}
