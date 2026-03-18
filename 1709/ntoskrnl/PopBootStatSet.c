/*
 * XREFs of PopBootStatSet @ 0x1405AC38C
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
 *     RtlUnlockBootStatusData @ 0x1405AC670 (RtlUnlockBootStatusData.c)
 *     RtlGetSetBootStatusData @ 0x1405AC750 (RtlGetSetBootStatusData.c)
 *     RtlBootStatusItemInfo @ 0x1405ACA68 (RtlBootStatusItemInfo.c)
 *     RtlLockBootStatusData @ 0x1405ACB30 (RtlLockBootStatusData.c)
 *     PopBootStatAccessCheck @ 0x1405ACC58 (PopBootStatAccessCheck.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PopBootStatSet(__int64 a1, __int64 a2)
{
  char *PoolWithTag; // rsi
  char PreviousMode; // r15
  unsigned __int64 v5; // kr00_8
  SIZE_T v6; // r14
  NTSTATUS v7; // edi
  SIZE_T v8; // rax
  __int64 i; // rdx
  char *v10; // rax
  __int64 v11; // rcx
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v15; // rdx
  __int64 j; // r14
  const void **v17; // r12
  char *v18; // rdi
  char v19; // bl
  ULONG Size[3]; // [rsp+34h] [rbp-74h] BYREF
  unsigned int v22; // [rsp+40h] [rbp-68h] BYREF
  ULONG ReturnLength; // [rsp+44h] [rbp-64h] BYREF
  char *v24; // [rsp+48h] [rbp-60h]
  __int64 v25; // [rsp+50h] [rbp-58h]
  const void **v26; // [rsp+58h] [rbp-50h]
  __int64 v27; // [rsp+60h] [rbp-48h]
  char v29; // [rsp+C8h] [rbp+20h]

  PoolWithTag = 0LL;
  *(_QWORD *)&Size[1] = 0LL;
  v29 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v5 = *(unsigned int *)(a1 + 8);
    v27 = (*(unsigned int *)(a1 + 8) * (unsigned __int128)0x18u) >> 64;
    v6 = 24 * v5;
    if ( is_mul_ok(v5, 0x18uLL) )
    {
      v25 = 24 * v5;
      v7 = 0;
    }
    else
    {
      v6 = -1LL;
      v25 = -1LL;
      v7 = -1073741675;
    }
    if ( v7 < 0 )
      goto LABEL_31;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v6, 0x206D654Du);
    v24 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v7 = -1073741670;
      goto LABEL_31;
    }
    if ( v6 )
    {
      v8 = *(_QWORD *)(a1 + 16);
      if ( (v8 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v8 + v6 > 0x7FFFFFFF0000LL || v8 + v6 < v8 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    memmove(PoolWithTag, *(const void **)(a1 + 16), v6);
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 8); i = (unsigned int)(i + 1) )
    {
      v10 = &PoolWithTag[24 * i];
      v26 = (const void **)v10;
      v11 = *((unsigned int *)v10 + 4);
      if ( (_DWORD)v11 )
      {
        v12 = *((_QWORD *)v10 + 1);
        v13 = v12 + v11;
        if ( v13 > 0x7FFFFFFF0000LL || v13 < v12 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
  }
  else
  {
    PoolWithTag = *(char **)(a1 + 16);
    v24 = PoolWithTag;
  }
  v29 = 1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopBootStatLock, 0LL);
  v7 = RtlLockBootStatusData((PHANDLE)&Size[1]);
  if ( v7 >= 0 )
  {
    if ( !PreviousMode
      || (LOBYTE(v15) = PreviousMode, v7 = PopBootStatAccessCheck(*(_QWORD *)&Size[1], v15, 2LL), v7 >= 0) )
    {
      for ( j = 0LL; ; j = (unsigned int)(j + 1) )
      {
        if ( (unsigned int)j >= *(_DWORD *)(a1 + 8) )
        {
          v7 = 0;
          goto LABEL_31;
        }
        v17 = (const void **)&PoolWithTag[24 * j];
        v26 = v17;
        v7 = RtlBootStatusItemInfo(*(unsigned int *)v17, &v22, Size);
        if ( v7 < 0 )
          goto LABEL_31;
        if ( *((_DWORD *)v17 + 4) < Size[0] )
          break;
        v18 = (char *)&PopBootStat + v22;
        memmove(v18, v17[1], Size[0]);
        RtlGetSetBootStatusData(*(HANDLE *)&Size[1], 0, *(RTL_BSD_ITEM_TYPE *)v17, v18, Size[0], &ReturnLength);
        if ( a2 )
          *(_DWORD *)(a2 + 4 * j) = ReturnLength;
      }
      v7 = -1073741811;
    }
  }
LABEL_31:
  if ( *(_QWORD *)&Size[1] )
    RtlUnlockBootStatusData(*(HANDLE *)&Size[1]);
  if ( v29 )
  {
    v19 = _InterlockedExchangeAdd64((volatile signed __int64 *)&PopBootStatLock, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v19 & 2) != 0 && (v19 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopBootStatLock);
    KeAbPostRelease((ULONG_PTR)&PopBootStatLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( PreviousMode && PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)v7;
}
