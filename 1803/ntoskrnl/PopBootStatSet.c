/*
 * XREFs of PopBootStatSet @ 0x14060EF54
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
 *     RtlUnlockBootStatusData @ 0x14060F250 (RtlUnlockBootStatusData.c)
 *     RtlGetSetBootStatusData @ 0x14060F330 (RtlGetSetBootStatusData.c)
 *     RtlBootStatusItemInfo @ 0x14060F640 (RtlBootStatusItemInfo.c)
 *     RtlLockBootStatusData @ 0x14060F700 (RtlLockBootStatusData.c)
 *     PopBootStatAccessCheck @ 0x1406501D4 (PopBootStatAccessCheck.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PopBootStatSet(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char *PoolWithTag; // rdi
  char PreviousMode; // r15
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int128 v8; // rax
  NTSTATUS v9; // ebx
  __int64 j; // rsi
  const void **v11; // r12
  char *v12; // rbx
  char v13; // r14
  unsigned __int64 v15; // kr00_8
  SIZE_T v16; // rsi
  SIZE_T v17; // rax
  __int64 i; // rdx
  char *v19; // rax
  __int64 v20; // rcx
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // rcx
  ULONG Size[3]; // [rsp+34h] [rbp-74h] BYREF
  unsigned int v24; // [rsp+40h] [rbp-68h] BYREF
  ULONG ReturnLength; // [rsp+44h] [rbp-64h] BYREF
  char *v26; // [rsp+48h] [rbp-60h]
  __int64 v27; // [rsp+50h] [rbp-58h]
  const void **v28; // [rsp+58h] [rbp-50h]
  __int64 v29; // [rsp+60h] [rbp-48h]
  char v31; // [rsp+C8h] [rbp+20h]

  PoolWithTag = 0LL;
  *(_QWORD *)&Size[1] = 0LL;
  v31 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v15 = *(unsigned int *)(a1 + 8);
    v8 = *(unsigned int *)(a1 + 8) * (unsigned __int128)0x18uLL;
    v29 = *((_QWORD *)&v8 + 1);
    v16 = v8;
    if ( is_mul_ok(v15, 0x18uLL) )
    {
      v27 = v8;
      v9 = 0;
    }
    else
    {
      v16 = -1LL;
      v27 = -1LL;
      v9 = -1073741675;
    }
    if ( v9 < 0 )
      goto LABEL_13;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v16, 0x206D654Du);
    v26 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v9 = -1073741670;
      goto LABEL_13;
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
      v19 = &PoolWithTag[24 * i];
      v28 = (const void **)v19;
      v20 = *((unsigned int *)v19 + 4);
      if ( (_DWORD)v20 )
      {
        v21 = *((_QWORD *)v19 + 1);
        v22 = v21 + v20;
        if ( v22 > 0x7FFFFFFF0000LL || v22 < v21 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
  }
  else
  {
    PoolWithTag = *(char **)(a1 + 16);
    v26 = PoolWithTag;
  }
  v31 = 1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopBootStatLock, 0LL);
  v9 = RtlLockBootStatusData((PHANDLE)&Size[1]);
  if ( v9 >= 0 )
  {
    if ( !PreviousMode
      || (BYTE8(v8) = PreviousMode, v9 = PopBootStatAccessCheck(*(_QWORD *)&Size[1], *((_QWORD *)&v8 + 1), 2LL), v9 >= 0) )
    {
      for ( j = 0LL; ; j = (unsigned int)(j + 1) )
      {
        if ( (unsigned int)j >= *(_DWORD *)(a1 + 8) )
        {
          v9 = 0;
          goto LABEL_13;
        }
        v11 = (const void **)&PoolWithTag[24 * j];
        v28 = v11;
        v9 = RtlBootStatusItemInfo(*(unsigned int *)v11, &v24, Size);
        if ( v9 < 0 )
          goto LABEL_13;
        if ( *((_DWORD *)v11 + 4) < Size[0] )
          break;
        v12 = (char *)&PopBootStat + v24;
        memmove(v12, v11[1], Size[0]);
        RtlGetSetBootStatusData(*(HANDLE *)&Size[1], 0, *(RTL_BSD_ITEM_TYPE *)v11, v12, Size[0], &ReturnLength);
        if ( a2 )
          *(_DWORD *)(a2 + 4 * j) = ReturnLength;
      }
      v9 = -1073741811;
    }
  }
LABEL_13:
  if ( *(_QWORD *)&Size[1] )
    RtlUnlockBootStatusData(*(HANDLE *)&Size[1]);
  if ( v31 )
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
