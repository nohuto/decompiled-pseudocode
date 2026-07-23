/*
 * XREFs of RtlPrepareForProcessCloning @ 0x1800D8C40
 * Callers:
 *     <none>
 * Callees:
 *     sub_180019FC0 @ 0x180019FC0 (sub_180019FC0.c)
 *     sub_18001AE14 @ 0x18001AE14 (sub_18001AE14.c)
 *     RtlAcquireSRWLockShared @ 0x180020280 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002F9C0 (RtlEnterCriticalSection.c)
 *     sub_1800D7B28 @ 0x1800D7B28 (sub_1800D7B28.c)
 *     sub_1800D7BCC @ 0x1800D7BCC (sub_1800D7BCC.c)
 *     sub_1800D7D28 @ 0x1800D7D28 (sub_1800D7D28.c)
 *     sub_1800D8EC0 @ 0x1800D8EC0 (sub_1800D8EC0.c)
 *     sub_1800D8F18 @ 0x1800D8F18 (sub_1800D8F18.c)
 *     sub_1800EF328 @ 0x1800EF328 (sub_1800EF328.c)
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
    sub_18001AE14(0);
    sub_180019FC0();
    RtlEnterCriticalSection(&stru_18015B220);
    result = 0LL;
  }
  if ( (int)result >= 0 )
  {
    RtlAcquireSRWLockExclusive(&stru_18015C200);
    sub_1800D8EC0();
    RtlEnterCriticalSection(&stru_18015AE60);
    RtlAcquireSRWLockShared(&stru_18015C0D8);
    v1 = &stru_18015C0E8;
    v2 = 16LL;
    do
    {
      RtlAcquireSRWLockExclusive(v1);
      v1 += 2;
      --v2;
    }
    while ( v2 );
    RtlAcquireSRWLockExclusive(&stru_18015C290);
    sub_1800D7D28(0);
    v3 = sub_1800EF328();
    if ( v3 >= 0 )
    {
      RtlAcquireSRWLockExclusive(&stru_18015C1F8);
      RtlAcquireSRWLockExclusive(&stru_18015C1E8);
      result = 0LL;
      byte_18015AE99 = 1;
    }
    else
    {
      sub_1800D7D28(2);
      RtlReleaseSRWLockExclusive(&stru_18015C290);
      sub_1800D7BCC(0);
      RtlLeaveCriticalSection(&stru_18015AE60);
      sub_1800D8F18(0LL);
      RtlReleaseSRWLockExclusive(&stru_18015C200);
      sub_1800D7B28(0);
      return (unsigned int)v3;
    }
  }
  return result;
}
