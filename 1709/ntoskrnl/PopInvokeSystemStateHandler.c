/*
 * XREFs of PopInvokeSystemStateHandler @ 0x140439AE4
 * Callers:
 *     PopEndMirroring @ 0x140432FE0 (PopEndMirroring.c)
 *     PopTransitionToSleep @ 0x140435830 (PopTransitionToSleep.c)
 *     PopShutdownSystem @ 0x14043A3E0 (PopShutdownSystem.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140094390 (KeInsertQueueDpc.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400A73D0 (KeSetSystemGroupAffinityThread.c)
 *     EtwTraceKernelEvent @ 0x1400AE1E4 (EtwTraceKernelEvent.c)
 *     KeInitializeDpc @ 0x1400B2860 (KeInitializeDpc.c)
 *     VfIsVerifierEnabled @ 0x1400F8F48 (VfIsVerifierEnabled.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     DbgBreakPointWithStatus @ 0x140188EF0 (DbgBreakPointWithStatus.c)
 *     RtlpInterlockedPushEntrySList @ 0x140188FB0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     KeRebaselineInterruptTime @ 0x140202464 (KeRebaselineInterruptTime.c)
 *     KeRebaselineSystemTime @ 0x140202490 (KeRebaselineSystemTime.c)
 *     MiUpdateUserMappings @ 0x14042F614 (MiUpdateUserMappings.c)
 *     MmUpdateHiberMappings @ 0x1404306AC (MmUpdateHiberMappings.c)
 *     MmInvalidateDumpAddresses @ 0x140430834 (MmInvalidateDumpAddresses.c)
 *     PopIssueNextState @ 0x14043A2A8 (PopIssueNextState.c)
 *     PopCheckpointSystemSleep @ 0x14043A498 (PopCheckpointSystemSleep.c)
 *     VfNotifyOfHibernate @ 0x1407AC6BC (VfNotifyOfHibernate.c)
 *     BgLibraryInitialize @ 0x1407D088C (BgLibraryInitialize.c)
 */

__int64 __fastcall PopInvokeSystemStateHandler(int a1, __int64 a2)
{
  __int64 v2; // r15
  signed int Next; // r13d
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(PVOID); // rsi
  __int64 v8; // rdi
  unsigned __int8 CurrentIrql; // r12
  unsigned int i; // ebx
  int v11; // edi
  __int64 *v12; // rsi
  LARGE_INTEGER PerformanceCounter; // rdi
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  unsigned __int64 v31; // rcx
  char v32; // bl
  bool v33; // zf
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  char v37; // bl
  __int64 v38; // rcx
  char v39; // al
  LARGE_INTEGER v40; // [rsp+30h] [rbp-D0h] BYREF
  struct _GROUP_AFFINITY Affinity; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v42; // [rsp+48h] [rbp-B8h]
  LARGE_INTEGER v43; // [rsp+50h] [rbp-B0h] BYREF
  _SLIST_ENTRY v44[6]; // [rsp+60h] [rbp-A0h] BYREF
  struct _KDPC Dpc; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD DeferredContext[10]; // [rsp+100h] [rbp+0h] BYREF
  _QWORD *v47; // [rsp+150h] [rbp+50h] BYREF
  int v48; // [rsp+158h] [rbp+58h]
  int v49; // [rsp+15Ch] [rbp+5Ch]
  _QWORD v50[2]; // [rsp+160h] [rbp+60h] BYREF
  _QWORD v51[2]; // [rsp+170h] [rbp+70h] BYREF
  _QWORD v52[3]; // [rsp+180h] [rbp+80h] BYREF

  v2 = a1;
  LOBYTE(v42) = 0;
  v40.QuadPart = 0LL;
  Next = -1073741823;
  memset(DeferredContext, 0, sizeof(DeferredContext));
  LODWORD(DeferredContext[5]) = v2;
  memset(v52, 0, sizeof(v52));
  DeferredContext[0] = v52;
  DeferredContext[4] = &PopPowerStateNotifyHandler;
  if ( (_DWORD)v2 != 7 )
  {
    DeferredContext[0] = (char *)&PopPowerStateHandlers + 24 * v2;
    if ( !*(_QWORD *)(DeferredContext[0] + 8LL) )
      return 3221225664LL;
  }
  HIDWORD(DeferredContext[7]) = KeNumberProcessors_0;
  LODWORD(DeferredContext[6]) = KeNumberProcessors_0;
  LODWORD(DeferredContext[7]) = 1;
  if ( ((_DWORD)v2 == 3 || (_DWORD)v2 == 6) && a2 )
  {
    v6 = a2;
    DeferredContext[2] = a2;
    v7 = PopSaveHiberContextWrapper;
    DeferredContext[3] = a2;
    DeferredContext[1] = PopSaveHiberContextWrapper;
    v8 = a2;
  }
  else
  {
    v6 = DeferredContext[3];
    v8 = DeferredContext[2];
    v7 = (__int64 (__fastcall *)(PVOID))DeferredContext[1];
  }
  memset(v44, 0, sizeof(v44));
  if ( a2 )
  {
    PopHibernateSystemContext = DeferredContext[0];
    qword_140387BC8 = (__int64)v7;
    qword_140387BE0 = (__int64)&PopPowerStateNotifyHandler;
    v12 = &PopHibernateSystemContext;
    byte_140387BEC = BYTE4(DeferredContext[5]);
    dword_140387BF0 = DeferredContext[6];
    qword_140387BD0 = v8;
    qword_140387BD8 = v6;
    dword_140387BE8 = v2;
    dword_140387BFC = KeNumberProcessors_0;
    dword_140387BF8 = DeferredContext[7];
    RtlpInterlockedPushEntrySList(&SListHead, &v44[5]);
    CurrentIrql = v42;
  }
  else
  {
    Affinity.Reserved[1] = 0;
    *(_DWORD *)&Affinity.Group = (unsigned __int16)((unsigned int)KiProcessorIndexToNumberMappingTable[0] >> 6);
    Affinity.Reserved[2] = 0;
    Affinity.Mask = 1LL << (KiProcessorIndexToNumberMappingTable[0] & 0x3F);
    KeSetSystemGroupAffinityThread(&Affinity, 0LL);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    KeInitializeDpc(&Dpc, (PKDEFERRED_ROUTINE)PopInvokeStateHandlerTargetProcessor, DeferredContext);
    Dpc.Importance = 2;
    for ( i = 0; i < (unsigned int)KeNumberProcessors_0; ++i )
    {
      if ( i != KeGetCurrentPrcb()->Number )
      {
        v11 = HIDWORD(DeferredContext[6]);
        if ( !Dpc.DpcData )
          Dpc.Number = i + 1280;
        KeInsertQueueDpc(&Dpc, 0LL, 0LL);
        while ( v11 == HIDWORD(DeferredContext[6]) )
          _mm_pause();
      }
    }
    v12 = DeferredContext;
  }
  PopIssueNextState(v12, v44, 2LL);
  PopIssueNextState(v12, v44, 3LL);
  if ( dword_140365800 == 4 )
  {
    PerformanceCounter.QuadPart = 0LL;
    v14 = 1000000LL * KeGetCurrentPrcb()->MHz;
  }
  else
  {
    v14 = PopQpcFrequency;
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
  }
  if ( (xmmword_140401150 & 0x8000) != 0 )
  {
    v49 = 0;
    v47 = v51;
    v51[0] = PerformanceCounter.QuadPart;
    v51[1] = v14;
    v48 = 16;
    EtwTraceKernelEvent((__int64)&v47, 1u, 0x80008000, 0x1230u, 0x401802u);
  }
  PopIssueNextState(v12, v44, 4LL);
  if ( a2 )
  {
    RtlpDebugPrintCallbacksActive = 0;
    if ( (unsigned int)VfIsVerifierEnabled() )
    {
      LOBYTE(v18) = 1;
      VfNotifyOfHibernate(v18);
    }
  }
  PoAllProcIntrDisabled = 1;
  PopCheckpointSystemSleep(17LL, v15, v16, v17);
  if ( SLODWORD(v44[4].Next) >= 0 )
  {
    *((_BYTE *)v12 + 44) = 1;
    PopIssueNextState(v12, v44, 11LL);
    if ( (_DWORD)v2 != 3 && (_DWORD)v2 != 6 )
      off_140353608[0]();
    if ( a2 )
    {
      PopIssueNextState(v12, v44, 5LL);
      if ( (PopSimulateHiberBugcheck & 0x100) == 0 )
        MiUpdateUserMappings();
      PopIssueNextState(v12, v44, 9LL);
    }
    PopCheckpointSystemSleep(18LL, v19, v20, v21);
    PopIssueNextState(v12, v44, 6LL);
    PopCheckpointSystemSleep(26LL, v22, v23, v24);
    Next = (signed int)v44[4].Next;
    KeRebaselineInterruptTime();
    off_1403535F8[0]();
    PopIssueNextState(v12, v44, 7LL);
    if ( a2 )
    {
      if ( Next == 1073742484 )
      {
        PopCheckpointSystemSleep(27LL, v25, v26, v27);
        PopIssueNextState(v12, v44, 8LL);
        PopCheckpointSystemSleep(32LL, v28, v29, v30);
      }
      MmInvalidateDumpAddresses(xmmword_140365B28, 0xDuLL);
      v31 = *(_QWORD *)(a2 + 312);
      if ( v31 )
        MmInvalidateDumpAddresses(v31, (unsigned int)(16 * *(_DWORD *)(a2 + 264)));
      PopIssueNextState(v12, v44, 9LL);
      if ( (PopSimulateHiberBugcheck & 0x100) == 0 )
        MmUpdateHiberMappings(2, 0LL);
      *(_BYTE *)(a2 + 3) = 0;
      PopIssueNextState(v12, v44, 10LL);
    }
    v32 = PopDebugFlags;
    if ( (PopDebugFlags & 1) != 0 && (_BYTE)KdDebuggerEnabled )
      DbgBreakPointWithStatus(Next);
    if ( (v32 & 2) != 0 )
      KeBugCheckEx(0xA0u, 0xAuLL, 0LL, 0LL, 0LL);
    PopNoMoreInput = 0;
    if ( Next >= 0 )
    {
      ++PoPowerSequence;
      PopFullWake = 0;
      PopPendingUserPresenceDuringSystemSleep = 0;
      PopPendingUserPresenceMonitorOnReason = 0;
      dword_140365708 = 1;
      if ( PoResumeFromHibernate )
      {
        _InterlockedOr(&PopPendingUserPresenceDuringSystemSleep, 1u);
        _InterlockedOr(&PopPendingUserPresenceMonitorOnReason, 0x19u);
      }
    }
    *((_BYTE *)v12 + 44) = 0;
    PopIssueNextState(v12, v44, 11LL);
  }
  if ( a2 )
  {
    if ( Next == -1073741632 )
    {
      if ( (PopSimulate & 0x1000) == 0 )
      {
        while ( 1 )
          ;
      }
      *(_BYTE *)a2 = 1;
LABEL_58:
      v33 = qword_1403662C0 == 0;
      *v12 = (__int64)&unk_1403662B8;
      v12[3] = 0LL;
      if ( !v33 )
        PopIssueNextState(v12, v44, 6LL);
      HalReturnToFirmware(3LL);
    }
    PoHiberInProgress = 0;
    *(_DWORD *)(a2 + 188) = Next;
    if ( *(_BYTE *)a2 )
      goto LABEL_58;
    if ( (unsigned int)VfIsVerifierEnabled() )
      VfNotifyOfHibernate(0LL);
    if ( RtlpDebugPrintCallbackList == (_UNKNOWN *)&RtlpDebugPrintCallbackList )
      RtlpDebugPrintCallbacksActive = 1;
    *(_DWORD *)(a2 + 188) = 1073742484;
  }
  KeRebaselineInterruptTime();
  KeRebaselineSystemTime();
  PopCheckpointSystemSleep(33LL, v34, v35, v36);
  PoAllProcIntrDisabled = 0;
  PopIssueNextState(v12, v44, 12LL);
  if ( Next >= 0 )
  {
    if ( dword_140365800 != 4 || PoResumeFromHibernate )
    {
      v37 = 0;
      v40 = KeQueryPerformanceCounter(0LL);
      ((void (__fastcall *)(void *, __int64 *))off_1403533E0[0])(&unk_140365D48, &qword_140365D50);
    }
    else
    {
      v37 = 1;
      if ( !((unsigned __int8 (__fastcall *)(LARGE_INTEGER *, _QWORD))off_1403533E0[0])(&v40, 0LL) )
        v40.QuadPart = 0LL;
    }
    if ( (xmmword_140401150 & 0x8000) != 0 )
    {
      v43 = v40;
      v50[1] = 8LL;
      v50[0] = &v43;
      EtwTraceKernelEvent((__int64)v50, 1u, 0x80008000, 0x1231u, 0x401802u);
    }
    if ( v37 )
    {
      v40.QuadPart = PopQpcFrequency / 0x3E8uLL * (v40.QuadPart / (1000 * (unsigned __int64)KeGetCurrentPrcb()->MHz));
      qword_140365C28 = v40.QuadPart - PerformanceCounter.QuadPart;
    }
  }
  PopIssueNextState(v12, v44, 13LL);
  PopIssueNextState(v12, v44, 14LL);
  PopIssueNextState(v12, v44, 15LL);
  if ( SLODWORD(v44[4].Next) >= 0 )
  {
    v38 = *v12;
    LODWORD(v44[4].Next) = 0;
    v39 = *(_BYTE *)(v38 + 5);
    if ( v39 != -1 )
      *(_BYTE *)(v38 + 5) = v39 + 1;
  }
  if ( a2 )
  {
    if ( Next == 1073742484 && !byte_140365B41 && byte_1403A33E0 )
      BgLibraryInitialize(Address, 0LL);
  }
  else
  {
    __writecr8(CurrentIrql);
  }
  return LODWORD(v44[4].Next);
}
