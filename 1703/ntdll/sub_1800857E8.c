/*
 * XREFs of sub_1800857E8 @ 0x1800857E8
 * Callers:
 *     sub_180012130 @ 0x180012130 (sub_180012130.c)
 *     TpSetDefaultPoolStackInformation @ 0x1800856A0 (TpSetDefaultPoolStackInformation.c)
 *     TpSetDefaultPoolMaxThreads @ 0x180105340 (TpSetDefaultPoolMaxThreads.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180020280 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180028DE0 (RtlReleaseSRWLockShared.c)
 */

PVOID sub_1800857E8()
{
  PVOID v0; // rbx
  PVOID v2; // [rsp+30h] [rbp+8h]

  v0 = 0LL;
  if ( qword_18015C378 )
  {
    RtlAcquireSRWLockShared(&stru_18015C380);
    v0 = qword_18015C378;
    v2 = qword_18015C378;
    if ( qword_18015C378 )
    {
      _InterlockedIncrement((volatile signed __int32 *)qword_18015C378);
      v0 = v2;
    }
    RtlReleaseSRWLockShared(&stru_18015C380);
  }
  return v0;
}
