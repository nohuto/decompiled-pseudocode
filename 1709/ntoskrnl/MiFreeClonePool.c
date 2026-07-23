/*
 * XREFs of MiFreeClonePool @ 0x14012BE94
 * Callers:
 *     MiDereferenceSegmentThread @ 0x14014B2F0 (MiDereferenceSegmentThread.c)
 *     MiProcessDereferenceList @ 0x14014B46C (MiProcessDereferenceList.c)
 * Callees:
 *     MiUnlockPagedAddress @ 0x14012BF78 (MiUnlockPagedAddress.c)
 *     RtlpInterlockedPopEntrySList @ 0x140188F70 (RtlpInterlockedPopEntrySList.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
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
