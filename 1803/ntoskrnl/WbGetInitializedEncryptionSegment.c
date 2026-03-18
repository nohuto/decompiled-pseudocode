/*
 * XREFs of WbGetInitializedEncryptionSegment @ 0x14048A1F4
 * Callers:
 *     WbDecryptEncryptionSegment @ 0x14048A06C (WbDecryptEncryptionSegment.c)
 *     WbReEncryptEncryptionSegment @ 0x14048A130 (WbReEncryptEncryptionSegment.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140008AF0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140008E50 (KeAbPreAcquire.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     WbGetWarbirdEncryptionSegment @ 0x14048A364 (WbGetWarbirdEncryptionSegment.c)
 *     sub_14048A48C @ 0x14048A48C (sub_14048A48C.c)
 *     WbValidateEncryptionSegmentArguments @ 0x14048A518 (WbValidateEncryptionSegmentArguments.c)
 *     sub_14048AC0C @ 0x14048AC0C (sub_14048AC0C.c)
 */

__int64 __fastcall WbGetInitializedEncryptionSegment(__int64 a1, __int64 a2, unsigned int a3, _QWORD *a4)
{
  __int64 v6; // rbx
  int WarbirdEncryptionSegment; // edi
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r15
  char v16; // r14
  __int64 v17; // [rsp+20h] [rbp-30h] BYREF
  PVOID P; // [rsp+28h] [rbp-28h] BYREF
  _QWORD v19[2]; // [rsp+30h] [rbp-20h] BYREF

  P = 0LL;
  v19[0] = 0LL;
  v19[1] = 0LL;
  v6 = 0LL;
  v17 = 0LL;
  WarbirdEncryptionSegment = WbValidateEncryptionSegmentArguments(a2, a3, &P, v19);
  if ( WarbirdEncryptionSegment < 0 )
    goto LABEL_7;
  WarbirdEncryptionSegment = WbGetWarbirdEncryptionSegment(a1, v19, &v17);
  if ( WarbirdEncryptionSegment < 0 )
    goto LABEL_19;
  v6 = v17;
  if ( !*(_DWORD *)(v17 + 16) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v10 = (unsigned __int64 *)(v17 + 8);
    v11 = KeAbPreAcquire(v17 + 8, 0LL, 0);
    v15 = v11;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v10, 0LL) )
      ExfAcquirePushLockExclusiveEx(v10, v11, (ULONG_PTR)v10);
    if ( v15 )
      *(_BYTE *)(v15 + 26) |= 1u;
    if ( !*(_DWORD *)(v6 + 16) )
      WarbirdEncryptionSegment = sub_14048AC0C(P);
    v16 = _InterlockedExchangeAdd64((volatile signed __int64 *)v10, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v16 & 2) != 0 && (v16 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)v10, v12, v13, v14);
    KeAbPostRelease((ULONG_PTR)v10);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    if ( WarbirdEncryptionSegment >= 0 )
    {
      v6 = v17;
      goto LABEL_4;
    }
LABEL_19:
    v6 = v17;
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
  sub_14048A48C(v6);
  if ( P )
    ExFreePoolWithTag(P, 0x42524157u);
  return (unsigned int)WarbirdEncryptionSegment;
}
