/*
 * XREFs of WheaConfigureErrorSource @ 0x140412950
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400FDC60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1400FDE60 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400FE070 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     WheapInitializeDeferredErrorSources @ 0x140152714 (WheapInitializeDeferredErrorSources.c)
 */

__int64 __fastcall WheaConfigureErrorSource(unsigned int a1, __int64 a2)
{
  __int64 v2; // r14
  volatile signed __int32 *v4; // rbx
  unsigned int v5; // ebp
  PRTL_BALANCED_NODE v6; // rsi
  PRTL_BALANCED_NODE v7; // rax
  PRTL_BALANCED_NODE v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  signed __int32 v14[18]; // [rsp+0h] [rbp-48h] BYREF

  v2 = (int)a1;
  if ( a1 > 0xD )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v4 = (volatile signed __int32 *)((char *)&WheapSourceConfiguration + 48 * (int)a1);
    v5 = -1073741823;
    v6 = KeAbPreAcquire((ULONG_PTR)&WheapDispatchPtr.Dpc.DpcData, 0LL, 0);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&WheapDispatchPtr.Dpc.DpcData, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(
        (signed __int64 *)&WheapDispatchPtr.Dpc.DpcData,
        v6,
        (ULONG_PTR)&WheapDispatchPtr.Dpc.DpcData);
    if ( v6 )
      BYTE2(v6[1].Left) |= 1u;
    v7 = KeAbPreAcquire((ULONG_PTR)&WheapSourceConfiguration + 48 * v2, 0LL, 0);
    v8 = v7;
    if ( _interlockedbittestandset64(v4, 0LL) )
      ExfAcquirePushLockExclusiveEx(
        (unsigned __int64 *)&WheapSourceConfiguration + 6 * v2,
        v7,
        (ULONG_PTR)&WheapSourceConfiguration + 48 * v2);
    if ( v8 )
      BYTE2(v8[1].Left) |= 1u;
    if ( !*((_BYTE *)v4 + 8) )
    {
      *((_DWORD *)v4 + 3) = *(_DWORD *)a2;
      v9 = *(_QWORD *)(a2 + 8);
      if ( v9 )
        *((_QWORD *)v4 + 2) = v9;
      v10 = *(_QWORD *)(a2 + 16);
      if ( v10 )
        *((_QWORD *)v4 + 3) = v10;
      v11 = *(_QWORD *)(a2 + 24);
      if ( v11 )
        *((_QWORD *)v4 + 4) = v11;
      v12 = *(_QWORD *)(a2 + 32);
      if ( v12 )
        *((_QWORD *)v4 + 5) = v12;
      _InterlockedOr(v14, 0);
      *((_BYTE *)v4 + 8) = 1;
      if ( WheapInitializationComplete )
        v5 = WheapInitializeDeferredErrorSources(v2);
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&WheapSourceConfiguration + 6 * v2);
    KeAbPostRelease((ULONG_PTR)&WheapSourceConfiguration + 48 * v2);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&WheapDispatchPtr.Dpc.DpcData, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&WheapDispatchPtr.Dpc.DpcData);
    KeAbPostRelease((ULONG_PTR)&WheapDispatchPtr.Dpc.DpcData);
  }
  return v5;
}
