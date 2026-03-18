/*
 * XREFs of NVMePowerSetPerfState @ 0x1C0006728
 * Callers:
 *     NVMeHwAdapterControl @ 0x1C0001C50 (NVMeHwAdapterControl.c)
 * Callees:
 *     NVMePerfStateTransition @ 0x1C00060B0 (NVMePerfStateTransition.c)
 *     NVMeSetPowerState @ 0x1C000F304 (NVMeSetPowerState.c)
 */

char __fastcall NVMePowerSetPerfState(__int64 a1, __int64 a2)
{
  int v4; // edi
  const char *v5; // r9
  unsigned __int8 v6; // al
  __int64 v7; // r8
  int v8; // r9d
  unsigned __int8 v9; // r11
  __int64 v10; // r10
  __int64 v11; // rax
  int v12; // edx
  unsigned __int16 *v13; // rcx
  __int64 v14; // rdx
  int v15; // eax

  if ( *(_DWORD *)(a2 + 4) >= 0x18u && *(_DWORD *)a2 )
  {
    v4 = *(unsigned __int8 *)(a2 + 16);
    v5 = "Failed";
    if ( *(_BYTE *)(a2 + 12) )
      v5 = "Succeeded";
    StorPortDebugPrint(3LL, "StorNVMe - POWER: P-State Callback for P%u, PEP %s\n", *(unsigned __int8 *)(a2 + 16), v5);
    if ( *(_BYTE *)(a2 + 12) )
    {
      v6 = *(_BYTE *)(a1 + 1157);
      if ( (unsigned __int8)v4 <= v6 )
      {
        if ( (unsigned __int8)v4 <= 0x1Fu )
        {
          v7 = *(_QWORD *)(a1 + 1112);
          v8 = -1;
          v9 = *(_BYTE *)(v7 + 263);
          if ( (unsigned __int8)v4 <= v9
            && (v10 = (unsigned __int8)v4, (v11 = v7 + 32 * ((unsigned __int8)v4 + 64LL)) != 0) )
          {
            v12 = *(_DWORD *)(v11 + 4) + *(_DWORD *)(v11 + 8);
          }
          else
          {
            v12 = -1;
            v10 = (unsigned __int8)v4;
          }
          if ( (unsigned __int8)v4 <= v9 )
          {
            v13 = (unsigned __int16 *)(v7 + 32 * (v10 + 64));
            if ( v13 )
              v8 = *v13 * ((*((_BYTE *)v13 + 3) & 1) != 0 ? 100 : 10000);
          }
          StorPortDebugPrint(
            3LL,
            "StorNVMe - POWER: Transitioning to NVME PS%u - MaxP: %uuW, Latency: %uus\n",
            v4,
            v8,
            v12);
          LOBYTE(v14) = v4;
          NVMeSetPowerState(a1, v14);
          *(_BYTE *)(a1 + 1159) = v4;
          *(_BYTE *)(a1 + 1156) = v4;
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
  v15 = *(_DWORD *)(a1 + 1152);
  if ( (v15 & 0x80u) == 0
    || (*(_DWORD *)(a1 + 1152) = v15 & 0xFFFFFF7F, LOBYTE(v15) = NVMePerfStateTransition(a1), !(_BYTE)v15) )
  {
    *(_DWORD *)(a1 + 1200) &= ~1u;
  }
  return v15;
}
