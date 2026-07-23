/*
 * XREFs of MiFreeClonePool @ 0x1400CEA18
 * Callers:
 *     MiProcessDereferenceList @ 0x140153094 (MiProcessDereferenceList.c)
 *     MiDereferenceSegmentThread @ 0x14017CE40 (MiDereferenceSegmentThread.c)
 *     MiDeletePartitionResources @ 0x14026E874 (MiDeletePartitionResources.c)
 * Callees:
 *     MiUnlockPagedAddress @ 0x1400CEA8C (MiUnlockPagedAddress.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401B2BD0 (RtlpInterlockedPopEntrySList.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

PSLIST_ENTRY __fastcall MiFreeClonePool(_SLIST_HEADER *a1)
{
  _SLIST_HEADER *v1; // rbp
  PSLIST_ENTRY result; // rax
  PSLIST_ENTRY v3; // rbx
  __int64 v4; // rdi
  PSLIST_ENTRY v5; // rsi

  v1 = a1 + 110;
  while ( 1 )
  {
    result = RtlpInterlockedPopEntrySList(v1);
    v3 = result;
    if ( !result )
      break;
    v4 = *((_QWORD *)&result[1].Next + 1);
    if ( v4 )
    {
      v5 = result;
      do
      {
        MiUnlockPagedAddress(v5);
        v5 += 256;
        --v4;
      }
      while ( v4 );
    }
    ExFreePoolWithTag(v3, 0);
  }
  return result;
}
