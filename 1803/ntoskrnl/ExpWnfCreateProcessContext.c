/*
 * XREFs of ExpWnfCreateProcessContext @ 0x140570558
 * Callers:
 *     ExpWnfResolveScopeInstance @ 0x1404F63DC (ExpWnfResolveScopeInstance.c)
 *     NtSetWnfProcessNotificationEvent @ 0x140570490 (NtSetWnfProcessNotificationEvent.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140008AF0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140008E50 (KeAbPreAcquire.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     ExpWnfDeleteProcessContext @ 0x140511368 (ExpWnfDeleteProcessContext.c)
 */

__int64 __fastcall ExpWnfCreateProcessContext(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  unsigned int v5; // r14d
  PVOID PoolWithTag; // rax
  signed __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  signed __int8 v11; // cf
  __int64 v12; // rsi
  _QWORD *v13; // rcx
  _QWORD *v14; // rax
  __int64 v15; // rcx

  v2 = 0;
  v5 = 0;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x88uLL, 0x20666E57u);
  v7 = (signed __int64)PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x88uLL);
    *(_DWORD *)v7 = 8915206;
    *(_QWORD *)(v7 + 56) = 0LL;
    *(_QWORD *)(v7 + 80) = 0LL;
    *(_QWORD *)(v7 + 104) = 0LL;
    *(_QWORD *)(v7 + 72) = v7 + 64;
    *(_QWORD *)(v7 + 64) = v7 + 64;
    *(_QWORD *)(v7 + 96) = v7 + 88;
    *(_QWORD *)(v7 + 88) = v7 + 88;
    *(_QWORD *)(v7 + 120) = v7 + 112;
    *(_QWORD *)(v7 + 112) = v7 + 112;
    *(_QWORD *)(v7 + 128) = 0LL;
    *(_QWORD *)(v7 + 8) = a1;
    v8 = KeAbPreAcquire((ULONG_PTR)&ExpWnfProcessesListLock, 0LL, 0);
    v11 = _interlockedbittestandset64((volatile signed __int32 *)&ExpWnfProcessesListLock, 0LL);
    v12 = v8;
    if ( v11 )
      ExfAcquirePushLockExclusiveEx(&ExpWnfProcessesListLock, v8, (ULONG_PTR)&ExpWnfProcessesListLock);
    if ( v12 )
      *(_BYTE *)(v12 + 26) |= 1u;
    v13 = off_1408615D0;
    v14 = (_QWORD *)(v7 + 16);
    if ( *off_1408615D0 != (_UNKNOWN *)&ExpWnfProcessesListHead )
      __fastfail(3u);
    *v14 = &ExpWnfProcessesListHead;
    *(_QWORD *)(v7 + 24) = v13;
    *v13 = v14;
    off_1408615D0 = (_UNKNOWN **)(v7 + 16);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpWnfProcessesListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(
        (volatile signed __int64 *)&ExpWnfProcessesListLock,
        (__int64)&ExpWnfProcessesListHead,
        v9,
        v10);
    KeAbPostRelease((ULONG_PTR)&ExpWnfProcessesListLock);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1720), v7, 0LL) )
      ExpWnfDeleteProcessContext((unsigned __int64 *)v7, 1);
  }
  else
  {
    v5 = -1073741670;
  }
  v15 = *(_QWORD *)(a1 + 1720);
  *a2 = v15;
  if ( !v15 )
    return v5;
  return v2;
}
