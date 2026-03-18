/*
 * XREFs of PsChargeProcessPagedPoolQuota @ 0x140553CB0
 * Callers:
 *     AlpcpChargePagedPoolQuota @ 0x1404D44BC (AlpcpChargePagedPoolQuota.c)
 *     ExpAllocateHandleTable @ 0x14055390C (ExpAllocateHandleTable.c)
 *     ExpAllocateTablePagedPoolNoZero @ 0x140553C4C (ExpAllocateTablePagedPoolNoZero.c)
 * Callees:
 *     PspChargeQuota @ 0x1401049D0 (PspChargeQuota.c)
 */

__int64 __fastcall PsChargeProcessPagedPoolQuota(struct _KPROCESS *a1, unsigned __int64 a2)
{
  if ( a1 == PsInitialSystemProcess )
    return 0LL;
  else
    return PspChargeQuota(a1[1].ActiveProcessors.Bitmap[4], (__int64)a1, 1, a2);
}
