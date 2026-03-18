/*
 * XREFs of ExQueueWorkItemFromIo @ 0x14008F718
 * Callers:
 *     IoQueueWorkItemEx @ 0x14008F6F0 (IoQueueWorkItemEx.c)
 *     IoQueueWorkItem @ 0x1400C4120 (IoQueueWorkItem.c)
 * Callees:
 *     ExpTypeToPriority @ 0x14008FAA8 (ExpTypeToPriority.c)
 *     ExpValidateWorkItem @ 0x14008FAC8 (ExpValidateWorkItem.c)
 *     ExpQueueWorkItem @ 0x140125F10 (ExpQueueWorkItem.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
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
