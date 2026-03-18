/*
 * XREFs of NtUserGetQueueStatusReadonly @ 0x1C00D5C90
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATION@@W4tagQUEUE_COMPLETION_DRAINER@@@Z @ 0x1C004CF44 (-xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATIO.c)
 */

__int64 __fastcall NtUserGetQueueStatusReadonly(unsigned __int16 a1)
{
  __int64 v2; // rbp
  __int64 v3; // r8
  __int64 v4; // r9
  char v5; // bl
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // r15d
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  unsigned int v13; // ebx
  int v15; // [rsp+28h] [rbp-60h]
  _DWORD v16[8]; // [rsp+40h] [rbp-48h] BYREF
  char v17; // [rsp+98h] [rbp+10h] BYREF
  __int64 v18; // [rsp+A0h] [rbp+18h] BYREF

  v2 = EnterSharedCrit(0LL, 1LL);
  if ( *(_QWORD *)(v2 + 1336) && (a1 & 8) != 0 )
  {
    v5 = 0;
    if ( !ExIsResourceAcquiredExclusiveLite(gpresUser) )
    {
      if ( gdwInAtomicOperation )
      {
        v6 = gdwExtraInstrumentations;
        if ( (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
      }
      UserSessionSwitchLeaveCrit(v6, gdwInAtomicOperation, v7, v8);
      EnterCrit(0LL, 1LL);
      v5 = 1;
    }
    v18 = 0LL;
    v9 = 0;
    ZwSetIoCompletionEx(*(_QWORD *)(gptiCurrent + 1296LL), *(_QWORD *)(gptiCurrent + 1328LL), 2LL, 0LL, 0, 0LL);
    while ( 1 )
    {
      LOBYTE(v15) = 0;
      if ( (unsigned int)ZwRemoveIoCompletionEx(*(_QWORD *)(gptiCurrent + 1296LL), v16, 1LL, &v17, &v18, v15) )
        break;
      if ( v16[0] )
      {
        if ( v16[0] != 1 || !*(_QWORD *)(gptiCurrent + 1336LL) )
          break;
        xxxHandleCoreMessagingQueueCompletion(gptiCurrent, (__int64)v16, 1LL, v4);
      }
      else
      {
        v9 = 1;
      }
    }
    if ( v9 )
      ZwAssociateWaitCompletionPacket(
        *(_QWORD *)(gptiCurrent + 1320LL),
        *(_QWORD *)(gptiCurrent + 1296LL),
        *(_QWORD *)(gptiCurrent + 1312LL),
        0LL,
        0LL,
        0,
        0LL,
        0LL);
    if ( v5 )
    {
      UserSessionSwitchLeaveCrit(v11, v10, v3, v4);
      EnterSharedCrit(0LL, 1LL);
    }
  }
  v12 = a1 | (a1 << 16);
  v13 = v12 & *(_DWORD *)(*(_QWORD *)(v2 + 400) + 4LL);
  UserSessionSwitchLeaveCrit(v12, a1, v3, v4);
  return v13;
}
