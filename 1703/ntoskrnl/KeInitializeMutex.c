/*
 * XREFs of KeInitializeMutex @ 0x140121EE0
 * Callers:
 *     EtwpInitLoggerContext @ 0x14054F348 (EtwpInitLoggerContext.c)
 *     KeAllocateCalloutStackEx @ 0x1405C1E00 (KeAllocateCalloutStackEx.c)
 * Callees:
 *     <none>
 */

void __stdcall KeInitializeMutex(PRKMUTEX Mutex, ULONG Level)
{
  char v2; // r8

  v2 = 1;
  KiInitializeMutant(Mutex, 0LL, v2);
}
