/*
 * XREFs of DxgkSignalSynchronizationObject @ 0x1C01C1CC0
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkSignalSynchronizationObjectInternal@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECT2@@H@Z @ 0x1C00F04D8 (-DxgkSignalSynchronizationObjectInternal@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECT2@@H@Z.c)
 */

__int64 __fastcall DxgkSignalSynchronizationObject(
        const struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECT2 *a1,
        __int64 a2,
        __int64 a3)
{
  return DxgkSignalSynchronizationObjectInternal(a1, 1LL, a3);
}
