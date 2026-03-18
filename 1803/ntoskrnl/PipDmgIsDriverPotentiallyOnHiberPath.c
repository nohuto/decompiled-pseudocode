/*
 * XREFs of PipDmgIsDriverPotentiallyOnHiberPath @ 0x1401846A8
 * Callers:
 *     PipDmgGetDriverDmarCompatLevel @ 0x1405F6E8C (PipDmgGetDriverDmarCompatLevel.c)
 * Callees:
 *     IopGetRegistryValue @ 0x1405D9B94 (IopGetRegistryValue.c)
 */

bool __fastcall PipDmgIsDriverPotentiallyOnHiberPath(void *a1)
{
  int RegistryValue; // eax
  int v2; // edx

  RegistryValue = IopGetRegistryValue(a1);
  if ( RegistryValue < 0 )
    v2 = 0;
  else
    v2 = *(_DWORD *)MEMORY[8];
  return v2 != 0;
}
