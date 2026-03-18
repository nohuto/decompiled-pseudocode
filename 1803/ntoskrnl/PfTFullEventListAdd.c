/*
 * XREFs of PfTFullEventListAdd @ 0x14008E958
 * Callers:
 *     PfpEventHandleFullBuffer @ 0x14008E910 (PfpEventHandleFullBuffer.c)
 *     PfpFlushEventBuffers @ 0x1405292B0 (PfpFlushEventBuffers.c)
 * Callees:
 *     PfFbBufferListInsertInFree @ 0x14007AB9C (PfFbBufferListInsertInFree.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401B2BD0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401B2C10 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall PfTFullEventListAdd(PSLIST_ENTRY ListEntry)
{
  PSLIST_ENTRY result; // rax

  RtlpInterlockedPushEntrySList(&stru_1403CD360, ListEntry);
  while ( 1 )
  {
    result = (PSLIST_ENTRY)LOWORD(stru_1403CD360.Alignment);
    if ( LOWORD(stru_1403CD360.Alignment) <= (unsigned int)dword_1403CD370 )
      break;
    result = RtlpInterlockedPopEntrySList(&stru_1403CD360);
    if ( !result )
      break;
    PfFbBufferListInsertInFree(
      (_SLIST_ENTRY *)&stru_1403CD2E0,
      result,
      LODWORD(result[2].Next) - (_DWORD)result,
      *((_DWORD *)&result[2].Next + 3),
      1);
  }
  return result;
}
