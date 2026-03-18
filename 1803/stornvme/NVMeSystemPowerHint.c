/*
 * XREFs of NVMeSystemPowerHint @ 0x1C0006540
 * Callers:
 *     NVMeHwAdapterControl @ 0x1C0001C50 (NVMeHwAdapterControl.c)
 * Callees:
 *     NVMeUpdateResumeLatencyTolerance @ 0x1C00061E4 (NVMeUpdateResumeLatencyTolerance.c)
 */

__int64 __fastcall NVMeSystemPowerHint(_DWORD *a1, _DWORD *a2)
{
  _DWORD *v4; // rdx
  __int64 v5; // r9
  __int64 result; // rax

  if ( a2[1] >= 0x10u && *a2 )
  {
    StorPortDebugPrint(3LL, "StorNVMe - POWER: System Power Hint - Level: %u, Latency: %ums\n", a2[2], a2[3]);
    a1[291] = a2[2];
    a1[293] = a2[3];
    NVMeUpdateResumeLatencyTolerance((__int64)a1);
    if ( a1[15] == 5 )
    {
      v4 = a1;
      if ( a2[2] == 1 )
        v5 = (unsigned int)a1[19];
      else
        v5 = (unsigned int)a1[18];
    }
    else
    {
      result = (unsigned int)a1[288];
      if ( (result & 0x10) == 0 )
        return result;
      v4 = a1;
      if ( a2[2] == 1 )
        v5 = (unsigned int)a1[19];
      else
        v5 = 0xFFFFFFFFLL;
    }
    return StorPortExtendedFunction(57LL, v4, 0LL, v5);
  }
  return result;
}
