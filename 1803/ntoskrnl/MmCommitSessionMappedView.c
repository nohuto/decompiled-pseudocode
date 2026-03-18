/*
 * XREFs of MmCommitSessionMappedView @ 0x140570F40
 * Callers:
 *     <none>
 * Callees:
 *     MiGetPteAddress @ 0x14000A260 (MiGetPteAddress.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     MiLocatePagefileSubsection @ 0x1400E6B80 (MiLocatePagefileSubsection.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     MiChargeSegmentCommit @ 0x1404D7760 (MiChargeSegmentCommit.c)
 */

__int64 __fastcall MmCommitSessionMappedView(unsigned __int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  struct _KTHREAD *CurrentThread; // rsi
  _KPROCESS *Process; // rbp
  unsigned __int64 v6; // rdi
  __int64 v7; // rbp
  __int64 PteAddress; // r14
  __int64 v9; // r14
  _QWORD *i; // rdx
  __int64 v11; // r9
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  unsigned __int64 v17; // r8
  __int64 *v18; // r10
  unsigned __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  volatile signed __int64 *v24; // rdi
  int v25; // r14d
  char v26; // bl
  volatile signed __int64 *v28; // rdi
  unsigned int v29; // ebx
  volatile signed __int64 *v30; // rdi
  unsigned __int64 j; // [rsp+60h] [rbp+18h] BYREF

  if ( (unsigned int)MiGetSystemRegionType(a1) != 1 )
    return 3221225711LL;
  if ( a1 + v2 <= a1 || (unsigned int)MiGetSystemRegionType(a1 + v2 - 1) != 1 )
    return 3221225712LL;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  if ( (Process[1].DirectoryTableBase & 0x1000000000000LL) == 0 )
    return 3221225497LL;
  v6 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v7 = Process[1].ActiveProcessors.Bitmap[2] + 2944;
  PteAddress = MiGetPteAddress(v3 | 0xFFF);
  v9 = ((PteAddress - MiGetPteAddress(v6)) >> 3) + 1;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx(*(_QWORD *)(v7 + 8), 0LL);
  for ( i = *(_QWORD **)(v7 + 16); ; i = (_QWORD *)*i )
  {
    while ( 1 )
    {
      if ( !i )
        KeBugCheckEx(0xD7u, v6, 2uLL, 0LL, 0LL);
      v11 = i[10];
      v12 = v11 & 0xFFFFFFFFFFFFF000uLL;
      if ( v6 < (v11 & 0xFFFFFFFFFFFFF000uLL) + i[4] )
        break;
      i = (_QWORD *)i[1];
    }
    if ( v6 >= v12 )
      break;
  }
  v13 = i[6] & 0xFFFFFFFFFFFFFFF8uLL;
  if ( *(_QWORD *)(*(_QWORD *)v13 + 64LL) )
  {
    v28 = *(volatile signed __int64 **)(v7 + 8);
    if ( (_InterlockedExchangeAdd64(v28, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v28, (__int64)i, v12, v11);
    KeAbPostRelease((ULONG_PTR)v28);
    v29 = -1073741791;
    goto LABEL_27;
  }
  v14 = *(_QWORD *)v13 + 128LL;
  j = i[3] + ((v6 - (v11 & 0xFFFFFFFFFFFFF000uLL)) >> 12);
  v15 = MiLocatePagefileSubsection(v14, &j);
  if ( !v15 )
  {
LABEL_24:
    v30 = *(volatile signed __int64 **)(v7 + 8);
    if ( (_InterlockedExchangeAdd64(v30, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v30, v16, v17, v15);
    KeAbPostRelease((ULONG_PTR)v30);
    v29 = -1073741584;
LABEL_27:
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    return v29;
  }
  v16 = v15;
  v17 = *(unsigned int *)(v15 + 44);
  v18 = (__int64 *)(*(_QWORD *)(v15 + 8) + 8 * j);
  v19 = v9 + j;
  for ( j = v19; v19 > v17; v17 = *(unsigned int *)(v16 + 44) )
  {
    v16 = *(_QWORD *)(v16 + 16);
    v19 -= (unsigned int)v17;
    j = v19;
    if ( !v16 )
      goto LABEL_24;
  }
  v20 = MiChargeSegmentCommit((__int64 *)v15, v18, v9);
  v24 = *(volatile signed __int64 **)(v7 + 8);
  v25 = v20;
  v26 = _InterlockedExchangeAdd64(v24, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v26 & 2) != 0 && (v26 & 4) == 0 )
    ExfTryToWakePushLock(v24, v21, v22, v23);
  KeAbPostRelease((ULONG_PTR)v24);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return v25 == 0 ? 0xC000012D : 0;
}
