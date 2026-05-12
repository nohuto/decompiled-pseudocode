/*
 * XREFs of StorpTelemetryMiniportEvent @ 0x1C0045A94
 * Callers:
 *     StorPortExtendedFunction @ 0x1C0002880 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidAdapterFindUnit @ 0x1C0006BF0 (RaidAdapterFindUnit.c)
 *     StorpTelemetryMiniportEventAdapter @ 0x1C0045B1C (StorpTelemetryMiniportEventAdapter.c)
 *     StorpTelemetryMiniportEventUnit @ 0x1C0045E20 (StorpTelemetryMiniportEventUnit.c)
 */

__int64 __fastcall StorpTelemetryMiniportEvent(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 Unit; // rax
  __int64 v7; // rsi
  unsigned int v9; // [rsp+38h] [rbp+10h]

  Unit = 0LL;
  HIBYTE(v9) = 0;
  v7 = 0LL;
  if ( !a2 )
    return StorpTelemetryMiniportEventAdapter(a1, a3);
  if ( *(_WORD *)a2 == 1 && *(_DWORD *)(a2 + 4) >= 4u )
  {
    v7 = a2;
    LOWORD(v9) = *(_WORD *)(a2 + 8);
    BYTE2(v9) = *(_BYTE *)(a2 + 10);
    Unit = RaidAdapterFindUnit(a1, v9, a3, a4);
  }
  return StorpTelemetryMiniportEventUnit(a1, Unit, v7, a3);
}
