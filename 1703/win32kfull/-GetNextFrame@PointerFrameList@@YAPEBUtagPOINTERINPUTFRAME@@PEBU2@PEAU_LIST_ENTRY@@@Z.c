/*
 * XREFs of ?GetNextFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEBU2@PEAU_LIST_ENTRY@@@Z @ 0x1C0199534
 * Callers:
 *     xxxDoTouchpadProcessing @ 0x1C01B13B8 (xxxDoTouchpadProcessing.c)
 *     ?xxxProcessEdgyAndGeneratePointerMessages@@YAHPEAXPEBUtagPOINTERINPUTFRAME@@HH@Z @ 0x1C01C8DDC (-xxxProcessEdgyAndGeneratePointerMessages@@YAHPEAXPEBUtagPOINTERINPUTFRAME@@HH@Z.c)
 *     ?_AdjustEdgyFrameHwndWorker@Edgy@@YAXQEAXUtagINPUTDEST@@@Z @ 0x1C01CDA3C (-_AdjustEdgyFrameHwndWorker@Edgy@@YAXQEAXUtagINPUTDEST@@@Z.c)
 *     ?DispatchFrameAndGetNext@PalmRejection@@YAPEAXPEAX@Z @ 0x1C01D3BF4 (-DispatchFrameAndGetNext@PalmRejection@@YAPEAXPEAX@Z.c)
 *     ?_SuppressDeadzoneContactsInFrameAndGetNext@PalmRejection@@YAPEAXPEAUtagPOINTERINPUTFRAME@@0UtagPOINT@@@Z @ 0x1C01D43EC (-_SuppressDeadzoneContactsInFrameAndGetNext@PalmRejection@@YAPEAXPEAUtagPOINTERINPUTFRAME@@0Utag.c)
 * Callees:
 *     <none>
 */

const struct tagPOINTERINPUTFRAME *__fastcall PointerFrameList::GetNextFrame(
        PointerFrameList *this,
        const struct tagPOINTERINPUTFRAME *a2,
        struct _LIST_ENTRY *a3)
{
  const struct tagPOINTERINPUTFRAME *v3; // r8
  const struct tagPOINTERINPUTFRAME *result; // rax

  v3 = (const struct tagPOINTERINPUTFRAME *)*((_QWORD *)this + 1);
  result = 0LL;
  if ( v3 )
  {
    if ( v3 != a2 )
      return (const struct tagPOINTERINPUTFRAME *)*((_QWORD *)this + 1);
  }
  return result;
}
