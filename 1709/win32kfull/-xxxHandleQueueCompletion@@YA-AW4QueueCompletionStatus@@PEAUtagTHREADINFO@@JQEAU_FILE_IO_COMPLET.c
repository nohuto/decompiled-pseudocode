/*
 * XREFs of ?xxxHandleQueueCompletion@@YA?AW4QueueCompletionStatus@@PEAUtagTHREADINFO@@JQEAU_FILE_IO_COMPLETION_INFORMATION@@W4tagQUEUE_COMPLETION_DRAINER@@@Z @ 0x1C00A81A0
 * Callers:
 *     xxxDrainQueueCompletions @ 0x1C00A0344 (xxxDrainQueueCompletions.c)
 *     _DrainThreadCoreMessagingCompletions @ 0x1C00A5F30 (_DrainThreadCoreMessagingCompletions.c)
 *     NtUserGetQueueStatusReadonly @ 0x1C00A63B0 (NtUserGetQueueStatusReadonly.c)
 *     xxxRealInternalGetMessage @ 0x1C00A66B0 (xxxRealInternalGetMessage.c)
 * Callees:
 *     ?xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATION@@W4tagQUEUE_COMPLETION_DRAINER@@@Z @ 0x1C0086A48 (-xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATIO.c)
 */

__int64 __fastcall xxxHandleQueueCompletion(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  if ( !a2 )
  {
    result = *(unsigned int *)(a3 + 8);
    if ( (_DWORD)result == 1 )
      return 3LL;
    if ( (_DWORD)result == 2 )
      return result;
    if ( !(_DWORD)result && *(_QWORD *)(a1 + 1424) )
    {
      xxxHandleCoreMessagingQueueCompletion(a1, (ULONG64 *)a3, (unsigned int)a4, a4);
      return 4LL;
    }
    return 0LL;
  }
  return a2 == 258;
}
