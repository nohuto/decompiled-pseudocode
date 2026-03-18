/*
 * XREFs of NVMePowerSetFState @ 0x1C00063EC
 * Callers:
 *     NVMeHwAdapterControl @ 0x1C0001C50 (NVMeHwAdapterControl.c)
 * Callees:
 *     NVMeSetFStateIdleTimer @ 0x1C0006130 (NVMeSetFStateIdleTimer.c)
 *     NVMeUpdateResumeLatencyTolerance @ 0x1C00061E4 (NVMeUpdateResumeLatencyTolerance.c)
 *     NVMeSetPowerState @ 0x1C000F304 (NVMeSetPowerState.c)
 */

void __fastcall NVMePowerSetFState(__int64 a1, _DWORD *a2)
{
  char v4; // al
  unsigned __int8 v5; // di
  __int64 v6; // r8
  int v7; // r9d
  unsigned __int8 v8; // r11
  __int64 v9; // r10
  __int64 v10; // rax
  int v11; // edx
  unsigned __int16 *v12; // rcx
  __int64 v13; // rdx
  unsigned __int8 v14; // al

  if ( a2[1] >= 0x18u && *a2 )
  {
    StorPortDebugPrint(3LL, "StorNVMe - POWER: F-State Callback for F%u\n", a2[5]);
    v4 = *((_BYTE *)a2 + 20);
    *(_BYTE *)(a1 + 1162) = v4;
    if ( a2[5] )
      v5 = v4 + *(_BYTE *)(a1 + 1157);
    else
      v5 = *(_BYTE *)(a1 + 1159);
    if ( v5 <= 0x1Fu )
    {
      v6 = *(_QWORD *)(a1 + 1112);
      v7 = -1;
      v8 = *(_BYTE *)(v6 + 263);
      if ( v5 <= v8 && (v9 = v5, (v10 = v6 + 32 * (v5 + 64LL)) != 0) )
      {
        v11 = *(_DWORD *)(v10 + 4) + *(_DWORD *)(v10 + 8);
      }
      else
      {
        v11 = -1;
        v9 = v5;
      }
      if ( v5 <= v8 )
      {
        v12 = (unsigned __int16 *)(v6 + 32 * (v9 + 64));
        if ( v12 )
          v7 = *v12 * ((*((_BYTE *)v12 + 3) & 1) != 0 ? 100 : 10000);
      }
      StorPortDebugPrint(3LL, "StorNVMe - POWER: Transitioning to NVME PS%u - MaxP: %uuW, Latency: %uus\n", v5, v7, v11);
      LOBYTE(v13) = v5;
      NVMeSetPowerState(a1, v13);
      v14 = *(_BYTE *)(a1 + 1162);
      *(_BYTE *)(a1 + 1156) = v5;
      if ( v14 && v14 < *(unsigned __int8 *)(a1 + 1161) - 1 && NVMeUpdateResumeLatencyTolerance(a1) )
        NVMeSetFStateIdleTimer(a1);
    }
    else
    {
      StorPortDebugPrint(3LL, "StorNVMe - POWER: Invalid power state index %u\n", v5);
    }
  }
}
