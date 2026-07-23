/*
 * XREFs of PopInvokeSystemStateHandler @ 0x140405BB8
 * Callers:
 *     PopTransitionToSleep @ 0x14040BE50 (PopTransitionToSleep.c)
 *     PopEndMirroring @ 0x14040CD30 (PopEndMirroring.c)
 *     PopShutdownSystem @ 0x14041A6B0 (PopShutdownSystem.c)
 * Callees:
 *     VfIsVerifierEnabled @ 0x14003CBA4 (VfIsVerifierEnabled.c)
 *     KeInitializeDpc @ 0x140088A30 (KeInitializeDpc.c)
 *     EtwTraceKernelEvent @ 0x14008B840 (EtwTraceKernelEvent.c)
 *     KeInsertQueueDpc @ 0x1400F14F0 (KeInsertQueueDpc.c)
 *     KeSetSystemGroupAffinityThread @ 0x140112860 (KeSetSystemGroupAffinityThread.c)
 *     KeRebaselineSystemTime @ 0x140136E64 (KeRebaselineSystemTime.c)
 *     KeRebaselineInterruptTime @ 0x140136EF4 (KeRebaselineInterruptTime.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     DbgBreakPointWithStatus @ 0x1401893F0 (DbgBreakPointWithStatus.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401894B0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memset @ 0x140192D80 (memset.c)
 *     MmInvalidateDumpAddresses @ 0x140404F10 (MmInvalidateDumpAddresses.c)
 *     PopIssueNextState @ 0x14040633C (PopIssueNextState.c)
 *     PopCheckpointSystemSleep @ 0x140408338 (PopCheckpointSystemSleep.c)
 *     MmUpdateHiberMappings @ 0x14040DF80 (MmUpdateHiberMappings.c)
 *     MiUpdateUserMappings @ 0x14040E018 (MiUpdateUserMappings.c)
 *     BgLibraryInitialize @ 0x140756130 (BgLibraryInitialize.c)
 *     VfNotifyOfHibernate @ 0x14076A9EC (VfNotifyOfHibernate.c)
 */

__int64 __fastcall PopInvokeSystemStateHandler(int a1, __int64 a2)
{
  __int64 v2; // r15
  signed int Next; // r13d
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(ULONG_PTR); // rsi
  __int64 v8; // rdi
  unsigned __int8 CurrentIrql; // r12
  unsigned int i; // ebx
  int v11; // edi
  __int64 *v12; // rsi
  LARGE_INTEGER PerformanceCounter; // rdi
  __int64 v14; // rbx
  __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  char v17; // bl
  bool v18; // zf
  char v19; // bl
  __int64 v20; // rcx
  char v21; // al
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
    v7 = (__int64 (__fastcall *)(ULONG_PTR))DeferredContext[1];
  }
  memset(v26, 0, sizeof(v26));
  if ( a2 )
  {
    PopHibernateSystemContext = DeferredContext[0];
    qword_14036E2B8 = (__int64)v7;
    qword_14036E2D0 = (__int64)&PopPowerStateNotifyHandler;
    v12 = &PopHibernateSystemContext;
    byte_14036E2DC = BYTE4(DeferredContext[5]);
    dword_14036E2E0 = DeferredContext[6];
    qword_14036E2C0 = v8;
    qword_14036E2C8 = v6;
    dword_14036E2D8 = v2;
    dword_14036E2EC = KeNumberProcessors_0;
    dword_14036E2E8 = DeferredContext[7];
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
        v11 = HIDWORD(DeferredContext[6]);
        if ( !Dpc.DpcData )
          Dpc.Number = i + 640;
        KeInsertQueueDpc(&Dpc, 0LL, 0LL);
        while ( v11 == HIDWORD(DeferredContext[6]) )
          _mm_pause();
      }
    }
    v12 = DeferredContext;
  }
  PopIssueNextState(v12, v26, 2LL);
  if ( dword_14034B1A0 == 4 )
  {
    PerformanceCounter.QuadPart = 0LL;
    v14 = 1000000LL * KeGetCurrentPrcb()->MHz;
  }
  else
  {
    v14 = PopQpcFrequency;
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
  }
  if ( (xmmword_1403E4010 & 0x8000) != 0 )
  {
    v31 = 0;
    v29 = v33;
    v33[0] = PerformanceCounter.QuadPart;
    v33[1] = v14;
    v30 = 16;
    EtwTraceKernelEvent((int)&v29, 1, 0x80008000, 4656, 4200450);
  }
  PopIssueNextState(v12, v26, 3LL);
  if ( a2 )
  {
    RtlpDebugPrintCallbacksActive = 0;
    if ( (unsigned int)VfIsVerifierEnabled() )
    {
      LOBYTE(v15) = 1;
      VfNotifyOfHibernate(v15);
    }
  }
  PoAllProcIntrDisabled = 1;
  PopCheckpointSystemSleep(17LL);
  if ( SLODWORD(v26[4].Next) >= 0 )
  {
    *((_BYTE *)v12 + 44) = 1;
    PopIssueNextState(v12, v26, 10LL);
    if ( (_DWORD)v2 != 3 && (_DWORD)v2 != 6 )
      off_14033B5D8[0]();
    if ( a2 )
    {
      PopIssueNextState(v12, v26, 4LL);
      MiUpdateUserMappings();
      PopIssueNextState(v12, v26, 8LL);
    }
    PopCheckpointSystemSleep(18LL);
    PopIssueNextState(v12, v26, 5LL);
    PopCheckpointSystemSleep(26LL);
    Next = (signed int)v26[4].Next;
    KeRebaselineInterruptTime();
    off_14033B5C8[0]();
    PopIssueNextState(v12, v26, 6LL);
    if ( a2 )
    {
      if ( Next == 1073742484 )
      {
        PopCheckpointSystemSleep(27LL);
        PopIssueNextState(v12, v26, 7LL);
        PopCheckpointSystemSleep(32LL);
      }
      MmInvalidateDumpAddresses(xmmword_14034B2C8, 0xDuLL);
      v16 = *(_QWORD *)(a2 + 312);
      if ( v16 )
        MmInvalidateDumpAddresses(v16, (unsigned int)(16 * *(_DWORD *)(a2 + 264)));
      PopIssueNextState(v12, v26, 8LL);
      MmUpdateHiberMappings(2LL);
      *(_BYTE *)(a2 + 3) = 0;
      PopIssueNextState(v12, v26, 9LL);
    }
    v17 = PopDebugFlags;
    if ( (PopDebugFlags & 1) != 0 && (_BYTE)KdDebuggerEnabled )
      DbgBreakPointWithStatus(Next);
    if ( (v17 & 2) != 0 )
      KeBugCheckEx(0xA0u, 0xAuLL, 0LL, 0LL, 0LL);
    PopNoMoreInput = 0;
    if ( Next >= 0 )
    {
      ++PoPowerSequence;
      PopFullWake = 0;
      PopPendingUserPresenceDuringSystemSleep = 0;
      PopPendingUserPresenceMonitorOnReason = 0;
      dword_14034B0A8 = 1;
      if ( PoResumeFromHibernate )
      {
        _InterlockedOr(&PopPendingUserPresenceDuringSystemSleep, 1u);
        _InterlockedOr(&PopPendingUserPresenceMonitorOnReason, 0x19u);
      }
    }
    *((_BYTE *)v12 + 44) = 0;
    PopIssueNextState(v12, v26, 10LL);
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
LABEL_54:
      v18 = qword_14034BC40 == 0;
      *v12 = (__int64)&unk_14034BC38;
      v12[3] = 0LL;
      if ( !v18 )
        PopIssueNextState(v12, v26, 5LL);
      HalReturnToFirmware(3LL);
    }
    PoHiberInProgress = 0;
    *(_DWORD *)(a2 + 188) = Next;
    if ( *(_BYTE *)a2 )
      goto LABEL_54;
    if ( (unsigned int)VfIsVerifierEnabled() )
      VfNotifyOfHibernate(0LL);
    if ( RtlpDebugPrintCallbackList == (_UNKNOWN *)&RtlpDebugPrintCallbackList )
      RtlpDebugPrintCallbacksActive = 1;
    *(_DWORD *)(a2 + 188) = 1073742484;
  }
  KeRebaselineInterruptTime();
  KeRebaselineSystemTime();
  PopCheckpointSystemSleep(33LL);
  PoAllProcIntrDisabled = 0;
  PopIssueNextState(v12, v26, 11LL);
  if ( Next >= 0 )
  {
    if ( dword_14034B1A0 != 4 || PoResumeFromHibernate )
    {
      v19 = 0;
      v22 = KeQueryPerformanceCounter(0LL);
      ((void (__fastcall *)(void *, __int64 *))off_14033B3B0[0])(&unk_14034B6C8, &qword_14034B6D0);
    }
    else
    {
      v19 = 1;
      if ( !((unsigned __int8 (__fastcall *)(LARGE_INTEGER *, _QWORD))off_14033B3B0[0])(&v22, 0LL) )
        v22.QuadPart = 0LL;
    }
    if ( (xmmword_1403E4010 & 0x8000) != 0 )
    {
      v25 = v22;
      v32[1] = 8LL;
      v32[0] = &v25;
      EtwTraceKernelEvent((int)v32, 1, 0x80008000, 4657, 4200450);
    }
    if ( v19 )
    {
      v22.QuadPart = PopQpcFrequency / 0x3E8uLL * (v22.QuadPart / (1000 * (unsigned __int64)KeGetCurrentPrcb()->MHz));
      qword_14034B5A8 = v22.QuadPart - PerformanceCounter.QuadPart;
    }
  }
  PopIssueNextState(v12, v26, 12LL);
  PopIssueNextState(v12, v26, 13LL);
  if ( SLODWORD(v26[4].Next) >= 0 )
  {
    v20 = *v12;
    LODWORD(v26[4].Next) = 0;
    v21 = *(_BYTE *)(v20 + 5);
    if ( v21 != -1 )
      *(_BYTE *)(v20 + 5) = v21 + 1;
  }
  if ( a2 )
  {
    if ( Next == 1073742484 && !byte_14034B2E1 && byte_14036E288 )
      BgLibraryInitialize(Address, 0LL);
  }
  else
  {
    __writecr8(CurrentIrql);
  }
  return LODWORD(v26[4].Next);
}
