/*
 * XREFs of EtwpReferenceLastBranchLookasideList @ 0x1407B9330
 * Callers:
 *     EtwpUpdateLastBranchTracingConfiguration @ 0x1407B93B0 (EtwpUpdateLastBranchTracingConfiguration.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1401B2C10 (RtlpInterlockedPushEntrySList.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

_SLIST_ENTRY *EtwpReferenceLastBranchLookasideList()
{
  SIZE_T v0; // rdi
  int v1; // ebx
  _SLIST_ENTRY *result; // rax

  v0 = (unsigned int)(24 * EtwpLastBranchStackSize + 16);
  v1 = 2 * KeNumberProcessors_0 * _InterlockedIncrement(&dword_1403D0F00);
  do
  {
    result = (_SLIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, v0, 0x78777445u);
    if ( !result )
      break;
    RtlpInterlockedPushEntrySList(&EtwpLastBranchLookAsideList, result);
    result = (_SLIST_ENTRY *)(unsigned int)_InterlockedIncrement(&dword_1403D0F04);
  }
  while ( (int)result < v1 );
  return result;
}
