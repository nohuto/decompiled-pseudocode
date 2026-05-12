/*
 * XREFs of RaidUnitPoFxSetDeviceIdleTimeout @ 0x1C000FC34
 * Callers:
 *     RaidUnitAdaptiveIdleTimeout @ 0x1C0036190 (RaidUnitAdaptiveIdleTimeout.c)
 *     RaUnitRegisterForIdleDetection @ 0x1C005E704 (RaUnitRegisterForIdleDetection.c)
 * Callees:
 *     Template_qcccqqtt @ 0x1C0038310 (Template_qcccqqtt.c)
 */

void __fastcall RaidUnitPoFxSetDeviceIdleTimeout(__int64 a1, unsigned int a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rcx
  int v7; // r8d

  v2 = a2;
  if ( a2 == -1 )
  {
    v5 = -1LL;
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 1456);
    if ( a2 < *(_DWORD *)(v4 + 24) )
      v2 = *(_DWORD *)(v4 + 24);
    v5 = 10000LL * v2;
  }
  v6 = *(_QWORD *)(a1 + 1456);
  v7 = *(_DWORD *)(v6 + 28);
  if ( v2 != v7 )
  {
    if ( StorEtwLoggingEnabled )
    {
      if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100000) != 0 )
        Template_qcccqqtt(
          *(_QWORD *)(a1 + 24),
          (*(_DWORD *)(v6 + 32) >> 8) & 1,
          v7,
          *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
          *(_BYTE *)(a1 + 88),
          *(_BYTE *)(a1 + 89),
          *(_BYTE *)(a1 + 90),
          v7,
          v2,
          BYTE1(*(_DWORD *)(v6 + 32)) & 1,
          (*(_DWORD *)(v6 + 32) & 0x200) != 0);
    }
    *(_DWORD *)(*(_QWORD *)(a1 + 1456) + 28LL) = v2;
    PoFxSetDeviceIdleTimeout(**(_QWORD **)(a1 + 1456), v5);
  }
}
