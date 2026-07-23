/*
 * XREFs of WbDecryptEncryptionSegment @ 0x14044A354
 * Callers:
 *     WbDispatchOperation @ 0x140501A60 (WbDispatchOperation.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14005D890 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     KeAbPreAcquire @ 0x1400BAD80 (KeAbPreAcquire.c)
 *     WbGetInitializedEncryptionSegment @ 0x14044A4DC (WbGetInitializedEncryptionSegment.c)
 *     sub_14044A774 @ 0x14044A774 (sub_14044A774.c)
 *     sub_14044A9A8 @ 0x14044A9A8 (sub_14044A9A8.c)
 */

__int64 __fastcall WbDecryptEncryptionSegment(__int64 a1, __int64 a2, __int64 a3)
{
  int InitializedEncryptionSegment; // esi
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v5; // rdi
  PRTL_BALANCED_NODE v6; // rax
  PRTL_BALANCED_NODE v7; // rsi
  char v8; // bl
  __int64 v10; // [rsp+48h] [rbp+20h] BYREF

  v10 = 0LL;
  if ( (unsigned int)a3 < 0x10 )
  {
    InitializedEncryptionSegment = -1073741811;
  }
  else
  {
    InitializedEncryptionSegment = WbGetInitializedEncryptionSegment(a1, a2, a3, &v10);
    if ( InitializedEncryptionSegment >= 0 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      v5 = (unsigned __int64 *)(v10 + 8);
      v6 = KeAbPreAcquire(v10 + 8, 0LL, 0);
      v7 = v6;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
        ExfAcquirePushLockExclusiveEx(v5, (__int64)v6, (__int16 *)v5);
      if ( v7 )
        BYTE2(v7[1].Left) |= 1u;
      InitializedEncryptionSegment = sub_14044A9A8(v10);
      v8 = _InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v8 & 2) != 0 && (v8 & 4) == 0 )
        ExfTryToWakePushLock((volatile signed __int64 *)v5);
      KeAbPostRelease((ULONG_PTR)v5);
      KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    }
  }
  sub_14044A774(v10);
  return (unsigned int)InitializedEncryptionSegment;
}
