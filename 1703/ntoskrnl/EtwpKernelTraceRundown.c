/*
 * XREFs of EtwpKernelTraceRundown @ 0x140434EC0
 * Callers:
 *     EtwpUpdateGroupMasks @ 0x140434C0C (EtwpUpdateGroupMasks.c)
 *     EtwKernelMemoryRundown @ 0x14070A548 (EtwKernelMemoryRundown.c)
 *     EtwpLogKernelTraceRundown @ 0x1407102D0 (EtwpLogKernelTraceRundown.c)
 * Callees:
 *     IoSetThreadHardErrorMode @ 0x140085310 (IoSetThreadHardErrorMode.c)
 *     PopExecuteOnTargetProcessors @ 0x1400888B0 (PopExecuteOnTargetProcessors.c)
 *     WmiTraceRundownNotify @ 0x14043C010 (WmiTraceRundownNotify.c)
 *     EtwpProcessThreadImageRundown @ 0x1404B01BC (EtwpProcessThreadImageRundown.c)
 *     CmEtwRunDown @ 0x140660B64 (CmEtwRunDown.c)
 *     MmIdentifyPhysicalMemory @ 0x1406B4DF0 (MmIdentifyPhysicalMemory.c)
 *     MmPerfLogSessionRundown @ 0x1406B66B8 (MmPerfLogSessionRundown.c)
 *     MmLogSystemShareablePfnInfo @ 0x1406BA5D8 (MmLogSystemShareablePfnInfo.c)
 *     MmLogQueryCombineStats @ 0x1406BF734 (MmLogQueryCombineStats.c)
 *     EtwpClockSourceRunDown @ 0x1407100C8 (EtwpClockSourceRunDown.c)
 *     EtwpExecutiveResourceConfigRunDown @ 0x140710240 (EtwpExecutiveResourceConfigRunDown.c)
 *     EtwpLogMemInfoRundown @ 0x140710334 (EtwpLogMemInfoRundown.c)
 *     EtwpLogRefSetAutoMark @ 0x1407104C4 (EtwpLogRefSetAutoMark.c)
 *     EtwpObjectTypeRundown @ 0x140710810 (EtwpObjectTypeRundown.c)
 *     EtwpPoolRunDown @ 0x140710968 (EtwpPoolRunDown.c)
 *     EtwpProcessorRundown @ 0x140710EC4 (EtwpProcessorRundown.c)
 *     EtwpSampledProfileRunDown @ 0x140711320 (EtwpSampledProfileRunDown.c)
 *     EtwpSpinLockConfigRunDown @ 0x1407114B4 (EtwpSpinLockConfigRunDown.c)
 */

BOOLEAN __fastcall EtwpKernelTraceRundown(int *a1, unsigned int a2, unsigned __int8 a3, int a4, int a5)
{
  unsigned int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  BOOLEAN v13; // r14
  int v14; // ecx
  int v16; // eax
  unsigned int v17; // [rsp+58h] [rbp+10h] BYREF

  v17 = a2;
  v8 = a2;
  v13 = IoSetThreadHardErrorMode(0);
  if ( a1 )
  {
    if ( (a1[1] & 0x20) != 0 && !a3 )
      EtwpLogRefSetAutoMark(0LL, v8);
    v14 = *a1;
    if ( (*a1 & 0xC004) != 0 || (a1[4] & 0x40) != 0 || (v14 & 1) != 0 || (v14 & 2) != 0 || (a1[1] & 0x8000000) != 0 )
    {
      LOBYTE(v11) = a3;
      EtwpProcessThreadImageRundown((_DWORD)a1, v8, v11, a4, a5);
    }
    v10 = *a1 & 0x20000;
    if ( (*a1 & 0x20000) != 0 || (a1[2] & 0x1000000) != 0 )
    {
      LOBYTE(v12) = a3;
      LOBYTE(v9) = (_DWORD)v10 != 0;
      CmEtwRunDown(v8, v9, HIBYTE(a1[2]) & 1, v12);
    }
    if ( (a1[1] & 2) != 0 )
    {
      LOBYTE(v11) = 1;
      LOBYTE(v9) = a3;
      EtwpSampledProfileRunDown(v8, v9, v11);
    }
    if ( (a1[1] & 0x400) != 0 )
    {
      LOBYTE(v9) = a3;
      EtwpSampledProfileRunDown(v8, v9, 0LL);
    }
    if ( (a1[1] & 0x10000) != 0 )
    {
      LOBYTE(v9) = a3;
      EtwpSpinLockConfigRunDown(v8, v9);
    }
    if ( (a1[1] & 0x20000) != 0 )
    {
      LOBYTE(v9) = a3;
      EtwpExecutiveResourceConfigRunDown(v8, v9);
    }
    if ( (a1[1] & 0x400008) != 0 )
      MmPerfLogSessionRundown(v8, a3);
    if ( (a1[1] & 0x8000049) != 0 )
    {
      LOBYTE(v9) = a3;
      EtwpPoolRunDown(v8, v9);
    }
    if ( (a1[2] & 0x100000) != 0 )
    {
      LOBYTE(v9) = a3;
      EtwpClockSourceRunDown(v8, v9);
    }
  }
  if ( a3 )
  {
    if ( a1 )
    {
      if ( (a1[1] & 0x8000000) != 0 )
      {
        MmIdentifyPhysicalMemory(v8, 645LL, 1LL);
        MmLogSystemShareablePfnInfo(v8);
      }
      if ( (a1[1] & 0x20) != 0 )
      {
        LOBYTE(v10) = a3;
        EtwpLogRefSetAutoMark(v10, v8);
      }
    }
  }
  else if ( a1 )
  {
    if ( (a1[1] & 0x8000000) != 0 )
    {
      MmLogSystemShareablePfnInfo(v8);
      MmIdentifyPhysicalMemory(v8, 645LL, 1LL);
    }
    if ( (a1[1] & 9) != 0 )
    {
      EtwpLogMemInfoRundown(v8);
      MmIdentifyPhysicalMemory(v8, 547LL, 0LL);
    }
    if ( (a1[1] & 0x80000) != 0 )
    {
      MmLogQueryCombineStats(&v17, 0LL);
      v8 = v17;
    }
    if ( (*a1 & 0x200) != 0 )
      WmiTraceRundownNotify(v8);
    if ( (a1[4] & 0x8000) != 0 )
      PopExecuteOnTargetProcessors((__int64)KeActiveProcessors, (__int64)PpmTracePerfIdleRundown, 0LL, 0LL);
    v16 = a1[4];
    if ( (v16 & 0x40) != 0 || (v16 & 0x80u) != 0 )
      EtwpObjectTypeRundown(v8, 0LL);
    if ( (a1[2] & 0x10000) != 0 )
      EtwpProcessorRundown(v8);
  }
  return IoSetThreadHardErrorMode(v13);
}
