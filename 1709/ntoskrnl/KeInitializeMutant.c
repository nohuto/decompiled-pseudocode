/*
 * XREFs of KeInitializeMutant @ 0x1400B4730
 * Callers:
 *     NtCreateMutant @ 0x1404ECB2C (NtCreateMutant.c)
 * Callees:
 *     KiInitializeMutant @ 0x1400B4748 (KiInitializeMutant.c)
 */

void __stdcall KeInitializeMutant(PRKMUTANT Mutant, BOOLEAN InitialOwner)
{
  KiInitializeMutant(Mutant, InitialOwner, 0LL);
}
