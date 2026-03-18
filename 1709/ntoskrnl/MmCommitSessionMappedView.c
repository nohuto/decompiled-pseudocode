/*
 * XREFs of MmCommitSessionMappedView @ 0x1404F7720
 * Callers:
 *     <none>
 * Callees:
 *     MiGetPteAddress @ 0x14003799C (MiGetPteAddress.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     MiLocatePagefileSubsection @ 0x1400B6DE0 (MiLocatePagefileSubsection.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     MiChargeSegmentCommit @ 0x140460540 (MiChargeSegmentCommit.c)
 */

__int64 __fastcall MmCommitSessionMappedView(unsigned __int64 a1)
{
  __int64 v2; // rdx
  unsigned __int64 v3; // rdx
  __int64 v4; // rdx
  struct _KTHREAD *CurrentThread; // rdi
  _KPROCESS *Process; // rcx
  unsigned __int64 v7; // rbx
  __int64 v8; // rbp
  __int64 PteAddress; // rsi
  __int64 v10; // rsi
  _QWORD *v11; // rax
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 *v16; // r9
  unsigned int *v17; // r8
  __int64 v18; // rdx
  __int64 *v19; // r10
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rcx
  volatile signed __int64 *v22; // rbx
  int v24; // eax
  volatile signed __int64 *v25; // rbx
  int v26; // esi
  volatile signed __int64 *v27; // rbx
  unsigned __int64 v28; // [rsp+50h] [rbp+18h] BYREF

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
  v11 = *(_QWORD **)(v8 + 16);
  if ( !v11 )
LABEL_33:
    KeBugCheckEx(0xD7u, v7, 2uLL, 0LL, 0LL);
  while ( 1 )
  {
    v12 = v11[10] & 0xFFFFFFFFFFFFF000uLL;
    if ( v7 >= v12 + v11[4] )
    {
      v11 = (_QWORD *)v11[1];
      goto LABEL_9;
    }
    if ( v7 >= v12 )
      break;
    v11 = (_QWORD *)*v11;
LABEL_9:
    if ( !v11 )
      goto LABEL_33;
  }
  v13 = v11[6] & 0xFFFFFFFFFFFFFFF8uLL;
  v14 = *(_QWORD *)v13;
  if ( *(_QWORD *)(*(_QWORD *)v13 + 64LL) )
  {
    v27 = *(volatile signed __int64 **)(v8 + 8);
    if ( (_InterlockedExchangeAdd64(v27, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v27);
    KeAbPostRelease((ULONG_PTR)v27);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    return 3221225505LL;
  }
  else
  {
    v28 = v11[3] + ((v7 - (v11[10] & 0xFFFFFFFFFFFFF000uLL)) >> 12);
    v15 = MiLocatePagefileSubsection(v14 + 128, &v28);
    v16 = (__int64 *)v15;
    if ( !v15 )
    {
      v22 = *(volatile signed __int64 **)(v8 + 8);
      if ( (_InterlockedExchangeAdd64(v22, 0xFFFFFFFFFFFFFFFFuLL) & 6) != 2 )
        goto LABEL_17;
      goto LABEL_22;
    }
    v17 = (unsigned int *)(v15 + 44);
    v18 = v15;
    v19 = (__int64 *)(*(_QWORD *)(v15 + 8) + 8 * v28);
    v20 = *(unsigned int *)(v15 + 44);
    v21 = v10 + v28;
    v28 = v21;
    if ( v21 > v20 )
    {
      while ( 1 )
      {
        v18 = *(_QWORD *)(v18 + 16);
        v21 -= *v17;
        v28 = v21;
        if ( !v18 )
          break;
        v17 = (unsigned int *)(v18 + 44);
        if ( v21 <= *(unsigned int *)(v18 + 44) )
          goto LABEL_18;
      }
      v22 = *(volatile signed __int64 **)(v8 + 8);
      if ( (_InterlockedExchangeAdd64(v22, 0xFFFFFFFFFFFFFFFFuLL) & 6) != 2 )
      {
LABEL_17:
        KeAbPostRelease((ULONG_PTR)v22);
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
        return 3221225712LL;
      }
LABEL_22:
      ExfTryToWakePushLock(v22);
      goto LABEL_17;
    }
LABEL_18:
    v24 = MiChargeSegmentCommit(v16, v19, v10);
    v25 = *(volatile signed __int64 **)(v8 + 8);
    v26 = v24;
    if ( (_InterlockedExchangeAdd64(v25, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v25);
    KeAbPostRelease((ULONG_PTR)v25);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    if ( v26 )
      return 0LL;
    else
      return 3221225773LL;
  }
}
