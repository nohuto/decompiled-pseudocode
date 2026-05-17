/*
 * XREFs of sub_1800D8AD0 @ 0x1800D8AD0
 * Callers:
 *     sub_180049F90 @ 0x180049F90 (sub_180049F90.c)
 *     sub_1800D8F60 @ 0x1800D8F60 (sub_1800D8F60.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180010990 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180010A60 (RtlAcquireSRWLockShared.c)
 *     sub_1800D90E8 @ 0x1800D90E8 (sub_1800D90E8.c)
 */

signed __int64 __fastcall sub_1800D8AD0(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rdi
  int v5; // esi
  char *v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 *v10; // rbx

  v4 = 0LL;
  v5 = 0;
  RtlAcquireSRWLockShared((volatile signed __int64 *)(qword_18015D058 + 8), a2, a3, a4);
  v9 = qword_18015D058;
  v10 = *(__int64 **)(qword_18015D058 + 16);
  if ( v10 != (__int64 *)(qword_18015D058 + 16) )
  {
    do
    {
      RtlAcquireSRWLockShared(v10 + 3, v6, v7, v8);
      if ( *((_DWORD *)v10 + 24) == 2 && (!v4 || v10[13] < v4) )
      {
        v4 = v10[13];
        v5 = 1;
      }
      RtlReleaseSRWLockShared(v10 + 3);
      v9 = qword_18015D058;
      v10 = (__int64 *)*v10;
    }
    while ( v10 != (__int64 *)(qword_18015D058 + 16) );
    if ( v5 )
    {
      sub_1800D90E8(v4);
      v9 = qword_18015D058;
    }
  }
  return RtlReleaseSRWLockShared((volatile signed __int64 *)(v9 + 8));
}
