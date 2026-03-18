/*
 * XREFs of RtlInsertDynamicFunctionTable @ 0x1400AC660
 * Callers:
 *     NtSetInformationProcess @ 0x1404D7080 (NtSetInformationProcess.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140060B70 (ExAllocatePoolWithQuotaTag.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall RtlInsertDynamicFunctionTable(__int64 a1)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rax
  unsigned int v4; // eax
  unsigned int v6; // edi
  struct _KTHREAD *CurrentThread; // r14
  _KPROCESS *Process; // rsi
  volatile signed __int64 *v9; // r13
  char *PoolWithQuotaTag; // r12
  unsigned int v11; // ecx
  unsigned int v12; // ebx
  unsigned __int64 *v13; // rax
  bool v14; // zf
  __int64 v15; // rcx
  unsigned int v16; // ebx
  void *v17; // rdi
  __int64 v18; // r14
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rbx
  int v21; // [rsp+20h] [rbp-58h]
  int v22; // [rsp+24h] [rbp-54h]
  unsigned __int64 v23; // [rsp+28h] [rbp-50h]
  unsigned __int64 v24; // [rsp+30h] [rbp-48h]
  PVOID P; // [rsp+90h] [rbp+18h]
  struct _KTHREAD *v26; // [rsp+98h] [rbp+20h]

  if ( (a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v23 = *(_QWORD *)(a1 + 48);
  v2 = *(_QWORD *)(a1 + 40);
  v24 = v2;
  if ( v2 < v23 )
    return 3221225621LL;
  v3 = v2 - v23;
  if ( v3 > 0xFFFFFFFF )
    return 3221225621LL;
  v22 = v3;
  v4 = *(_DWORD *)(a1 + 84);
  if ( v4 > 0x15555555 )
    return 3221225621LL;
  v21 = 12 * v4;
  v6 = 0;
  P = 0LL;
  CurrentThread = KeGetCurrentThread();
  v26 = CurrentThread;
  Process = CurrentThread->Process;
  --CurrentThread->SpecialApcDisable;
  v9 = (volatile signed __int64 *)&Process[2].Affinity.Bitmap[19];
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&Process[2].Affinity.Bitmap[19], 0LL);
  PoolWithQuotaTag = (char *)Process[2].Affinity.Bitmap[18];
  if ( PoolWithQuotaTag )
  {
    v6 = *(_DWORD *)PoolWithQuotaTag;
    v11 = *((_DWORD *)PoolWithQuotaTag + 1);
  }
  else
  {
    v11 = 0;
  }
  if ( v6 + 1 > v11 )
  {
    v18 = v11 + 10;
    if ( (unsigned int)v18 < v11 )
    {
      v16 = -1073741675;
      CurrentThread = v26;
      goto LABEL_23;
    }
    v19 = 24 * v18 + 16;
    if ( v19 >= 0xFFFFFFFF )
    {
      v16 = -1073741675;
      CurrentThread = v26;
      goto LABEL_23;
    }
    v20 = Process[2].Affinity.Bitmap[18];
    P = (PVOID)v20;
    PoolWithQuotaTag = (char *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, (unsigned int)v19, 0x46447452u);
    if ( !PoolWithQuotaTag )
    {
      v16 = -1073741670;
      v17 = 0LL;
      CurrentThread = v26;
      goto LABEL_24;
    }
    if ( v6 )
    {
      memmove(PoolWithQuotaTag + 16, (const void *)(v20 + 16), 24LL * v6);
      v12 = 1;
    }
    else
    {
      *((_QWORD *)PoolWithQuotaTag + 2) = 0LL;
      *((_QWORD *)PoolWithQuotaTag + 3) = 0LL;
      *((_QWORD *)PoolWithQuotaTag + 4) = 0LL;
      v12 = 1;
      v6 = 1;
    }
    *(_DWORD *)PoolWithQuotaTag = v6;
    *((_DWORD *)PoolWithQuotaTag + 1) = v18;
    PoolWithQuotaTag[12] = 0;
    Process[2].Affinity.Bitmap[18] = (unsigned __int64)PoolWithQuotaTag;
    CurrentThread = v26;
  }
  else
  {
    v12 = 1;
  }
  if ( v6 > 1 )
  {
    v13 = (unsigned __int64 *)(PoolWithQuotaTag + 48);
    do
    {
      if ( v23 < *v13 )
        break;
      ++v12;
      v13 += 3;
    }
    while ( v12 < v6 );
  }
  if ( *(_QWORD *)&PoolWithQuotaTag[24 * v12] + (unsigned __int64)*(unsigned int *)&PoolWithQuotaTag[24 * v12 + 8] > v23 )
  {
    v16 = -1073741800;
  }
  else
  {
    v14 = v12 == v6;
    if ( v12 >= v6 )
    {
LABEL_20:
      if ( !v14 )
        memmove(
          &PoolWithQuotaTag[16 * v12 + 40 + 8 * v12],
          &PoolWithQuotaTag[16 * v12 + 16 + 8 * v12],
          24LL * (v6 - v12));
      v15 = 3LL * v12;
      *(_QWORD *)&PoolWithQuotaTag[8 * v15 + 16] = a1;
      *(_QWORD *)&PoolWithQuotaTag[8 * v15 + 24] = v23;
      *(_DWORD *)&PoolWithQuotaTag[8 * v15 + 32] = v22;
      *(_DWORD *)&PoolWithQuotaTag[8 * v15 + 36] = v21;
      *(_DWORD *)PoolWithQuotaTag = v6 + 1;
      v16 = 0;
      goto LABEL_23;
    }
    if ( *(_QWORD *)&PoolWithQuotaTag[24 * v12 + 24] >= v24 )
    {
      v14 = v12 == v6;
      goto LABEL_20;
    }
    v16 = -1073741800;
  }
LABEL_23:
  v17 = P;
LABEL_24:
  if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v9);
  KeAbPostRelease((ULONG_PTR)v9);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( v17 )
    ExFreePoolWithTag(v17, 0x46447452u);
  return v16;
}
