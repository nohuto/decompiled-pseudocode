/*
 * XREFs of ExfReleasePushLockSharedEx @ 0x140103A5C
 * Callers:
 *     ExReleaseAutoExpandPushLockShared @ 0x1401038D0 (ExReleaseAutoExpandPushLockShared.c)
 * Callees:
 *     ExpWakePushLock @ 0x1400A7F10 (ExpWakePushLock.c)
 *     ExpAeStopMeasurement @ 0x140153814 (ExpAeStopMeasurement.c)
 */

__int64 __fastcall ExfReleasePushLockSharedEx(__int64 *a1, _QWORD *a2)
{
  __int64 result; // rax
  signed __int64 v4; // r8
  __int64 v5; // rtt
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  signed __int64 v9; // rdx
  __int64 v10; // rtt
  unsigned __int64 i; // rcx
  __int64 v12; // rdx
  unsigned __int64 v13; // [rsp+20h] [rbp-28h] BYREF
  LONG SpareLong; // [rsp+28h] [rbp-20h]
  struct _KTHREAD *CurrentThread; // [rsp+30h] [rbp-18h]

  if ( a2 )
  {
    CurrentThread = KeGetCurrentThread();
    SpareLong = CurrentThread->WaitBlock[0].SpareLong;
    *a2 = 0LL;
    v13 = __rdtsc();
  }
  _m_prefetchw(a1);
  result = *a1;
  while ( (result & 2) == 0 )
  {
    v4 = 0LL;
    if ( (result & 0xFFFFFFFFFFFFFFF0uLL) != 0x10 )
      v4 = result - 16;
    v5 = result;
    result = _InterlockedCompareExchange64(a1, v4, result);
    if ( v5 == result )
    {
      if ( a2 )
        return ExpAeStopMeasurement(&v13, a2);
      return result;
    }
  }
  if ( (result & 8) != 0 )
  {
    for ( i = result & 0xFFFFFFFFFFFFFFF0uLL; ; i = *(_QWORD *)(i + 24) )
    {
      v12 = *(_QWORD *)(i + 32);
      if ( v12 )
        break;
    }
    if ( _InterlockedDecrement((volatile signed __int32 *)(v12 + 48)) > 0 )
      return result;
    v6 = -9LL;
  }
  else
  {
    v6 = -1LL;
  }
  do
  {
    v7 = v6 + 4;
    v8 = result & 6;
    if ( v8 != 2 )
      v7 = v6;
    v9 = result + v7;
    v10 = result;
    result = _InterlockedCompareExchange64(a1, v9, result);
  }
  while ( v10 != result );
  if ( v8 == 2 )
    return ExpWakePushLock(a1, v9);
  return result;
}
