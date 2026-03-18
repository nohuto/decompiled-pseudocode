/*
 * XREFs of PopMeasureEnergyChange @ 0x140764728
 * Callers:
 *     PopCalculateCsSummary @ 0x14027ACFC (PopCalculateCsSummary.c)
 *     PopDiagTraceControlCallback @ 0x1405254B0 (PopDiagTraceControlCallback.c)
 *     PopTransitionTelemetryOsState @ 0x140624944 (PopTransitionTelemetryOsState.c)
 * Callees:
 *     PopGetEnergyCounter @ 0x1407646DC (PopGetEnergyCounter.c)
 */

__int64 __fastcall PopMeasureEnergyChange(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 result; // rax
  int v6; // r8d
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF

  PopGetEnergyCounter(&v7);
  v4 = *(_QWORD *)(a2 + 8);
  result = 0LL;
  if ( v4 )
  {
    result = *((_QWORD *)&v7 + 1) - v4;
    v6 = v7 | *(_DWORD *)a2;
  }
  else
  {
    v6 = 1;
  }
  *(_DWORD *)a1 = v6;
  *(_QWORD *)(a1 + 8) = result;
  *(_OWORD *)a2 = v7;
  return result;
}
