/*
 * XREFs of PsChargeProcessPagedPoolQuota @ 0x14042C1C0
 * Callers:
 *     ExpAllocateHandleTable @ 0x14042BEEC (ExpAllocateHandleTable.c)
 *     ExpAllocateTablePagedPoolNoZero @ 0x14042C158 (ExpAllocateTablePagedPoolNoZero.c)
 *     AlpcpChargePagedPoolQuota @ 0x14047C5A0 (AlpcpChargePagedPoolQuota.c)
 *     MiResizeAweBitMap @ 0x1406B8CF8 (MiResizeAweBitMap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsChargeProcessPagedPoolQuota(struct _KPROCESS *a1, unsigned __int64 a2)
{
  if ( a1 == PsInitialSystemProcess )
    return 0LL;
  else
    return PspChargeQuota(a1[1].ActiveProcessors.Bitmap[4], (__int64)a1, 1, a2);
}
