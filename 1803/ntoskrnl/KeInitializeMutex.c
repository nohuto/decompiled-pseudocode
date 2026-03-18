/*
 * XREFs of KeInitializeMutex @ 0x1400D3950
 * Callers:
 *     EtwpInitLoggerContext @ 0x1405893D4 (EtwpInitLoggerContext.c)
 *     KeAllocateCalloutStackEx @ 0x1406047B0 (KeAllocateCalloutStackEx.c)
 * Callees:
 *     KiInitializeMutant @ 0x1400D3988 (KiInitializeMutant.c)
 */

void __stdcall KeInitializeMutex(PRKMUTEX Mutex, ULONG Level)
{
  char v2; // r8

  v2 = 1;
  KiInitializeMutant(Mutex, 0LL, v2);
}
