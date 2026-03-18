/*
 * XREFs of PfTFullEventListAdd @ 0x1400602BC
 * Callers:
 *     PfpEventHandleFullBuffer @ 0x140060270 (PfpEventHandleFullBuffer.c)
 *     PfpFlushEventBuffers @ 0x1404962F0 (PfpFlushEventBuffers.c)
 * Callees:
 *     PfFbBufferListInsertInFree @ 0x14005F1F8 (PfFbBufferListInsertInFree.c)
 *     RtlpInterlockedPopEntrySList @ 0x140189470 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401894B0 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall PfTFullEventListAdd(PSLIST_ENTRY ListEntry)
{
  PSLIST_ENTRY result; // rax

  RtlpInterlockedPushEntrySList(&stru_14036DAE0, ListEntry);
  while ( 1 )
  {
    result = (PSLIST_ENTRY)LOWORD(stru_14036DAE0.Alignment);
    if ( LOWORD(stru_14036DAE0.Alignment) <= (unsigned int)dword_14036DAF0 )
      break;
    result = RtlpInterlockedPopEntrySList(&stru_14036DAE0);
    if ( !result )
      break;
    PfFbBufferListInsertInFree(
      (_SLIST_ENTRY *)&stru_14036DA60,
      result,
      LODWORD(result[2].Next) - (_DWORD)result,
      *((_DWORD *)&result[2].Next + 3),
      1);
  }
  return result;
}
