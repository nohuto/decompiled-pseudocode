/*
 * XREFs of PopBootStatGet @ 0x1405AC1B8
 * Callers:
 *     PopPowerInformationInternal @ 0x1404EA1F0 (PopPowerInformationInternal.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     ProbeForWrite @ 0x1404A3950 (ProbeForWrite.c)
 *     RtlUnlockBootStatusData @ 0x1405AC670 (RtlUnlockBootStatusData.c)
 *     RtlGetSetBootStatusData @ 0x1405AC750 (RtlGetSetBootStatusData.c)
 *     RtlBootStatusItemInfo @ 0x1405ACA68 (RtlBootStatusItemInfo.c)
 *     RtlLockBootStatusData @ 0x1405ACB30 (RtlLockBootStatusData.c)
 *     PopBootStatAccessCheck @ 0x1405ACC58 (PopBootStatAccessCheck.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PopBootStatGet(__int64 a1, __int64 a2)
{
  char *PoolWithTag; // rsi
  char PreviousMode; // r15
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rdx
  NTSTATUS v7; // edi
  __int64 j; // r14
  __int64 v9; // r11
  char *v10; // rdi
  char v11; // bl
  unsigned __int64 v13; // kr00_8
  SIZE_T v14; // r14
  SIZE_T v15; // rax
  __int64 i; // rdi
  ULONG ReturnLength; // [rsp+34h] [rbp-64h] BYREF
  HANDLE FileHandle; // [rsp+38h] [rbp-60h] BYREF
  unsigned int v19; // [rsp+40h] [rbp-58h] BYREF
  RTL_BSD_ITEM_TYPE DataClass; // [rsp+44h] [rbp-54h]
  char *v21; // [rsp+48h] [rbp-50h]
  char *v22; // [rsp+50h] [rbp-48h]
  char v23[8]; // [rsp+58h] [rbp-40h] BYREF
  __int64 v24; // [rsp+60h] [rbp-38h]
  __int64 v25; // [rsp+68h] [rbp-30h]
  char v27; // [rsp+B8h] [rbp+20h]

  PoolWithTag = 0LL;
  FileHandle = 0LL;
  v27 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v13 = *(unsigned int *)(a1 + 8);
    v25 = (*(unsigned int *)(a1 + 8) * (unsigned __int128)0x18uLL) >> 64;
    v14 = 24 * v13;
    if ( is_mul_ok(v13, 0x18uLL) )
    {
      v24 = 24 * v13;
      v7 = 0;
    }
    else
    {
      v14 = -1LL;
      v24 = -1LL;
      v7 = -1073741675;
    }
    if ( v7 < 0 )
      goto LABEL_15;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v14, 0x206D654Du);
    v21 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v7 = -1073741670;
      goto LABEL_15;
    }
    if ( v14 )
    {
      v15 = *(_QWORD *)(a1 + 16);
      if ( (v15 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v15 + v14 > 0x7FFFFFFF0000LL || v15 + v14 < v15 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    memmove(PoolWithTag, *(const void **)(a1 + 16), v14);
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 8); i = (unsigned int)(i + 1) )
    {
      v22 = &PoolWithTag[24 * i];
      ProbeForWrite(*((volatile void **)v22 + 1), *((unsigned int *)v22 + 4), 1u);
    }
  }
  else
  {
    PoolWithTag = *(char **)(a1 + 16);
    v21 = PoolWithTag;
  }
  v27 = 1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopBootStatLock, 0LL);
  v7 = RtlLockBootStatusData(&FileHandle);
  if ( v7 >= 0 )
  {
    if ( !PreviousMode || (LOBYTE(v6) = PreviousMode, v7 = PopBootStatAccessCheck(FileHandle, v6, 1LL), v7 >= 0) )
    {
      for ( j = 0LL; (unsigned int)j < *(_DWORD *)(a1 + 8); j = (unsigned int)(j + 1) )
      {
        v22 = &PoolWithTag[24 * j];
        DataClass = *(_DWORD *)v22;
        v7 = RtlBootStatusItemInfo((unsigned int)DataClass, &v19, v23);
        if ( v7 < 0 )
          goto LABEL_15;
        v10 = (char *)&PopBootStat + v19;
        if ( RtlGetSetBootStatusData(FileHandle, 1u, DataClass, v10, *(_DWORD *)(v9 + 16), &ReturnLength) >= 0
          && ReturnLength )
        {
          memmove(*((void **)v22 + 1), v10, ReturnLength);
        }
        if ( a2 )
          *(_DWORD *)(a2 + 4 * j) = ReturnLength;
      }
      v7 = 0;
    }
  }
LABEL_15:
  if ( FileHandle )
    RtlUnlockBootStatusData(FileHandle);
  if ( v27 )
  {
    v11 = _InterlockedExchangeAdd64((volatile signed __int64 *)&PopBootStatLock, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v11 & 2) != 0 && (v11 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopBootStatLock);
    KeAbPostRelease((ULONG_PTR)&PopBootStatLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( PreviousMode && PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)v7;
}
