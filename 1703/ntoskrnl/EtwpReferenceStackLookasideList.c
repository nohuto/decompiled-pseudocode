/*
 * XREFs of EtwpReferenceStackLookasideList @ 0x140712350
 * Callers:
 *     EtwpEnableGuid @ 0x140552C6C (EtwpEnableGuid.c)
 *     EtwpUpdateStackTracing @ 0x1407123B8 (EtwpUpdateStackTracing.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1401894B0 (RtlpInterlockedPushEntrySList.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 */

_SLIST_ENTRY *EtwpReferenceStackLookasideList()
{
  int v0; // ebx
  _SLIST_ENTRY *result; // rax

  v0 = 2 * KeNumberProcessors_0 * _InterlockedIncrement(&dword_14036EA60);
  do
  {
    result = (_SLIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x820uLL, 0x6C777445u);
    if ( !result )
      break;
    RtlpInterlockedPushEntrySList(&EtwpStackLookAsideList, result);
    result = (_SLIST_ENTRY *)(unsigned int)_InterlockedIncrement(&dword_14036EA64);
  }
  while ( (int)result < v0 );
  return result;
}
