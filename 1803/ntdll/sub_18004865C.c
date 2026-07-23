/*
 * XREFs of sub_18004865C @ 0x18004865C
 * Callers:
 *     sub_180046810 @ 0x180046810 (sub_180046810.c)
 *     TpSetDefaultPoolStackInformation @ 0x180048900 (TpSetDefaultPoolStackInformation.c)
 *     TpSetDefaultPoolMaxThreads @ 0x180108120 (TpSetDefaultPoolMaxThreads.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180010990 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180010A60 (RtlAcquireSRWLockShared.c)
 */

PVOID sub_18004865C()
{
  PVOID v0; // rbx
  PVOID v2; // [rsp+30h] [rbp+8h]

  v0 = 0LL;
  if ( qword_18015D3B8 )
  {
    RtlAcquireSRWLockShared(&stru_18015D3B0);
    v0 = qword_18015D3B8;
    v2 = qword_18015D3B8;
    if ( qword_18015D3B8 )
    {
      _InterlockedIncrement((volatile signed __int32 *)qword_18015D3B8);
      v0 = v2;
    }
    RtlReleaseSRWLockShared(&stru_18015D3B0);
  }
  return v0;
}
