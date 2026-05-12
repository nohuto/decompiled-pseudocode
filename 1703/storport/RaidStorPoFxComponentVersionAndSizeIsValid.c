/*
 * XREFs of RaidStorPoFxComponentVersionAndSizeIsValid @ 0x1C001D23C
 * Callers:
 *     StorpAdapterInitializePoFxPower @ 0x1C001CFF8 (StorpAdapterInitializePoFxPower.c)
 *     StorpUnitInitializePoFxPower @ 0x1C0034D60 (StorpUnitInitializePoFxPower.c)
 * Callees:
 *     <none>
 */

bool __fastcall RaidStorPoFxComponentVersionAndSizeIsValid(int *a1)
{
  int v1; // eax

  v1 = *a1;
  return (*a1 != 1 || (unsigned int)a1[1] >= 0x20)
      && (v1 != 2 || (unsigned int)a1[1] >= 0x28)
      && (unsigned int)(v1 - 1) <= 1;
}
