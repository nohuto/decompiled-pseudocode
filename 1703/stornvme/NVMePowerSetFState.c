/*
 * XREFs of NVMePowerSetFState @ 0x1C0005E7C
 * Callers:
 *     NVMeHwAdapterControl @ 0x1C0001C10 (NVMeHwAdapterControl.c)
 * Callees:
 *     NVMeSetPowerState @ 0x1C000E67C (NVMeSetPowerState.c)
 */

void __fastcall NVMePowerSetFState(__int64 a1, _DWORD *a2)
{
  char v4; // al
  unsigned __int8 v5; // bl
  __int64 v6; // r8
  int v7; // r9d
  unsigned __int8 v8; // cl
  __int64 v9; // rax
  int v10; // edx
  unsigned __int16 *v11; // rcx
  __int64 v12; // rdx

  if ( a2[1] >= 0x18u && *a2 )
  {
    StorPortDebugPrint(3LL, "StorNVMe - POWER: F-State Callback for F%u\n", a2[5]);
    v4 = *((_BYTE *)a2 + 20);
    *(_BYTE *)(a1 + 1130) = v4;
    if ( a2[5] )
      v5 = v4 + *(_BYTE *)(a1 + 1125);
    else
      v5 = *(_BYTE *)(a1 + 1127);
    if ( v5 <= 0x1Fu )
    {
      v6 = *(_QWORD *)(a1 + 1080);
      v7 = -1;
      v8 = *(_BYTE *)(v6 + 263);
      if ( v5 <= v8 && (v9 = v6 + 32 * (v5 + 64LL)) != 0 )
        v10 = *(_DWORD *)(v9 + 4) + *(_DWORD *)(v9 + 8);
      else
        v10 = -1;
      if ( v5 <= v8 )
      {
        v11 = (unsigned __int16 *)(v6 + 32 * (v5 + 64LL));
        if ( v11 )
          v7 = *v11 * ((*((_BYTE *)v11 + 3) & 1) != 0 ? 100 : 10000);
      }
      StorPortDebugPrint(3LL, "StorNVMe - POWER: Transitioning to NVME PS%u - MaxP: %uuW, Latency: %uus\n", v5, v7, v10);
      LOBYTE(v12) = v5;
      NVMeSetPowerState(a1, v12);
      *(_BYTE *)(a1 + 1124) = v5;
    }
    else
    {
      StorPortDebugPrint(3LL, "StorNVMe - POWER: Invalid power state index %u\n", v5);
    }
  }
}
