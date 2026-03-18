/*
 * XREFs of TtmiCreateTerminal @ 0x1406D7E80
 * Callers:
 *     TtmInitCurrentSession @ 0x1406D8F38 (TtmInitCurrentSession.c)
 *     TtmpDispatchCreateTerminal @ 0x1406DA32C (TtmpDispatchCreateTerminal.c)
 * Callees:
 *     RtlFindClearBitsAndSet @ 0x14005ED00 (RtlFindClearBitsAndSet.c)
 *     KeInitializeDpc @ 0x140088A30 (KeInitializeDpc.c)
 *     KeInitializeTimerEx @ 0x14010F0E0 (KeInitializeTimerEx.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ObCreateObjectEx @ 0x14050DA70 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14050DCA0 (ObInsertObjectEx.c)
 *     TtmiLogError @ 0x140584D50 (TtmiLogError.c)
 *     TtmpSetTerminalPendingCleanup @ 0x1406D8A28 (TtmpSetTerminalPendingCleanup.c)
 *     TtmiUpdateActiveTerminalCount @ 0x1406D96F4 (TtmiUpdateActiveTerminalCount.c)
 *     TtmiLogTerminalCreated @ 0x1406DD20C (TtmiLogTerminalCreated.c)
 */

__int64 __fastcall TtmiCreateTerminal(
        __int64 a1,
        unsigned int a2,
        unsigned __int8 a3,
        _QWORD *a4,
        PVOID DeferredContext,
        _QWORD *a6)
{
  _DWORD *v6; // r14
  ULONG ClearBitsAndSet; // esi
  unsigned int v12; // ebx
  int v13; // r9d
  int v14; // r8d
  int v15; // edx
  int v16; // eax
  char *v17; // rbx
  __int64 v18; // rdx
  _QWORD *v19; // rdi
  _QWORD *v20; // rdx
  int inserted; // eax
  _QWORD *v22; // rax
  __int64 v24; // [rsp+20h] [rbp-78h]
  _DWORD v25[12]; // [rsp+50h] [rbp-48h] BYREF

  v6 = DeferredContext;
  *a4 = 0LL;
  DeferredContext = 0LL;
  *v6 = -1;
  ClearBitsAndSet = RtlFindClearBitsAndSet((PRTL_BITMAP)(a1 + 56), 1u, 0);
  if ( ClearBitsAndSet == -1 )
  {
    v12 = -1073741756;
    TtmiLogError("TtmiAcquireTerminalId", 656, -1, -1073741756);
    v13 = -1073741756;
    v14 = -1073741756;
    v15 = 581;
LABEL_3:
    TtmiLogError("TtmiCreateTerminal", v15, v14, v13);
    return v12;
  }
  memset(v25, 0, sizeof(v25));
  v25[0] = 48;
  v25[6] = a3 == 0 ? 0x200 : 0;
  v16 = ObCreateObjectEx(0, TtmpTerminalObjectType, (int)v25, a3, v24, 280, 0, 0, &DeferredContext, 0LL);
  v12 = v16;
  if ( v16 < 0 )
  {
    v13 = v16;
    v14 = v16;
    v15 = 614;
    _bittestandreset(*(signed __int32 **)(a1 + 64), ClearBitsAndSet);
    goto LABEL_3;
  }
  v17 = (char *)DeferredContext;
  memset(DeferredContext, 0, 0x118uLL);
  *((_DWORD *)v17 + 6) = 1416459348;
  *((_DWORD *)v17 + 7) = ClearBitsAndSet;
  if ( ClearBitsAndSet )
  {
    *((_DWORD *)v17 + 9) = 1;
    *((_DWORD *)v17 + 67) = 1;
    *((_DWORD *)v17 + 11) = 2;
    *((_QWORD *)v17 + 8) = 300000000LL;
  }
  else
  {
    *((_DWORD *)v17 + 9) = 3;
    *((_DWORD *)v17 + 67) = 3;
    LOBYTE(v18) = 1;
    *((_DWORD *)v17 + 11) = 0;
    *((_DWORD *)v17 + 8) |= 0x10u;
    TtmiUpdateActiveTerminalCount(a1, v18, 26LL);
  }
  KeInitializeTimerEx((PKTIMER)(v17 + 80), NotificationTimer);
  KeInitializeDpc((PRKDPC)(v17 + 144), (PKDEFERRED_ROUTINE)TtmpScheduledEvaluationDpc, v17);
  *((_QWORD *)v17 + 26) = 0LL;
  *((_QWORD *)v17 + 28) = TtmpScheduledEvaluationWorker;
  *((_QWORD *)v17 + 29) = v17;
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
  v19 = DeferredContext;
  *((_QWORD *)DeferredContext + 2) = a1;
  v20 = *(_QWORD **)(a1 + 48);
  if ( *v20 != a1 + 40 )
    __fastfail(3u);
  v19[1] = v20;
  *v19 = a1 + 40;
  *v20 = v19;
  *(_QWORD *)(a1 + 48) = v19;
  TtmiLogTerminalCreated(v19, ClearBitsAndSet);
  inserted = ObInsertObjectEx(v19, 0LL, a2, 1, 0, 0LL, a4);
  v12 = inserted;
  if ( inserted >= 0 )
  {
    v22 = a6;
    *v6 = ClearBitsAndSet;
    if ( v22 )
      *v22 = v19;
    return 0;
  }
  else
  {
    TtmiLogError("TtmiCreateTerminal", 681, inserted, inserted);
    TtmpSetTerminalPendingCleanup(a1, v19);
  }
  return v12;
}
