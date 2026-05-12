/*
 * XREFs of StorpTelemetryMiniportEvent @ 0x1C001D374
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000CB50 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidAdapterFindUnit @ 0x1C00061C8 (RaidAdapterFindUnit.c)
 *     StorpTelemetryMiniportEventUnit @ 0x1C001D3F4 (StorpTelemetryMiniportEventUnit.c)
 *     StorpTelemetryMiniportEventAdapter @ 0x1C0045BF8 (StorpTelemetryMiniportEventAdapter.c)
 */

__int64 __fastcall StorpTelemetryMiniportEvent(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 Unit; // rax
  __int64 v6; // rsi
  unsigned int v8; // [rsp+38h] [rbp+10h]

  Unit = 0LL;
  HIBYTE(v8) = 0;
  v6 = 0LL;
  if ( !a2 )
    return StorpTelemetryMiniportEventAdapter(a1, a3);
  if ( *(_WORD *)a2 == 1 && *(_DWORD *)(a2 + 4) >= 4u )
  {
    v6 = a2;
    LOWORD(v8) = *(_WORD *)(a2 + 8);
    BYTE2(v8) = *(_BYTE *)(a2 + 10);
    Unit = RaidAdapterFindUnit(a1, v8);
  }
  return StorpTelemetryMiniportEventUnit(a1, Unit, v6, a3);
}
