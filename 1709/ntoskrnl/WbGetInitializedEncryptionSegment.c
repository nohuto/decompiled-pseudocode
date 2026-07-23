/*
 * XREFs of WbGetInitializedEncryptionSegment @ 0x14044A4DC
 * Callers:
 *     WbDecryptEncryptionSegment @ 0x14044A354 (WbDecryptEncryptionSegment.c)
 *     WbReEncryptEncryptionSegment @ 0x14044A418 (WbReEncryptEncryptionSegment.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14005D890 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     KeAbPreAcquire @ 0x1400BAD80 (KeAbPreAcquire.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     WbGetWarbirdEncryptionSegment @ 0x14044A64C (WbGetWarbirdEncryptionSegment.c)
 *     sub_14044A774 @ 0x14044A774 (sub_14044A774.c)
 *     WbValidateEncryptionSegmentArguments @ 0x14044A800 (WbValidateEncryptionSegmentArguments.c)
 *     sub_14044AEBC @ 0x14044AEBC (sub_14044AEBC.c)
 */

__int64 __fastcall WbGetInitializedEncryptionSegment(__int64 a1, __int64 a2, unsigned int a3, _QWORD *a4)
{
  __int64 v6; // rdi
  int WarbirdEncryptionSegment; // esi
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v10; // r14
  PRTL_BALANCED_NODE v11; // rax
  PRTL_BALANCED_NODE v12; // r15
  char v13; // bl
  __int64 v14; // [rsp+20h] [rbp-30h] BYREF
  PVOID P; // [rsp+28h] [rbp-28h] BYREF
  _QWORD v16[2]; // [rsp+30h] [rbp-20h] BYREF

  P = 0LL;
  v16[0] = 0LL;
  v16[1] = 0LL;
  v6 = 0LL;
  v14 = 0LL;
  WarbirdEncryptionSegment = WbValidateEncryptionSegmentArguments(a2, a3, &P, v16);
  if ( WarbirdEncryptionSegment < 0 )
    goto LABEL_7;
  WarbirdEncryptionSegment = WbGetWarbirdEncryptionSegment(a1, v16, &v14);
  if ( WarbirdEncryptionSegment < 0 )
    goto LABEL_19;
  v6 = v14;
  if ( !*(_DWORD *)(v14 + 16) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v10 = (unsigned __int64 *)(v14 + 8);
    v11 = KeAbPreAcquire(v14 + 8, 0LL, 0);
    v12 = v11;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v10, 0LL) )
      ExfAcquirePushLockExclusiveEx(v10, (__int64)v11, (__int16 *)v10);
    if ( v12 )
      BYTE2(v12[1].Left) |= 1u;
    if ( !*(_DWORD *)(v6 + 16) )
      WarbirdEncryptionSegment = sub_14044AEBC(P);
    v13 = _InterlockedExchangeAdd64((volatile signed __int64 *)v10, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v13 & 2) != 0 && (v13 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)v10);
    KeAbPostRelease((ULONG_PTR)v10);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    if ( WarbirdEncryptionSegment >= 0 )
    {
      v6 = v14;
      goto LABEL_4;
    }
LABEL_19:
    v6 = v14;
    goto LABEL_7;
  }
LABEL_4:
  WarbirdEncryptionSegment = *(_DWORD *)(v6 + 20);
  if ( WarbirdEncryptionSegment >= 0 && a4 )
  {
    *a4 = v6;
    v6 = 0LL;
  }
LABEL_7:
  sub_14044A774(v6);
  if ( P )
    ExFreePoolWithTag(P, 0x42524157u);
  return (unsigned int)WarbirdEncryptionSegment;
}
