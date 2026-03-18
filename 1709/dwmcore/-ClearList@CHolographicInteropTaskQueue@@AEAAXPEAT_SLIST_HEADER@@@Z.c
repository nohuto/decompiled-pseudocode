/*
 * XREFs of ?ClearList@CHolographicInteropTaskQueue@@AEAAXPEAT_SLIST_HEADER@@@Z @ 0x1801C3C20
 * Callers:
 *     ??1CHolographicInteropTaskQueue@@EEAA@XZ @ 0x1801C3BA4 (--1CHolographicInteropTaskQueue@@EEAA@XZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?ClearMessage@CHolographicInteropTaskQueue@@AEAAXPEAUMESSAGE@1@@Z @ 0x1801C3C64 (-ClearMessage@CHolographicInteropTaskQueue@@AEAAXPEAUMESSAGE@1@@Z.c)
 */

void __fastcall CHolographicInteropTaskQueue::ClearList(CHolographicInteropTaskQueue *this, union _SLIST_HEADER *a2)
{
  CHolographicInteropTaskQueue *v2; // rcx
  PSLIST_ENTRY v3; // rdi
  struct MESSAGE *v4; // rbx

  v3 = InterlockedFlushSList(a2);
  while ( v3 )
  {
    v4 = (struct MESSAGE *)v3;
    v3 = v3->Next;
    CHolographicInteropTaskQueue::ClearMessage(v2, v4);
    WPF::ProcessHeapImpl::Free(v4);
  }
}
