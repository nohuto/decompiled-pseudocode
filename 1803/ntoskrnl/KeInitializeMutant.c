/*
 * XREFs of KeInitializeMutant @ 0x1400D3970
 * Callers:
 *     NtCreateMutant @ 0x140589664 (NtCreateMutant.c)
 * Callees:
 *     KiInitializeMutant @ 0x1400D3988 (KiInitializeMutant.c)
 */

void __stdcall KeInitializeMutant(PRKMUTANT Mutant, BOOLEAN InitialOwner)
{
  KiInitializeMutant(Mutant, InitialOwner, 0LL);
}
