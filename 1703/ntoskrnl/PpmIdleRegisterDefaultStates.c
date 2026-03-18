/*
 * XREFs of PpmIdleRegisterDefaultStates @ 0x1405A80EC
 * Callers:
 *     PopNewProcessorCallback @ 0x1406C51D0 (PopNewProcessorCallback.c)
 *     PoInitSystem @ 0x14080B764 (PoInitSystem.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x14007157C (PopAcquireRwLockExclusive.c)
 *     PopExecuteOnTargetProcessors @ 0x1400888B0 (PopExecuteOnTargetProcessors.c)
 *     PopReleaseRwLock @ 0x140088D60 (PopReleaseRwLock.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     PpmHvConsiderNative @ 0x140155908 (PpmHvConsiderNative.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 PpmIdleRegisterDefaultStates()
{
  __int64 v0; // rsi
  bool v1; // di
  int v2; // ebp
  PVOID PoolWithTag; // rax
  __int64 v4; // rbx
  unsigned int v5; // edi

  v0 = 1LL;
  v1 = 0;
  v2 = 1;
  if ( !PpmHvConsiderNative() )
  {
    v1 = (HvlEnlightenments & 0x200) != 0;
    if ( (HvlEnlightenments & 0x200) != 0 )
      v2 = 2;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(32 * v2 + 120), 0x694D5050u);
  v4 = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, (unsigned int)(32 * v2 + 120));
    *(_BYTE *)(v4 + 18) = 1;
    *(_DWORD *)(v4 + 116) = v2;
    *(_DWORD *)(v4 + 120) = *(_DWORD *)(v4 + 120) & 0x7FFFFF00 | 0x8000008F;
    RtlInitUnicodeString((PUNICODE_STRING)(v4 + 136), L"HLT");
    *(_BYTE *)(v4 + 16) = 0;
    *(_QWORD *)(v4 + 80) = PpmIdleDefaultExecute;
    *(_QWORD *)(v4 + 88) = xHalTimerWatchdogStop;
    *(_QWORD *)(v4 + 96) = ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator;
    *(_QWORD *)(v4 + 104) = ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator;
    if ( v1 )
    {
      *(_QWORD *)(v4 + 40) = PpmIdleGuestPreselect;
      *(_QWORD *)(v4 + 48) = PpmIdleGuestTest;
      *(_QWORD *)(v4 + 64) = PpmIdleGuestPreExecute;
      *(_QWORD *)(v4 + 80) = PpmIdleGuestExecute;
      *(_QWORD *)(v4 + 88) = PpmIdleGuestComplete;
      *(_DWORD *)(v4 + 152) = *(_DWORD *)(v4 + 152) & 0x7FFFFF00 | 0x97;
      RtlInitUnicodeString((PUNICODE_STRING)(v4 + 168), L"Enlightened Idle");
      v0 = 2LL;
    }
    PopAcquireRwLockExclusive((ULONG_PTR)&PpmIdlePolicyLock);
    v5 = PopExecuteOnTargetProcessors((__int64)KeActiveProcessors, (__int64)PpmIdleInstallDefaultStates, v4, v0);
    PopReleaseRwLock((ULONG_PTR)&PpmIdlePolicyLock);
    ExFreePoolWithTag((PVOID)v4, 0x694D5050u);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v5;
}
