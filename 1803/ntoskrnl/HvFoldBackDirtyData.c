/*
 * XREFs of HvFoldBackDirtyData @ 0x1406FB740
 * Callers:
 *     CmpFlushHive @ 0x14049D2A8 (CmpFlushHive.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     HvpMarkDirty @ 0x1404E3FF0 (HvpMarkDirty.c)
 *     HvFreeDirtyData @ 0x14054D894 (HvFreeDirtyData.c)
 */

void __fastcall HvFoldBackDirtyData(ULONG_PTR a1)
{
  unsigned __int64 v1; // rsi
  __int64 v3; // r14
  volatile signed __int64 *v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // ebp

  v1 = 0LL;
  if ( *(_QWORD *)(a1 + 1688) )
  {
    v3 = *(unsigned int *)(a1 + 1680);
    v4 = (volatile signed __int64 *)(a1 + 80);
    ExAcquirePushLockExclusiveEx(a1 + 80, 0LL);
    if ( (_DWORD)v3 )
    {
      v8 = 8;
      do
      {
        if ( _bittest64(*(const signed __int64 **)(a1 + 1688), v1) == 1 )
          HvpMarkDirty(a1, v8, 1, 0);
        ++v1;
        v8 += 512;
        --v3;
      }
      while ( v3 );
    }
    if ( (_InterlockedExchangeAdd64(v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v4, v5, v6, v7);
    KeAbPostRelease((ULONG_PTR)v4);
  }
  HvFreeDirtyData(a1);
}
