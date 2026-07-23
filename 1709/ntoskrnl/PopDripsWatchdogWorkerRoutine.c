/*
 * XREFs of PopDripsWatchdogWorkerRoutine @ 0x14070AC40
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     PopDeepSleepEnabled @ 0x1400B0B30 (PopDeepSleepEnabled.c)
 *     PopOkayToQueueNextWorkItem @ 0x1401325F0 (PopOkayToQueueNextWorkItem.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x140181140 (ZwUpdateWnfStateData.c)
 *     PopAccumulateNonActivatedCpuTime @ 0x1402435E8 (PopAccumulateNonActivatedCpuTime.c)
 *     PopBatteryCapacityToRate @ 0x140244558 (PopBatteryCapacityToRate.c)
 *     PopCalculateIdleInformation @ 0x140244980 (PopCalculateIdleInformation.c)
 *     PopDiagTraceCsDripsDivergence @ 0x140245048 (PopDiagTraceCsDripsDivergence.c)
 *     PpmConvertTimeTo @ 0x1402489FC (PpmConvertTimeTo.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x1406ADCB0 (DbgkWerCaptureLiveKernelDump.c)
 *     PopDeepSleepWatchdogTakeAction @ 0x14070A5F0 (PopDeepSleepWatchdogTakeAction.c)
 *     PopDripsCallbackTakeAction @ 0x14070A6BC (PopDripsCallbackTakeAction.c)
 *     PopDripsWatchdogTakeAction @ 0x14070A8CC (PopDripsWatchdogTakeAction.c)
 *     PopSetDripsWatchdog @ 0x14070B03C (PopSetDripsWatchdog.c)
 */

void __fastcall PopDripsWatchdogWorkerRoutine(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v2; // rsi
  __int64 v4; // r15
  int v5; // r8d
  __int64 v6; // r14
  int v7; // r12d
  __int64 v8; // r10
  char v9; // r13
  unsigned __int64 v10; // rdx
  unsigned int v11; // ebx
  unsigned __int64 v12; // r14
  int v13; // r11d
  __int64 v14; // rcx
  int v15; // r9d
  __int64 v16; // rax
  unsigned __int8 v17; // r12
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rdx
  unsigned int v20; // ecx
  int v21; // eax
  unsigned int v22; // ebx
  int v23; // [rsp+58h] [rbp-19h]
  int v24; // [rsp+5Ch] [rbp-15h]
  int v25; // [rsp+60h] [rbp-11h]
  int v26; // [rsp+64h] [rbp-Dh]
  __int64 v27; // [rsp+68h] [rbp-9h] BYREF
  __int64 v28; // [rsp+70h] [rbp-1h]
  __int64 v29; // [rsp+78h] [rbp+7h]
  int v30; // [rsp+80h] [rbp+Fh]
  unsigned __int64 Buffer; // [rsp+88h] [rbp+17h] BYREF
  unsigned __int64 v32; // [rsp+90h] [rbp+1Fh]

  CurrentThread = KeGetCurrentThread();
  v2 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&stru_14038DC88, 1u);
  if ( qword_14038DC48 )
  {
    PopCalculateIdleInformation(a1 + 88);
    v4 = MEMORY[0xFFFFF78000000008];
    v5 = *(_DWORD *)(a1 + 112);
    v6 = MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a1 + 408);
    v7 = v5 - *(_DWORD *)(a1 + 404);
    v8 = *(_QWORD *)(a1 + 56);
    v9 = *(_BYTE *)(a1 + 4);
    v10 = MEMORY[0xFFFFF78000000008] - v8;
    *(_DWORD *)(a1 + 404) = v5;
    *(_QWORD *)(a1 + 408) = v4;
    *(_QWORD *)(a1 + 64) = v4;
    v25 = v5;
    if ( v10 >= (unsigned int)(10000000 * PopDripsWatchdogTimeout) )
    {
      v12 = *(_QWORD *)(a1 + 96) - *(_QWORD *)(a1 + 24);
      v13 = v5 - *(_DWORD *)(a1 + 8);
      v14 = *(_QWORD *)(a1 + 104);
      v27 = 0LL;
      v28 = 0LL;
      v29 = 0LL;
      v30 = 0;
      v15 = *(_DWORD *)(a1 + 116) - *(_DWORD *)(a1 + 12);
      v26 = *(_DWORD *)(a1 + 116);
      v23 = v13;
      v24 = v15;
      if ( v14 == -1 || (v16 = *(_QWORD *)(a1 + 32), v16 == -1) )
      {
        v17 = 0;
      }
      else
      {
        v17 = 1;
        v2 = v14 - v16;
      }
      if ( v13 )
        LODWORD(v18) = 0;
      else
        v18 = (v4 - *(_QWORD *)(a1 + 40)) / 0x2710uLL;
      LODWORD(v27) = v18;
      if ( v15 )
        HIDWORD(v27) = 0;
      else
        HIDWORD(v27) = (v4 - *(_QWORD *)(a1 + 48)) / 0x2710uLL;
      LODWORD(v28) = (v4 - v8) / 0x2710uLL;
      if ( !v13 )
      {
        v19 = 1000LL * (unsigned int)v18;
        if ( !v19 || (unk_140365954 & 0x40000000) != 0 || (v20 = *(_DWORD *)(a1 + 16), dword_140365944 >= v20) )
          v21 = 0;
        else
          v21 = PopBatteryCapacityToRate(v20 - dword_140365944, v19);
        HIDWORD(v29) = v21;
      }
      PopAccumulateNonActivatedCpuTime(0, (_QWORD *)(a1 + 72), (_QWORD *)(a1 + 80));
      HIDWORD(v28) = PpmConvertTimeTo(*(_QWORD *)(a1 + 80), 0x3E8uLL);
      if ( v23 )
      {
        *(_DWORD *)(a1 + 8) = v25;
        *(_QWORD *)(a1 + 24) = *(_QWORD *)(a1 + 96);
        *(_QWORD *)(a1 + 32) = *(_QWORD *)(a1 + 104);
        *(_QWORD *)(a1 + 40) = v4;
        *(_DWORD *)(a1 + 16) = dword_140365944;
      }
      if ( v24 )
      {
        *(_DWORD *)(a1 + 12) = v26;
        *(_QWORD *)(a1 + 48) = v4;
      }
      v22 = *(_DWORD *)(a1 + 400);
      *(_QWORD *)(a1 + 56) = v4;
      *(_DWORD *)(a1 + 400) = v22 + 1;
      PopSetDripsWatchdog();
      PopOkayToQueueNextWorkItem(a1 + 360);
      ExReleaseResourceLite(&stru_14038DC88);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      LOBYTE(v30) = byte_140389C6C & 1;
      LODWORD(v29) = 100 * HIDWORD(v28) / (unsigned int)v28;
      if ( v23 )
      {
        if ( PopDeepSleepEnabled() && !v24 )
          PopDeepSleepWatchdogTakeAction((__int64)&v27, v9);
      }
      else if ( !qword_140389C18 )
      {
        PopDripsWatchdogTakeAction((int *)&v27, v9, v22);
      }
      PopDiagTraceCsDripsDivergence(v17, v12, v2);
      if ( v17 )
      {
        if ( v12 > v2 && (unsigned int)PopDripsSwHwDivergenceThreshold < (v12 - v2) / 0xF4240 )
        {
          Buffer = v12;
          v32 = v2;
          ZwUpdateWnfStateData(&WNF_PO_SW_HW_DRIPS_DIVERGENCE, &Buffer, 0x10u, 0LL, 0LL, 0, 0);
          if ( PopDripsSwHwDivergenceEnableLiveDump )
            DbgkWerCaptureLiveKernelDump(L"DripsDiverge", 420, Buffer, v32, 0LL, 0LL, 0LL, 0LL, 0);
        }
      }
    }
    else
    {
      v11 = *(_DWORD *)(a1 + 400);
      *(_DWORD *)(a1 + 400) = v11 + 1;
      PopSetDripsWatchdog();
      PopOkayToQueueNextWorkItem(a1 + 360);
      ExReleaseResourceLite(&stru_14038DC88);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      if ( !v7 && !qword_140389C18 )
        PopDripsCallbackTakeAction(v6, v9, v11);
    }
  }
  else
  {
    ExReleaseResourceLite(&stru_14038DC88);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
}
