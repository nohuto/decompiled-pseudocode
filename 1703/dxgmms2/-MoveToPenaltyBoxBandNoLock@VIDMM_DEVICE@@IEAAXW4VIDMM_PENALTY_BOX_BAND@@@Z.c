/*
 * XREFs of ?MoveToPenaltyBoxBandNoLock@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1C004D180
 * Callers:
 *     ?EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1C004D3B0 (-EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z.c)
 *     ?IndefinitelySuspend@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1C004D5A4 (-IndefinitelySuspend@VIDMM_DEVICE@@QEAAX_N@Z.c)
 *     ?TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C005F230 (-TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@.c)
 *     VidSchiSubmitCommandPacketToQueue @ 0x1C006B1A0 (VidSchiSubmitCommandPacketToQueue.c)
 *     ?MoveToPenaltyBoxBand@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1C006E134 (-MoveToPenaltyBoxBand@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z.c)
 *     ?FullySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1C006F830 (-FullySuspend@VIDMM_DEVICE@@IEAAXXZ.c)
 * Callees:
 *     ?RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0002678 (-RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?InsertToPenaltyBox@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@W4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1C0002AB8 (-InsertToPenaltyBox@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@W4VIDMM_PENALTY_BOX_BAND@@@Z.c)
 */

__int64 *__fastcall VIDMM_DEVICE::MoveToPenaltyBoxBandNoLock(__int64 a1, unsigned int a2)
{
  __int64 *result; // rax

  if ( (*(_DWORD *)(a1 + 52) & 7) != 0 )
    VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry((VIDMM_GLOBAL *)a1, (struct _LIST_ENTRY *)(a1 + 176));
  result = VIDMM_GLOBAL::InsertToPenaltyBox(*(_QWORD *)a1, a1, a2);
  *(_DWORD *)(a1 + 52) ^= (*(_DWORD *)(a1 + 52) ^ a2) & 7;
  return result;
}
