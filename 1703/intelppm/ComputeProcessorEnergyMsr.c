/*
 * XREFs of ComputeProcessorEnergyMsr @ 0x1C00061A0
 * Callers:
 *     ComputeProcessorEnergyMsrEx @ 0x1C0006240 (ComputeProcessorEnergyMsrEx.c)
 * Callees:
 *     ProcLibTracePackageEnergyCounterUpdate @ 0x1C0007568 (ProcLibTracePackageEnergyCounterUpdate.c)
 */

unsigned __int64 *__fastcall ComputeProcessorEnergyMsr(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 *a5)
{
  unsigned __int64 v5; // rsi
  int v6; // edi
  unsigned int v7; // ebx
  __int64 v8; // rbp
  int v9; // ecx
  unsigned __int64 *result; // rax

  v5 = 0LL;
  v6 = __readmsr(HIDWORD(WPP_MAIN_CB.Dpc.SystemArgument1));
  v7 = v6 - LODWORD(WPP_MAIN_CB.DeviceQueue.Lock);
  v8 = (unsigned int)(v6 - LODWORD(WPP_MAIN_CB.DeviceQueue.Lock));
  ProcLibTracePackageEnergyCounterUpdate(HIDWORD(WPP_MAIN_CB.Dpc.SystemArgument1), v8);
  LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) = v6;
  if ( v7 <= 0x7FFFFFFF )
  {
    v9 = (*(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Type >> 1) & 0x1F;
    if ( (WPP_MAIN_CB.DeviceQueue.Type & 1) != 0 )
    {
      if ( (WPP_MAIN_CB.DeviceQueue.Type & 1) == 1 )
        v5 = (unsigned __int64)(1000000 * v8) >> v9;
    }
    else
    {
      v5 = v8 << v9;
    }
  }
  result = a5;
  *a5 = v5;
  return result;
}
