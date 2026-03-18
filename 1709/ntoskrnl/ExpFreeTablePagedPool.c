/*
 * XREFs of ExpFreeTablePagedPool @ 0x1404DD154
 * Callers:
 *     ExpAllocateMidLevelTable @ 0x14045D090 (ExpAllocateMidLevelTable.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x14045DC44 (ExpAllocateHandleTableEntrySlow.c)
 *     ExpFreeHandleTable @ 0x1404DD040 (ExpFreeHandleTable.c)
 *     ExpFreeLowLevelTable @ 0x1404DD114 (ExpFreeLowLevelTable.c)
 *     ExpSetHandleExtraInfo @ 0x140756A98 (ExpSetHandleExtraInfo.c)
 * Callees:
 *     PsReturnProcessPagedPoolQuota @ 0x140036640 (PsReturnProcessPagedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall ExpFreeTablePagedPool(struct _KPROCESS *a1, void *a2, __int64 a3)
{
  ExFreePoolWithTag(a2, 0x6274624Fu);
  if ( a1 )
    PsReturnProcessPagedPoolQuota(a1, a3);
}
