/*
 * XREFs of PoFxSetComponentLatency @ 0x140274B10
 * Callers:
 *     <none>
 * Callees:
 *     PopPepComponentSetLatency @ 0x140279230 (PopPepComponentSetLatency.c)
 *     PopDiagTraceFxComponentLatency @ 0x14027C3D8 (PopDiagTraceFxComponentLatency.c)
 */

__int64 __fastcall PoFxSetComponentLatency(__int64 a1, unsigned int a2, __int64 a3)
{
  PopDiagTraceFxComponentLatency(*(_QWORD *)(a1 + 48));
  return PopPepComponentSetLatency(*(_QWORD *)(a1 + 56), a2, a3);
}
