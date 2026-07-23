/*
 * XREFs of ExpWnfCreateProcessContext @ 0x14058202C
 * Callers:
 *     ExpWnfResolveScopeInstance @ 0x140502B1C (ExpWnfResolveScopeInstance.c)
 *     NtSetWnfProcessNotificationEvent @ 0x140581F64 (NtSetWnfProcessNotificationEvent.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14005D890 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     KeAbPreAcquire @ 0x1400BAD80 (KeAbPreAcquire.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     ExpWnfDeleteProcessContext @ 0x1404FEA5C (ExpWnfDeleteProcessContext.c)
 */

__int64 __fastcall ExpWnfCreateProcessContext(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // edi
  PVOID PoolWithTag; // rax
  signed __int64 v6; // rbx
  PRTL_BALANCED_NODE v7; // rax
  signed __int8 v8; // cf
  PRTL_BALANCED_NODE v9; // rsi
  _QWORD *v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rcx

  v4 = 0;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x88uLL, 0x20666E57u);
  v6 = (signed __int64)PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x88uLL);
    *(_DWORD *)v6 = 8915206;
    *(_QWORD *)(v6 + 56) = 0LL;
    *(_QWORD *)(v6 + 80) = 0LL;
    *(_QWORD *)(v6 + 104) = 0LL;
    *(_QWORD *)(v6 + 72) = v6 + 64;
    *(_QWORD *)(v6 + 64) = v6 + 64;
    *(_QWORD *)(v6 + 96) = v6 + 88;
    *(_QWORD *)(v6 + 88) = v6 + 88;
    *(_QWORD *)(v6 + 120) = v6 + 112;
    *(_QWORD *)(v6 + 112) = v6 + 112;
    *(_QWORD *)(v6 + 128) = 0LL;
    *(_QWORD *)(v6 + 8) = a1;
    v7 = KeAbPreAcquire((ULONG_PTR)&ExpWnfProcessesListLock, 0LL, 0);
    v8 = _interlockedbittestandset64((volatile signed __int32 *)&ExpWnfProcessesListLock, 0LL);
    v9 = v7;
    if ( v8 )
      ExfAcquirePushLockExclusiveEx(&ExpWnfProcessesListLock, (__int64)v7, (__int16 *)&ExpWnfProcessesListLock);
    if ( v9 )
      BYTE2(v9[1].Left) |= 1u;
    v10 = off_1407F35B0;
    v11 = (_QWORD *)(v6 + 16);
    if ( *off_1407F35B0 != (_UNKNOWN *)&ExpWnfProcessesListHead )
      __fastfail(3u);
    *v11 = &ExpWnfProcessesListHead;
    *(_QWORD *)(v6 + 24) = v10;
    *v10 = v11;
    off_1407F35B0 = (_UNKNOWN **)(v6 + 16);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpWnfProcessesListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ExpWnfProcessesListLock);
    KeAbPostRelease((ULONG_PTR)&ExpWnfProcessesListLock);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1720), v6, 0LL) )
      ExpWnfDeleteProcessContext((unsigned __int64 *)v6, 1);
  }
  else
  {
    v4 = -1073741670;
  }
  v12 = *(_QWORD *)(a1 + 1720);
  if ( v12 )
    v4 = 0;
  *a2 = v12;
  return v4;
}
