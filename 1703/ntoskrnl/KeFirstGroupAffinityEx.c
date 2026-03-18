/*
 * XREFs of KeFirstGroupAffinityEx @ 0x14002FE30
 * Callers:
 *     KeStartThread @ 0x1401121B8 (KeStartThread.c)
 *     KeSetAffinityProcess @ 0x140165A2C (KeSetAffinityProcess.c)
 *     PspAllocateProcess @ 0x14049E8B8 (PspAllocateProcess.c)
 *     NtSetInformationJobObject @ 0x14055E0D0 (NtSetInformationJobObject.c)
 *     PpmRegisterPerfStates @ 0x1405BF450 (PpmRegisterPerfStates.c)
 *     PpmIdleInitializeConcurrency @ 0x1405BFF64 (PpmIdleInitializeConcurrency.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeFirstGroupAffinityEx(_QWORD *a1, _WORD *a2)
{
  unsigned __int16 v2; // r8
  __int64 result; // rax

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
  result = 0LL;
  *a1 = *(_QWORD *)&a2[4 * v2 + 4];
  return result;
}
