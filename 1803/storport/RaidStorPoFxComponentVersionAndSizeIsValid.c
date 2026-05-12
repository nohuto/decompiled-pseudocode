/*
 * XREFs of RaidStorPoFxComponentVersionAndSizeIsValid @ 0x1C002F560
 * Callers:
 *     StorpAdapterInitializePoFxPower @ 0x1C00317EC (StorpAdapterInitializePoFxPower.c)
 *     StorpUnitInitializePoFxPower @ 0x1C0033890 (StorpUnitInitializePoFxPower.c)
 * Callees:
 *     <none>
 */

bool __fastcall RaidStorPoFxComponentVersionAndSizeIsValid(int *a1)
{
  int v1; // eax
  bool v2; // cf

  v1 = *a1;
  if ( *a1 == 1 )
  {
    v2 = (unsigned int)a1[1] < 0x20;
  }
  else
  {
    if ( v1 != 2 )
      return (unsigned int)(v1 - 1) <= 1;
    v2 = (unsigned int)a1[1] < 0x28;
  }
  if ( v2 )
    return 0;
  return (unsigned int)(v1 - 1) <= 1;
}
