/*
 * XREFs of WbFreeMemoryBlockRegion @ 0x140549118
 * Callers:
 *     WbFreeUserMemory @ 0x14054902C (WbFreeUserMemory.c)
 * Callees:
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400FDC60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1400FDE60 (KeAbPreAcquire.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     memset @ 0x140192D80 (memset.c)
 */

__int64 __fastcall WbFreeMemoryBlockRegion(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v5; // rsi
  PRTL_BALANCED_NODE v6; // rax
  PRTL_BALANCED_NODE v7; // rbp
  unsigned __int64 v8; // rdi
  __int64 i; // rcx
  __int64 v10; // rcx
  __int64 v11; // r8

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v5 = (unsigned __int64 *)(a1 + 1072);
  v6 = KeAbPreAcquire(a1 + 1072, 0LL, 0);
  v7 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
    ExfAcquirePushLockExclusiveEx(v5, v6, (ULONG_PTR)v5);
  if ( v7 )
    BYTE2(v7[1].Left) |= 1u;
  v8 = (unsigned __int64)(a2 - *(_QWORD *)(a1 + 32)) >> 6;
  if ( (_DWORD)v8 )
  {
    for ( i = (unsigned int)(v8 - 1); i >= 0; --i )
    {
      if ( *(_BYTE *)(a1 + i + 44) != 2 )
        break;
    }
    v10 = i + 1;
  }
  else
  {
    v10 = 0LL;
  }
  v11 = (unsigned int)v8;
  if ( *(_BYTE *)((unsigned int)v8 + a1 + 44) == 2 )
  {
    do
      ++v11;
    while ( *(_BYTE *)(a1 + v11 + 44) == 2 );
  }
  if ( v10 <= v11 )
    memset((void *)(a1 + v10 + 44), 0, v11 - v10 + 1);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v5);
  KeAbPostRelease((ULONG_PTR)v5);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  return 0LL;
}
