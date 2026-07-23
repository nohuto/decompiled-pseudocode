/*
 * XREFs of WbAllocateSlots @ 0x1405036B0
 * Callers:
 *     sub_140576284 @ 0x140576284 (sub_140576284.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x14005D4E0 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14005D890 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     KeAbPreAcquire @ 0x1400BAD80 (KeAbPreAcquire.c)
 *     memset @ 0x140192F40 (memset.c)
 *     sub_140503864 @ 0x140503864 (sub_140503864.c)
 */

__int64 __fastcall WbAllocateSlots(__int64 a1, unsigned int a2, int a3, unsigned int a4)
{
  __int64 v4; // r12
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v10; // rdi
  PRTL_BALANCED_NODE v11; // rbp
  signed __int64 v12; // r11
  unsigned int v13; // r10d
  _BYTE *v14; // rcx
  int v15; // eax
  struct _KTHREAD *v16; // rax
  PRTL_BALANCED_NODE v17; // rax
  PRTL_BALANCED_NODE v18; // rbp
  char v19; // bl

  v4 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v10 = (signed __int64 *)(a1 + 1072);
  v11 = KeAbPreAcquire(a1 + 1072, 0LL, 0);
  if ( _InterlockedCompareExchange64(v10, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v10, (__int64)v11, (ULONG_PTR)v10);
  v12 = 0LL;
  if ( v11 )
    BYTE2(v11[1].Left) |= 1u;
  v13 = a3 + 1;
  while ( 1 )
  {
    if ( a2 >= v13 )
    {
LABEL_10:
      a2 = -1;
    }
    else
    {
      v14 = (_BYTE *)(a2 + a1 + 44);
      while ( *v14 != (_BYTE)v12 )
      {
        ++a2;
        ++v14;
        if ( a2 >= v13 )
          goto LABEL_10;
      }
    }
    if ( a2 == -1 )
      break;
    v15 = sub_140503864(a1, a2 + 1, a4 - 1);
    if ( v15 == -1 )
      break;
    a2 = v15 + 1;
  }
  if ( _InterlockedCompareExchange64(v10, v12, 17LL) != 17 )
    ExfReleasePushLockShared(v10);
  KeAbPostRelease((ULONG_PTR)v10);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  if ( a2 != -1 )
  {
    v16 = KeGetCurrentThread();
    --v16->SpecialApcDisable;
    v17 = KeAbPreAcquire((ULONG_PTR)v10, 0LL, 0);
    v18 = v17;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v10, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v10, (__int64)v17, (__int16 *)v10);
    if ( v18 )
      BYTE2(v18[1].Left) |= 1u;
    if ( (unsigned int)sub_140503864(a1, a2, a4) == -1 )
    {
      v4 = *(_QWORD *)(a1 + 32) + (a2 << 6);
      if ( a4 )
        memset((void *)(a1 + a2 + 44LL), 2, a4 - 1);
      *(_BYTE *)(a2 + a4 - 1 + a1 + 44) = 1;
    }
    v19 = _InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v19 & 2) != 0 && (v19 & 4) == 0 )
      ExfTryToWakePushLock(v10);
    KeAbPostRelease((ULONG_PTR)v10);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return v4;
}
