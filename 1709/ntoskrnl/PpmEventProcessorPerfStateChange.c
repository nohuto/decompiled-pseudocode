/*
 * XREFs of PpmEventProcessorPerfStateChange @ 0x14014DA44
 * Callers:
 *     PpmPerfApplyProcessorState @ 0x14014D4E4 (PpmPerfApplyProcessorState.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400AE1E4 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     PpmFireWmiEvent @ 0x1402499DC (PpmFireWmiEvent.c)
 */

__int64 __fastcall PpmEventProcessorPerfStateChange(struct _KPRCB *a1)
{
  _PROC_PERF_CONSTRAINT *PerfConstraint; // r8
  _PROC_PERF_DOMAIN *Domain; // rdx
  unsigned int SelectedState; // esi
  unsigned int SelectedFrequency; // edi
  __int64 result; // rax
  unsigned int GuaranteedPercent; // ecx
  bool v8; // cf
  __int64 v9; // [rsp+30h] [rbp-50h] BYREF
  int v10; // [rsp+38h] [rbp-48h]
  unsigned int v11; // [rsp+3Ch] [rbp-44h]
  unsigned int Number; // [rsp+40h] [rbp-40h]
  __int64 v13; // [rsp+48h] [rbp-38h] BYREF
  __int64 v14; // [rsp+50h] [rbp-30h]
  unsigned __int64 GroupSetMember; // [rsp+58h] [rbp-28h]
  __int64 *v16; // [rsp+60h] [rbp-20h] BYREF
  int v17; // [rsp+68h] [rbp-18h]
  int v18; // [rsp+6Ch] [rbp-14h]

  PerfConstraint = a1->PowerState.PerfConstraint;
  Domain = a1->PowerState.Domain;
  SelectedState = PerfConstraint->Selection.SelectedState;
  SelectedFrequency = PerfConstraint->Selection.SelectedFrequency;
  if ( (xmmword_140401150 & 0x8000) != 0 && a1 == KeGetCurrentPrcb() )
  {
    v13 = 0LL;
    v14 = 0LL;
    GroupSetMember = 0LL;
    GuaranteedPercent = Domain->GuaranteedPercent;
    if ( PerfConstraint->Selection.SelectedPercent < GuaranteedPercent )
      GuaranteedPercent = PerfConstraint->Selection.SelectedPercent;
    v8 = GuaranteedPercent < Domain->MinPerfPercent;
    HIDWORD(v13) = SelectedFrequency;
    LODWORD(v13) = v8 + 1;
    LODWORD(v14) = PerfConstraint->PreviousFrequency;
    v18 = 0;
    v17 = 24;
    GroupSetMember = KeGetCurrentPrcb()->GroupSetMember;
    v16 = &v13;
    EtwTraceKernelEvent((__int64)&v16, 1u, 0x80008000, 0x1233u, 0x401802u);
  }
  result = (unsigned int)WmiPerfStateEventEnabled;
  if ( WmiPerfStateEventEnabled )
  {
    v10 = 0;
    Number = KeGetPcr()->Prcb.Number;
    v11 = SelectedFrequency;
    v9 = SelectedState;
    return PpmFireWmiEvent(&a1->PowerState.WmiDispatchPtr, &PPM_PERFSTATE_CHANGE_GUID, 20LL, &v9);
  }
  return result;
}
