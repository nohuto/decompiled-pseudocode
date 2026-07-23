/*
 * XREFs of ExpWnfUpdateSubscription @ 0x1404F0600
 * Callers:
 *     ExpWnfSubscribeNameInstance @ 0x1404F01B0 (ExpWnfSubscribeNameInstance.c)
 * Callees:
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400FDC60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1400FDE60 (KeAbPreAcquire.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall ExpWnfUpdateSubscription(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        _QWORD *a6,
        _DWORD *a7,
        _DWORD *a8,
        _QWORD *a9)
{
  _QWORD *v9; // rax
  _QWORD *v13; // rbx
  unsigned __int64 *v15; // rsi
  PRTL_BALANCED_NODE v16; // rax
  PRTL_BALANCED_NODE v17; // rbp
  int v18; // ecx
  int v19; // r9d
  int v20; // ecx
  __int64 v21; // r8
  _QWORD *v22; // rdx

  v9 = *(_QWORD **)(a2 + 88);
  if ( v9 == (_QWORD *)(a2 + 88) )
    return 3221225524LL;
  while ( 1 )
  {
    v13 = v9 - 3;
    if ( v9[3] == a1 )
      break;
    v9 = (_QWORD *)*v9;
    if ( v9 == (_QWORD *)(a2 + 88) )
      return 3221225524LL;
  }
  v15 = (unsigned __int64 *)(a2 + 104);
  *a7 = 0;
  *a8 = 0;
  v16 = KeAbPreAcquire(a2 + 104, 0LL, 0);
  v17 = v16;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v15, 0LL) )
    ExfAcquirePushLockExclusiveEx(v15, v16, (ULONG_PTR)v15);
  if ( v17 )
    BYTE2(v17[1].Left) |= 1u;
  v18 = *((_DWORD *)v13 + 25);
  if ( (a5 & 1) != 0 )
  {
    if ( (v18 & 1) == 0 && _InterlockedIncrement((volatile signed __int32 *)(a1 + 160)) == 1 )
      *a7 = 1;
  }
  else if ( (v18 & 1) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 160), 0xFFFFFFFF) == 1 )
  {
    *a7 = -1;
  }
  v19 = *((_DWORD *)v13 + 30);
  if ( v19 != 2 && (*((_BYTE *)v13 + 124) & 1) != 0 && (a5 & 1) == 0 )
    *a8 = -1;
  *((_DWORD *)v13 + 31) &= a5;
  v20 = *((_DWORD *)v13 + 31);
  v13[10] = a3;
  v13[11] = a4;
  *((_DWORD *)v13 + 25) = a5;
  if ( v19 && !v20 && !*((_DWORD *)v13 + 32) )
  {
    v21 = v13[13];
    v22 = (_QWORD *)v13[14];
    if ( *(_QWORD **)(v21 + 8) != v13 + 13 || (_QWORD *)*v22 != v13 + 13 )
      __fastfail(3u);
    *v22 = v21;
    *(_QWORD *)(v21 + 8) = v22;
    *((_DWORD *)v13 + 30) = 0;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v15, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v15);
  KeAbPostRelease((ULONG_PTR)v15);
  ExAcquireRundownProtection((PEX_RUNDOWN_REF)v13 + 1);
  *a6 = v13;
  if ( a9 )
    *a9 = v13[2];
  return 0LL;
}
