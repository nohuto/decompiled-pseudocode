/*
 * XREFs of ?ReverseList@CHolographicInteropTaskQueue@@AEAAPEAU_SLIST_ENTRY@@PEAU2@@Z @ 0x1801A8D20
 * Callers:
 *     CHolographicInteropTaskQueue::ProcessPendingMessages__lambda_1af5a33988fbdcb1a8e6d38412aed786___ @ 0x1801A5954 (CHolographicInteropTaskQueue--ProcessPendingMessages__lambda_1af5a33988fbdcb1a8e6d38412aed786___.c)
 *     CHolographicInteropTaskQueue::ProcessPendingMessages__lambda_eb9d63b7245e84e3ffbf14e01a0783af___ @ 0x1801A7320 (CHolographicInteropTaskQueue--ProcessPendingMessages__lambda_eb9d63b7245e84e3ffbf14e01a0783af___.c)
 *     ??1CHolographicClient@@MEAA@XZ @ 0x1801A74A0 (--1CHolographicClient@@MEAA@XZ.c)
 * Callees:
 *     <none>
 */

struct _SLIST_ENTRY *__fastcall CHolographicInteropTaskQueue::ReverseList(
        CHolographicInteropTaskQueue *this,
        struct _SLIST_ENTRY *a2)
{
  struct _SLIST_ENTRY *result; // rax
  struct _SLIST_ENTRY *Next; // rcx

  result = 0LL;
  if ( a2 )
  {
    do
    {
      Next = a2->Next;
      a2->Next = result;
      result = a2;
      a2 = Next;
    }
    while ( Next );
  }
  return result;
}
