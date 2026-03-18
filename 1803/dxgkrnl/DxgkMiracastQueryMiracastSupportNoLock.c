/*
 * XREFs of DxgkMiracastQueryMiracastSupportNoLock @ 0x1C003EE4C
 * Callers:
 *     ?AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0147E6C (-AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CO.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkMiracastQueryMiracastSupportNoLock(__int64 a1)
{
  __m128i v1; // xmm0
  int v2; // edx

  v1 = (__m128i)xmmword_1C007AC00;
  v2 = dword_1C007AC10;
  *(_OWORD *)a1 = xmmword_1C007AC00;
  *(_DWORD *)(a1 + 16) = v2;
  return (_mm_cvtsi128_si32(_mm_srli_si128(v1, 12)) | v2) == 0 ? 0xC00000BB : 0;
}
