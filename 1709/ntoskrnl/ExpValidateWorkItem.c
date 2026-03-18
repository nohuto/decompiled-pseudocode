/*
 * XREFs of ExpValidateWorkItem @ 0x140062344
 * Callers:
 *     ExQueueWorkItemEx @ 0x14002197C (ExQueueWorkItemEx.c)
 *     ExpTryQueueWorkItem @ 0x140021ACC (ExpTryQueueWorkItem.c)
 *     ExQueueWorkItemToPartition @ 0x140023404 (ExQueueWorkItemToPartition.c)
 *     ExQueueWorkItemFromIo @ 0x14002346C (ExQueueWorkItemFromIo.c)
 *     ExQueueWorkItem @ 0x1400613A0 (ExQueueWorkItem.c)
 *     ExQueueWorkItemExFromIo @ 0x1402871AC (ExQueueWorkItemExFromIo.c)
 *     ExQueueWorkItemToPrivatePool @ 0x140287208 (ExQueueWorkItemToPrivatePool.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

__int64 __fastcall ExpValidateWorkItem(_QWORD *BugCheckParameter2, int a2)
{
  ULONG_PTR v2; // r9
  __int64 result; // rax

  if ( *BugCheckParameter2 )
    KeBugCheckEx(0xE4u, 1uLL, (ULONG_PTR)BugCheckParameter2, a2, 0LL);
  if ( (unsigned int)(a2 - 7) <= 0x18 || a2 >= 64 )
    KeBugCheckEx(0xE4u, 6uLL, (ULONG_PTR)BugCheckParameter2, a2, 0LL);
  v2 = BugCheckParameter2[2];
  result = 0x7FFFFFFF0000LL;
  if ( v2 <= 0x7FFFFFFF0000LL )
    KeBugCheckEx(0xE4u, 7uLL, (ULONG_PTR)BugCheckParameter2, v2, 0LL);
  return result;
}
