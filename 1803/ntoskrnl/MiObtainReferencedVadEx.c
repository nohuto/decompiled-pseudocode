/*
 * XREFs of MiObtainReferencedVadEx @ 0x14001B0F0
 * Callers:
 *     MiProbeAndLockPrepare @ 0x140022150 (MiProbeAndLockPrepare.c)
 *     NtGetWriteWatch @ 0x140024440 (NtGetWriteWatch.c)
 *     MiGetWorkingSetInfoList @ 0x1400B3CD0 (MiGetWorkingSetInfoList.c)
 *     MiUnmapLockedPagesInUserSpace @ 0x1400C2218 (MiUnmapLockedPagesInUserSpace.c)
 *     MmGetEnclaveModuleList @ 0x140264A80 (MmGetEnclaveModuleList.c)
 *     MmFreeVirtualMemory @ 0x1404AD570 (MmFreeVirtualMemory.c)
 *     NtResetWriteWatch @ 0x1404AF9A0 (NtResetWriteWatch.c)
 *     MiCfgMarkValidEntries @ 0x1404B3738 (MiCfgMarkValidEntries.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x1404D5D60 (MmSecureVirtualMemoryAgainstWrites.c)
 *     MmProtectVirtualMemory @ 0x1404D6080 (MmProtectVirtualMemory.c)
 *     MiUnmapViewOfSection @ 0x1404D7010 (MiUnmapViewOfSection.c)
 *     MmSecureVirtualMemoryEx @ 0x140557158 (MmSecureVirtualMemoryEx.c)
 *     MmDeleteTeb @ 0x140562BFC (MmDeleteTeb.c)
 *     MmFlushVirtualMemory @ 0x140568184 (MmFlushVirtualMemory.c)
 *     MiProcessVaRangesInfoClass @ 0x140575908 (MiProcessVaRangesInfoClass.c)
 *     MiReferenceCfgVad @ 0x1405764D4 (MiReferenceCfgVad.c)
 *     MmStoreFreeVirtualMemory @ 0x14057DF34 (MmStoreFreeVirtualMemory.c)
 *     MiAllocateVirtualMemory @ 0x1405B49A0 (MiAllocateVirtualMemory.c)
 *     MmRotatePhysicalView @ 0x1405BACA0 (MmRotatePhysicalView.c)
 *     NtAreMappedFilesTheSame @ 0x1405F1D00 (NtAreMappedFilesTheSame.c)
 *     MmGetFileNameForAddress @ 0x140749798 (MmGetFileNameForAddress.c)
 *     MiHandleEnclaveFault @ 0x14074F594 (MiHandleEnclaveFault.c)
 *     MiInitializeEnclave @ 0x1407523EC (MiInitializeEnclave.c)
 *     MmSelectVsmEnclaveByAddress @ 0x140752E40 (MmSelectVsmEnclaveByAddress.c)
 *     NtLoadEnclaveData @ 0x1407535B8 (NtLoadEnclaveData.c)
 *     NtTerminateEnclave @ 0x140753BEC (NtTerminateEnclave.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1400FE990 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     MiUnlockAndDereferenceVad @ 0x140117340 (MiUnlockAndDereferenceVad.c)
 *     MiWaitForVadDeletion @ 0x14026B614 (MiWaitForVadDeletion.c)
 */

unsigned __int64 __fastcall MiObtainReferencedVadEx(unsigned __int64 a1, char a2, int *a3)
{
  struct _KTHREAD *CurrentThread; // rsi
  _KPROCESS *Process; // rbp
  _KPROCESS *v8; // rdx
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rdi
  bool v11; // zf
  unsigned __int64 result; // rax
  int v13; // eax
  int v14; // eax
  int v15; // eax

  *a3 = 0;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  --CurrentThread->SpecialApcDisable;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&Process[1].Affinity.Bitmap[7], 0LL);
  LOBYTE(CurrentThread[1].Queue) |= 2u;
  v8 = KeGetCurrentThread()->ApcState.Process;
  v9 = v8[2].Affinity.Bitmap[5];
  if ( !v9 )
  {
LABEL_18:
    v14 = -1073741558;
    if ( (Process[1].DirectoryTableBase & 0x2000000000LL) == 0 )
      v14 = -1073741664;
    goto LABEL_20;
  }
  v10 = a1 >> 12;
  if ( v10 < (*(unsigned int *)(v9 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v9 + 32) << 32))
    || v10 > (*(unsigned int *)(v9 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v9 + 33) << 32)) )
  {
    v9 = v8[2].Affinity.Bitmap[4];
    if ( v9 )
    {
      while ( 1 )
      {
        if ( v10 > (*(unsigned int *)(v9 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v9 + 33) << 32)) )
          v13 = 1;
        else
          v13 = -(v10 < (*(unsigned int *)(v9 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v9 + 32) << 32)));
        if ( v13 < 0 )
        {
          v9 = *(_QWORD *)v9;
        }
        else
        {
          if ( v13 <= 0 )
          {
            v8[2].Affinity.Bitmap[5] = v9;
            goto LABEL_4;
          }
          v9 = *(_QWORD *)(v9 + 8);
        }
        if ( !v9 )
          goto LABEL_18;
      }
    }
    goto LABEL_18;
  }
LABEL_4:
  if ( (a2 & 1) == 0 && (Process[1].DirectoryTableBase & 0x2000000000LL) != 0 )
  {
    v14 = -1073741558;
LABEL_20:
    *a3 = v14;
    UNLOCK_ADDRESS_SPACE_SHARED(CurrentThread, Process);
    KiLeaveGuardedRegionUnsafe(CurrentThread);
    return 0LL;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v9 + 36));
  UNLOCK_ADDRESS_SPACE_SHARED(CurrentThread, Process);
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx(v9 + 40, 0LL);
  LOBYTE(CurrentThread[1].Queue) |= 0x80u;
  v11 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v11 && ($005F0E83B22994B61E86C72E0CE43C71 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( (*(_DWORD *)(v9 + 48) & 0x20000000) != 0 )
  {
    MiWaitForVadDeletion(v9);
    MiUnlockAndDereferenceVad((PVOID)v9);
    v15 = -1073741558;
    if ( (Process[1].DirectoryTableBase & 0x2000000000LL) == 0 )
      v15 = -1073741664;
    *a3 = v15;
    return 0LL;
  }
  if ( v10 >= (*(unsigned int *)(v9 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v9 + 32) << 32))
    && v10 <= (*(unsigned int *)(v9 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v9 + 33) << 32)) )
  {
    return v9;
  }
  MiUnlockAndDereferenceVad((PVOID)v9);
  result = 0LL;
  *a3 = -1073741664;
  return result;
}
