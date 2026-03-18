/*
 * XREFs of KeInitializeMutant @ 0x140121EF0
 * Callers:
 *     NtCreateMutant @ 0x14054F5F0 (NtCreateMutant.c)
 * Callees:
 *     <none>
 */

void __stdcall KeInitializeMutant(PRKMUTANT Mutant, BOOLEAN InitialOwner)
{
  KiInitializeMutant(Mutant, InitialOwner, 0LL);
}
