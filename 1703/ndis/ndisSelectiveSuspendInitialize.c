/*
 * XREFs of ndisSelectiveSuspendInitialize @ 0x1C00E9764
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C00F904C (ndisMInitializeAdapter.c)
 *     ndisPmInitializeMiniport @ 0x1C0104FCC (ndisPmInitializeMiniport.c)
 * Callees:
 *     NdisInitializeTimer @ 0x1C00145E0 (NdisInitializeTimer.c)
 *     NdisNblTrackerRegisterComponent @ 0x1C001BA60 (NdisNblTrackerRegisterComponent.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     ndisNicAutoPowerSaverResetTelemetryData @ 0x1C006EBE4 (ndisNicAutoPowerSaverResetTelemetryData.c)
 *     ndisReadNicAutoPowerSaverTimeoutKeywords @ 0x1C00E941C (ndisReadNicAutoPowerSaverTimeoutKeywords.c)
 *     ndisReadSSTimeoutKeywords @ 0x1C00E94F0 (ndisReadSSTimeoutKeywords.c)
 *     ndisSelectiveSuspendFree @ 0x1C00E9684 (ndisSelectiveSuspendFree.c)
 */

void __fastcall ndisSelectiveSuspendInitialize(_QWORD *FunctionContext)
{
  __int64 v2; // rax
  PVOID PoolWithTag; // rax
  __int64 v4; // rdi
  _OWORD *v5; // rax
  __int64 v6; // rax

  if ( (*((_DWORD *)FunctionContext + 30) & 0x80u) != 0
    || (v2 = FunctionContext[473], *(_QWORD *)(v2 + 840)) && *(_QWORD *)(v2 + 848) )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x650uLL, 0x7373444Eu);
    FunctionContext[560] = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x650uLL);
      v4 = FunctionContext[560];
      ndisNicAutoPowerSaverResetTelemetryData((__int64)FunctionContext);
      v5 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x78uLL, 0x7373444Eu);
      *(_QWORD *)(v4 + 600) = v5;
      if ( v5 )
      {
        *v5 = xmmword_1C0082BF0;
        v5[1] = xmmword_1C0082C00;
        v5[2] = xmmword_1C0082C10;
        v5[3] = xmmword_1C0082C20;
        v5[4] = xmmword_1C0082C30;
        v5[5] = xmmword_1C0082C40;
        v5[6] = xmmword_1C0082C50;
        *((_QWORD *)v5 + 14) = 0LL;
        *(_QWORD *)(v4 + 544) = 0LL;
        *(_QWORD *)(v4 + 552) = v4 + 544;
        *(_QWORD *)(v4 + 560) = 0LL;
        *(_QWORD *)(v4 + 568) = v4 + 560;
        *(_QWORD *)(v4 + 592) = v4 + 584;
        *(_QWORD *)(v4 + 584) = v4 + 584;
        ndisReadSSTimeoutKeywords(FunctionContext);
        if ( (FunctionContext[492] & 0xC000) != 0 )
          ndisReadNicAutoPowerSaverTimeoutKeywords(FunctionContext);
        KeInitializeSpinLock((PKSPIN_LOCK)v4);
        NdisInitializeTimer((PNDIS_TIMER)(v4 + 16), (PNDIS_TIMER_FUNCTION)ndisSSIdleTimerDpc, FunctionContext);
        *(_QWORD *)(v4 + 296) = FunctionContext;
        *(_QWORD *)(v4 + 304) = ndisSSIdleTimerWorkItem;
        *(_QWORD *)(v4 + 376) = FunctionContext;
        *(_QWORD *)(v4 + 384) = ndisIdleCancelWorkItem;
        *(_QWORD *)(v4 + 456) = 0LL;
        *(_QWORD *)(v4 + 472) = ndisSetPowerResumeCompleteWorkItem;
        *(_QWORD *)(v4 + 480) = v4 + 456;
        KeInitializeEvent((PRKEVENT)(v4 + 152), NotificationEvent, 1u);
        KeInitializeEvent((PRKEVENT)(v4 + 200), NotificationEvent, 1u);
        KeInitializeEvent((PRKEVENT)(v4 + 248), NotificationEvent, 1u);
        KeInitializeEvent((PRKEVENT)(v4 + 176), NotificationEvent, 1u);
        KeInitializeEvent((PRKEVENT)(v4 + 224), NotificationEvent, 1u);
        KeInitializeEvent((PRKEVENT)(v4 + 272), NotificationEvent, 1u);
        *(_QWORD *)(v4 + 608) = NdisNblTrackerRegisterComponent(4, (__int64)FunctionContext, FunctionContext[485]);
        *(_QWORD *)(v4 + 616) = NdisNblTrackerRegisterComponent(5, (__int64)FunctionContext, FunctionContext[485]);
        v6 = MEMORY[0xFFFFF78000000014];
        *(_DWORD *)(v4 + 504) |= 0x200u;
        *(_DWORD *)(v4 + 508) |= 0x100u;
        *(_QWORD *)(v4 + 656) = v6;
      }
      else
      {
        if ( (unsigned __int8)byte_1C0092616 >= 2u )
          WPP_SF_q(0xBu, &WPP_3059abd58ba5345e836db04510415190_Traceguids, (__int64)FunctionContext);
        ndisSelectiveSuspendFree((__int64)FunctionContext);
      }
    }
    else if ( (unsigned __int8)byte_1C0092616 >= 2u )
    {
      WPP_SF_q(0xAu, &WPP_3059abd58ba5345e836db04510415190_Traceguids, (__int64)FunctionContext);
    }
  }
}
