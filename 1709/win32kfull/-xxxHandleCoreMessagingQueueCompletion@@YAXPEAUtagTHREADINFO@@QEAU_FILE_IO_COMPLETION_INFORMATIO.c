/*
 * XREFs of ?xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATION@@W4tagQUEUE_COMPLETION_DRAINER@@@Z @ 0x1C0086A48
 * Callers:
 *     xxxRemoveQueueCompletion @ 0x1C00A3A98 (xxxRemoveQueueCompletion.c)
 *     ?xxxHandleQueueCompletion@@YA?AW4QueueCompletionStatus@@PEAUtagTHREADINFO@@JQEAU_FILE_IO_COMPLETION_INFORMATION@@W4tagQUEUE_COMPLETION_DRAINER@@@Z @ 0x1C00A81A0 (-xxxHandleQueueCompletion@@YA-AW4QueueCompletionStatus@@PEAUtagTHREADINFO@@JQEAU_FILE_IO_COMPLET.c)
 * Callees:
 *     xxxSendMessage @ 0x1C00A6110 (xxxSendMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C00AB4B0 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 */

ULONG64 __fastcall xxxHandleCoreMessagingQueueCompletion(__int64 a1, ULONG64 *a2, __int64 a3, __int64 a4)
{
  __int64 *v6; // r14
  ULONG64 v7; // rcx
  __int64 *v8; // rax
  __int64 v9; // r15
  __int64 v10; // rbx
  struct _KTHREAD *CurrentThread; // r12
  __int64 v12; // rsi
  __int64 *ThreadWin32Thread; // rax
  unsigned __int64 v14; // rdx
  PVOID v15; // rcx
  ULONG64 v16; // rbx
  _QWORD *v17; // rcx
  ULONG64 result; // rax
  _QWORD v19[4]; // [rsp+50h] [rbp-48h] BYREF

  v6 = (__int64 *)((char *)KeGetPcr()->NtTib.Self[45].StackLimit + 8);
  v7 = MmUserProbeAddress;
  v8 = v6;
  if ( (unsigned __int64)v6 >= MmUserProbeAddress )
    v8 = (__int64 *)MmUserProbeAddress;
  v9 = *v8;
  if ( (_DWORD)a3 && !v9 )
  {
    v10 = *(_QWORD *)(a1 + 1424);
    CurrentThread = KeGetCurrentThread();
    v12 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(MmUserProbeAddress, a2, a3, a4) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v12 = *ThreadWin32Thread;
    }
    v19[0] = *(_QWORD *)(v12 + 392);
    *(_QWORD *)(v12 + 392) = v19;
    v19[1] = v10;
    if ( v10 )
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
    v14 = (unsigned __int64)_PostTransformableMessageExtended(*(struct tagWND **)(a1 + 1424), 0x60u, 1uLL, 0LL, 0LL, 1);
    v15 = MmSystemRangeStart;
    if ( v14 >= (unsigned __int64)MmSystemRangeStart )
      v14 = v14 != 0;
    if ( !(_DWORD)v14 )
      xxxSendMessage(*(_QWORD *)(a1 + 1424), 96LL, 2LL, 0LL);
    ThreadUnlock1(v15, v14);
  }
  v16 = *a2;
  if ( ((PsGetCurrentProcessWow64Process(v7) != 0 ? 0 : 3) & *a2) != 0 )
    ExRaiseDatatypeMisalignment();
  v17 = (_QWORD *)v16;
  if ( v16 >= MmUserProbeAddress )
    v17 = (_QWORD *)MmUserProbeAddress;
  *v17 = v9;
  result = MmUserProbeAddress;
  if ( (unsigned __int64)v6 >= MmUserProbeAddress )
    v6 = (__int64 *)MmUserProbeAddress;
  *v6 = v16;
  return result;
}
