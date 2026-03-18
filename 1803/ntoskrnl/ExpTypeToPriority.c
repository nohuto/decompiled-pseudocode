/*
 * XREFs of ExpTypeToPriority @ 0x14008FAA8
 * Callers:
 *     ExQueueWorkItemEx @ 0x140041E6C (ExQueueWorkItemEx.c)
 *     ExQueueWorkItemToPartition @ 0x14008F67C (ExQueueWorkItemToPartition.c)
 *     ExQueueWorkItemFromIo @ 0x14008F718 (ExQueueWorkItemFromIo.c)
 *     ExpTryQueueWorkItem @ 0x14008F7AC (ExpTryQueueWorkItem.c)
 *     ExQueueWorkItem @ 0x14008FA50 (ExQueueWorkItem.c)
 *     ExQueueWorkItemExFromIo @ 0x1402BB538 (ExQueueWorkItemExFromIo.c)
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
