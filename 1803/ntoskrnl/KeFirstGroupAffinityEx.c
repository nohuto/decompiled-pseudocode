/*
 * XREFs of KeFirstGroupAffinityEx @ 0x1400C5EE0
 * Callers:
 *     KeStartThread @ 0x14003FBEC (KeStartThread.c)
 *     KeSetAffinityProcess @ 0x140183BE0 (KeSetAffinityProcess.c)
 *     PspAllocateProcess @ 0x1404ED888 (PspAllocateProcess.c)
 *     NtSetInformationJobObject @ 0x140532FE4 (NtSetInformationJobObject.c)
 *     PpmRegisterPerfStates @ 0x14063EACC (PpmRegisterPerfStates.c)
 *     PpmIdleInitializeConcurrency @ 0x140640180 (PpmIdleInitializeConcurrency.c)
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
