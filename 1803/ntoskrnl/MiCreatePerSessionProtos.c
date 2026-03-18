/*
 * XREFs of MiCreatePerSessionProtos @ 0x140754AFC
 * Callers:
 *     MiInsertInSystemSpace @ 0x140046B30 (MiInsertInSystemSpace.c)
 *     MiCloneImageVad @ 0x1401429A4 (MiCloneImageVad.c)
 *     MiMapViewOfImageSection @ 0x1404B4E30 (MiMapViewOfImageSection.c)
 *     MiFinishCreateSection @ 0x1404C37A0 (MiFinishCreateSection.c)
 *     MiValidateSectionCreate @ 0x14053BB84 (MiValidateSectionCreate.c)
 *     MiMapSystemImage @ 0x1405FB30C (MiMapSystemImage.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     MiLocateSessionProtosInSubsection @ 0x1402682B4 (MiLocateSessionProtosInSubsection.c)
 *     MiUpdatePerSessionProto @ 0x140268350 (MiUpdatePerSessionProto.c)
 *     MiAllocatePerSessionProtos @ 0x14075472C (MiAllocatePerSessionProtos.c)
 *     MiDereferenceSubsectionProtos @ 0x140754D20 (MiDereferenceSubsectionProtos.c)
 *     MiFreeSubsectionProtos @ 0x140754FD8 (MiFreeSubsectionProtos.c)
 */

__int64 __fastcall MiCreatePerSessionProtos(__int64 *a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // r15
  __int64 v6; // rdi
  volatile signed __int64 *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD *v11; // rbp
  __int64 v12; // rsi
  __int64 *SessionProtosInSubsection; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // r13d
  __int64 v18; // r8
  __int64 *v19; // [rsp+80h] [rbp+18h] BYREF
  __int64 v20; // [rsp+88h] [rbp+20h] BYREF

  if ( a2 - 0x7FFFF <= 0xFFF7FFFF )
    return 3221225678LL;
  CurrentThread = KeGetCurrentThread();
  v6 = *a1;
  --CurrentThread->SpecialApcDisable;
  v7 = (volatile signed __int64 *)(v6 + 40);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)v7, 0LL);
  v11 = a1 + 16;
  v12 = (__int64)(a1 + 16);
  if ( a1 == (__int64 *)-128LL )
  {
LABEL_10:
    if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v7, v8, v9, v10);
    KeAbPostRelease((ULONG_PTR)v7);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    return 0LL;
  }
  while ( (*(_BYTE *)(v12 + 34) & 2) == 0 )
  {
LABEL_9:
    v12 = *(_QWORD *)(v12 + 16);
    if ( !v12 )
      goto LABEL_10;
  }
  SessionProtosInSubsection = MiLocateSessionProtosInSubsection(v12, a2);
  v19 = SessionProtosInSubsection;
  if ( SessionProtosInSubsection )
  {
    ++*((_DWORD *)SessionProtosInSubsection + 20);
    goto LABEL_9;
  }
  v17 = MiAllocatePerSessionProtos(v12, 0LL, 0, 0LL, &v19);
  if ( v17 >= 0 )
  {
    v18 = (__int64)v19;
    *((_DWORD *)v19 + 16) = a2;
    MiUpdatePerSessionProto((__int64)a1, v12, v18, 1);
    goto LABEL_9;
  }
  v20 = 0LL;
  while ( v11 != (_QWORD *)v12 )
  {
    MiDereferenceSubsectionProtos(v11, a2, &v20);
    v11 = (_QWORD *)v11[2];
  }
  if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v7, v14, v15, v16);
  KeAbPostRelease((ULONG_PTR)v7);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  MiFreeSubsectionProtos(&v20);
  return (unsigned int)v17;
}
