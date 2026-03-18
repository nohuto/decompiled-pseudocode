/*
 * XREFs of ?xxxHandleQueueCompletion@@YA?AW4QueueCompletionStatus@@PEAUtagTHREADINFO@@JQEAU_FILE_IO_COMPLETION_INFORMATION@@W4tagQUEUE_COMPLETION_DRAINER@@@Z @ 0x1C00C8914
 * Callers:
 *     xxxRemoveQueueCompletion @ 0x1C00C8860 (xxxRemoveQueueCompletion.c)
 * Callees:
 *     ?xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATION@@W4tagQUEUE_COMPLETION_DRAINER@@@Z @ 0x1C004CF44 (-xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATIO.c)
 */

__int64 __fastcall xxxHandleQueueCompletion(__int64 a1, int a2, int *a3, __int64 a4)
{
  int v4; // eax
  unsigned int v5; // ebx

  v4 = *a3;
  v5 = 0;
  if ( a2 )
  {
    return a2 == 258;
  }
  else if ( v4 )
  {
    if ( v4 == 2 )
    {
      return 2;
    }
    else if ( v4 == 1 && *(_QWORD *)(a1 + 1336) )
    {
      v5 = 4;
      xxxHandleCoreMessagingQueueCompletion(a1, (__int64)a3, (unsigned int)a4, a4);
    }
  }
  else
  {
    return 3;
  }
  return v5;
}
