/*
 * XREFs of ExfReleasePushLockSharedEx @ 0x1400A4E7C
 * Callers:
 *     ExReleaseAutoExpandPushLockShared @ 0x1400A4CF0 (ExReleaseAutoExpandPushLockShared.c)
 * Callees:
 *     ExpWakePushLock @ 0x140063B20 (ExpWakePushLock.c)
 *     ExpAeStopMeasurement @ 0x1400A4F38 (ExpAeStopMeasurement.c)
 */

int __fastcall ExfReleasePushLockSharedEx(signed __int64 *a1, _QWORD *a2)
{
  signed __int64 v3; // rax
  signed __int64 v4; // r8
  signed __int64 v5; // rtt
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  signed __int64 v9; // rcx
  signed __int64 v10; // rdx
  signed __int64 v11; // rtt
  unsigned __int64 i; // rcx
  __int64 v13; // rdx
  unsigned __int64 v15; // [rsp+20h] [rbp-28h] BYREF
  LONG SpareLong; // [rsp+28h] [rbp-20h]
  struct _KTHREAD *CurrentThread; // [rsp+30h] [rbp-18h]

  if ( a2 )
  {
    CurrentThread = KeGetCurrentThread();
    SpareLong = CurrentThread->WaitBlock[0].SpareLong;
    *a2 = 0LL;
    v15 = __rdtsc();
  }
  _m_prefetchw(a1);
  v3 = *a1;
  while ( (v3 & 2) == 0 )
  {
    v4 = 0LL;
    if ( (v3 & 0xFFFFFFFFFFFFFFF0uLL) != 0x10 )
      v4 = v3 - 16;
    v5 = v3;
    v3 = _InterlockedCompareExchange64(a1, v4, v3);
    if ( v5 == v3 )
    {
      if ( a2 )
        LODWORD(v3) = ExpAeStopMeasurement(&v15, a2);
      return v3;
    }
  }
  if ( (v3 & 8) != 0 )
  {
    for ( i = v3 & 0xFFFFFFFFFFFFFFF0uLL; ; i = *(_QWORD *)(i + 24) )
    {
      v13 = *(_QWORD *)(i + 32);
      if ( v13 )
        break;
    }
    if ( _InterlockedDecrement((volatile signed __int32 *)(v13 + 48)) > 0 )
      return v3;
    v6 = -9LL;
    v7 = -5LL;
  }
  else
  {
    v6 = -1LL;
    v7 = 3LL;
  }
  do
  {
    v8 = v7;
    v9 = v3 & 6;
    if ( v9 != 2 )
      v8 = v6;
    v10 = v3 + v8;
    v11 = v3;
    v3 = _InterlockedCompareExchange64(a1, v10, v3);
  }
  while ( v11 != v3 );
  if ( v9 == 2 )
    LODWORD(v3) = ExpWakePushLock(a1, v10);
  return v3;
}
