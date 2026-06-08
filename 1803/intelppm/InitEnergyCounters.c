/*
 * XREFs of InitEnergyCounters @ 0x1C0023A50
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0005280 (memset.c)
 *     InitEnergyCountersMsr @ 0x1C0023B94 (InitEnergyCountersMsr.c)
 *     GetProcessorArchitectureIndex @ 0x1C0023BC0 (GetProcessorArchitectureIndex.c)
 *     ProbeMsr @ 0x1C0023EFC (ProbeMsr.c)
 *     RetrieveModelParameters @ 0x1C0023FC0 (RetrieveModelParameters.c)
 *     InitEnergyCountersMsrEx @ 0x1C0027780 (InitEnergyCountersMsrEx.c)
 *     ProbeFixedFunctionCounters @ 0x1C0027840 (ProbeFixedFunctionCounters.c)
 */

__int64 InitEnergyCounters()
{
  unsigned int Number; // ebx
  unsigned int v1; // edi
  unsigned __int64 v2; // rdx
  int ProcessorArchitectureIndex; // esi
  unsigned __int64 *p_Lock; // r8
  double v6; // xmm1_8
  __int64 SystemArgument1_low; // r9
  unsigned __int64 v8; // rax

  Number = KeGetPcr()->Prcb.Number;
  v1 = -1073741637;
  ProcessorArchitectureIndex = GetProcessorArchitectureIndex();
  if ( ProcessorArchitectureIndex == 2 )
    return v1;
  if ( Number )
    goto LABEL_3;
  memset(&WPP_MAIN_CB.DeviceQueue, 0, 0xE0uLL);
  *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Type = ProcessorArchitectureIndex & 1;
  RetrieveModelParameters(&WPP_MAIN_CB.Dpc.DeferredContext);
  if ( ((__int64)WPP_MAIN_CB.Dpc.DeferredContext & 1) != 0 && !(unsigned __int8)ProbeFixedFunctionCounters() )
  {
    memset(&WPP_MAIN_CB.Dpc.DeferredContext, 0, 0x98uLL);
    LODWORD(WPP_MAIN_CB.Dpc.DeferredContext) = 0;
    WPP_MAIN_CB.Dpc.SystemArgument1 = (void *)0x63900000001LL;
  }
  if ( (unsigned __int8)ProbeMsr(&WPP_MAIN_CB.Dpc.DeferredContext) )
  {
    v2 = __readmsr(0x606u);
    *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Type ^= (LOBYTE(WPP_MAIN_CB.DeviceQueue.Type) ^ (unsigned __int8)((unsigned int)v2 >> 7)) & 0x3E;
    if ( ProcessorArchitectureIndex == 1 )
    {
      v2 = ((unsigned int)v2 >> 8) & 0x1F;
      v6 = (double)(int)(1LL << v2);
      if ( 1LL << v2 < 0 )
        v6 = v6 + 1.844674407370955e19;
      *(double *)&WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink = 1.0 / v6;
    }
    if ( LODWORD(WPP_MAIN_CB.Dpc.SystemArgument1) )
    {
      p_Lock = &WPP_MAIN_CB.DeviceQueue.Lock;
      SystemArgument1_low = LODWORD(WPP_MAIN_CB.Dpc.SystemArgument1);
      do
      {
        v8 = __readmsr(*((_DWORD *)p_Lock + 15));
        v2 = (unsigned __int64)HIDWORD(v8) << 32;
        *(_DWORD *)p_Lock = v8;
        p_Lock = (unsigned __int64 *)((char *)p_Lock + 4);
        --SystemArgument1_low;
      }
      while ( SystemArgument1_low );
    }
LABEL_3:
    if ( ((__int64)WPP_MAIN_CB.Dpc.DeferredContext & 1) != 0 )
    {
      if ( ((__int64)WPP_MAIN_CB.Dpc.DeferredContext & 1) == 1 )
        InitEnergyCountersMsrEx(Number, v2, p_Lock);
    }
    else
    {
      InitEnergyCountersMsr(Number);
    }
    return 0;
  }
  return v1;
}
