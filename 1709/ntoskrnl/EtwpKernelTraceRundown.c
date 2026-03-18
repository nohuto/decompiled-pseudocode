/*
 * XREFs of EtwpKernelTraceRundown @ 0x14074CFD4
 * Callers:
 *     EtwKernelMemoryRundown @ 0x1407455D8 (EtwKernelMemoryRundown.c)
 *     EtwpUpdateGroupMasks @ 0x140749910 (EtwpUpdateGroupMasks.c)
 *     EtwpLogKernelTraceRundown @ 0x14074D398 (EtwpLogKernelTraceRundown.c)
 * Callees:
 *     IoSetThreadHardErrorMode @ 0x1400AE650 (IoSetThreadHardErrorMode.c)
 *     PopExecuteOnTargetProcessors @ 0x1401173B0 (PopExecuteOnTargetProcessors.c)
 *     EtwpCloseLogger @ 0x14012B268 (EtwpCloseLogger.c)
 *     EtwpOpenLogger @ 0x14015377C (EtwpOpenLogger.c)
 *     CmEtwRunDown @ 0x140689AF4 (CmEtwRunDown.c)
 *     MmIdentifyPhysicalMemory @ 0x1406E0DF8 (MmIdentifyPhysicalMemory.c)
 *     MmPerfLogSessionRundown @ 0x1406E2F6C (MmPerfLogSessionRundown.c)
 *     MmLogSystemShareablePfnInfo @ 0x1406E734C (MmLogSystemShareablePfnInfo.c)
 *     MmLogQueryCombineStats @ 0x1406ED1E0 (MmLogQueryCombineStats.c)
 *     WmiTraceRundownNotify @ 0x1407429E8 (WmiTraceRundownNotify.c)
 *     EtwpClockSourceRunDown @ 0x14074CD8C (EtwpClockSourceRunDown.c)
 *     EtwpExecutiveResourceConfigRunDown @ 0x14074CF10 (EtwpExecutiveResourceConfigRunDown.c)
 *     EtwpLogMemInfoRundown @ 0x14074D40C (EtwpLogMemInfoRundown.c)
 *     EtwpLogRefSetAutoMark @ 0x14074D59C (EtwpLogRefSetAutoMark.c)
 *     EtwpObjectTypeRundown @ 0x14074D8FC (EtwpObjectTypeRundown.c)
 *     EtwpPoolRunDown @ 0x14074DA54 (EtwpPoolRunDown.c)
 *     EtwpProcessThreadImageRundown @ 0x14074E288 (EtwpProcessThreadImageRundown.c)
 *     EtwpProcessorRundown @ 0x14074E58C (EtwpProcessorRundown.c)
 *     EtwpSampledProfileRunDown @ 0x14074E9E4 (EtwpSampledProfileRunDown.c)
 *     EtwpSpinLockConfigRunDown @ 0x14074EB78 (EtwpSpinLockConfigRunDown.c)
 */

BOOLEAN __fastcall EtwpKernelTraceRundown(int *a1, __int64 a2, unsigned int a3, unsigned __int8 a4, __int64 a5, int a6)
{
  unsigned int v8; // ebp
  BOOLEAN v10; // r15
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdi
  int v16; // ecx
  int v17; // eax
  char v19[40]; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v20; // [rsp+70h] [rbp+18h] BYREF

  v20 = a3;
  v8 = a3;
  v10 = IoSetThreadHardErrorMode(0);
  v11 = EtwpOpenLogger(v8, a2, 0, v19);
  v15 = v11;
  if ( v11 )
  {
    if ( a1 )
    {
      if ( (a1[1] & 0x20) != 0 && !a4 )
        EtwpLogRefSetAutoMark(0LL, v11);
      v16 = *a1;
      if ( (*a1 & 0xC004) != 0 || (a1[4] & 0x40) != 0 || (v16 & 1) != 0 || (v16 & 2) != 0 || (a1[1] & 0x8000000) != 0 )
      {
        LOBYTE(v14) = a4;
        EtwpProcessThreadImageRundown((_DWORD)a1, v15, v14, a5, a6);
      }
      v13 = *a1 & 0x20000;
      if ( (*a1 & 0x20000) != 0 || (a1[2] & 0x1000000) != 0 )
        CmEtwRunDown(a2, v8, (_DWORD)v13 != 0, *((_BYTE *)a1 + 11) & 1, a4);
      if ( (a1[1] & 2) != 0 )
      {
        LOBYTE(v14) = 1;
        LOBYTE(v12) = a4;
        EtwpSampledProfileRunDown(v15, v12, v14);
      }
      if ( (a1[1] & 0x400) != 0 )
      {
        LOBYTE(v12) = a4;
        EtwpSampledProfileRunDown(v15, v12, 0LL);
      }
      if ( (a1[1] & 0x10000) != 0 )
      {
        LOBYTE(v12) = a4;
        EtwpSpinLockConfigRunDown(v15, v12);
      }
      if ( (a1[1] & 0x20000) != 0 )
        EtwpExecutiveResourceConfigRunDown(v15, a4);
      if ( (a1[1] & 0x400008) != 0 )
        MmPerfLogSessionRundown(a2, v8, a4);
      if ( (a1[1] & 0x8000049) != 0 )
      {
        LOBYTE(v12) = a4;
        EtwpPoolRunDown(v15, v12);
      }
      if ( (a1[2] & 0x100000) != 0 )
        EtwpClockSourceRunDown(v15, a4);
    }
    if ( a4 )
    {
      if ( a1 )
      {
        if ( (a1[1] & 0x8000000) != 0 )
        {
          MmIdentifyPhysicalMemory(a2, v8, 0x285u, 1);
          MmLogSystemShareablePfnInfo(a2, v8);
        }
        if ( (a1[1] & 0x20) != 0 )
        {
          LOBYTE(v13) = a4;
          EtwpLogRefSetAutoMark(v13, v15);
        }
      }
    }
    else if ( a1 )
    {
      if ( (a1[1] & 0x8000000) != 0 )
      {
        MmLogSystemShareablePfnInfo(a2, v8);
        MmIdentifyPhysicalMemory(a2, v8, 0x285u, 1);
      }
      if ( (a1[1] & 9) != 0 )
      {
        EtwpLogMemInfoRundown(v15);
        MmIdentifyPhysicalMemory(a2, v8, 0x223u, 0);
      }
      if ( (a1[1] & 0x80000) != 0 )
      {
        MmLogQueryCombineStats(a2, &v20, 0LL);
        v8 = v20;
      }
      if ( (*a1 & 0x200) != 0 && *(_QWORD *)(v15 + 2256) == EtwpHostSiloState )
        WmiTraceRundownNotify(v8);
      if ( (a1[4] & 0x8000) != 0 )
        PopExecuteOnTargetProcessors((__int64)KeActiveProcessors, (__int64)PpmTracePerfIdleRundown, 0LL, 0LL);
      v17 = a1[4];
      if ( (v17 & 0x40) != 0 || (v17 & 0x80u) != 0 )
        EtwpObjectTypeRundown(v15, 0LL);
      if ( (a1[2] & 0x10000) != 0 )
        EtwpProcessorRundown(v15);
    }
    EtwpCloseLogger(v8, a2, v19[0]);
  }
  return IoSetThreadHardErrorMode(v10);
}
