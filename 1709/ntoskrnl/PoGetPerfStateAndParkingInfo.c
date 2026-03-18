/*
 * XREFs of PoGetPerfStateAndParkingInfo @ 0x14000B3F4
 * Callers:
 *     ExpQueryProcessorInformationCounters @ 0x140488240 (ExpQueryProcessorInformationCounters.c)
 *     ExpQuerySystemInformation @ 0x1404C0DD0 (ExpQuerySystemInformation.c)
 * Callees:
 *     KeGetProcessorIndexFromNumber @ 0x14008CE90 (KeGetProcessorIndexFromNumber.c)
 *     KeGetPrcb @ 0x14008D0A4 (KeGetPrcb.c)
 *     KeAddProcessorAffinityEx @ 0x14008EC40 (KeAddProcessorAffinityEx.c)
 *     PpmSnapPerformanceAccumulation @ 0x140095B50 (PpmSnapPerformanceAccumulation.c)
 *     PopExecuteOnTargetProcessors @ 0x1401173B0 (PopExecuteOnTargetProcessors.c)
 *     PpmPerfGetCurrentState @ 0x140129A10 (PpmPerfGetCurrentState.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 */

char __fastcall PoGetPerfStateAndParkingInfo(PPROCESSOR_NUMBER ProcNumber, void *a2, __int64 a3, unsigned __int64 *a4)
{
  ULONG ProcessorIndexFromNumber; // eax
  __int64 Prcb; // rax
  _DWORD *v10; // rsi
  struct _KPRCB *v11; // r14
  unsigned int v12; // ecx
  unsigned __int64 SnapTimeLast; // rax
  unsigned __int8 CurrentIrql; // bl
  int v15; // r8d
  char v16; // al
  char v17; // cl
  ULONG v18; // eax
  int v20; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v21[10]; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v22[44]; // [rsp+90h] [rbp-70h] BYREF

  memset(a2, 0, 0x20uLL);
  ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(ProcNumber);
  Prcb = KeGetPrcb(ProcessorIndexFromNumber);
  v10 = *(_DWORD **)(Prcb + 24176);
  v11 = (struct _KPRCB *)Prcb;
  PpmPerfGetCurrentState(Prcb, (_DWORD)a2 + 4, (unsigned int)&v20, (_DWORD)a2 + 8, (__int64)a2, (__int64)a2 + 24);
  if ( v10 )
  {
    *((_DWORD *)a2 + 3) = v10[95];
    v12 = v10[94];
    if ( v10[93] < v12 )
      v12 = v10[93];
    *((_DWORD *)a2 + 4) = v12;
    if ( v10[80] != v10[82] )
      *((_BYTE *)a2 + 28) = 1;
    if ( v12 < 0x64 )
      *((_DWORD *)a2 + 6) |= 1u;
    *((_DWORD *)a2 + 5) = (unsigned int)(100 * v20) / v10[79];
  }
  else
  {
    *((_DWORD *)a2 + 5) = 100;
  }
  LOBYTE(SnapTimeLast) = v11->PowerState.Parked;
  *((_BYTE *)a2 + 29) = SnapTimeLast;
  if ( a4 )
  {
    SnapTimeLast = v11->PowerState.SnapTimeLast;
    *a4 = SnapTimeLast;
  }
  if ( a3 )
  {
    memset(v21, 0, sizeof(v21));
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    LOBYTE(v15) = v11 != KeGetCurrentPrcb();
    v16 = PpmSnapPerformanceAccumulation((int)v11, 0, v15, 0, v21);
    __writecr8(CurrentIrql);
    if ( v16 )
    {
      v17 = PpmPerformanceCounterShift;
      if ( v11->PowerState.Hypervisor == ProcHypervisorHvCounters )
        v17 = PpmHvPerformanceCounterShift;
      *(_QWORD *)(a3 + 8) = v21[4] >> v17;
      *(_QWORD *)(a3 + 16) = v21[5] >> v17;
      *(_DWORD *)a3 = v21[0] >> v17;
      SnapTimeLast = v21[1] >> v17;
      *(_DWORD *)(a3 + 4) = v21[1] >> v17;
    }
    else
    {
      v22[0] = 1310721;
      memset(&v22[1], 0, 0xA4uLL);
      v18 = KeGetProcessorIndexFromNumber(ProcNumber);
      KeAddProcessorAffinityEx(v22, v18);
      LOBYTE(SnapTimeLast) = PopExecuteOnTargetProcessors(v22, PpmGetThroughputInfoCallback, a3, 0LL);
    }
  }
  return SnapTimeLast;
}
