/*
 * XREFs of _RemoveQueueCompletion @ 0x1C004CB60
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATION@@W4tagQUEUE_COMPLETION_DRAINER@@@Z @ 0x1C004CF44 (-xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATIO.c)
 */

__int64 RemoveQueueCompletion()
{
  unsigned int v0; // ebx
  int v1; // eax
  int v2; // edi
  _DWORD v4[8]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v5; // [rsp+70h] [rbp+8h] BYREF
  __int64 v6; // [rsp+78h] [rbp+10h] BYREF

  v0 = 0;
  v6 = 0LL;
  v1 = ZwRemoveIoCompletionEx(*(_QWORD *)(gptiCurrent + 1296LL), v4, 1LL, &v5, &v6, 0);
  v2 = 0;
  if ( v1 )
  {
    v2 = v1 == 258;
  }
  else if ( v4[0] )
  {
    if ( v4[0] == 2 )
    {
      v2 = 2;
    }
    else if ( v4[0] == 1 && *(_QWORD *)(gptiCurrent + 1336LL) )
    {
      v2 = v4[0] + 3;
      xxxHandleCoreMessagingQueueCompletion(gptiCurrent, v4, v4[0]);
    }
  }
  else
  {
    v2 = 3;
    ZwAssociateWaitCompletionPacket(
      *(_QWORD *)(gptiCurrent + 1320LL),
      *(_QWORD *)(gptiCurrent + 1296LL),
      *(_QWORD *)(gptiCurrent + 1312LL),
      0LL,
      0LL,
      0,
      0LL,
      0LL);
  }
  LOBYTE(v0) = v2 == 4;
  return v0;
}
