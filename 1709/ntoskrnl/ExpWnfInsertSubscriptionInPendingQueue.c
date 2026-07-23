/*
 * XREFs of ExpWnfInsertSubscriptionInPendingQueue @ 0x140500DC0
 * Callers:
 *     ExpWnfNotifySubscription @ 0x1404FDA2C (ExpWnfNotifySubscription.c)
 *     ExpWnfNotifyNameSubscribers @ 0x140500F14 (ExpWnfNotifyNameSubscribers.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14005D890 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     KeAbPreAcquire @ 0x1400BAD80 (KeAbPreAcquire.c)
 */

__int64 __fastcall ExpWnfInsertSubscriptionInPendingQueue(__int64 a1, int a2)
{
  __int64 v2; // rax
  unsigned int v3; // esi
  __int64 v6; // r15
  volatile signed __int64 *v7; // rbx
  PRTL_BALANCED_NODE v8; // rax
  PRTL_BALANCED_NODE v9; // rbp
  int v10; // r14d
  int v12; // eax
  _QWORD *v13; // rdx
  _QWORD *v14; // rax

  v2 = *(_QWORD *)(a1 + 40);
  v3 = 0;
  if ( !v2 )
    return 0LL;
  v6 = *(_QWORD *)(v2 + 1720);
  v7 = (volatile signed __int64 *)(v6 + 104);
  v8 = KeAbPreAcquire(v6 + 104, 0LL, 0);
  v9 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 104), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v6 + 104), (__int64)v8, (__int16 *)(v6 + 104));
  if ( v9 )
    BYTE2(v9[1].Left) |= 1u;
  v10 = *(_DWORD *)(a1 + 100) & a2;
  if ( !v10 )
  {
    if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 104));
    KeAbPostRelease(v6 + 104);
    return 0LL;
  }
  v12 = *(_DWORD *)(a1 + 120);
  if ( v12 )
  {
    if ( v12 != 3 )
      goto LABEL_15;
  }
  else
  {
    v13 = *(_QWORD **)(v6 + 120);
    v14 = (_QWORD *)(a1 + 104);
    if ( *v13 != v6 + 112 )
      __fastfail(3u);
    *v14 = v6 + 112;
    *(_QWORD *)(a1 + 112) = v13;
    *v13 = v14;
    *(_QWORD *)(v6 + 120) = v14;
  }
  v3 = 1;
  *(_DWORD *)(a1 + 120) = 1;
LABEL_15:
  if ( ((*(_BYTE *)(a1 + 124) | *(_BYTE *)(a1 + 128)) & 1) == 0 && (v10 & 1) != 0 )
    _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)(a1 + 48) + 164LL), 1u);
  *(_DWORD *)(a1 + 124) = *(_DWORD *)(a1 + 100) & (v10 | *(_DWORD *)(a1 + 124));
  if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 104));
  KeAbPostRelease(v6 + 104);
  return v3;
}
