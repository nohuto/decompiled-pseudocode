/*
 * XREFs of ?DispatchFrameAndGetNext@PalmRejection@@YAPEAXPEAX@Z @ 0x1C01D3BF4
 * Callers:
 *     ?DispatchBufferedInputFrames@PalmRejection@@YAXXZ @ 0x1C01D3B10 (-DispatchBufferedInputFrames@PalmRejection@@YAXXZ.c)
 * Callees:
 *     ?GetNextFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEBU2@PEAU_LIST_ENTRY@@@Z @ 0x1C0199534 (-GetNextFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEBU2@PEAU_LIST_ENTRY@@@Z.c)
 *     ?xxxProcessEdgyAndGeneratePointerMessages@@YAHPEAXPEBUtagPOINTERINPUTFRAME@@HH@Z @ 0x1C01C8DDC (-xxxProcessEdgyAndGeneratePointerMessages@@YAHPEAXPEBUtagPOINTERINPUTFRAME@@HH@Z.c)
 */

const struct tagPOINTERINPUTFRAME *__fastcall PalmRejection::DispatchFrameAndGetNext(
        PalmRejection *this,
        void *a2,
        struct _LIST_ENTRY *a3)
{
  const struct tagPOINTERINPUTFRAME *NextFrame; // rbx
  __int64 v4; // rcx

  NextFrame = PointerFrameList::GetNextFrame(this, (const struct tagPOINTERINPUTFRAME *)&gFrameListHead, a3);
  xxxProcessEdgyAndGeneratePointerMessages(
    *(_QWORD *)(v4 + 56),
    (const struct tagPOINTERINPUTFRAME *)v4,
    -__CFSHR__(*(_DWORD *)(*(_QWORD *)(v4 + 104) + 260LL), 6),
    -__CFSHR__(*(_DWORD *)(*(_QWORD *)(v4 + 104) + 260LL), 7));
  return NextFrame;
}
