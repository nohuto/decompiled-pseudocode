/*
 * XREFs of PopInvokeSystemStateHandler @ 0x140472BF4
 * Callers:
 *     PopTransitionToSleep @ 0x140476910 (PopTransitionToSleep.c)
 *     PopEndMirroring @ 0x140476E00 (PopEndMirroring.c)
 *     PopShutdownSystem @ 0x1404873E0 (PopShutdownSystem.c)
 * Callees:
 *     KeSetSystemGroupAffinityThread @ 0x140005480 (KeSetSystemGroupAffinityThread.c)
 *     KeInitializeDpc @ 0x140038FE0 (KeInitializeDpc.c)
 *     KeInsertQueueDpc @ 0x140039000 (KeInsertQueueDpc.c)
 *     EtwTraceKernelEvent @ 0x1400C1C38 (EtwTraceKernelEvent.c)
 *     VfIsVerifierEnabled @ 0x1400D2C7C (VfIsVerifierEnabled.c)
 *     KeRebaselineInterruptTime @ 0x14014F4DC (KeRebaselineInterruptTime.c)
 *     KeRebaselineSystemTime @ 0x14014F56C (KeRebaselineSystemTime.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     DbgBreakPointWithStatus @ 0x1401B2B50 (DbgBreakPointWithStatus.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401B2C10 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     PopIssueNextState @ 0x140473154 (PopIssueNextState.c)
 *     PopCheckpointSystemSleep @ 0x140473498 (PopCheckpointSystemSleep.c)
 *     MiConvertHiberPhasePages @ 0x140475478 (MiConvertHiberPhasePages.c)
 *     MiUpdateUserMappings @ 0x140475520 (MiUpdateUserMappings.c)
 *     MmInvalidateDumpAddresses @ 0x140475598 (MmInvalidateDumpAddresses.c)
 *     VfNotifyOfHibernate @ 0x14081982C (VfNotifyOfHibernate.c)
 *     BgLibraryInitialize @ 0x14083B9D0 (BgLibraryInitialize.c)
 */

__int64 __fastcall PopInvokeSystemStateHandler(int a1, __int64 a2)
{
  __int64 v2; // r15
  signed int Next; // r13d
  __int64 v5; // rbx
  __int64 (__fastcall *v6)(ULONG_PTR); // rsi
  __int64 v7; // rdi
  __int64 *v8; // rsi
  unsigned __int8 CurrentIrql; // r12
  __int64 v10; // rbx
  LARGE_INTEGER PerformanceCounter; // rdi
  __int64 v12; // rcx
  __int64 v13; // rcx
  char v14; // bl
  char v15; // bl
  __int64 v16; // rcx
  char v17; // al
  unsigned int i; // ebx
  int v20; // edi
  bool v21; // zf
  LARGE_INTEGER v22; // [rsp+30h] [rbp-D0h] BYREF
  struct _GROUP_AFFINITY Affinity; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v24; // [rsp+48h] [rbp-B8h]
  LARGE_INTEGER v25; // [rsp+50h] [rbp-B0h] BYREF
  _SLIST_ENTRY v26[6]; // [rsp+60h] [rbp-A0h] BYREF
  struct _KDPC Dpc; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD DeferredContext[10]; // [rsp+100h] [rbp+0h] BYREF
  _QWORD *v29; // [rsp+150h] [rbp+50h] BYREF
  int v30; // [rsp+158h] [rbp+58h]
  int v31; // [rsp+15Ch] [rbp+5Ch]
  _QWORD v32[2]; // [rsp+160h] [rbp+60h] BYREF
  _QWORD v33[2]; // [rsp+170h] [rbp+70h] BYREF
  _QWORD v34[3]; // [rsp+180h] [rbp+80h] BYREF

  v2 = a1;
  LOBYTE(v24) = 0;
  v22.QuadPart = 0LL;
  Next = -1073741823;
  memset(DeferredContext, 0, sizeof(DeferredContext));
  LODWORD(DeferredContext[5]) = v2;
  memset(v34, 0, sizeof(v34));
  DeferredContext[0] = v34;
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
    v5 = a2;
    DeferredContext[2] = a2;
    v6 = PopSaveHiberContextWrapper;
    DeferredContext[3] = a2;
    DeferredContext[1] = PopSaveHiberContextWrapper;
    v7 = a2;
  }
  else
  {
    v5 = DeferredContext[3];
    v7 = DeferredContext[2];
    v6 = (__int64 (__fastcall *)(ULONG_PTR))DeferredContext[1];
  }
  memset(v26, 0, sizeof(v26));
  if ( a2 )
  {
    PopHibernateSystemContext = DeferredContext[0];
    qword_1403CDB78 = (__int64)v6;
    qword_1403CDB90 = (__int64)&PopPowerStateNotifyHandler;
    v8 = &PopHibernateSystemContext;
    byte_1403CDB9C = BYTE4(DeferredContext[5]);
    dword_1403CDBA0 = DeferredContext[6];
    qword_1403CDB80 = v7;
    qword_1403CDB88 = v5;
    dword_1403CDB98 = v2;
    dword_1403CDBAC = KeNumberProcessors_0;
    dword_1403CDBA8 = DeferredContext[7];
    RtlpInterlockedPushEntrySList(&SListHead, &v26[5]);
    CurrentIrql = v24;
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
    KeInitializeDpc(&Dpc, PopInvokeStateHandlerTargetProcessor, DeferredContext);
    Dpc.Importance = 2;
    for ( i = 0; i < (unsigned int)KeNumberProcessors_0; ++i )
    {
      if ( i != KeGetCurrentPrcb()->Number )
      {
        v20 = HIDWORD(DeferredContext[6]);
        if ( !Dpc.DpcData )
          Dpc.Number = i + 1280;
        KeInsertQueueDpc(&Dpc, 0LL, 0LL);
        while ( v20 == HIDWORD(DeferredContext[6]) )
          _mm_pause();
      }
    }
    v8 = DeferredContext;
  }
  PopIssueNextState(v8, v26, 2LL);
  PopIssueNextState(v8, v26, 3LL);
  if ( dword_1403AA080 == 4 )
  {
    PerformanceCounter.QuadPart = 0LL;
    v10 = 1000000LL * KeGetCurrentPrcb()->MHz;
  }
  else
  {
    v10 = PopQpcFrequency;
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
  }
  if ( (xmmword_14044C2D0 & 0x8000) != 0 )
  {
    v31 = 0;
    v29 = v33;
    v33[0] = PerformanceCounter.QuadPart;
    v33[1] = v10;
    v30 = 16;
    EtwTraceKernelEvent((int)&v29, 1, 0x80008000, 4656, 4200450);
  }
  PopIssueNextState(v8, v26, 4LL);
  if ( a2 )
  {
    RtlpDebugPrintCallbacksActive = 0;
    if ( (unsigned int)VfIsVerifierEnabled() )
    {
      LOBYTE(v12) = 1;
      VfNotifyOfHibernate(v12);
    }
  }
  PoAllProcIntrDisabled = 1;
  PopCheckpointSystemSleep(17LL);
  if ( SLODWORD(v26[4].Next) >= 0 )
  {
    *((_BYTE *)v8 + 44) = 1;
    PopIssueNextState(v8, v26, 11LL);
    if ( (_DWORD)v2 != 3 && (_DWORD)v2 != 6 )
      off_1403989A8[0]();
    if ( a2 )
    {
      PopIssueNextState(v8, v26, 5LL);
      if ( (PopSimulateHiberBugcheck & 0x100) == 0 )
        MiUpdateUserMappings();
      PopIssueNextState(v8, v26, 9LL);
    }
    PopCheckpointSystemSleep(18LL);
    PopIssueNextState(v8, v26, 6LL);
    PopCheckpointSystemSleep(26LL);
    Next = (signed int)v26[4].Next;
    KeRebaselineInterruptTime();
    off_140398998[0]();
    PopIssueNextState(v8, v26, 7LL);
    if ( a2 )
    {
      if ( Next == 1073742484 )
      {
        PopCheckpointSystemSleep(27LL);
        PopIssueNextState(v8, v26, 8LL);
        PopCheckpointSystemSleep(32LL);
      }
      MmInvalidateDumpAddresses(xmmword_1403AA1A8, 13LL);
      v13 = *(_QWORD *)(a2 + 304);
      if ( v13 )
        MmInvalidateDumpAddresses(v13, (unsigned int)(16 * *(_DWORD *)(a2 + 256)));
      PopIssueNextState(v8, v26, 9LL);
      if ( (PopSimulateHiberBugcheck & 0x100) == 0 )
      {
        MiUpdateUserMappings();
        MiConvertHiberPhasePages(0LL);
      }
      *(_BYTE *)(a2 + 3) = 0;
      PopIssueNextState(v8, v26, 10LL);
    }
    v14 = PopDebugFlags;
    if ( (PopDebugFlags & 1) != 0 && (_BYTE)KdDebuggerEnabled )
      DbgBreakPointWithStatus(Next);
    if ( (v14 & 2) != 0 )
      KeBugCheckEx(0xA0u, 0xAuLL, 0LL, 0LL, 0LL);
    PopNoMoreInput = 0;
    if ( Next >= 0 )
    {
      ++PoPowerSequence;
      PopFullWake = 0;
      PopPendingUserPresenceDuringSystemSleep = 0;
      PopPendingUserPresenceMonitorOnReason = 0;
      dword_1403A9F88 = 1;
      if ( PoResumeFromHibernate )
      {
        _InterlockedOr(&PopPendingUserPresenceDuringSystemSleep, 1u);
        _InterlockedOr(&PopPendingUserPresenceMonitorOnReason, 0x19u);
      }
    }
    *((_BYTE *)v8 + 44) = 0;
    PopIssueNextState(v8, v26, 11LL);
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
    }
    else
    {
      PoHiberInProgress = 0;
      *(_DWORD *)(a2 + 188) = Next;
      if ( !*(_BYTE *)a2 )
      {
        if ( (unsigned int)VfIsVerifierEnabled() )
          VfNotifyOfHibernate(0LL);
        if ( RtlpDebugPrintCallbackList == (_UNKNOWN *)&RtlpDebugPrintCallbackList )
          RtlpDebugPrintCallbacksActive = 1;
        *(_DWORD *)(a2 + 188) = 1073742484;
        goto LABEL_43;
      }
    }
    v21 = qword_1403AAB20 == 0;
    *v8 = (__int64)&unk_1403AAB18;
    v8[3] = 0LL;
    if ( !v21 )
      PopIssueNextState(v8, v26, 6LL);
    HalReturnToFirmware(3LL);
  }
LABEL_43:
  KeRebaselineInterruptTime();
  KeRebaselineSystemTime();
  PopCheckpointSystemSleep(33LL);
  PoAllProcIntrDisabled = 0;
  PopIssueNextState(v8, v26, 12LL);
  if ( Next >= 0 )
  {
    if ( dword_1403AA080 != 4 || PoResumeFromHibernate )
    {
      v15 = 0;
      v22 = KeQueryPerformanceCounter(0LL);
      ((void (__fastcall *)(void *, __int64 *))off_140398780[0])(&unk_1403AA5E8, &qword_1403AA5F0);
    }
    else
    {
      v15 = 1;
      if ( !((unsigned __int8 (__fastcall *)(LARGE_INTEGER *, _QWORD))off_140398780[0])(&v22, 0LL) )
        v22.QuadPart = 0LL;
    }
    if ( (xmmword_14044C2D0 & 0x8000) != 0 )
    {
      v25 = v22;
      v32[1] = 8LL;
      v32[0] = &v25;
      EtwTraceKernelEvent((int)v32, 1, 0x80008000, 4657, 4200450);
    }
    if ( v15 )
    {
      v22.QuadPart = PopQpcFrequency / 0x3E8uLL * (v22.QuadPart / (1000 * (unsigned __int64)KeGetCurrentPrcb()->MHz));
      qword_1403AA4C8 = v22.QuadPart - PerformanceCounter.QuadPart;
    }
  }
  PopIssueNextState(v8, v26, 13LL);
  PopIssueNextState(v8, v26, 14LL);
  PopIssueNextState(v8, v26, 15LL);
  if ( SLODWORD(v26[4].Next) >= 0 )
  {
    v16 = *v8;
    LODWORD(v26[4].Next) = 0;
    v17 = *(_BYTE *)(v16 + 5);
    if ( v17 != -1 )
      *(_BYTE *)(v16 + 5) = v17 + 1;
  }
  if ( a2 )
  {
    if ( !byte_1403AA1C1 && Next == 1073742484 )
    {
      if ( byte_1403CDB50 )
        BgLibraryInitialize(Address, 0LL);
    }
  }
  else
  {
    __writecr8(CurrentIrql);
  }
  return LODWORD(v26[4].Next);
}
