/*
 * XREFs of RaidUnitPoFxSetDeviceIdleTimeout @ 0x1C0006714
 * Callers:
 *     RaidUnitAdaptiveIdleTimeout @ 0x1C0006648 (RaidUnitAdaptiveIdleTimeout.c)
 *     RaUnitRegisterForIdleDetection @ 0x1C005FBD8 (RaUnitRegisterForIdleDetection.c)
 * Callees:
 *     McTemplateK0qcccqqtt @ 0x1C003467C (McTemplateK0qcccqqtt.c)
 */

void __fastcall RaidUnitPoFxSetDeviceIdleTimeout(__int64 a1, unsigned int a2)
{
  _DWORD *v4; // rdx
  __int64 v5; // rsi
  int v6; // r8d
  __int64 v7; // rcx

  v4 = *(_DWORD **)(a1 + 1488);
  if ( a2 == -1 )
  {
    v5 = -1LL;
  }
  else
  {
    if ( a2 < v4[6] )
      a2 = v4[6];
    v5 = 10000LL * a2;
  }
  v6 = v4[7];
  if ( a2 != v6 )
  {
    v7 = *(_QWORD *)(a1 + 1488);
    if ( StorEtwLoggingEnabled )
    {
      if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100000) != 0 )
      {
        McTemplateK0qcccqqtt(
          *(_QWORD *)(a1 + 24),
          (v4[8] >> 9) & 1,
          v6,
          *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
          *(_BYTE *)(a1 + 88),
          *(_BYTE *)(a1 + 89),
          *(_BYTE *)(a1 + 90),
          v6,
          a2,
          (v4[8] & 0x200) != 0,
          (v4[8] & 0x400) != 0);
        v7 = *(_QWORD *)(a1 + 1488);
      }
    }
    *(_DWORD *)(v7 + 28) = a2;
    PoFxSetDeviceIdleTimeout(**(_QWORD **)(a1 + 1488), v5);
  }
}
