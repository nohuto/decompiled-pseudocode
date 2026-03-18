/*
 * XREFs of ExpTypeToPriority @ 0x140101958
 * Callers:
 *     ExTryQueueWorkItem @ 0x1400688A0 (ExTryQueueWorkItem.c)
 *     ExQueueWorkItemFromIo @ 0x140101978 (ExQueueWorkItemFromIo.c)
 *     ExQueueWorkItemEx @ 0x140114B34 (ExQueueWorkItemEx.c)
 *     ExTryQueueWorkItemFromIo @ 0x140130680 (ExTryQueueWorkItemFromIo.c)
 *     ExQueueWorkItemExFromIo @ 0x14025D62C (ExQueueWorkItemExFromIo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpTypeToPriority(unsigned int a1)
{
  if ( a1 >= 7 )
    return a1 - 32;
  else
    return (unsigned int)ExpBuiltinPriorities[a1];
}
