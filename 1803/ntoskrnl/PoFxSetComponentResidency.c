/*
 * XREFs of PoFxSetComponentResidency @ 0x140274B60
 * Callers:
 *     <none>
 * Callees:
 *     PopPepComponentSetResidency @ 0x140279314 (PopPepComponentSetResidency.c)
 *     PopDiagTraceFxComponentResidency @ 0x14027C4C4 (PopDiagTraceFxComponentResidency.c)
 */

__int64 __fastcall PoFxSetComponentResidency(__int64 a1, unsigned int a2, __int64 a3)
{
  PopDiagTraceFxComponentResidency(*(_QWORD *)(a1 + 48));
  return PopPepComponentSetResidency(*(_QWORD *)(a1 + 56), a2, a3);
}
