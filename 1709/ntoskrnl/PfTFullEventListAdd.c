/*
 * XREFs of PfTFullEventListAdd @ 0x1400128F8
 * Callers:
 *     PfpEventHandleFullBuffer @ 0x1400128B0 (PfpEventHandleFullBuffer.c)
 *     PfpFlushEventBuffers @ 0x140455360 (PfpFlushEventBuffers.c)
 * Callees:
 *     PfFbBufferListInsertInFree @ 0x140011D44 (PfFbBufferListInsertInFree.c)
 *     RtlpInterlockedPopEntrySList @ 0x140188F70 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x140188FB0 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall PfTFullEventListAdd(PSLIST_ENTRY ListEntry)
{
  PSLIST_ENTRY result; // rax

  RtlpInterlockedPushEntrySList(&stru_140387A60, ListEntry);
  while ( 1 )
  {
    result = (PSLIST_ENTRY)LOWORD(stru_140387A60.Alignment);
    if ( LOWORD(stru_140387A60.Alignment) <= (unsigned int)dword_140387A70 )
      break;
    result = RtlpInterlockedPopEntrySList(&stru_140387A60);
    if ( !result )
      break;
    PfFbBufferListInsertInFree(
      (_SLIST_ENTRY *)&stru_1403879E0,
      result,
      LODWORD(result[2].Next) - (_DWORD)result,
      *((_DWORD *)&result[2].Next + 3),
      1);
  }
  return result;
}
