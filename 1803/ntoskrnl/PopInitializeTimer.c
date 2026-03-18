/*
 * XREFs of PopInitializeTimer @ 0x14064C21C
 * Callers:
 *     PopCheckPowerSourceAfterRtcWakeInitialize @ 0x140183240 (PopCheckPowerSourceAfterRtcWakeInitialize.c)
 *     PoInitSystem @ 0x1408A80C0 (PoInitSystem.c)
 *     PopThermalInit @ 0x1408C2A44 (PopThermalInit.c)
 *     PpmPerfInitialize @ 0x1408C2AD4 (PpmPerfInitialize.c)
 * Callees:
 *     KeInitializeTimer2 @ 0x140086040 (KeInitializeTimer2.c)
 */

__int64 __fastcall PopInitializeTimer(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax

  KeInitializeTimer2(a1);
  _InterlockedExchange((volatile __int32 *)(a1 + 168), 0);
  result = a5;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 152) = a4;
  *(_QWORD *)(a1 + 160) = a5;
  return result;
}
