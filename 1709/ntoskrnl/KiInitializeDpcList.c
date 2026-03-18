/*
 * XREFs of KiInitializeDpcList @ 0x140131F30
 * Callers:
 *     KiInitializeProcessor @ 0x140426A8C (KiInitializeProcessor.c)
 *     KiInitPrcb @ 0x140427670 (KiInitPrcb.c)
 * Callees:
 *     <none>
 */

void __fastcall KiInitializeDpcList(_QWORD *a1)
{
  *a1 = 0LL;
  a1[1] = a1;
}
