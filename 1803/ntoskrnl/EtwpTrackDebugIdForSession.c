/*
 * XREFs of EtwpTrackDebugIdForSession @ 0x14058CA30
 * Callers:
 *     EtwpProviderArrivalCallback @ 0x14058C90C (EtwpProviderArrivalCallback.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     RtlCompareMemory @ 0x1401B3260 (RtlCompareMemory.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

char __fastcall EtwpTrackDebugIdForSession(__int64 a1, const void *a2, unsigned int a3)
{
  volatile signed __int64 *v3; // rbp
  SIZE_T v4; // r15
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 *v10; // r14
  __int64 *i; // rsi
  _DWORD *PoolWithTag; // rax
  _DWORD *v13; // rbx
  __int64 v14; // rax

  v3 = (volatile signed __int64 *)(a1 + 704);
  v4 = a3;
  ExAcquirePushLockExclusiveEx(a1 + 704, 0LL);
  if ( (unsigned int)v4 <= 0x8000 )
  {
    v9 = (unsigned int)(v4 + *(_DWORD *)(a1 + 340));
    if ( (unsigned int)v9 <= *(_DWORD *)(a1 + 4) )
    {
      v10 = (__int64 *)(a1 + 112);
      for ( i = *(__int64 **)(a1 + 112); i != v10; i = (__int64 *)*i )
      {
        if ( *((_DWORD *)i + 5) == (_DWORD)v4 && RtlCompareMemory(i + 3, a2, v4) == v4 )
          goto LABEL_12;
      }
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(v4 + 24), 0x62777445u);
      v13 = PoolWithTag;
      if ( PoolWithTag )
      {
        *(_DWORD *)(a1 + 340) += v4;
        PoolWithTag[5] = v4;
        memmove(PoolWithTag + 6, a2, v4);
        v14 = *v10;
        if ( *(__int64 **)(*v10 + 8) != v10 )
          __fastfail(3u);
        *(_QWORD *)v13 = v14;
        *((_QWORD *)v13 + 1) = v10;
        *(_QWORD *)(v14 + 8) = v13;
        *v10 = (__int64)v13;
        *((_BYTE *)v13 + 16) = 0;
        _InterlockedOr((volatile signed __int32 *)(a1 + 836), 0x8C0u);
      }
    }
  }
LABEL_12:
  if ( (_InterlockedExchangeAdd64(v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v3, v7, v8, v9);
  return KeAbPostRelease((ULONG_PTR)v3);
}
