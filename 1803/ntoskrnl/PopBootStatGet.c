/*
 * XREFs of PopBootStatGet @ 0x14064D048
 * Callers:
 *     PopPowerInformationInternal @ 0x140522340 (PopPowerInformationInternal.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     ProbeForWrite @ 0x14059C6A0 (ProbeForWrite.c)
 *     RtlUnlockBootStatusData @ 0x14060F250 (RtlUnlockBootStatusData.c)
 *     RtlGetSetBootStatusData @ 0x14060F330 (RtlGetSetBootStatusData.c)
 *     RtlBootStatusItemInfo @ 0x14060F640 (RtlBootStatusItemInfo.c)
 *     RtlLockBootStatusData @ 0x14060F700 (RtlLockBootStatusData.c)
 *     PopBootStatAccessCheck @ 0x1406501D4 (PopBootStatAccessCheck.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PopBootStatGet(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char *PoolWithTag; // rdi
  char PreviousMode; // r15
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int128 v8; // rax
  int v9; // ebx
  __int64 j; // r14
  __int64 v11; // r11
  char *v12; // rbx
  char v13; // si
  unsigned __int64 v15; // kr00_8
  SIZE_T v16; // r14
  SIZE_T v17; // rax
  __int64 i; // rbx
  ULONG ReturnLength; // [rsp+34h] [rbp-64h] BYREF
  HANDLE FileHandle; // [rsp+38h] [rbp-60h] BYREF
  unsigned int v21; // [rsp+40h] [rbp-58h] BYREF
  RTL_BSD_ITEM_TYPE DataClass; // [rsp+44h] [rbp-54h]
  char *v23; // [rsp+48h] [rbp-50h]
  char *v24; // [rsp+50h] [rbp-48h]
  int v25; // [rsp+58h] [rbp-40h] BYREF
  __int64 v26; // [rsp+60h] [rbp-38h]
  __int64 v27; // [rsp+68h] [rbp-30h]
  char v29; // [rsp+B8h] [rbp+20h]

  PoolWithTag = 0LL;
  FileHandle = 0LL;
  v29 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v15 = *(unsigned int *)(a1 + 8);
    v8 = *(unsigned int *)(a1 + 8) * (unsigned __int128)0x18uLL;
    v27 = *((_QWORD *)&v8 + 1);
    v16 = v8;
    if ( is_mul_ok(v15, 0x18uLL) )
    {
      v26 = v8;
      v9 = 0;
    }
    else
    {
      v16 = -1LL;
      v26 = -1LL;
      v9 = -1073741675;
    }
    if ( v9 < 0 )
      goto LABEL_15;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v16, 0x206D654Du);
    v23 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v9 = -1073741670;
      goto LABEL_15;
    }
    if ( v16 )
    {
      v17 = *(_QWORD *)(a1 + 16);
      if ( (v17 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v17 + v16 > 0x7FFFFFFF0000LL || v17 + v16 < v17 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    memmove(PoolWithTag, *(const void **)(a1 + 16), v16);
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 8); i = (unsigned int)(i + 1) )
    {
      v24 = &PoolWithTag[24 * i];
      ProbeForWrite(*((volatile void **)v24 + 1), *((unsigned int *)v24 + 4), 1u);
    }
  }
  else
  {
    PoolWithTag = *(char **)(a1 + 16);
    v23 = PoolWithTag;
  }
  v29 = 1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopBootStatLock, 0LL);
  v9 = RtlLockBootStatusData(&FileHandle);
  if ( v9 >= 0 )
  {
    if ( !PreviousMode
      || (BYTE8(v8) = PreviousMode, v9 = PopBootStatAccessCheck(FileHandle, *((_QWORD *)&v8 + 1), 1LL), v9 >= 0) )
    {
      for ( j = 0LL; (unsigned int)j < *(_DWORD *)(a1 + 8); j = (unsigned int)(j + 1) )
      {
        v24 = &PoolWithTag[24 * j];
        DataClass = *(_DWORD *)v24;
        v9 = RtlBootStatusItemInfo(DataClass, &v21, &v25);
        if ( v9 < 0 )
          goto LABEL_15;
        v12 = (char *)&PopBootStat + v21;
        if ( RtlGetSetBootStatusData(FileHandle, 1u, DataClass, v12, *(_DWORD *)(v11 + 16), &ReturnLength) >= 0
          && ReturnLength )
        {
          memmove(*((void **)v24 + 1), v12, ReturnLength);
        }
        *((_QWORD *)&v8 + 1) = a2;
        if ( a2 )
          *(_DWORD *)(a2 + 4 * j) = ReturnLength;
      }
      v9 = 0;
    }
  }
LABEL_15:
  if ( FileHandle )
    RtlUnlockBootStatusData(FileHandle);
  if ( v29 )
  {
    v13 = _InterlockedExchangeAdd64((volatile signed __int64 *)&PopBootStatLock, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v13 & 2) != 0 && (v13 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopBootStatLock, *((__int64 *)&v8 + 1), a3, a4);
    KeAbPostRelease((ULONG_PTR)&PopBootStatLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( PreviousMode && PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)v9;
}
