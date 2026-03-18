/*
 * XREFs of ?DxgkCddSignalSynchronizationObject@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECT2@@@Z @ 0x1C00F04C0
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkSignalSynchronizationObjectInternal@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECT2@@H@Z @ 0x1C00F04D8 (-DxgkSignalSynchronizationObjectInternal@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECT2@@H@Z.c)
 */

__int64 __fastcall DxgkCddSignalSynchronizationObject(const struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECT2 *a1)
{
  return DxgkSignalSynchronizationObjectInternal(a1, 0);
}
