/*
 * XREFs of NVMePowerSetPerfState @ 0x1C000659C
 * Callers:
 *     NVMeHwAdapterControl @ 0x1C0001C90 (NVMeHwAdapterControl.c)
 * Callees:
 *     NVMePerfStateTransition @ 0x1C0006030 (NVMePerfStateTransition.c)
 *     NVMeSetPowerState @ 0x1C000EE0C (NVMeSetPowerState.c)
 */

char __fastcall NVMePowerSetPerfState(__int64 a1, __int64 a2)
{
  int v4; // edi
  const char *v5; // r9
  unsigned __int8 v6; // al
  __int64 v7; // r8
  int v8; // r9d
  unsigned __int8 v9; // cl
  __int64 v10; // rax
  int v11; // edx
  unsigned __int16 *v12; // rcx
  __int64 v13; // rdx
  int v14; // eax

  if ( *(_DWORD *)(a2 + 4) >= 0x18u && *(_DWORD *)a2 )
  {
    v4 = *(unsigned __int8 *)(a2 + 16);
    v5 = "Failed";
    if ( *(_BYTE *)(a2 + 12) )
      v5 = "Succeeded";
    StorPortDebugPrint(3LL, "StorNVMe - POWER: P-State Callback for P%u, PEP %s\n", *(unsigned __int8 *)(a2 + 16), v5);
    if ( *(_BYTE *)(a2 + 12) )
    {
      v6 = *(_BYTE *)(a1 + 1125);
      if ( (unsigned __int8)v4 <= v6 )
      {
        if ( (unsigned __int8)v4 <= 0x1Fu )
        {
          v7 = *(_QWORD *)(a1 + 1080);
          v8 = -1;
          v9 = *(_BYTE *)(v7 + 263);
          if ( (unsigned __int8)v4 <= v9 && (v10 = v7 + 32 * ((unsigned __int8)v4 + 64LL)) != 0 )
            v11 = *(_DWORD *)(v10 + 4) + *(_DWORD *)(v10 + 8);
          else
            v11 = -1;
          if ( (unsigned __int8)v4 <= v9 )
          {
            v12 = (unsigned __int16 *)(v7 + 32 * ((unsigned __int8)v4 + 64LL));
            if ( v12 )
              v8 = *v12 * ((*((_BYTE *)v12 + 3) & 1) != 0 ? 100 : 10000);
          }
          StorPortDebugPrint(
            3LL,
            "StorNVMe - POWER: Transitioning to NVME PS%u - MaxP: %uuW, Latency: %uus\n",
            v4,
            v8,
            v11);
          LOBYTE(v13) = v4;
          NVMeSetPowerState(a1, v13);
          *(_BYTE *)(a1 + 1127) = v4;
          *(_BYTE *)(a1 + 1124) = v4;
        }
        else
        {
          StorPortDebugPrint(3LL, "StorNVMe - POWER: Power state index %u is invalid\n", v4);
        }
      }
      else
      {
        StorPortDebugPrint(3LL, "StorNVMe - POWER: PS%u is greater than deepest operational power state PS%u\n", v4, v6);
      }
    }
  }
  v14 = *(_DWORD *)(a1 + 1120);
  if ( (v14 & 0x80u) == 0
    || (*(_DWORD *)(a1 + 1120) = v14 & 0xFFFFFF7F, LOBYTE(v14) = NVMePerfStateTransition(a1), !(_BYTE)v14) )
  {
    *(_DWORD *)(a1 + 1160) &= ~1u;
  }
  return v14;
}
