/*
 * XREFs of EtwpTrackDebugIdForSession @ 0x1404F10E8
 * Callers:
 *     EtwpProviderArrivalCallback @ 0x1404F0FC4 (EtwpProviderArrivalCallback.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     RtlCompareMemory @ 0x140189600 (RtlCompareMemory.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

char __fastcall EtwpTrackDebugIdForSession(__int64 a1, const void *a2, unsigned int a3)
{
  volatile signed __int64 *v3; // rbp
  SIZE_T v4; // r15
  __int64 *v7; // r14
  __int64 *i; // rsi
  _DWORD *PoolWithTag; // rax
  _DWORD *v10; // rbx
  __int64 v11; // rax

  v3 = (volatile signed __int64 *)(a1 + 704);
  v4 = a3;
  ExAcquirePushLockExclusiveEx(a1 + 704, 0LL);
  if ( (unsigned int)v4 <= 0x8000 && (unsigned int)(v4 + *(_DWORD *)(a1 + 340)) <= *(_DWORD *)(a1 + 4) )
  {
    v7 = (__int64 *)(a1 + 112);
    for ( i = *(__int64 **)(a1 + 112); i != v7; i = (__int64 *)*i )
    {
      if ( *((_DWORD *)i + 5) == (_DWORD)v4 && RtlCompareMemory(i + 3, a2, v4) == v4 )
        goto LABEL_12;
    }
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(v4 + 24), 0x62777445u);
    v10 = PoolWithTag;
    if ( PoolWithTag )
    {
      *(_DWORD *)(a1 + 340) += v4;
      PoolWithTag[5] = v4;
      memmove(PoolWithTag + 6, a2, v4);
      v11 = *v7;
      if ( *(__int64 **)(*v7 + 8) != v7 )
        __fastfail(3u);
      *(_QWORD *)v10 = v11;
      *((_QWORD *)v10 + 1) = v7;
      *(_QWORD *)(v11 + 8) = v10;
      *v7 = (__int64)v10;
      *((_BYTE *)v10 + 16) = 0;
      _InterlockedOr((volatile signed __int32 *)(a1 + 836), 0x8C0u);
    }
  }
LABEL_12:
  if ( (_InterlockedExchangeAdd64(v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v3);
  return KeAbPostRelease((ULONG_PTR)v3);
}
