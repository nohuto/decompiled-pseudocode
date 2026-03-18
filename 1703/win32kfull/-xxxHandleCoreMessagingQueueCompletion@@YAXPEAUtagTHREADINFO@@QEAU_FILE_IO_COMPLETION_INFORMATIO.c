/*
 * XREFs of ?xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATION@@W4tagQUEUE_COMPLETION_DRAINER@@@Z @ 0x1C004CF44
 * Callers:
 *     _RemoveQueueCompletion @ 0x1C004CB60 (_RemoveQueueCompletion.c)
 *     _GetQueueStatus @ 0x1C004CC40 (_GetQueueStatus.c)
 *     _DrainThreadCoreMessagingCompletions @ 0x1C004CE70 (_DrainThreadCoreMessagingCompletions.c)
 *     xxxRealInternalGetMessage @ 0x1C0050B40 (xxxRealInternalGetMessage.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C005AF70 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     ?xxxHandleQueueCompletion@@YA?AW4QueueCompletionStatus@@PEAUtagTHREADINFO@@JQEAU_FILE_IO_COMPLETION_INFORMATION@@W4tagQUEUE_COMPLETION_DRAINER@@@Z @ 0x1C00C8914 (-xxxHandleQueueCompletion@@YA-AW4QueueCompletionStatus@@PEAUtagTHREADINFO@@JQEAU_FILE_IO_COMPLET.c)
 *     NtUserGetQueueStatusReadonly @ 0x1C00D5C90 (NtUserGetQueueStatusReadonly.c)
 * Callees:
 *     xxxSendMessage @ 0x1C00509B0 (xxxSendMessage.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C0055300 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 */

char __fastcall xxxHandleCoreMessagingQueueCompletion(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v6; // rdi
  __int64 v7; // rcx
  __int64 *v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rdx
  struct tagQMSG *v11; // rax
  __int64 v12; // rdx
  PVOID v13; // rcx
  _QWORD *v14; // rbx
  __int64 v15; // rax
  char *v16; // rdx
  char result; // al
  _QWORD *v18; // rcx
  _QWORD v19[7]; // [rsp+50h] [rbp-38h] BYREF

  v6 = (__int64 *)((char *)KeGetPcr()->NtTib.Self[45].StackLimit + 8);
  v7 = W32UserProbeAddress;
  v8 = v6;
  if ( (unsigned __int64)v6 >= W32UserProbeAddress )
    v8 = (__int64 *)W32UserProbeAddress;
  v9 = *v8;
  if ( (_DWORD)a3 && !v9 )
  {
    v10 = *(_QWORD *)(a1 + 1336);
    v19[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v19;
    v19[1] = v10;
    if ( v10 )
      ++*(_DWORD *)(v10 + 8);
    v11 = _PostTransformableMessageExtended(*(struct tagWND **)(a1 + 1336), 0x60u, 1uLL, 0LL, 0LL, 1);
    v13 = MmSystemRangeStart;
    if ( (v11 < MmSystemRangeStart || !v11) && !(_DWORD)v11 )
      xxxSendMessage(*(_QWORD *)(a1 + 1336), 96LL, 2LL, 0LL);
    ThreadUnlock1(v13, v12);
  }
  v14 = *(_QWORD **)(a2 + 8);
  v15 = -PsGetCurrentProcessWow64Process(v7, a2, a3, a4);
  v16 = *(char **)(a2 + 8);
  if ( ((v15 != 0 ? 0 : 3) & (unsigned int)v16) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( (unsigned __int64)v16 >= W32UserProbeAddress )
    v16 = (char *)W32UserProbeAddress;
  result = *v16;
  v18 = v14;
  if ( (unsigned __int64)v14 >= W32UserProbeAddress )
    v18 = (_QWORD *)W32UserProbeAddress;
  *v18 = v9;
  if ( (unsigned __int64)v6 >= W32UserProbeAddress )
    v6 = (__int64 *)W32UserProbeAddress;
  *v6 = (__int64)v14;
  return result;
}
