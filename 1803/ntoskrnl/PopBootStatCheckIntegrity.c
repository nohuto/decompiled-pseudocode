/*
 * XREFs of PopBootStatCheckIntegrity @ 0x14076BDB0
 * Callers:
 *     PopPowerInformationInternal @ 0x140522340 (PopPowerInformationInternal.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     ProbeForWrite @ 0x14059C6A0 (ProbeForWrite.c)
 *     RtlUnlockBootStatusData @ 0x14060F250 (RtlUnlockBootStatusData.c)
 *     RtlLockBootStatusData @ 0x14060F700 (RtlLockBootStatusData.c)
 *     PopBootStatAccessCheck @ 0x1406501D4 (PopBootStatAccessCheck.c)
 *     RtlCheckBootStatusIntegrity @ 0x140786B80 (RtlCheckBootStatusIntegrity.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PopBootStatCheckIntegrity(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char *PoolWithTag; // r14
  char PreviousMode; // cl
  unsigned __int128 v7; // rax
  unsigned __int64 v8; // kr00_8
  SIZE_T v9; // r12
  int v10; // esi
  SIZE_T v11; // rax
  unsigned int v12; // esi
  char v13; // r12
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v15; // rcx
  bool v16; // zf
  BOOLEAN Verified[4]; // [rsp+20h] [rbp-68h] BYREF
  int v19; // [rsp+24h] [rbp-64h]
  HANDLE FileHandle; // [rsp+28h] [rbp-60h] BYREF
  PVOID P; // [rsp+30h] [rbp-58h]
  __int64 v22; // [rsp+38h] [rbp-50h]
  __int64 v23; // [rsp+40h] [rbp-48h]
  volatile void **v24; // [rsp+48h] [rbp-40h]
  KPROCESSOR_MODE v25; // [rsp+98h] [rbp+10h]
  char v26; // [rsp+A8h] [rbp+20h]

  PoolWithTag = 0LL;
  FileHandle = 0LL;
  v26 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v25 = PreviousMode;
  if ( PreviousMode )
  {
    v8 = *(unsigned int *)(a1 + 8);
    v7 = *(unsigned int *)(a1 + 8) * (unsigned __int128)0x18u;
    v23 = *((_QWORD *)&v7 + 1);
    v9 = v7;
    if ( is_mul_ok(v8, 0x18uLL) )
    {
      v22 = v7;
      v10 = 0;
    }
    else
    {
      v9 = -1LL;
      v22 = -1LL;
      v10 = -1073741675;
    }
    if ( v10 < 0 )
    {
      v13 = PreviousMode;
      goto LABEL_27;
    }
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v9, 0x206D654Du);
    P = PoolWithTag;
    if ( !PoolWithTag )
    {
      v10 = -1073741670;
LABEL_26:
      v13 = v25;
      goto LABEL_27;
    }
    if ( v9 )
    {
      v11 = *(_QWORD *)(a1 + 16);
      if ( (v11 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v11 + v9 > 0x7FFFFFFF0000LL || v11 + v9 < v11 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    memmove(PoolWithTag, *(const void **)(a1 + 16), v9);
    v12 = 0;
    v19 = 0;
    while ( v12 < *(_DWORD *)(a1 + 8) )
    {
      v24 = (volatile void **)&PoolWithTag[24 * v12];
      ProbeForWrite(v24[1], *((unsigned int *)v24 + 4), 1u);
      v19 = ++v12;
    }
  }
  else
  {
    PoolWithTag = *(char **)(a1 + 16);
    P = PoolWithTag;
  }
  v26 = 1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopBootStatLock, 0LL);
  v10 = RtlLockBootStatusData(&FileHandle);
  if ( v10 < 0 )
    goto LABEL_26;
  v13 = v25;
  if ( !v25 || (v10 = PopBootStatAccessCheck(FileHandle, v25, 1u), v10 >= 0) )
  {
    v10 = RtlCheckBootStatusIntegrity(FileHandle, Verified);
    if ( v10 >= 0 )
    {
      if ( *((_DWORD *)PoolWithTag + 4) )
        **((_BYTE **)PoolWithTag + 1) = Verified[0];
      else
        v10 = -1073741811;
    }
  }
LABEL_27:
  if ( FileHandle )
    RtlUnlockBootStatusData(FileHandle);
  if ( v26 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopBootStatLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopBootStatLock, *((__int64 *)&v7 + 1), a3, a4);
    KeAbPostRelease((ULONG_PTR)&PopBootStatLock);
    v15 = KeGetCurrentThread();
    v16 = v15->KernelApcDisable++ == -1;
    if ( v16
      && ($005F0E83B22994B61E86C72E0CE43C71 *)v15->ApcState.ApcListHead[0].Flink != &v15->152
      && !v15->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  if ( v13 && PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)v10;
}
