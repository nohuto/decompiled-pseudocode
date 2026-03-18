/*
 * XREFs of NVMePowerActive @ 0x1C0005C98
 * Callers:
 *     NVMeHwAdapterControl @ 0x1C0001C10 (NVMeHwAdapterControl.c)
 * Callees:
 *     NVMePerfStateTransition @ 0x1C0005C18 (NVMePerfStateTransition.c)
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
  *(_DWORD *)(a1 + 1120) ^= (*(_DWORD *)(a1 + 1120) ^ (4 * *(unsigned __int8 *)(a2 + 20))) & 4;
  v5 = *(_DWORD *)(a1 + 1120);
  if ( *(_BYTE *)(a2 + 20) )
  {
    if ( (v5 & 0x20) != 0 )
    {
      v6 = *(_QWORD *)(a1 + 1152);
      *(_DWORD *)(a1 + 1120) = v5 & 0xFFFFFFDF;
      StorPortExtendedFunction(33LL, a1, v6, NVMeFStateIdleTimerCallback);
    }
    StorPortExtendedFunction(51LL, a1, 0LL, 0LL);
    if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 1160), 0) )
    {
      LOBYTE(v5) = StorPortDebugPrint(3LL, "StorNVMe - POWER: P-State transition already in progress!\n");
    }
    else
    {
      LOBYTE(v5) = NVMePerfStateTransition(a1);
      if ( !(_BYTE)v5 )
        *(_DWORD *)(a1 + 1160) &= ~1u;
    }
  }
  else if ( *(_BYTE *)(a1 + 1129) > 1u )
  {
    if ( *(_DWORD *)(a1 + 1132) == 1 )
    {
      v5 = *(_DWORD *)(a1 + 68);
    }
    else
    {
      v5 = *(_DWORD *)(a1 + 64);
      if ( v5 == -1 )
        v5 = *(_DWORD *)(a1 + 1144);
    }
    if ( v5 )
    {
      StorPortDebugPrint(3LL, "StorNVMe - POWER: Setting F-state idle timeout to %ums\n", v5);
      *(_DWORD *)(a1 + 1120) |= 0x20u;
      LOBYTE(v5) = StorPortExtendedFunction(33LL, a1, *(_QWORD *)(a1 + 1152), NVMeFStateIdleTimerCallback);
    }
  }
  return v5;
}
