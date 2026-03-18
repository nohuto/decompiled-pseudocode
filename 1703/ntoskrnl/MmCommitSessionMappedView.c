/*
 * XREFs of MmCommitSessionMappedView @ 0x14044D1A0
 * Callers:
 *     <none>
 * Callees:
 *     MiLocatePagefileSubsection @ 0x140099578 (MiLocatePagefileSubsection.c)
 *     MiGetPteAddress @ 0x1400CE300 (MiGetPteAddress.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     MiChargeSegmentCommit @ 0x14054A0F0 (MiChargeSegmentCommit.c)
 */

__int64 __fastcall MmCommitSessionMappedView(unsigned __int64 a1)
{
  __int64 v2; // rdx
  unsigned __int64 v3; // rdx
  __int64 v4; // rdx
  struct _KTHREAD *CurrentThread; // rsi
  _KPROCESS *Process; // rbp
  unsigned __int64 v7; // rdi
  __int64 v8; // rbp
  __int64 PteAddress; // r14
  __int64 v10; // r14
  _QWORD *i; // rdx
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rcx
  __int64 v15; // rax
  unsigned int *v16; // r8
  __int64 v17; // rdx
  unsigned __int64 v18; // r10
  unsigned __int64 v19; // rcx
  int v20; // eax
  volatile signed __int64 *v21; // rdi
  int v22; // r14d
  volatile signed __int64 *v24; // rdi
  unsigned int v25; // ebx
  volatile signed __int64 *v26; // rdi
  unsigned __int64 v27; // [rsp+60h] [rbp+18h] BYREF

  if ( (unsigned int)MiGetSystemRegionType(a1) != 1 )
    return 3221225711LL;
  v3 = a1 + v2;
  if ( v3 <= a1 || (unsigned int)MiGetSystemRegionType(v3) != 1 )
    return 3221225712LL;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  if ( (Process[1].DirectoryTableBase & 0x1000000000000LL) == 0 )
    return 3221225497LL;
  v7 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v8 = Process[1].ActiveProcessors.Bitmap[2] + 2944;
  PteAddress = MiGetPteAddress((v4 - 1) | 0xFFF);
  v10 = ((PteAddress - MiGetPteAddress(v7)) >> 3) + 1;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx(*(_QWORD *)(v8 + 8), 0LL);
  for ( i = *(_QWORD **)(v8 + 16); ; i = (_QWORD *)*i )
  {
    while ( 1 )
    {
      if ( !i )
        KeBugCheckEx(0xD7u, v7, 2uLL, 0LL, 0LL);
      v12 = i[10] & 0xFFFFFFFFFFFFF000uLL;
      if ( v7 < v12 + i[4] )
        break;
      i = (_QWORD *)i[1];
    }
    if ( v7 >= v12 )
      break;
  }
  v13 = i[6] & 0xFFFFFFFFFFFFFFF8uLL;
  if ( *(_QWORD *)(*(_QWORD *)v13 + 64LL) )
  {
    v24 = *(volatile signed __int64 **)(v8 + 8);
    if ( (_InterlockedExchangeAdd64(v24, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v24);
    KeAbPostRelease((ULONG_PTR)v24);
    v25 = -1073741791;
    goto LABEL_29;
  }
  v14 = *(_QWORD *)v13 + 128LL;
  v27 = i[3] + ((v7 - (i[10] & 0xFFFFFFFFFFFFF000uLL)) >> 12);
  v15 = MiLocatePagefileSubsection(v14, &v27);
  if ( !v15 )
  {
LABEL_26:
    v26 = *(volatile signed __int64 **)(v8 + 8);
    if ( (_InterlockedExchangeAdd64(v26, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v26);
    KeAbPostRelease((ULONG_PTR)v26);
    v25 = -1073741584;
LABEL_29:
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    return v25;
  }
  v16 = (unsigned int *)(v15 + 44);
  v17 = v15;
  v18 = *(_QWORD *)(v15 + 8) + 8 * v27;
  v19 = v10 + v27;
  v27 += v10;
  while ( v19 >= *v16 )
  {
    v17 = *(_QWORD *)(v17 + 16);
    v19 -= *v16;
    v27 = v19;
    if ( !v17 )
      goto LABEL_26;
    v16 = (unsigned int *)(v17 + 44);
  }
  v20 = MiChargeSegmentCommit(v15, v18, v10);
  v21 = *(volatile signed __int64 **)(v8 + 8);
  v22 = v20;
  if ( (_InterlockedExchangeAdd64(v21, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v21);
  KeAbPostRelease((ULONG_PTR)v21);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return v22 == 0 ? 0xC000012D : 0;
}
