/*
 * XREFs of MiDereferencePerSessionProtos @ 0x1406EB3BC
 * Callers:
 *     MiDeleteVad @ 0x1400579B0 (MiDeleteVad.c)
 *     MiInsertInSystemSpace @ 0x1400B6230 (MiInsertInSystemSpace.c)
 *     MiRemoveFromSystemSpace @ 0x1400B69C0 (MiRemoveFromSystemSpace.c)
 *     MiFinishCreateSection @ 0x14049B8E0 (MiFinishCreateSection.c)
 *     MiSectionDelete @ 0x1404D11B0 (MiSectionDelete.c)
 *     MiMapViewOfImageSection @ 0x1404D1270 (MiMapViewOfImageSection.c)
 *     MiMapSystemImage @ 0x1404F5F10 (MiMapSystemImage.c)
 *     MiValidateSectionCreate @ 0x1404F6218 (MiValidateSectionCreate.c)
 *     MiUnloadSystemImage @ 0x140515B1C (MiUnloadSystemImage.c)
 *     MiDeletePartialCloneVads @ 0x1406EC69C (MiDeletePartialCloneVads.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     MiDereferenceSubsectionProtos @ 0x1406EB46C (MiDereferenceSubsectionProtos.c)
 *     MiFreeSubsectionProtos @ 0x1406EB778 (MiFreeSubsectionProtos.c)
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
