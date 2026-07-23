/*
 * XREFs of RtlpHpEnvGetHeapManager @ 0x1402BD820
 * Callers:
 *     RtlpHpAllocVA @ 0x1402943E0 (RtlpHpAllocVA.c)
 *     RtlpHpExtrasSetPresent @ 0x140294984 (RtlpHpExtrasSetPresent.c)
 *     RtlpHpFreeHeap @ 0x140294A24 (RtlpHpFreeHeap.c)
 *     RtlpHpFreeVA @ 0x140294BD4 (RtlpHpFreeVA.c)
 *     RtlpHpGetOwnerHeap @ 0x140294C68 (RtlpHpGetOwnerHeap.c)
 *     RtlpHpHeapCreate @ 0x140294F54 (RtlpHpHeapCreate.c)
 *     RtlpHpMetadataCommit @ 0x140295C40 (RtlpHpMetadataCommit.c)
 *     RtlpHpMetadataHeapCtxGet @ 0x140295D90 (RtlpHpMetadataHeapCtxGet.c)
 *     RtlpHpRegisterEnvironment @ 0x140295E0C (RtlpHpRegisterEnvironment.c)
 *     RtlpHpSizeHeapInternal @ 0x140295F94 (RtlpHpSizeHeapInternal.c)
 *     RtlpHpSegSegmentAllocate @ 0x140298F5C (RtlpHpSegSegmentAllocate.c)
 *     RtlpHpSegSegmentFree @ 0x1402990F4 (RtlpHpSegSegmentFree.c)
 * Callees:
 *     <none>
 */

_RTL_RUN_ONCE *__fastcall RtlpHpEnvGetHeapManager(_DWORD *a1)
{
  if ( (*a1 & 6) == 4 )
    return *(_RTL_RUN_ONCE **)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 3424);
  else
    return ExPoolState;
}
