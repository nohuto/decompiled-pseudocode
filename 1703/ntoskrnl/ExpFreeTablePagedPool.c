/*
 * XREFs of ExpFreeTablePagedPool @ 0x140432F18
 * Callers:
 *     ExpAllocateMidLevelTable @ 0x14042B734 (ExpAllocateMidLevelTable.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x14042B8B0 (ExpAllocateHandleTableEntrySlow.c)
 *     ExpFreeHandleTable @ 0x140432E04 (ExpFreeHandleTable.c)
 *     ExpFreeLowLevelTable @ 0x140432ED8 (ExpFreeLowLevelTable.c)
 *     ExpSetHandleExtraInfo @ 0x140717328 (ExpSetHandleExtraInfo.c)
 * Callees:
 *     PsReturnProcessPagedPoolQuota @ 0x140018950 (PsReturnProcessPagedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

void __fastcall ExpFreeTablePagedPool(struct _KPROCESS *a1, void *a2, __int64 a3)
{
  ExFreePoolWithTag(a2, 0x6274624Fu);
  if ( a1 )
    PsReturnProcessPagedPoolQuota(a1, a3);
}
