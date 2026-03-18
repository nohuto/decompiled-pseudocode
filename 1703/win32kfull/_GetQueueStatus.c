/*
 * XREFs of _GetQueueStatus @ 0x1C004CC40
 * Callers:
 *     NtUserGetThreadState @ 0x1C00E1940 (NtUserGetThreadState.c)
 * Callees:
 *     ?xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATION@@W4tagQUEUE_COMPLETION_DRAINER@@@Z @ 0x1C004CF44 (-xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATIO.c)
 */

__int64 __fastcall GetQueueStatus(__int16 a1)
{
  __int64 v2; // rdi
  __int64 *ThreadWin32Thread; // rax
  char v4; // si
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // r14d
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  int v14; // ebp
  int v15; // r8d
  int v17; // [rsp+28h] [rbp-60h]
  _DWORD v18[18]; // [rsp+40h] [rbp-48h] BYREF
  char v19; // [rsp+98h] [rbp+10h] BYREF
  __int64 v20; // [rsp+A0h] [rbp+18h] BYREF

  v2 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v2 = *ThreadWin32Thread;
  if ( *(_QWORD *)(v2 + 1336) && (a1 & 8) != 0 )
  {
    v4 = 0;
    if ( !ExIsResourceAcquiredExclusiveLite(gpresUser) )
    {
      if ( gdwInAtomicOperation )
      {
        v5 = gdwExtraInstrumentations;
        if ( (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
      }
      UserSessionSwitchLeaveCrit(v5, gdwInAtomicOperation, v6, v7);
      EnterCrit(0LL, 1LL);
      v4 = 1;
    }
    v20 = 0LL;
    v8 = 0;
    ZwSetIoCompletionEx(*(_QWORD *)(gptiCurrent + 1296LL), *(_QWORD *)(gptiCurrent + 1328LL), 2LL, 0LL, 0, 0LL);
    while ( 1 )
    {
      LOBYTE(v17) = 0;
      if ( (unsigned int)ZwRemoveIoCompletionEx(*(_QWORD *)(gptiCurrent + 1296LL), v18, 1LL, &v19, &v20, v17) )
        break;
      if ( v18[0] )
      {
        if ( v18[0] != 1 || !*(_QWORD *)(gptiCurrent + 1336LL) )
          break;
        xxxHandleCoreMessagingQueueCompletion(gptiCurrent, v18, 1LL);
      }
      else
      {
        v8 = 1;
      }
    }
    if ( v8 )
      ZwAssociateWaitCompletionPacket(
        *(_QWORD *)(gptiCurrent + 1320LL),
        *(_QWORD *)(gptiCurrent + 1296LL),
        *(_QWORD *)(gptiCurrent + 1312LL),
        0LL,
        0LL,
        0,
        0LL,
        0LL);
    if ( v4 )
    {
      UserSessionSwitchLeaveCrit(v10, v9, v11, v12);
      EnterSharedCrit(0LL, 1LL);
    }
  }
  v13 = *(_QWORD *)(v2 + 400);
  v14 = a1 & 0x5DFF;
  v15 = *(unsigned __int16 *)(v13 + 4);
  *(_WORD *)(v13 + 4) = v15 & ~(_WORD)v14;
  return v14 & v15 | ((unsigned __int16)(v14 & (*(_WORD *)(*(_QWORD *)(v2 + 400) + 6LL) | *(_WORD *)(*(_QWORD *)(v2 + 400) + 8LL))) << 16);
}
