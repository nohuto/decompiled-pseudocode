/*
 * XREFs of KiInitializeDpcList @ 0x1400D2D3C
 * Callers:
 *     KiInitPrcb @ 0x140479380 (KiInitPrcb.c)
 *     KiInitializeProcessor @ 0x14047C370 (KiInitializeProcessor.c)
 * Callees:
 *     <none>
 */

void __fastcall KiInitializeDpcList(_QWORD *a1)
{
  *a1 = 0LL;
  a1[1] = a1;
}
