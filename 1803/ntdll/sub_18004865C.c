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

__int64 __fastcall sub_18004865C(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v6; // [rsp+30h] [rbp+8h]

  v4 = 0LL;
  if ( qword_18015D3B8 )
  {
    RtlAcquireSRWLockShared(&qword_18015D3B0, a2, a3, a4);
    v4 = qword_18015D3B8;
    v6 = qword_18015D3B8;
    if ( qword_18015D3B8 )
    {
      _InterlockedIncrement((volatile signed __int32 *)qword_18015D3B8);
      v4 = v6;
    }
    RtlReleaseSRWLockShared(&qword_18015D3B0);
  }
  return v4;
}
