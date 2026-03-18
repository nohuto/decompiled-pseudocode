/*
 * XREFs of MiCreatePerSessionProtos @ 0x1406BDE0C
 * Callers:
 *     MiInsertInSystemSpace @ 0x140060AA0 (MiInsertInSystemSpace.c)
 *     MiAllocateChildVads @ 0x14041E31C (MiAllocateChildVads.c)
 *     MiValidateSectionCreate @ 0x140422CC0 (MiValidateSectionCreate.c)
 *     MiMapSystemImage @ 0x1404B12D8 (MiMapSystemImage.c)
 *     MiFinishCreateSection @ 0x14050CC90 (MiFinishCreateSection.c)
 *     MiMapViewOfImageSection @ 0x140511460 (MiMapViewOfImageSection.c)
 * Callees:
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     MiLocateSessionProtosInSubsection @ 0x140221454 (MiLocateSessionProtosInSubsection.c)
 *     MiUpdatePerSessionProto @ 0x1402214F0 (MiUpdatePerSessionProto.c)
 *     MiAllocatePerSessionProtos @ 0x1406BDAA4 (MiAllocatePerSessionProtos.c)
 *     MiDereferenceSubsectionProtos @ 0x1406BE030 (MiDereferenceSubsectionProtos.c)
 *     MiFreeSubsectionProtos @ 0x1406BE328 (MiFreeSubsectionProtos.c)
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
