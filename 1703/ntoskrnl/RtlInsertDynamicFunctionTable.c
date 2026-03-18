/*
 * XREFs of RtlInsertDynamicFunctionTable @ 0x140066B00
 * Callers:
 *     NtSetInformationProcess @ 0x1404A2550 (NtSetInformationProcess.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x14004B900 (ExAllocatePoolWithQuotaTag.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall RtlInsertDynamicFunctionTable(__int64 a1)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rax
  unsigned int v4; // eax
  unsigned __int64 v6; // r12
  unsigned int v7; // edi
  char *PoolWithQuotaTag; // rsi
  unsigned int v9; // r14d
  unsigned int v10; // ecx
  unsigned int v11; // r15d
  unsigned __int64 *v12; // rcx
  bool v13; // zf
  __int64 v14; // rcx
  __int64 v15; // r15
  unsigned __int64 v16; // rcx
  int v17; // [rsp+20h] [rbp-48h]
  int v18; // [rsp+24h] [rbp-44h]
  unsigned __int64 v19; // [rsp+28h] [rbp-40h]
  unsigned __int64 v20; // [rsp+30h] [rbp-38h]
  _KPROCESS *Process; // [rsp+78h] [rbp+10h]
  struct _KTHREAD *CurrentThread; // [rsp+80h] [rbp+18h]

  if ( (a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v19 = *(_QWORD *)(a1 + 48);
  v2 = *(_QWORD *)(a1 + 40);
  v20 = v2;
  if ( v2 < v19 )
    return 3221225621LL;
  v3 = v2 - v19;
  if ( v3 > 0xFFFFFFFF )
    return 3221225621LL;
  v18 = v3;
  v4 = *(_DWORD *)(a1 + 84);
  if ( v4 > 0x15555555 )
    return 3221225621LL;
  v17 = 12 * v4;
  v6 = 0LL;
  v7 = 0;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->Process;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&Process[2].Affinity.Bitmap[19], 0LL);
  PoolWithQuotaTag = (char *)Process[2].Affinity.Bitmap[18];
  if ( PoolWithQuotaTag )
  {
    v9 = *(_DWORD *)PoolWithQuotaTag;
    v10 = *((_DWORD *)PoolWithQuotaTag + 1);
  }
  else
  {
    v9 = 0;
    v10 = 0;
  }
  if ( v9 + 1 > v10 )
  {
    v15 = v10 + 10;
    if ( (unsigned int)v15 < v10 || (v16 = 24 * v15 + 16, v16 >= 0xFFFFFFFF) )
    {
      v7 = -1073741675;
      goto LABEL_22;
    }
    v6 = Process[2].Affinity.Bitmap[18];
    PoolWithQuotaTag = (char *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, (unsigned int)v16, 0x46447452u);
    if ( !PoolWithQuotaTag )
    {
      v7 = -1073741670;
      v6 = 0LL;
      goto LABEL_22;
    }
    if ( v9 )
    {
      memmove(PoolWithQuotaTag + 16, (const void *)(v6 + 16), 24LL * v9);
    }
    else
    {
      *((_QWORD *)PoolWithQuotaTag + 2) = 0LL;
      *((_QWORD *)PoolWithQuotaTag + 3) = 0LL;
      *((_QWORD *)PoolWithQuotaTag + 4) = 0LL;
      v9 = 1;
    }
    *(_DWORD *)PoolWithQuotaTag = v9;
    *((_DWORD *)PoolWithQuotaTag + 1) = v15;
    PoolWithQuotaTag[12] = 0;
    Process[2].Affinity.Bitmap[18] = (unsigned __int64)PoolWithQuotaTag;
  }
  v11 = 1;
  if ( v9 > 1 )
  {
    v12 = (unsigned __int64 *)(PoolWithQuotaTag + 48);
    do
    {
      if ( v19 < *v12 )
        break;
      ++v11;
      v12 += 3;
    }
    while ( v11 < v9 );
  }
  if ( *(_QWORD *)&PoolWithQuotaTag[24 * v11] + (unsigned __int64)*(unsigned int *)&PoolWithQuotaTag[24 * v11 + 8] <= v19 )
  {
    v13 = v11 == v9;
    if ( v11 >= v9 )
    {
LABEL_19:
      if ( !v13 )
        memmove(
          &PoolWithQuotaTag[16 * v11 + 40 + 8 * v11],
          &PoolWithQuotaTag[16 * v11 + 16 + 8 * v11],
          24LL * (v9 - v11));
      v14 = 3LL * v11;
      *(_QWORD *)&PoolWithQuotaTag[8 * v14 + 16] = a1;
      *(_QWORD *)&PoolWithQuotaTag[8 * v14 + 24] = v19;
      *(_DWORD *)&PoolWithQuotaTag[8 * v14 + 32] = v18;
      *(_DWORD *)&PoolWithQuotaTag[8 * v14 + 36] = v17;
      *(_DWORD *)PoolWithQuotaTag = v9 + 1;
      goto LABEL_22;
    }
    if ( *(_QWORD *)&PoolWithQuotaTag[24 * v11 + 24] >= v20 )
    {
      v13 = v11 == v9;
      goto LABEL_19;
    }
  }
  v7 = -1073741800;
LABEL_22:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&Process[2].Affinity.Bitmap[19], 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&Process[2].Affinity.Bitmap[19]);
  KeAbPostRelease((ULONG_PTR)&Process[2].Affinity.Bitmap[19]);
  KiLeaveGuardedRegionUnsafe(CurrentThread);
  if ( v6 )
    ExFreePoolWithTag((PVOID)v6, 0x46447452u);
  return v7;
}
