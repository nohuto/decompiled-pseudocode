/*
 * XREFs of IoFreeWorkItem @ 0x14002EE00
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

void __stdcall IoFreeWorkItem(PIO_WORKITEM IoWorkItem)
{
  if ( IoWorkItem->WorkItem.List.Flink )
    KeBugCheckEx(0xE4u, 2uLL, (ULONG_PTR)IoWorkItem, (ULONG_PTR)&IoWorkItem->Routine, 0LL);
  ExFreePoolWithTag(IoWorkItem, 0);
}
