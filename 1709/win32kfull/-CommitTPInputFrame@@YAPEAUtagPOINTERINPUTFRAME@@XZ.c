/*
 * XREFs of ?CommitTPInputFrame@@YAPEAUtagPOINTERINPUTFRAME@@XZ @ 0x1C01A4A24
 * Callers:
 *     ?CommitAndReferenceFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEAX0@Z @ 0x1C01A43A0 (-CommitAndReferenceFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEAX0@Z.c)
 * Callees:
 *     ?GetEarliestTPFrame@PointerFrameList@@YAPEAUtagPOINTERINPUTFRAME@@PEAI@Z @ 0x1C01A508C (-GetEarliestTPFrame@PointerFrameList@@YAPEAUtagPOINTERINPUTFRAME@@PEAI@Z.c)
 */

struct tagPOINTERINPUTFRAME *__fastcall CommitTPInputFrame(__int64 a1, unsigned int *a2)
{
  struct tagPOINTERINPUTFRAME *result; // rax
  __int64 v3; // rcx
  struct tagPOINTERINPUTFRAME **v4; // rdx
  struct _LIST_ENTRY *Flink; // rcx

  result = PointerFrameList::GetEarliestTPFrame(0LL, a2);
  if ( result )
  {
    v3 = *(_QWORD *)result;
    if ( *(struct tagPOINTERINPUTFRAME **)(*(_QWORD *)result + 8LL) != result
      || (v4 = (struct tagPOINTERINPUTFRAME **)*((_QWORD *)result + 1), *v4 != result) )
    {
      __fastfail(3u);
    }
    *v4 = (struct tagPOINTERINPUTFRAME *)v3;
    *(_QWORD *)(v3 + 8) = v4;
    Flink = gFrameListHead.Flink;
    if ( gFrameListHead.Flink->Blink != &gFrameListHead )
      __fastfail(3u);
    *(_QWORD *)result = gFrameListHead.Flink;
    *((_QWORD *)result + 1) = &gFrameListHead;
    Flink->Blink = (struct _LIST_ENTRY *)result;
    gFrameListHead.Flink = (struct _LIST_ENTRY *)result;
  }
  return result;
}
