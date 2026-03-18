/*
 * XREFs of NVMePowerActive @ 0x1C000627C
 * Callers:
 *     NVMeHwAdapterControl @ 0x1C0001C50 (NVMeHwAdapterControl.c)
 * Callees:
 *     NVMePerfStateTransition @ 0x1C00060B0 (NVMePerfStateTransition.c)
 *     NVMeSetFStateIdleTimer @ 0x1C0006130 (NVMeSetFStateIdleTimer.c)
 *     NVMeUpdateResumeLatencyTolerance @ 0x1C00061E4 (NVMeUpdateResumeLatencyTolerance.c)
 */

char __fastcall NVMePowerActive(__int64 a1, __int64 a2)
{
  const char *v2; // r8
  int v5; // eax
  __int64 v6; // r8

  v2 = "IDLE";
  if ( *(_BYTE *)(a2 + 20) )
    v2 = "ACTIVE";
  StorPortDebugPrint(3LL, "StorNVMe - POWER: %s\n", v2);
  v5 = *(_DWORD *)(a1 + 1152) ^ (*(_DWORD *)(a1 + 1152) ^ (4 * *(unsigned __int8 *)(a2 + 20))) & 4;
  *(_DWORD *)(a1 + 1152) = v5;
  if ( *(_BYTE *)(a2 + 20) )
  {
    if ( (v5 & 0x20) != 0 )
    {
      v6 = *(_QWORD *)(a1 + 1192);
      *(_DWORD *)(a1 + 1152) = v5 & 0xFFFFFFDF;
      StorPortExtendedFunction(33LL, a1, v6, NVMeFStateIdleTimerCallback);
    }
    StorPortExtendedFunction(51LL, a1, 0LL, 0LL);
    if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 1200), 0) )
    {
      LOBYTE(v5) = StorPortDebugPrint(3LL, "StorNVMe - POWER: P-State transition already in progress!\n");
    }
    else
    {
      LOBYTE(v5) = NVMePerfStateTransition(a1);
      if ( !(_BYTE)v5 )
        *(_DWORD *)(a1 + 1200) &= ~1u;
    }
  }
  else if ( *(_BYTE *)(a1 + 1161) > 1u )
  {
    NVMeUpdateResumeLatencyTolerance(a1);
    LOBYTE(v5) = NVMeSetFStateIdleTimer(a1);
  }
  return v5;
}
