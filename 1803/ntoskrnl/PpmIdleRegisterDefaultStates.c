/*
 * XREFs of PpmIdleRegisterDefaultStates @ 0x14062769C
 * Callers:
 *     PopNewProcessorCallback @ 0x14075D060 (PopNewProcessorCallback.c)
 *     PoInitSystem @ 0x1408A80C0 (PoInitSystem.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1400384BC (PopReleaseRwLock.c)
 *     PopExecuteOnTargetProcessors @ 0x140038E58 (PopExecuteOnTargetProcessors.c)
 *     PopAcquireRwLockExclusive @ 0x140074E68 (PopAcquireRwLockExclusive.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     PpmHvUseNativeAlgorithms @ 0x140171CE8 (PpmHvUseNativeAlgorithms.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 PpmIdleRegisterDefaultStates()
{
  unsigned int v0; // esi
  bool v1; // di
  SIZE_T v2; // r14
  PVOID PoolWithTag; // rax
  __int64 v4; // rbx
  unsigned int v5; // edi

  v0 = 1;
  v1 = 0;
  if ( !PpmHvUseNativeAlgorithms() )
    v1 = (HvlEnlightenments & 0x200) != 0;
  v2 = 32 * ((unsigned int)v1 + 1) + 120;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v2, 0x694D5050u);
  v4 = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, (unsigned int)v2);
    *(_BYTE *)(v4 + 19) = 1;
    *(_DWORD *)(v4 + 116) = v1 + 1;
    *(_DWORD *)(v4 + 120) = *(_DWORD *)(v4 + 120) & 0x7FFFFF00 | 0x8000008F;
    RtlInitUnicodeString((PUNICODE_STRING)(v4 + 136), L"HLT");
    *(_BYTE *)(v4 + 16) = 0;
    *(_QWORD *)(v4 + 80) = PpmIdleDefaultExecute;
    *(_QWORD *)(v4 + 88) = xHalTimerWatchdogStop;
    *(_QWORD *)(v4 + 96) = ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator;
    *(_QWORD *)(v4 + 104) = ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator;
    if ( v1 )
    {
      v0 = 2;
      *(_QWORD *)(v4 + 40) = PpmIdleGuestPreselect;
      *(_QWORD *)(v4 + 48) = PpmIdleGuestTest;
      *(_QWORD *)(v4 + 64) = PpmIdleGuestPreExecute;
      *(_QWORD *)(v4 + 80) = PpmIdleGuestExecute;
      *(_QWORD *)(v4 + 88) = PpmIdleGuestComplete;
      *(_DWORD *)(v4 + 152) = *(_DWORD *)(v4 + 152) & 0x7FFFFF00 | 0x97;
      RtlInitUnicodeString((PUNICODE_STRING)(v4 + 168), L"Enlightened Idle");
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
