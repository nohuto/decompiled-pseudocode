/*
 * XREFs of MiDereferencePerSessionProtos @ 0x1406BDF80
 * Callers:
 *     MiRemoveFromSystemSpace @ 0x140060690 (MiRemoveFromSystemSpace.c)
 *     MiInsertInSystemSpace @ 0x140060AA0 (MiInsertInSystemSpace.c)
 *     MiDeleteVad @ 0x1400D94D0 (MiDeleteVad.c)
 *     MiValidateSectionCreate @ 0x140422CC0 (MiValidateSectionCreate.c)
 *     MiMapSystemImage @ 0x1404B12D8 (MiMapSystemImage.c)
 *     MiUnloadSystemImage @ 0x1404B29B4 (MiUnloadSystemImage.c)
 *     MiFinishCreateSection @ 0x14050CC90 (MiFinishCreateSection.c)
 *     MiMapViewOfImageSection @ 0x140511460 (MiMapViewOfImageSection.c)
 *     MiSectionDelete @ 0x140512600 (MiSectionDelete.c)
 *     MiDeletePartialCloneVad @ 0x1406BF360 (MiDeletePartialCloneVad.c)
 * Callees:
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     MiDereferenceSubsectionProtos @ 0x1406BE030 (MiDereferenceSubsectionProtos.c)
 *     MiFreeSubsectionProtos @ 0x1406BE328 (MiFreeSubsectionProtos.c)
 */

__int64 __fastcall MiDereferencePerSessionProtos(__int64 *a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v4; // rsi
  volatile signed __int64 *v6; // rsi
  _QWORD *i; // rdi
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v9 = 0LL;
  v4 = *a1;
  --CurrentThread->SpecialApcDisable;
  v6 = (volatile signed __int64 *)(v4 + 40);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)v6, 0LL);
  for ( i = a1 + 16; i; i = (_QWORD *)i[2] )
    MiDereferenceSubsectionProtos(i, a2, &v9);
  if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v6);
  KeAbPostRelease((ULONG_PTR)v6);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return MiFreeSubsectionProtos(&v9);
}
