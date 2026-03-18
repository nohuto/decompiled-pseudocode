/*
 * XREFs of _DrainThreadCoreMessagingCompletions @ 0x1C004CE70
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     ?xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATION@@W4tagQUEUE_COMPLETION_DRAINER@@@Z @ 0x1C004CF44 (-xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATIO.c)
 */

__int64 DrainThreadCoreMessagingCompletions()
{
  unsigned int v0; // ebx
  int v1; // esi
  int v3; // [rsp+28h] [rbp-40h]
  _DWORD v4[8]; // [rsp+40h] [rbp-28h] BYREF
  char v5; // [rsp+70h] [rbp+8h] BYREF
  __int64 v6; // [rsp+78h] [rbp+10h] BYREF

  v0 = 0;
  if ( *(_QWORD *)(gptiCurrent + 1336LL) )
  {
    v6 = 0LL;
    v1 = 0;
    ZwSetIoCompletionEx(*(_QWORD *)(gptiCurrent + 1296LL), *(_QWORD *)(gptiCurrent + 1328LL), 2LL, 0LL, 0, 0LL);
    while ( 1 )
    {
      LOBYTE(v3) = 0;
      if ( (unsigned int)ZwRemoveIoCompletionEx(*(_QWORD *)(gptiCurrent + 1296LL), v4, 1LL, &v5, &v6, v3) )
        break;
      if ( v4[0] )
      {
        if ( v4[0] != 1 || !*(_QWORD *)(gptiCurrent + 1336LL) )
          break;
        xxxHandleCoreMessagingQueueCompletion(gptiCurrent, v4, 0LL);
      }
      else
      {
        v1 = 1;
      }
    }
    if ( v1 )
      ZwAssociateWaitCompletionPacket(
        *(_QWORD *)(gptiCurrent + 1320LL),
        *(_QWORD *)(gptiCurrent + 1296LL),
        *(_QWORD *)(gptiCurrent + 1312LL),
        0LL,
        0LL,
        0,
        0LL,
        0LL);
    return 1;
  }
  else
  {
    UserSetLastError(5LL);
  }
  return v0;
}
