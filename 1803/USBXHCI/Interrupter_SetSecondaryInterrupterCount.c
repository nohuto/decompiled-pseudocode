/*
 * XREFs of Interrupter_SetSecondaryInterrupterCount @ 0x1C0017C48
 * Callers:
 *     Interrupter_DetermineSecondaryInterrupterCount @ 0x1C0058F68 (Interrupter_DetermineSecondaryInterrupterCount.c)
 *     Interrupter_FilterRemoveResourceRequirements @ 0x1C00594B0 (Interrupter_FilterRemoveResourceRequirements.c)
 *     Interrupter_PrepareHardware @ 0x1C00597B8 (Interrupter_PrepareHardware.c)
 * Callees:
 *     <none>
 */

void __fastcall Interrupter_SetSecondaryInterrupterCount(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 20) = a2;
}
