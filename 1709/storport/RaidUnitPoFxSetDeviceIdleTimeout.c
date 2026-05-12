/*
 * XREFs of RaidUnitPoFxSetDeviceIdleTimeout @ 0x1C000FC40
 * Callers:
 *     RaidUnitAdaptiveIdleTimeout @ 0x1C0037E40 (RaidUnitAdaptiveIdleTimeout.c)
 *     RaUnitRegisterForIdleDetection @ 0x1C0060A88 (RaUnitRegisterForIdleDetection.c)
 * Callees:
 *     McTemplateK0qcccqqtt @ 0x1C0036F40 (McTemplateK0qcccqqtt.c)
 */

__int64 __fastcall RaidUnitPoFxSetDeviceIdleTimeout(__int64 a1, unsigned int a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rsi
  __int64 v5; // rcx
  int v6; // r8d
  __int64 result; // rax
  unsigned int v8; // ecx

  v2 = a2;
  if ( a2 == -1 )
  {
    v4 = -1LL;
  }
  else
  {
    v8 = *(_DWORD *)(*(_QWORD *)(a1 + 1488) + 24LL);
    if ( a2 < v8 )
      v2 = v8;
    result = v2;
    v4 = 10000LL * v2;
  }
  v5 = *(_QWORD *)(a1 + 1488);
  v6 = *(_DWORD *)(v5 + 28);
  if ( v2 != v6 )
  {
    if ( StorEtwLoggingEnabled )
    {
      if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100000) != 0 )
        McTemplateK0qcccqqtt(
          *(_QWORD *)(a1 + 24),
          (*(_DWORD *)(v5 + 32) >> 8) & 1,
          v6,
          *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
          *(_BYTE *)(a1 + 88),
          *(_BYTE *)(a1 + 89),
          *(_BYTE *)(a1 + 90),
          v6,
          v2,
          BYTE1(*(_DWORD *)(v5 + 32)) & 1,
          (*(_DWORD *)(v5 + 32) & 0x200) != 0);
    }
    *(_DWORD *)(*(_QWORD *)(a1 + 1488) + 28LL) = v2;
    return PoFxSetDeviceIdleTimeout(**(_QWORD **)(a1 + 1488), v4);
  }
  return result;
}
