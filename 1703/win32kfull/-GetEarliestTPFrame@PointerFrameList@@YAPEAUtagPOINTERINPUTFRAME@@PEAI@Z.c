/*
 * XREFs of ?GetEarliestTPFrame@PointerFrameList@@YAPEAUtagPOINTERINPUTFRAME@@PEAI@Z @ 0x1C01994F0
 * Callers:
 *     ?CommitTPInputFrame@@YAPEAUtagPOINTERINPUTFRAME@@XZ @ 0x1C0198EC4 (-CommitTPInputFrame@@YAPEAUtagPOINTERINPUTFRAME@@XZ.c)
 *     CleanupTPFrameList @ 0x1C019A6F0 (CleanupTPFrameList.c)
 *     xxxDoTouchpadProcessing @ 0x1C01B13B8 (xxxDoTouchpadProcessing.c)
 * Callees:
 *     <none>
 */

struct tagPOINTERINPUTFRAME *__fastcall PointerFrameList::GetEarliestTPFrame(PointerFrameList *this, unsigned int *a2)
{
  int v2; // edx
  __int64 v3; // r8
  void **v5; // rcx

  v2 = 0;
  v3 = 0LL;
  if ( (_UNKNOWN *)qword_1C0334518 != &gFrameTPListHead )
    v3 = qword_1C0334518;
  if ( this )
  {
    v5 = (void **)gFrameTPListHead;
    while ( v5 != (void **)&gFrameTPListHead )
    {
      v5 = (void **)*v5;
      ++v2;
    }
    *(_DWORD *)this = v2;
  }
  return (struct tagPOINTERINPUTFRAME *)v3;
}
