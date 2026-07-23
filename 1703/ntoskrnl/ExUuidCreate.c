/*
 * XREFs of ExUuidCreate @ 0x14054C980
 * Callers:
 *     PipGenerateContainerID @ 0x140453598 (PipGenerateContainerID.c)
 *     NtCreateJobObject @ 0x14054C614 (NtCreateJobObject.c)
 *     CmpUuidCreate @ 0x14054D440 (CmpUuidCreate.c)
 *     EtwpStartLogger @ 0x1405509F8 (EtwpStartLogger.c)
 *     CmpCloneHwProfile @ 0x14066E3A0 (CmpCloneHwProfile.c)
 *     ?CreateGuid@PC_ENVIRONMENT@@SAJPEAU_GUID@@@Z @ 0x140687038 (-CreateGuid@PC_ENVIRONMENT@@SAJPEAU_GUID@@@Z.c)
 *     PiDevCfgResolveVariableGenerateGuid @ 0x14069DA70 (PiDevCfgResolveVariableGenerateGuid.c)
 *     BiCreateObject @ 0x140734C70 (BiCreateObject.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400FDC60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1400FDE60 (KeAbPreAcquire.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     ExpUuidSaveSequenceNumberIf @ 0x14044E5F0 (ExpUuidSaveSequenceNumberIf.c)
 *     ExpUuidGetValues @ 0x1405D5550 (ExpUuidGetValues.c)
 */

NTSTATUS __stdcall ExUuidCreate(UUID *Uuid)
{
  struct _KTHREAD *CurrentThread; // r14
  NTSTATUS Values; // esi
  __int64 v4; // rdi
  char v5; // cl
  int v6; // eax
  __int64 v7; // rdi
  PRTL_BALANCED_NODE v9; // rax
  signed __int8 v10; // cf
  PRTL_BALANCED_NODE v11; // rbp

  CurrentThread = KeGetCurrentThread();
  Values = 0;
  while ( 1 )
  {
    do
    {
      v4 = ExpUuidCachedValues;
      v5 = ExpUuidCacheValid;
      *(_DWORD *)Uuid->Data4 = dword_1407AC2AC;
      *(_DWORD *)&Uuid->Data4[4] = unk_1407AC2B0;
      v6 = _InterlockedDecrement(&dword_1407AC2A8);
    }
    while ( v4 != ExpUuidCachedValues );
    if ( v6 >= 0 )
    {
      v7 = v4 - v6;
      Uuid->Data1 = v7;
      Uuid->Data2 = WORD2(v7);
      Uuid->Data3 = HIWORD(v7) & 0xFFF | 0x1000;
      if ( !v5 )
        return 1073872982;
      return Values;
    }
    --CurrentThread->KernelApcDisable;
    v9 = KeAbPreAcquire((ULONG_PTR)&ExpUuidLock, 0LL, 0);
    v10 = _interlockedbittestandset64((volatile signed __int32 *)&ExpUuidLock, 0LL);
    v11 = v9;
    if ( v10 )
      ExfAcquirePushLockExclusiveEx(&ExpUuidLock, v9, (ULONG_PTR)&ExpUuidLock);
    if ( v11 )
      BYTE2(v11[1].Left) |= 1u;
    if ( v4 == ExpUuidCachedValues )
      break;
LABEL_14:
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpUuidLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ExpUuidLock);
    KeAbPostRelease((ULONG_PTR)&ExpUuidLock);
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  }
  Values = ExpUuidGetValues(&ExpUuidCachedValues);
  if ( !Values )
  {
    ExpUuidSaveSequenceNumberIf();
    goto LABEL_14;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpUuidLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpUuidLock);
  KeAbPostRelease((ULONG_PTR)&ExpUuidLock);
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  return Values;
}
