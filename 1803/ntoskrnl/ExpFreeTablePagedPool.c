/*
 * XREFs of ExpFreeTablePagedPool @ 0x140547764
 * Callers:
 *     ExpFreeHandleTable @ 0x140547650 (ExpFreeHandleTable.c)
 *     ExpFreeLowLevelTable @ 0x140547724 (ExpFreeLowLevelTable.c)
 *     ExpAllocateMidLevelTable @ 0x1405532F0 (ExpAllocateMidLevelTable.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x140553A18 (ExpAllocateHandleTableEntrySlow.c)
 *     ExpSetHandleExtraInfo @ 0x1407BD530 (ExpSetHandleExtraInfo.c)
 * Callees:
 *     PsReturnProcessPagedPoolQuota @ 0x1400EF7F0 (PsReturnProcessPagedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall ExpFreeTablePagedPool(struct _KPROCESS *a1, void *a2, __int64 a3)
{
  ExFreePoolWithTag(a2, 0x6274624Fu);
  if ( a1 )
    PsReturnProcessPagedPoolQuota(a1, a3);
}
