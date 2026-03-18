/*
 * XREFs of ExpWnfInsertSubscriptionInPendingQueue @ 0x1404F7878
 * Callers:
 *     ExpWnfNotifyNameSubscribers @ 0x1404F76D8 (ExpWnfNotifyNameSubscribers.c)
 *     ExpWnfNotifySubscription @ 0x140570A70 (ExpWnfNotifySubscription.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140008AF0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140008E50 (KeAbPreAcquire.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 */

__int64 __fastcall ExpWnfInsertSubscriptionInPendingQueue(__int64 a1, int a2)
{
  __int64 v2; // rax
  unsigned int v3; // esi
  __int64 v6; // r15
  volatile signed __int64 *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r9
  __int64 v11; // rbp
  int v12; // r14d
  int v14; // eax
  _QWORD *v15; // rdx
  _QWORD *v16; // rax
  unsigned int v17; // edx
  __int64 v18; // rdx

  v2 = *(_QWORD *)(a1 + 40);
  v3 = 0;
  if ( !v2 )
    return 0LL;
  v6 = *(_QWORD *)(v2 + 1720);
  v7 = (volatile signed __int64 *)(v6 + 104);
  v8 = KeAbPreAcquire(v6 + 104, 0LL, 0);
  v11 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 104), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v6 + 104), v8, v6 + 104);
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
  v12 = *(_DWORD *)(a1 + 100) & a2;
  if ( !v12 )
  {
    if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 104), v9, 1LL, v10);
    KeAbPostRelease(v6 + 104);
    return 0LL;
  }
  v14 = *(_DWORD *)(a1 + 120);
  if ( v14 )
  {
    if ( v14 != 3 )
      goto LABEL_15;
  }
  else
  {
    v15 = *(_QWORD **)(v6 + 120);
    v16 = (_QWORD *)(a1 + 104);
    if ( *v15 != v6 + 112 )
      __fastfail(3u);
    *v16 = v6 + 112;
    *(_QWORD *)(a1 + 112) = v15;
    *v15 = v16;
    *(_QWORD *)(v6 + 120) = v16;
  }
  v3 = 1;
  *(_DWORD *)(a1 + 120) = 1;
LABEL_15:
  v17 = *(_DWORD *)(a1 + 124);
  if ( (((unsigned __int8)v17 | *(_BYTE *)(a1 + 128)) & 1) == 0 && (v12 & 1) != 0 )
  {
    _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)(a1 + 48) + 164LL), 1u);
    v17 = *(_DWORD *)(a1 + 124);
  }
  v18 = *(_DWORD *)(a1 + 100) & (v12 | v17);
  *(_DWORD *)(a1 + 124) = v18;
  if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 104), v18, 1LL, v10);
  KeAbPostRelease(v6 + 104);
  return v3;
}
