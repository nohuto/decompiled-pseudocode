/*
 * XREFs of RtlPrepareForProcessCloning @ 0x1800D1BD0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180010A60 (RtlAcquireSRWLockShared.c)
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18001EE90 (RtlEnterCriticalSection.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_1800435B4 @ 0x1800435B4 (sub_1800435B4.c)
 *     sub_180046FBC @ 0x180046FBC (sub_180046FBC.c)
 *     sub_1800D0858 @ 0x1800D0858 (sub_1800D0858.c)
 *     sub_1800D09C4 @ 0x1800D09C4 (sub_1800D09C4.c)
 *     sub_1800D0C68 @ 0x1800D0C68 (sub_1800D0C68.c)
 *     sub_1800D1E50 @ 0x1800D1E50 (sub_1800D1E50.c)
 *     sub_1800D1EA8 @ 0x1800D1EA8 (sub_1800D1EA8.c)
 *     sub_1800EB360 @ 0x1800EB360 (sub_1800EB360.c)
 */

__int64 RtlPrepareForProcessCloning()
{
  __int64 result; // rax
  _RTL_SRWLOCK *v1; // rbx
  __int64 v2; // rdi
  int v3; // ebx

  if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
  {
    result = 3221225876LL;
  }
  else
  {
    sub_1800435B4(0);
    sub_180046FBC();
    RtlEnterCriticalSection(&stru_18015C240);
    result = 0LL;
  }
  if ( (int)result >= 0 )
  {
    RtlAcquireSRWLockExclusive(&stru_18015D260);
    sub_1800D1E50();
    RtlEnterCriticalSection(&stru_18015BE80);
    RtlAcquireSRWLockShared(&stru_18015D118);
    v1 = &stru_18015D128;
    v2 = 16LL;
    do
    {
      RtlAcquireSRWLockExclusive(v1);
      v1 += 2;
      --v2;
    }
    while ( v2 );
    RtlAcquireSRWLockExclusive(&stru_18015D2D0);
    sub_1800D0C68(0);
    v3 = sub_1800EB360();
    if ( v3 >= 0 )
    {
      RtlAcquireSRWLockExclusive(&stru_18015D258);
      RtlAcquireSRWLockExclusive(&stru_18015D248);
      result = 0LL;
      byte_18015BEB9 = 1;
    }
    else
    {
      sub_1800D0C68(2);
      RtlReleaseSRWLockExclusive(&stru_18015D2D0);
      sub_1800D09C4(0);
      RtlLeaveCriticalSection(&stru_18015BE80);
      sub_1800D1EA8(0LL);
      RtlReleaseSRWLockExclusive(&stru_18015D260);
      sub_1800D0858(0);
      return (unsigned int)v3;
    }
  }
  return result;
}
