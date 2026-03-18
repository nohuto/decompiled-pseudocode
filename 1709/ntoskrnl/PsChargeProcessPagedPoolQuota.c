/*
 * XREFs of PsChargeProcessPagedPoolQuota @ 0x1404610A0
 * Callers:
 *     ExpAllocateHandleTable @ 0x14045FF04 (ExpAllocateHandleTable.c)
 *     ExpAllocateTablePagedPoolNoZero @ 0x1404608E8 (ExpAllocateTablePagedPoolNoZero.c)
 *     AlpcpChargePagedPoolQuota @ 0x140462248 (AlpcpChargePagedPoolQuota.c)
 *     MiResizeAweBitMap @ 0x1406E5A4C (MiResizeAweBitMap.c)
 * Callees:
 *     PspChargeQuota @ 0x14003AE80 (PspChargeQuota.c)
 */

__int64 __fastcall PsChargeProcessPagedPoolQuota(struct _KPROCESS *a1, unsigned __int64 a2)
{
  if ( a1 == PsInitialSystemProcess )
    return 0LL;
  else
    return PspChargeQuota(a1[1].ActiveProcessors.Bitmap[4], (__int64)a1, 1, a2);
}
