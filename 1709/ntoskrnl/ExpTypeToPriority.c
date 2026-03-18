/*
 * XREFs of ExpTypeToPriority @ 0x1400234C8
 * Callers:
 *     ExQueueWorkItemEx @ 0x14002197C (ExQueueWorkItemEx.c)
 *     ExpTryQueueWorkItem @ 0x140021ACC (ExpTryQueueWorkItem.c)
 *     ExQueueWorkItemToPartition @ 0x140023404 (ExQueueWorkItemToPartition.c)
 *     ExQueueWorkItemFromIo @ 0x14002346C (ExQueueWorkItemFromIo.c)
 *     ExQueueWorkItemExFromIo @ 0x1402871AC (ExQueueWorkItemExFromIo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpTypeToPriority(unsigned int a1)
{
  if ( a1 >= 7 )
    return a1 - 32;
  else
    return ExpBuiltinPriorities[a1];
}
