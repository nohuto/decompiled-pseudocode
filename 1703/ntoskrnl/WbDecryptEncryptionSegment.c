/*
 * XREFs of WbDecryptEncryptionSegment @ 0x140549E54
 * Callers:
 *     WbDispatchOperation @ 0x14053BA60 (WbDispatchOperation.c)
 * Callees:
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400FDC60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1400FDE60 (KeAbPreAcquire.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     sub_1405479B8 @ 0x1405479B8 (sub_1405479B8.c)
 *     WbGetInitializedEncryptionSegment @ 0x140549988 (WbGetInitializedEncryptionSegment.c)
 *     sub_140549C24 @ 0x140549C24 (sub_140549C24.c)
 */

__int64 __fastcall WbDecryptEncryptionSegment(__int64 a1, __int64 a2, unsigned int a3)
{
  int InitializedEncryptionSegment; // esi
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v5; // rdi
  PRTL_BALANCED_NODE v6; // rax
  PRTL_BALANCED_NODE v7; // rsi
  volatile signed __int64 *v9; // [rsp+48h] [rbp+20h] BYREF

  v9 = 0LL;
  if ( a3 < 0x10 )
  {
    InitializedEncryptionSegment = -1073741811;
  }
  else
  {
    InitializedEncryptionSegment = WbGetInitializedEncryptionSegment(a1, a2, a3, (__int64 *)&v9);
    if ( InitializedEncryptionSegment >= 0 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      v5 = (unsigned __int64 *)(v9 + 1);
      v6 = KeAbPreAcquire((ULONG_PTR)(v9 + 1), 0LL, 0);
      v7 = v6;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
        ExfAcquirePushLockExclusiveEx(v5, v6, (ULONG_PTR)v5);
      if ( v7 )
        BYTE2(v7[1].Left) |= 1u;
      InitializedEncryptionSegment = sub_1405479B8((__int64)v9);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v5);
      KeAbPostRelease((ULONG_PTR)v5);
      KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    }
  }
  sub_140549C24(v9);
  return (unsigned int)InitializedEncryptionSegment;
}
