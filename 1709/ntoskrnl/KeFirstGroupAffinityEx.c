/*
 * XREFs of KeFirstGroupAffinityEx @ 0x140126920
 * Callers:
 *     KeStartThread @ 0x1400A6890 (KeStartThread.c)
 *     KeSetAffinityProcess @ 0x1401580FC (KeSetAffinityProcess.c)
 *     PspAllocateProcess @ 0x140489D0C (PspAllocateProcess.c)
 *     NtSetInformationJobObject @ 0x140510C80 (NtSetInformationJobObject.c)
 *     PpmRegisterPerfStates @ 0x1405B500C (PpmRegisterPerfStates.c)
 *     PpmIdleInitializeConcurrency @ 0x1405B5B54 (PpmIdleInitializeConcurrency.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeFirstGroupAffinityEx(_QWORD *a1, _WORD *a2)
{
  unsigned __int16 v2; // ax

  v2 = 0;
  if ( !*a2 )
    return 3221226021LL;
  while ( !*(_QWORD *)&a2[4 * v2 + 4] )
  {
    if ( ++v2 >= *a2 )
      return 3221226021LL;
  }
  *a1 = 0LL;
  a1[1] = 0LL;
  *((_WORD *)a1 + 4) = v2;
  *a1 = *(_QWORD *)&a2[4 * v2 + 4];
  return 0LL;
}
