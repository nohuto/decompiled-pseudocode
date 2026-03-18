/*
 * XREFs of EtwpKernelTraceRundown @ 0x140628E98
 * Callers:
 *     EtwpUpdateGroupMasks @ 0x140628B88 (EtwpUpdateGroupMasks.c)
 *     EtwKernelMemoryRundown @ 0x1407A7550 (EtwKernelMemoryRundown.c)
 *     EtwpLogKernelTraceRundown @ 0x1407AEC10 (EtwpLogKernelTraceRundown.c)
 * Callees:
 *     PopExecuteOnTargetProcessors @ 0x140038E58 (PopExecuteOnTargetProcessors.c)
 *     EtwpOpenLogger @ 0x140062124 (EtwpOpenLogger.c)
 *     EtwpCloseLogger @ 0x1400621D0 (EtwpCloseLogger.c)
 *     IoSetThreadHardErrorMode @ 0x14006CE40 (IoSetThreadHardErrorMode.c)
 *     EtwpProcessThreadImageRundown @ 0x140629158 (EtwpProcessThreadImageRundown.c)
 *     WmiTraceRundownNotify @ 0x1406463C0 (WmiTraceRundownNotify.c)
 *     CmEtwRunDown @ 0x1406EDEF0 (CmEtwRunDown.c)
 *     MmIdentifyPhysicalMemory @ 0x14074BD00 (MmIdentifyPhysicalMemory.c)
 *     MmPerfLogSessionRundown @ 0x14074D9BC (MmPerfLogSessionRundown.c)
 *     MmLogSystemShareablePfnInfo @ 0x140750D14 (MmLogSystemShareablePfnInfo.c)
 *     MmLogQueryCombineStats @ 0x140756628 (MmLogQueryCombineStats.c)
 *     EtwpClockSourceRunDown @ 0x1407AE9A4 (EtwpClockSourceRunDown.c)
 *     EtwpExecutiveResourceConfigRunDown @ 0x1407AEB2C (EtwpExecutiveResourceConfigRunDown.c)
 *     EtwpLogMemInfoRundown @ 0x1407AEC84 (EtwpLogMemInfoRundown.c)
 *     EtwpLogRefSetAutoMark @ 0x1407AEE14 (EtwpLogRefSetAutoMark.c)
 *     EtwpObjectTypeRundown @ 0x1407AF16C (EtwpObjectTypeRundown.c)
 *     EtwpPoolRunDown @ 0x1407AF2C4 (EtwpPoolRunDown.c)
 *     EtwpProcessorRundown @ 0x1407AF830 (EtwpProcessorRundown.c)
 *     EtwpSampledProfileRunDown @ 0x1407AFC84 (EtwpSampledProfileRunDown.c)
 *     EtwpSpinLockConfigRunDown @ 0x1407AFE18 (EtwpSpinLockConfigRunDown.c)
 */

BOOLEAN __fastcall EtwpKernelTraceRundown(int *a1, __int64 a2, unsigned int a3, unsigned __int8 a4, __int64 a5, int a6)
{
  unsigned int v8; // ebp
  BOOLEAN v10; // r12
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // r8
  int v15; // r9d
  int v16; // ecx
  int v17; // eax
  int v18; // eax
  int v20; // eax
  int v21; // eax
  char v22[56]; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v23; // [rsp+80h] [rbp+18h] BYREF

  v23 = a3;
  v8 = a3;
  v10 = IoSetThreadHardErrorMode(0);
  v13 = EtwpOpenLogger(v8, a2, 0LL, v22);
  if ( v13 )
  {
    if ( a1 )
    {
      if ( (a1[1] & 0x20) != 0 && !a4 )
        EtwpLogRefSetAutoMark(0LL, v13);
      v16 = *a1;
      if ( (*a1 & 0xC004) != 0 || (a1[4] & 0x40) != 0 || (v16 & 1) != 0 || (v16 & 2) != 0 || (a1[1] & 0x8000000) != 0 )
      {
        LOBYTE(v14) = a4;
        EtwpProcessThreadImageRundown((_DWORD)a1, v13, v14, a5, a6);
        v16 = *a1;
      }
      v12 = v16 & 0x20000;
      if ( (_DWORD)v12 || (a1[2] & 0x1000000) != 0 )
      {
        LOBYTE(v15) = *((_BYTE *)a1 + 11) & 1;
        LOBYTE(v14) = (_DWORD)v12 != 0;
        CmEtwRunDown(a2, v8, v14, v15, a4);
      }
      v17 = a1[1];
      if ( (v17 & 2) != 0 )
      {
        LOBYTE(v14) = 1;
        LOBYTE(v11) = a4;
        EtwpSampledProfileRunDown(v13, v11, v14);
        v17 = a1[1];
      }
      if ( (v17 & 0x400) != 0 )
      {
        LOBYTE(v11) = a4;
        EtwpSampledProfileRunDown(v13, v11, 0LL);
        v17 = a1[1];
      }
      if ( (v17 & 0x10000) != 0 )
      {
        LOBYTE(v11) = a4;
        EtwpSpinLockConfigRunDown(v13, v11);
        v17 = a1[1];
      }
      if ( (v17 & 0x20000) != 0 )
      {
        LOBYTE(v11) = a4;
        EtwpExecutiveResourceConfigRunDown(v13, v11);
        v17 = a1[1];
      }
      if ( (v17 & 0x400008) != 0 )
      {
        MmPerfLogSessionRundown(a2, v8, a4);
        v17 = a1[1];
      }
      if ( (v17 & 0x8000049) != 0 )
      {
        LOBYTE(v11) = a4;
        EtwpPoolRunDown(v13, v11);
      }
      if ( (a1[2] & 0x100000) != 0 )
      {
        LOBYTE(v11) = a4;
        EtwpClockSourceRunDown(v13, v11);
      }
    }
    if ( a4 )
    {
      if ( a1 )
      {
        v18 = a1[1];
        if ( (v18 & 0x8000000) != 0 )
        {
          MmIdentifyPhysicalMemory(a2, v8, 645LL, 1LL);
          MmLogSystemShareablePfnInfo(a2, v8);
          v18 = a1[1];
        }
        if ( (v18 & 0x20) != 0 )
        {
          LOBYTE(v12) = a4;
          EtwpLogRefSetAutoMark(v12, v13);
        }
      }
    }
    else if ( a1 )
    {
      v20 = a1[1];
      if ( (v20 & 0x8000000) != 0 )
      {
        MmLogSystemShareablePfnInfo(a2, v8);
        MmIdentifyPhysicalMemory(a2, v8, 645LL, 1LL);
        v20 = a1[1];
      }
      if ( (v20 & 9) != 0 )
      {
        EtwpLogMemInfoRundown(v13);
        MmIdentifyPhysicalMemory(a2, v8, 547LL, 0LL);
        v20 = a1[1];
      }
      if ( (v20 & 0x80000) != 0 )
      {
        MmLogQueryCombineStats(a2, &v23, 0LL);
        v8 = v23;
      }
      if ( (*a1 & 0x200) != 0 )
        WmiTraceRundownNotify(**(_QWORD **)(v13 + 1112), v8);
      v21 = a1[4];
      if ( (v21 & 0x8000) != 0 )
      {
        PopExecuteOnTargetProcessors((__int64)KeActiveProcessors, (__int64)PpmTracePerfIdleRundown, 0LL, 0LL);
        v21 = a1[4];
      }
      if ( (v21 & 0x40) != 0 || (v21 & 0x80u) != 0 )
        EtwpObjectTypeRundown(v13, 0LL);
      if ( (a1[2] & 0x10000) != 0 )
        EtwpProcessorRundown(v13);
    }
    EtwpCloseLogger(v8, a2, v22[0]);
  }
  return IoSetThreadHardErrorMode(v10);
}
