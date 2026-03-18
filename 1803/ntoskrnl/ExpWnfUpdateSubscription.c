/*
 * XREFs of ExpWnfUpdateSubscription @ 0x1404F7060
 * Callers:
 *     ExpWnfSubscribeNameInstance @ 0x1404F6C20 (ExpWnfSubscribeNameInstance.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140008AF0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140008E50 (KeAbPreAcquire.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 */

__int64 __fastcall ExpWnfUpdateSubscription(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        _QWORD *a6,
        _DWORD *a7,
        _DWORD *a8,
        _QWORD *a9)
{
  _QWORD *i; // rax
  _QWORD *v13; // rbx
  unsigned __int64 *v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rbp
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // r9
  int v21; // ecx

  for ( i = *(_QWORD **)(a2 + 88); ; i = (_QWORD *)*i )
  {
    if ( i == (_QWORD *)(a2 + 88) )
      return 3221225524LL;
    v13 = i - 3;
    if ( i[3] == a1 )
      break;
  }
  v15 = (unsigned __int64 *)(a2 + 104);
  *a7 = 0;
  *a8 = 0;
  v16 = KeAbPreAcquire(a2 + 104, 0LL, 0);
  v17 = v16;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v15, 0LL) )
    ExfAcquirePushLockExclusiveEx(v15, v16, (ULONG_PTR)v15);
  if ( v17 )
    *(_BYTE *)(v17 + 26) |= 1u;
  v18 = a5;
  v19 = *((unsigned int *)v13 + 25);
  if ( (a5 & 1) != 0 )
  {
    if ( (v19 & 1) == 0 && _InterlockedIncrement((volatile signed __int32 *)(a1 + 160)) == 1 )
      *a7 = 1;
  }
  else if ( (v19 & 1) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 160), 0xFFFFFFFF) == 1 )
  {
    *a7 = -1;
  }
  v20 = *((unsigned int *)v13 + 30);
  if ( (_DWORD)v20 != 2 )
  {
    LOBYTE(v19) = (*((_BYTE *)v13 + 124) & 1) != 0;
    if ( ((unsigned __int8)v19 & ((a5 & 1) == 0)) != 0 )
      *a8 = -1;
  }
  v21 = a5 & *((_DWORD *)v13 + 31);
  v13[10] = a3;
  v13[11] = a4;
  *((_DWORD *)v13 + 25) = a5;
  *((_DWORD *)v13 + 31) = v21;
  if ( (_DWORD)v20 && !v21 && !*((_DWORD *)v13 + 32) )
  {
    v19 = v13[13];
    if ( *(_QWORD **)(v19 + 8) != v13 + 13 || (v18 = v13[14], *(_QWORD **)v18 != v13 + 13) )
      __fastfail(3u);
    *(_QWORD *)v18 = v19;
    *(_QWORD *)(v19 + 8) = v18;
    *((_DWORD *)v13 + 30) = 0;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v15, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v15, v19, v18, v20);
  KeAbPostRelease((ULONG_PTR)v15);
  ExAcquireRundownProtection((PEX_RUNDOWN_REF)v13 + 1);
  *a6 = v13;
  if ( a9 )
    *a9 = v13[2];
  return 0LL;
}
