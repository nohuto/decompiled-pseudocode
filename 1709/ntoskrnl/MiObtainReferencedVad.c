/*
 * XREFs of MiObtainReferencedVad @ 0x140040AF0
 * Callers:
 *     MiUnmapLockedPagesInUserSpace @ 0x14000EC64 (MiUnmapLockedPagesInUserSpace.c)
 *     NtGetWriteWatch @ 0x140031CA0 (NtGetWriteWatch.c)
 *     NtResetWriteWatch @ 0x14003D7F0 (NtResetWriteWatch.c)
 *     MiProbeAndLockPrepare @ 0x1400BEF50 (MiProbeAndLockPrepare.c)
 *     MiGetWorkingSetInfoList @ 0x14010B360 (MiGetWorkingSetInfoList.c)
 *     MmGetEnclaveModuleList @ 0x140229BA0 (MmGetEnclaveModuleList.c)
 *     MmRotatePhysicalView @ 0x140448920 (MmRotatePhysicalView.c)
 *     MiReferenceCfgVad @ 0x14045DBA8 (MiReferenceCfgVad.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x1404625C8 (MmSecureVirtualMemoryAgainstWrites.c)
 *     MmFreeVirtualMemory @ 0x140494760 (MmFreeVirtualMemory.c)
 *     MiAllocateVirtualMemory @ 0x1404965C0 (MiAllocateVirtualMemory.c)
 *     MmProtectVirtualMemory @ 0x140498B10 (MmProtectVirtualMemory.c)
 *     MiUnmapViewOfSection @ 0x140499D10 (MiUnmapViewOfSection.c)
 *     MiCfgMarkValidEntries @ 0x1404D3370 (MiCfgMarkValidEntries.c)
 *     MmFlushVirtualMemory @ 0x1404E70DC (MmFlushVirtualMemory.c)
 *     MmDeleteTeb @ 0x14056A768 (MmDeleteTeb.c)
 *     MmSecureVirtualMemory @ 0x1405795A0 (MmSecureVirtualMemory.c)
 *     MiProcessVaRangesInfoClass @ 0x140584814 (MiProcessVaRangesInfoClass.c)
 *     NtAreMappedFilesTheSame @ 0x1405DF264 (NtAreMappedFilesTheSame.c)
 *     MmGetFileNameForAddress @ 0x1406DE914 (MmGetFileNameForAddress.c)
 *     MiInitializeEnclave @ 0x1406E8970 (MiInitializeEnclave.c)
 *     MmSelectVsmEnclaveByAddress @ 0x1406E93C8 (MmSelectVsmEnclaveByAddress.c)
 *     NtLoadEnclaveData @ 0x1406E9B24 (NtLoadEnclaveData.c)
 *     NtTerminateEnclave @ 0x1406EA158 (NtTerminateEnclave.c)
 *     MmStoreFreeVirtualMemory @ 0x1406EAB28 (MmStoreFreeVirtualMemory.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x14003D4E0 (MiUnlockAndDereferenceVad.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x14003DE40 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     MiWaitForVadDeletion @ 0x14023032C (MiWaitForVadDeletion.c)
 */

unsigned __int64 __fastcall MiObtainReferencedVad(unsigned __int64 a1, _DWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 Process; // rbp
  _KPROCESS *v6; // rdx
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rsi
  bool v9; // zf
  int v11; // eax

  *a2 = 0;
  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  --CurrentThread->SpecialApcDisable;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockSharedEx(Process + 872, 0LL);
  LOBYTE(CurrentThread[1].Queue) |= 2u;
  if ( (*(_DWORD *)(Process + 772) & 0x20) != 0 )
  {
    *a2 = -1073741558;
    goto LABEL_22;
  }
  v6 = KeGetCurrentThread()->ApcState.Process;
  v7 = v6[2].Affinity.Bitmap[5];
  if ( !v7 )
  {
LABEL_17:
    *a2 = -1073741664;
LABEL_22:
    UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, Process);
    KiLeaveGuardedRegionUnsafe(CurrentThread);
    return 0LL;
  }
  v8 = a1 >> 12;
  if ( v8 < (*(unsigned int *)(v7 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 32) << 32))
    || v8 > (*(unsigned int *)(v7 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 33) << 32)) )
  {
    v7 = v6[2].Affinity.Bitmap[4];
    if ( v7 )
    {
      while ( 1 )
      {
        if ( v8 <= (*(unsigned int *)(v7 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 33) << 32)) )
          v11 = -(v8 < (*(unsigned int *)(v7 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 32) << 32)));
        else
          v11 = 1;
        if ( v11 < 0 )
        {
          v7 = *(_QWORD *)v7;
        }
        else
        {
          if ( v11 <= 0 )
          {
            v6[2].Affinity.Bitmap[5] = v7;
            goto LABEL_5;
          }
          v7 = *(_QWORD *)(v7 + 8);
        }
        if ( !v7 )
          goto LABEL_17;
      }
    }
    goto LABEL_17;
  }
LABEL_5:
  _InterlockedIncrement((volatile signed __int32 *)(v7 + 36));
  UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, Process);
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx(v7 + 40, 0LL);
  LOBYTE(CurrentThread[1].Queue) |= 0x80u;
  v9 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v9 && ($B476B70DB57F76B110DA5B9238C3E934 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( (*(_DWORD *)(v7 + 48) & 0x80000) != 0 )
  {
    MiWaitForVadDeletion(v7);
  }
  else if ( v8 >= (*(unsigned int *)(v7 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 32) << 32))
         && v8 <= (*(unsigned int *)(v7 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 33) << 32)) )
  {
    return v7;
  }
  MiUnlockAndDereferenceVad((char *)v7);
  *a2 = -1073741664;
  return 0LL;
}
