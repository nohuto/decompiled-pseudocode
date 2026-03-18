/*
 * XREFs of PpmPerfApplyProcessorState @ 0x140146C0C
 * Callers:
 *     PpmPerfAction @ 0x1400F2880 (PpmPerfAction.c)
 *     PpmPerfApplyProcessorStates @ 0x140146A10 (PpmPerfApplyProcessorStates.c)
 * Callees:
 *     PpmContinueTimeAccumulation @ 0x140146D34 (PpmContinueTimeAccumulation.c)
 *     PpmPerfArbitratorApplyProcessorState @ 0x140146DA0 (PpmPerfArbitratorApplyProcessorState.c)
 *     PpmEventTraceExpectedUtility @ 0x140147068 (PpmEventTraceExpectedUtility.c)
 *     PpmScaleIdleStateValues @ 0x1401470E8 (PpmScaleIdleStateValues.c)
 *     PpmEventProcessorPerfStateChange @ 0x14014717C (PpmEventProcessorPerfStateChange.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

char __fastcall PpmPerfApplyProcessorState(struct _KPRCB *a1, char a2)
{
  _PROC_PERF_DOMAIN *Domain; // rdi
  struct _KPRCB *Master; // rcx
  bool v6; // bp
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v8; // rdx
  char v9; // si
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // r9
  void (__fastcall *DomainPerfControlHandler)(unsigned __int64, _PERF_CONTROL_STATE_SELECTION *, unsigned __int8, unsigned __int8); // rax

  Domain = a1->PowerState.Domain;
  Master = Domain->Master;
  v6 = a1 == Master || Domain->InitiateAllProcessors;
  if ( Domain->Coordination != 0xFD && a2 )
    v6 = 1;
  if ( a1 != KeGetCurrentPrcb()
    && (a1 == Master || !a2 && (xmmword_1403E4010 & 0x8000) != 0 || v6 && Domain->AffinitizeControl) )
  {
    return 0;
  }
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v9 = ((__int64 (__fastcall *)(_QWORD, _QWORD))PpmContinueTimeAccumulation)(
         a1,
         (LARGE_INTEGER)PerformanceCounter.QuadPart);
  if ( v9 )
  {
    LOBYTE(v10) = a2;
    LOBYTE(v8) = v6;
    PpmPerfArbitratorApplyProcessorState(a1, v8, v10);
    if ( a1 == Domain->Master )
    {
      DomainPerfControlHandler = Domain->DomainPerfControlHandler;
      if ( DomainPerfControlHandler )
      {
        LOBYTE(v12) = a2;
        LOBYTE(v11) = v6;
        DomainPerfControlHandler(Domain->DomainContext, &Domain->Selection, v11, v12);
      }
    }
    if ( !a2 )
    {
      PpmEventProcessorPerfStateChange(a1);
      a1->PowerState.GuaranteedPerformancePercent = Domain->GuaranteedPercent;
      PpmScaleIdleStateValues(&a1->PowerState);
      PpmEventTraceExpectedUtility(a1);
    }
  }
  return v9;
}
