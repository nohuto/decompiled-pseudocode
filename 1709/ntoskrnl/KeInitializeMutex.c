/*
 * XREFs of KeInitializeMutex @ 0x1400B4710
 * Callers:
 *     EtwpInitLoggerContext @ 0x1404EC878 (EtwpInitLoggerContext.c)
 *     KeAllocateCalloutStackEx @ 0x1405D60F0 (KeAllocateCalloutStackEx.c)
 * Callees:
 *     KiInitializeMutant @ 0x1400B4748 (KiInitializeMutant.c)
 */

void __stdcall KeInitializeMutex(PRKMUTEX Mutex, ULONG Level)
{
  char v2; // r8

  v2 = 1;
  KiInitializeMutant(Mutex, 0LL, v2);
}
