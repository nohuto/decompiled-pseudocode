/*
 * XREFs of CHolographicInteropTaskQueue::ProcessPendingMessages__lambda_eb9d63b7245e84e3ffbf14e01a0783af___ @ 0x1801A7320
 * Callers:
 *     ?FrameUpdate@CHolographicClient@@UEAAJI@Z @ 0x1801A7AB0 (-FrameUpdate@CHolographicClient@@UEAAJI@Z.c)
 * Callees:
 *     ?ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z @ 0x1801A82E4 (-ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z.c)
 *     ?ClearMessage@CHolographicInteropTaskQueue@@AEAAXPEAUMESSAGE@1@@Z @ 0x1801A8B84 (-ClearMessage@CHolographicInteropTaskQueue@@AEAAXPEAUMESSAGE@1@@Z.c)
 *     ?ReverseList@CHolographicInteropTaskQueue@@AEAAPEAU_SLIST_ENTRY@@PEAU2@@Z @ 0x1801A8D20 (-ReverseList@CHolographicInteropTaskQueue@@AEAAPEAU_SLIST_ENTRY@@PEAU2@@Z.c)
 */

PSLIST_ENTRY __fastcall CHolographicInteropTaskQueue::ProcessPendingMessages__lambda_eb9d63b7245e84e3ffbf14e01a0783af___(
        union _SLIST_HEADER *a1,
        CHolographicClient **a2)
{
  struct _SLIST_ENTRY *v4; // rax
  CHolographicInteropTaskQueue *v5; // rcx
  PSLIST_ENTRY result; // rax
  _QWORD *p_Next; // rdi
  union _SLIST_HEADER *v8; // rsi
  _QWORD *v9; // rbx
  CHolographicInteropTaskQueue *v10; // rcx

  v4 = InterlockedFlushSList(a1 + 1);
  result = CHolographicInteropTaskQueue::ReverseList(v5, v4);
  p_Next = &result->Next;
  if ( result )
  {
    v8 = a1 + 2;
    do
    {
      v9 = p_Next;
      p_Next = (_QWORD *)*p_Next;
      CHolographicClient::ProcessMessage(
        *a2,
        *((_DWORD *)v9 + 2),
        (struct IUnknown *)v9[2],
        (void *)v9[3],
        (void *)v9[4],
        (void *)v9[5],
        (void *)v9[6]);
      CHolographicInteropTaskQueue::ClearMessage(v10, (struct MESSAGE *)v9);
      result = InterlockedPushEntrySList(v8, (PSLIST_ENTRY)v9);
    }
    while ( p_Next );
  }
  return result;
}
