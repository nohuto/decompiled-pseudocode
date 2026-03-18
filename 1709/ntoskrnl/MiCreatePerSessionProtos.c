/*
 * XREFs of MiCreatePerSessionProtos @ 0x1406EB248
 * Callers:
 *     MiInsertInSystemSpace @ 0x1400B6230 (MiInsertInSystemSpace.c)
 *     MiCloneImageVad @ 0x140120754 (MiCloneImageVad.c)
 *     MiFinishCreateSection @ 0x14049B8E0 (MiFinishCreateSection.c)
 *     MiMapViewOfImageSection @ 0x1404D1270 (MiMapViewOfImageSection.c)
 *     MiMapSystemImage @ 0x1404F5F10 (MiMapSystemImage.c)
 *     MiValidateSectionCreate @ 0x1404F6218 (MiValidateSectionCreate.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     MiLocateSessionProtosInSubsection @ 0x14022E10C (MiLocateSessionProtosInSubsection.c)
 *     MiUpdatePerSessionProto @ 0x14022E1A8 (MiUpdatePerSessionProto.c)
 *     MiAllocatePerSessionProtos @ 0x1406EAE50 (MiAllocatePerSessionProtos.c)
 *     MiDereferenceSubsectionProtos @ 0x1406EB46C (MiDereferenceSubsectionProtos.c)
 *     MiFreeSubsectionProtos @ 0x1406EB778 (MiFreeSubsectionProtos.c)
 */

__int64 __fastcall MiCreatePerSessionProtos(__int64 *a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // r15
  __int64 v6; // rdi
  volatile signed __int64 *v7; // rdi
  _QWORD *v8; // rbp
  __int64 v9; // rsi
  __int64 *SessionProtosInSubsection; // rax
  int v11; // r13d
  unsigned __int64 v12; // r8
  __int64 *v13; // [rsp+80h] [rbp+18h] BYREF
  __int64 v14; // [rsp+88h] [rbp+20h] BYREF

  if ( a2 - 0x7FFFF <= 0xFFF7FFFF )
    return 3221225678LL;
  CurrentThread = KeGetCurrentThread();
  v6 = *a1;
  --CurrentThread->SpecialApcDisable;
  v7 = (volatile signed __int64 *)(v6 + 40);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)v7, 0LL);
  v8 = a1 + 16;
  v9 = (__int64)(a1 + 16);
  if ( a1 == (__int64 *)-128LL )
  {
LABEL_10:
    if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v7);
    KeAbPostRelease((ULONG_PTR)v7);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    return 0LL;
  }
  while ( (*(_BYTE *)(v9 + 34) & 2) == 0 )
  {
LABEL_9:
    v9 = *(_QWORD *)(v9 + 16);
    if ( !v9 )
      goto LABEL_10;
  }
  SessionProtosInSubsection = MiLocateSessionProtosInSubsection(v9, a2);
  v13 = SessionProtosInSubsection;
  if ( SessionProtosInSubsection )
  {
    ++*((_DWORD *)SessionProtosInSubsection + 10);
    goto LABEL_9;
  }
  v11 = MiAllocatePerSessionProtos(v9, 0LL, 0, 0LL, &v13);
  if ( v11 >= 0 )
  {
    v12 = (unsigned __int64)v13;
    *((_DWORD *)v13 + 6) = a2;
    MiUpdatePerSessionProto((__int64)a1, v9, v12, 1);
    goto LABEL_9;
  }
  v14 = 0LL;
  while ( v8 != (_QWORD *)v9 )
  {
    MiDereferenceSubsectionProtos(v8, a2, &v14);
    v8 = (_QWORD *)v8[2];
  }
  if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v7);
  KeAbPostRelease((ULONG_PTR)v7);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  MiFreeSubsectionProtos(&v14);
  return (unsigned int)v11;
}
