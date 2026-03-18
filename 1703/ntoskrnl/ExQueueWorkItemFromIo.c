/*
 * XREFs of ExQueueWorkItemFromIo @ 0x140101978
 * Callers:
 *     IoQueueWorkItem @ 0x14002F880 (IoQueueWorkItem.c)
 *     IoQueueWorkItemEx @ 0x1401019D0 (IoQueueWorkItemEx.c)
 * Callees:
 *     ExpQueueWorkItem @ 0x1400FD5D0 (ExpQueueWorkItem.c)
 *     ExpValidateWorkItem @ 0x1400FEDD4 (ExpValidateWorkItem.c)
 *     ExpTypeToPriority @ 0x140101958 (ExpTypeToPriority.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

__int64 __fastcall ExQueueWorkItemFromIo(__int64 *BugCheckParameter2, int a2)
{
  ULONG_PTR v2; // rbx
  int v4; // eax
  __int64 result; // rax

  v2 = a2;
  ExpValidateWorkItem(BugCheckParameter2, a2);
  v4 = ExpTypeToPriority(v2);
  result = ExpQueueWorkItem(BugCheckParameter2, v4, 0xFFFFFFFF, 1);
  if ( !(_BYTE)result )
    KeBugCheckEx(0xE4u, 5uLL, (ULONG_PTR)BugCheckParameter2, v2, 0xFFFFFFFFFFFFFFFFuLL);
  return result;
}
