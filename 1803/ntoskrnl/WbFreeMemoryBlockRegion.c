/*
 * XREFs of WbFreeMemoryBlockRegion @ 0x14056F21C
 * Callers:
 *     WbFreeUserMemory @ 0x14056F130 (WbFreeUserMemory.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140008AF0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140008E50 (KeAbPreAcquire.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

__int64 __fastcall WbFreeMemoryBlockRegion(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r9
  __int64 v9; // rsi
  unsigned __int64 v10; // rdi
  __int64 i; // rcx
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 j; // r8
  char v16; // r14

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v5 = (unsigned __int64 *)(a1 + 1072);
  v6 = KeAbPreAcquire(a1 + 1072, 0LL, 0);
  v9 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
    ExfAcquirePushLockExclusiveEx(v5, v6, (ULONG_PTR)v5);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  v10 = (unsigned __int64)(a2 - *(_QWORD *)(a1 + 32)) >> 6;
  if ( (_DWORD)v10 )
  {
    for ( i = (unsigned int)(v10 - 1); i >= 0; --i )
    {
      LOBYTE(v7) = *(_BYTE *)(i + a1 + 44);
      v12 = i;
      if ( (_BYTE)v7 != 2 )
        break;
    }
    v13 = v12 - 1;
    if ( (_BYTE)v7 != 2 )
      v13 = v12;
    v14 = v13 + 1;
  }
  else
  {
    v14 = 0LL;
  }
  for ( j = (unsigned int)v10; *(_BYTE *)(j + a1 + 44) == 2; ++j )
    ;
  if ( v14 <= j )
    memset((void *)(v14 + a1 + 44), 0, j - v14 + 1);
  v16 = _InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v16 & 2) != 0 && (v16 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)v5, v7, j, v8);
  KeAbPostRelease((ULONG_PTR)v5);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  return 0LL;
}
