/*
 * XREFs of WheaConfigureErrorSource @ 0x14047CB90
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140008790 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140008AF0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140008E50 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     WheapInitializeDeferredErrorSources @ 0x1402BE334 (WheapInitializeDeferredErrorSources.c)
 */

__int64 __fastcall WheaConfigureErrorSource(unsigned int a1, __int64 a2)
{
  __int64 v2; // rbp
  volatile signed __int32 *v4; // rbx
  unsigned int v5; // r14d
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 (*v15)(); // rax
  char v16; // cl
  signed __int32 v18[18]; // [rsp+0h] [rbp-48h] BYREF

  v2 = (int)a1;
  if ( a1 > 0xD )
    return (unsigned int)-1073741811;
  v4 = (volatile signed __int32 *)((char *)&WheapSourceConfiguration + 48 * (int)a1);
  v5 = -1073741823;
  v6 = KeAbPreAcquire((ULONG_PTR)&WheapDispatchPtr.DeviceLock.Header.WaitListHead, 0LL, 0);
  if ( _InterlockedCompareExchange64(
         (volatile signed __int64 *)&WheapDispatchPtr.DeviceLock.Header.WaitListHead.Flink,
         17LL,
         0LL) )
  {
    ExfAcquirePushLockSharedEx(
      (unsigned __int64 *)&WheapDispatchPtr.DeviceLock.Header.WaitListHead,
      v6,
      (ULONG_PTR)&WheapDispatchPtr.DeviceLock.Header.WaitListHead);
  }
  if ( v6 )
    *(_BYTE *)(v6 + 26) |= 1u;
  v7 = KeAbPreAcquire((ULONG_PTR)&WheapSourceConfiguration + 48 * v2, 0LL, 0);
  v11 = v7;
  if ( _interlockedbittestandset64(v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&WheapSourceConfiguration + 6 * v2,
      v7,
      (ULONG_PTR)&WheapSourceConfiguration + 48 * v2);
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
  if ( !*((_BYTE *)v4 + 8) )
  {
    *((_DWORD *)v4 + 3) = *(_DWORD *)a2;
    v12 = *(_QWORD *)(a2 + 8);
    if ( v12 )
      *((_QWORD *)v4 + 2) = v12;
    v13 = *(_QWORD *)(a2 + 16);
    if ( v13 )
      *((_QWORD *)v4 + 3) = v13;
    v14 = *(_QWORD *)(a2 + 24);
    if ( v14 )
      *((_QWORD *)v4 + 4) = v14;
    v15 = *(__int64 (**)())(a2 + 32);
    if ( !v15 )
    {
      if ( (unsigned int)(v2 - 12) > 1 )
        goto LABEL_19;
      v15 = WheapGenericErrSrcRecover;
    }
    *((_QWORD *)v4 + 5) = v15;
LABEL_19:
    _InterlockedOr(v18, 0);
    *((_BYTE *)v4 + 8) = 1;
    if ( WheapInitializationComplete )
      v5 = WheapInitializeDeferredErrorSources(v2);
  }
  v16 = _InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v16 & 2) != 0 && (v16 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&WheapSourceConfiguration + 6 * v2, v8, v9, v10);
  KeAbPostRelease((ULONG_PTR)&WheapSourceConfiguration + 48 * v2);
  if ( _InterlockedCompareExchange64(
         (volatile signed __int64 *)&WheapDispatchPtr.DeviceLock.Header.WaitListHead.Flink,
         0LL,
         17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&WheapDispatchPtr.DeviceLock.Header.WaitListHead);
  KeAbPostRelease((ULONG_PTR)&WheapDispatchPtr.DeviceLock.Header.WaitListHead);
  return v5;
}
