/*
 * XREFs of InitEnergyCountersMsrEx @ 0x1C0022DF4
 * Callers:
 *     InitEnergyCounters @ 0x1C0022C40 (InitEnergyCounters.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003AE0 (__security_check_cookie.c)
 *     GetCpuIdInfo @ 0x1C0004A70 (GetCpuIdInfo.c)
 *     ActivateFixedFunctionCounters @ 0x1C0006120 (ActivateFixedFunctionCounters.c)
 */

_DWORD *InitEnergyCountersMsrEx()
{
  _DWORD *result; // rax
  int v1; // r9d
  _KDPC *p_Dpc; // r8
  __int64 DpcData_high; // r10
  unsigned int *p_ActiveThreadCount; // r9
  unsigned __int64 v5; // rax
  _DWORD v6[4]; // [rsp+20h] [rbp-28h] BYREF

  result = ActivateFixedFunctionCounters();
  if ( !v1 )
  {
    GetCpuIdInfo(0xAu, v6);
    WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink = (_LIST_ENTRY *)((1LL << (v6[3] >> 5)) - 1);
    if ( HIDWORD(WPP_MAIN_CB.Dpc.DpcData) )
    {
      p_Dpc = &WPP_MAIN_CB.Dpc;
      DpcData_high = HIDWORD(WPP_MAIN_CB.Dpc.DpcData);
      p_ActiveThreadCount = &WPP_MAIN_CB.ActiveThreadCount;
      do
      {
        v5 = __readmsr(*p_ActiveThreadCount++);
        *(_QWORD *)&p_Dpc->TargetInfoAsUlong = v5;
        p_Dpc = (_KDPC *)((char *)p_Dpc + 8);
        --DpcData_high;
      }
      while ( DpcData_high );
    }
    *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Type |= 0x40u;
    qword_1C00163F0[0] = (__int64)SnapEnergyCounters;
    result = ComputeProcessorEnergyMsrEx;
    qword_1C00163E8[0] = (__int64)ComputeProcessorEnergyMsrEx;
  }
  return result;
}
