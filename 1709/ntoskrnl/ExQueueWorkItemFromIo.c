/*
 * XREFs of ExQueueWorkItemFromIo @ 0x14002346C
 * Callers:
 *     IoQueueWorkItem @ 0x1400219E0 (IoQueueWorkItem.c)
 *     IoQueueWorkItemEx @ 0x140021D60 (IoQueueWorkItemEx.c)
 * Callees:
 *     ExpTypeToPriority @ 0x1400234C8 (ExpTypeToPriority.c)
 *     ExpQueueWorkItem @ 0x140061500 (ExpQueueWorkItem.c)
 *     ExpValidateWorkItem @ 0x140062344 (ExpValidateWorkItem.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

__int64 __fastcall ExQueueWorkItemFromIo(ULONG_PTR BugCheckParameter2, int a2)
{
  ULONG_PTR v2; // rbx
  int v4; // eax
  __int64 result; // rax

  v2 = a2;
  ExpValidateWorkItem(BugCheckParameter2);
  v4 = ExpTypeToPriority((unsigned int)v2);
  result = ExpQueueWorkItem(*((_QWORD *)PspSystemPartition + 2), BugCheckParameter2, v4, -1, 1);
  if ( !(_BYTE)result )
    KeBugCheckEx(0xE4u, 5uLL, BugCheckParameter2, v2, 0xFFFFFFFFFFFFFFFFuLL);
  return result;
}
