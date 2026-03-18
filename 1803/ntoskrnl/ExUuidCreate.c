/*
 * XREFs of ExUuidCreate @ 0x14052FD70
 * Callers:
 *     NtCreateJobObject @ 0x14052FF14 (NtCreateJobObject.c)
 *     CmpUuidCreate @ 0x1405624F4 (CmpUuidCreate.c)
 *     EtwpStartLogger @ 0x14058A5A4 (EtwpStartLogger.c)
 *     PipGenerateContainerID @ 0x1405E6814 (PipGenerateContainerID.c)
 *     CmpCloneHwProfile @ 0x1406FC0D0 (CmpCloneHwProfile.c)
 *     ?CreateGuid@SC_ENV@@SAJPEAU_GUID@@@Z @ 0x140716FB0 (-CreateGuid@SC_ENV@@SAJPEAU_GUID@@@Z.c)
 *     PiDevCfgResolveVariableGenerateGuid @ 0x14072FF90 (PiDevCfgResolveVariableGenerateGuid.c)
 *     BiCreateObject @ 0x1407E1B88 (BiCreateObject.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140008AF0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140008E50 (KeAbPreAcquire.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExpUuidSaveSequenceNumberIf @ 0x14057C2AC (ExpUuidSaveSequenceNumberIf.c)
 *     ExpAllocateUuids @ 0x14057C2D8 (ExpAllocateUuids.c)
 */

NTSTATUS __stdcall ExUuidCreate(UUID *Uuid)
{
  struct _KTHREAD *CurrentThread; // r14
  NTSTATUS v3; // esi
  NTSTATUS v4; // r12d
  __int64 v5; // rdi
  char v6; // cl
  int v7; // eax
  __int64 v8; // rdi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  signed __int8 v14; // cf
  __int64 v15; // rbp
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  char v21; // al
  bool v22; // zf
  unsigned int v23; // [rsp+60h] [rbp+8h] BYREF
  __int32 v24; // [rsp+68h] [rbp+10h] BYREF
  __int64 v25; // [rsp+70h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  v4 = -1073741267;
  while ( 1 )
  {
    do
    {
      v5 = ExpUuidCachedValues;
      v6 = ExpUuidCacheValid;
      *(_DWORD *)Uuid->Data4 = dword_14086129C;
      *(_DWORD *)&Uuid->Data4[4] = dword_1408612A0;
      v7 = _InterlockedDecrement(&dword_140861298);
    }
    while ( v5 != ExpUuidCachedValues );
    if ( v7 >= 0 )
    {
      v8 = v5 - v7;
      Uuid->Data1 = v8;
      Uuid->Data2 = WORD2(v8);
      Uuid->Data3 = HIWORD(v8) & 0xFFF | 0x1000;
      if ( !v6 )
        return 1073872982;
      return v3;
    }
    --CurrentThread->KernelApcDisable;
    v10 = KeAbPreAcquire((ULONG_PTR)&ExpUuidLock, 0LL, 0);
    v14 = _interlockedbittestandset64((volatile signed __int32 *)&ExpUuidLock, 0LL);
    v15 = v10;
    if ( v14 )
      ExfAcquirePushLockExclusiveEx(&ExpUuidLock, v10, (ULONG_PTR)&ExpUuidLock);
    if ( v15 )
      *(_BYTE *)(v15 + 26) |= 1u;
    if ( v5 != ExpUuidCachedValues )
    {
      v22 = (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpUuidLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2;
      goto LABEL_18;
    }
    v16 = ExpAllocateUuids(&v25, &v24, &v23);
    if ( v16 == -1073741267 )
      goto LABEL_21;
    if ( v16 < 0 )
      break;
    BYTE1(dword_14086129C) = v23;
    v20 = v23 >> 8;
    v25 += 5748192000000000LL;
    LOBYTE(v20) = BYTE1(v23) & 0x3F | 0x80;
    LOBYTE(dword_14086129C) = v20;
    ExpUuidCachedValues = v25 + (unsigned int)(v24 - 1);
    ExpUuidSaveSequenceNumberIf(v20, ExpUuidCachedValues, (unsigned int)_InterlockedExchange(&dword_140861298, v24));
    v21 = _InterlockedExchangeAdd64((volatile signed __int64 *)&ExpUuidLock, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v21 & 2) == 0 )
      goto LABEL_15;
    v22 = (v21 & 4) == 0;
LABEL_18:
    if ( v22 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ExpUuidLock, v11, v12, v13);
LABEL_15:
    KeAbPostRelease((ULONG_PTR)&ExpUuidLock);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
  }
  v4 = -1073741801;
LABEL_21:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpUuidLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpUuidLock, v17, v18, v19);
  KeAbPostRelease((ULONG_PTR)&ExpUuidLock);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v4;
}
