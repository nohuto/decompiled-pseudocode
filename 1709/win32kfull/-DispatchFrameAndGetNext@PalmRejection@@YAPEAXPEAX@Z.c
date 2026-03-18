/*
 * XREFs of ?DispatchFrameAndGetNext@PalmRejection@@YAPEAXPEAX@Z @ 0x1C01DFFA4
 * Callers:
 *     ?DispatchBufferedInputFrames@PalmRejection@@YAXXZ @ 0x1C01DFEC0 (-DispatchBufferedInputFrames@PalmRejection@@YAXXZ.c)
 * Callees:
 *     ?GetNextFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEBU2@PEAU_LIST_ENTRY@@@Z @ 0x1C01A50D0 (-GetNextFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEBU2@PEAU_LIST_ENTRY@@@Z.c)
 *     ?xxxProcessEdgyAndGeneratePointerMessages@@YAHPEAXPEBUtagPOINTERINPUTFRAME@@HH@Z @ 0x1C01CD24C (-xxxProcessEdgyAndGeneratePointerMessages@@YAHPEAXPEBUtagPOINTERINPUTFRAME@@HH@Z.c)
 */

const struct tagPOINTERINPUTFRAME *__fastcall PalmRejection::DispatchFrameAndGetNext(
        PalmRejection *this,
        void *a2,
        struct _LIST_ENTRY *a3)
{
  const struct tagPOINTERINPUTFRAME *NextFrame; // rbx
  __int64 v4; // rcx
  __int64 v5; // r9

  NextFrame = PointerFrameList::GetNextFrame(this, (const struct tagPOINTERINPUTFRAME *)&gFrameListHead, a3);
  xxxProcessEdgyAndGeneratePointerMessages(
    *(_QWORD *)(v4 + 56),
    (const struct tagPOINTERINPUTFRAME *)v4,
    (unsigned int)-__CFSHR__(*(_DWORD *)(*(_QWORD *)(v4 + 104) + 276LL), 6),
    v5);
  return NextFrame;
}
