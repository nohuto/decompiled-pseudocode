/*
 * XREFs of sub_1800DF250 @ 0x1800DF250
 * Callers:
 *     sub_180012AB0 @ 0x180012AB0 (sub_180012AB0.c)
 *     sub_1800DF6E0 @ 0x1800DF6E0 (sub_1800DF6E0.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180020280 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180028DE0 (RtlReleaseSRWLockShared.c)
 *     sub_1800DF864 @ 0x1800DF864 (sub_1800DF864.c)
 */

unsigned __int64 sub_1800DF250()
{
  unsigned __int64 v0; // rdi
  int v1; // esi
  __int64 v2; // rcx
  __int64 *v3; // rbx

  v0 = 0LL;
  v1 = 0;
  RtlAcquireSRWLockShared((volatile signed __int64 *)(qword_18015C008 + 8));
  v2 = qword_18015C008;
  v3 = *(__int64 **)(qword_18015C008 + 16);
  if ( v3 != (__int64 *)(qword_18015C008 + 16) )
  {
    do
    {
      RtlAcquireSRWLockShared(v3 + 3);
      if ( *((_DWORD *)v3 + 24) == 2 && (!v0 || v3[13] < v0) )
      {
        v0 = v3[13];
        v1 = 1;
      }
      RtlReleaseSRWLockShared(v3 + 3);
      v2 = qword_18015C008;
      v3 = (__int64 *)*v3;
    }
    while ( v3 != (__int64 *)(qword_18015C008 + 16) );
    if ( v1 )
    {
      sub_1800DF864(v0);
      v2 = qword_18015C008;
    }
  }
  return RtlReleaseSRWLockShared((volatile signed __int64 *)(v2 + 8));
}
