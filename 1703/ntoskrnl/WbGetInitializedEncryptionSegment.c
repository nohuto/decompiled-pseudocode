/*
 * XREFs of WbGetInitializedEncryptionSegment @ 0x140549988
 * Callers:
 *     WbReEncryptEncryptionSegment @ 0x1405498C0 (WbReEncryptEncryptionSegment.c)
 *     WbDecryptEncryptionSegment @ 0x140549E54 (WbDecryptEncryptionSegment.c)
 * Callees:
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400FDC60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1400FDE60 (KeAbPreAcquire.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     WbInitializeEncryptionSegment @ 0x14045CE10 (WbInitializeEncryptionSegment.c)
 *     WbGetWarbirdEncryptionSegment @ 0x140549AFC (WbGetWarbirdEncryptionSegment.c)
 *     sub_140549C24 @ 0x140549C24 (sub_140549C24.c)
 *     WbValidateEncryptionSegmentArguments @ 0x140549CAC (WbValidateEncryptionSegmentArguments.c)
 */

__int64 __fastcall WbGetInitializedEncryptionSegment(__int64 a1, __int64 a2, unsigned int a3, __int64 *a4)
{
  __int64 v7; // rdi
  int WarbirdEncryptionSegment; // esi
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v11; // r14
  PRTL_BALANCED_NODE v12; // rax
  PRTL_BALANCED_NODE v13; // r15
  __int64 v14; // [rsp+20h] [rbp-30h] BYREF
  PVOID P; // [rsp+28h] [rbp-28h] BYREF
  _QWORD v16[2]; // [rsp+30h] [rbp-20h] BYREF

  P = 0LL;
  v16[0] = 0LL;
  v16[1] = 0LL;
  v7 = 0LL;
  v14 = 0LL;
  WarbirdEncryptionSegment = WbValidateEncryptionSegmentArguments(a2, a3, &P, v16);
  if ( WarbirdEncryptionSegment < 0 )
    goto LABEL_7;
  WarbirdEncryptionSegment = WbGetWarbirdEncryptionSegment(a1, v16, &v14);
  if ( WarbirdEncryptionSegment < 0 )
    goto LABEL_20;
  v7 = v14;
  if ( !*(_DWORD *)(v14 + 16) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v11 = (unsigned __int64 *)(v14 + 8);
    v12 = KeAbPreAcquire(v14 + 8, 0LL, 0);
    v13 = v12;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v11, 0LL) )
      ExfAcquirePushLockExclusiveEx(v11, v12, (ULONG_PTR)v11);
    if ( v13 )
      BYTE2(v13[1].Left) |= 1u;
    if ( !*(_DWORD *)(v7 + 16) )
      WarbirdEncryptionSegment = WbInitializeEncryptionSegment((unsigned int *)P, a2, v14);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v11);
    KeAbPostRelease((ULONG_PTR)v11);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    if ( WarbirdEncryptionSegment >= 0 )
    {
      v7 = v14;
      goto LABEL_4;
    }
LABEL_20:
    v7 = v14;
    goto LABEL_7;
  }
LABEL_4:
  WarbirdEncryptionSegment = *(_DWORD *)(v7 + 20);
  if ( WarbirdEncryptionSegment >= 0 && a4 )
  {
    *a4 = v7;
    v7 = 0LL;
  }
LABEL_7:
  sub_140549C24(v7);
  if ( P )
    ExFreePoolWithTag(P, 0x42524157u);
  return (unsigned int)WarbirdEncryptionSegment;
}
