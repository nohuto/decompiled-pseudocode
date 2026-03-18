/*
 * XREFs of MiObtainReferencedVad @ 0x1400BDAC0
 * Callers:
 *     NtResetWriteWatch @ 0x14001DB40 (NtResetWriteWatch.c)
 *     MiGetWorkingSetInfoList @ 0x140077410 (MiGetWorkingSetInfoList.c)
 *     MiProbeAndLockPrepare @ 0x1400B4C90 (MiProbeAndLockPrepare.c)
 *     NtGetWriteWatch @ 0x140101A00 (NtGetWriteWatch.c)
 *     MiUnmapLockedPagesInUserSpace @ 0x140130E08 (MiUnmapLockedPagesInUserSpace.c)
 *     MmStoreFreeVirtualMemory @ 0x140430BB4 (MmStoreFreeVirtualMemory.c)
 *     MmSecureVirtualMemory @ 0x14043F030 (MmSecureVirtualMemory.c)
 *     MiReferenceCfgVad @ 0x14044CB68 (MiReferenceCfgVad.c)
 *     MiUnmapViewOfSection @ 0x14047B340 (MiUnmapViewOfSection.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x14047B908 (MmSecureVirtualMemoryAgainstWrites.c)
 *     MmDeleteTeb @ 0x140499B6C (MmDeleteTeb.c)
 *     MiCfgMarkValidEntries @ 0x14049AE2C (MiCfgMarkValidEntries.c)
 *     MmFlushVirtualMemory @ 0x1404C6968 (MmFlushVirtualMemory.c)
 *     MiSetPriorityVaRanges @ 0x1404C9C9C (MiSetPriorityVaRanges.c)
 *     NtFreeVirtualMemory @ 0x14051A3B0 (NtFreeVirtualMemory.c)
 *     MmProtectVirtualMemory @ 0x14051A990 (MmProtectVirtualMemory.c)
 *     MiAllocateVirtualMemory @ 0x14051BE20 (MiAllocateVirtualMemory.c)
 *     MmRotatePhysicalView @ 0x14055CBF0 (MmRotatePhysicalView.c)
 *     NtAreMappedFilesTheSame @ 0x1405833D4 (NtAreMappedFilesTheSame.c)
 *     MmGetFileNameForAddress @ 0x1406B2B60 (MmGetFileNameForAddress.c)
 *     MiCopyPagesIntoEnclave @ 0x1406BAD94 (MiCopyPagesIntoEnclave.c)
 *     MiInitializeEnclave @ 0x1406BBAD0 (MiInitializeEnclave.c)
 * Callees:
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1400CE380 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     MiUnlockAndDereferenceVad @ 0x1400CE4E0 (MiUnlockAndDereferenceVad.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     MiWaitForVadDeletion @ 0x1402238D8 (MiWaitForVadDeletion.c)
 */

unsigned int *__fastcall MiObtainReferencedVad(unsigned __int64 a1, _DWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  _KPROCESS *Process; // rbp
  _KPROCESS *v6; // rdx
  unsigned int *v7; // rbx
  unsigned __int64 v8; // rsi
  __int16 v9; // ax
  int v11; // eax

  *a2 = 0;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  --CurrentThread->SpecialApcDisable;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&Process[1].Affinity.Bitmap[7], 0LL);
  LOBYTE(CurrentThread[1].Queue) |= 2u;
  if ( (Process[1].DirectoryTableBase & 0x2000000000LL) != 0 )
  {
    *a2 = -1073741558;
    goto LABEL_18;
  }
  v6 = KeGetCurrentThread()->ApcState.Process;
  v7 = (unsigned int *)v6[2].Affinity.Bitmap[5];
  if ( !v7 )
  {
LABEL_17:
    *a2 = -1073741664;
LABEL_18:
    UNLOCK_ADDRESS_SPACE_SHARED(CurrentThread, Process);
    KiLeaveGuardedRegionUnsafe(CurrentThread);
    return 0LL;
  }
  v8 = a1 >> 12;
  if ( v8 < (v7[6] | ((unsigned __int64)*((unsigned __int8 *)v7 + 32) << 32))
    || v8 > (v7[7] | ((unsigned __int64)*((unsigned __int8 *)v7 + 33) << 32)) )
  {
    v7 = (unsigned int *)v6[2].Affinity.Bitmap[4];
    if ( v7 )
    {
      while ( 1 )
      {
        if ( v8 <= (v7[7] | ((unsigned __int64)*((unsigned __int8 *)v7 + 33) << 32)) )
          v11 = -(v8 < (v7[6] | ((unsigned __int64)*((unsigned __int8 *)v7 + 32) << 32)));
        else
          v11 = 1;
        if ( v11 < 0 )
        {
          v7 = *(unsigned int **)v7;
        }
        else
        {
          if ( v11 <= 0 )
          {
            v6[2].Affinity.Bitmap[5] = (unsigned __int64)v7;
            goto LABEL_5;
          }
          v7 = (unsigned int *)*((_QWORD *)v7 + 1);
        }
        if ( !v7 )
          goto LABEL_17;
      }
    }
    goto LABEL_17;
  }
LABEL_5:
  _InterlockedIncrement((volatile signed __int32 *)v7 + 9);
  UNLOCK_ADDRESS_SPACE_SHARED(CurrentThread, Process);
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(v7 + 10), 0LL);
  LOBYTE(CurrentThread[1].Queue) |= 0x80u;
  v9 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v9;
  if ( !v9 && ($69CD3F157F9F39B6F7113F2231989901 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( (v7[12] & 0x80000) != 0 )
  {
    MiWaitForVadDeletion(v7);
  }
  else if ( v8 >= (v7[6] | ((unsigned __int64)*((unsigned __int8 *)v7 + 32) << 32))
         && v8 <= (v7[7] | ((unsigned __int64)*((unsigned __int8 *)v7 + 33) << 32)) )
  {
    return v7;
  }
  MiUnlockAndDereferenceVad(v7);
  *a2 = -1073741664;
  return 0LL;
}
