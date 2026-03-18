/*
 * XREFs of KiInitializeDpcList @ 0x14003C630
 * Callers:
 *     KiInitPrcb @ 0x14040F940 (KiInitPrcb.c)
 *     KiInitializeProcessor @ 0x140412130 (KiInitializeProcessor.c)
 * Callees:
 *     <none>
 */

void __fastcall KiInitializeDpcList(_QWORD *a1)
{
  *a1 = 0LL;
  a1[1] = a1;
}
