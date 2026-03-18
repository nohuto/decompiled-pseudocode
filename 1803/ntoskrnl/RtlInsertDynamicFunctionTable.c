/*
 * XREFs of RtlInsertDynamicFunctionTable @ 0x1400AF690
 * Callers:
 *     NtSetInformationProcess @ 0x1404E4550 (NtSetInformationProcess.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1400EF190 (ExAllocatePoolWithQuotaTag.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall RtlInsertDynamicFunctionTable(__int64 a1)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rax
  unsigned int v4; // eax
  struct _KTHREAD *CurrentThread; // r13
  _KPROCESS *Process; // rdi
  volatile signed __int64 *v8; // r12
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // r15
  unsigned int v13; // ebx
  unsigned int v14; // ecx
  unsigned __int64 *v15; // rax
  __int64 v16; // rsi
  bool v17; // zf
  _QWORD *v18; // rcx
  unsigned int v19; // ebx
  __int64 v20; // rsi
  unsigned __int64 v21; // rcx
  _QWORD *PoolWithQuotaTag; // rax
  _QWORD *v23; // rcx
  int v24; // [rsp+20h] [rbp-48h]
  int v25; // [rsp+24h] [rbp-44h]
  unsigned __int64 v26; // [rsp+28h] [rbp-40h]
  unsigned __int64 v27; // [rsp+30h] [rbp-38h]
  char *P; // [rsp+80h] [rbp+18h]

  if ( (a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v26 = *(_QWORD *)(a1 + 48);
  v2 = *(_QWORD *)(a1 + 40);
  v27 = v2;
  if ( v2 < v26 )
    return 3221225621LL;
  v3 = v2 - v26;
  if ( v3 > 0xFFFFFFFF )
    return 3221225621LL;
  v25 = v3;
  v4 = *(_DWORD *)(a1 + 84);
  if ( v4 > 0x15555555 )
    return 3221225621LL;
  v24 = 12 * v4;
  P = 0LL;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->Process;
  --CurrentThread->SpecialApcDisable;
  v8 = (volatile signed __int64 *)&Process[2].Affinity.Bitmap[19];
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&Process[2].Affinity.Bitmap[19], 0LL);
  v12 = (_QWORD *)Process[2].Affinity.Bitmap[18];
  if ( v12 )
  {
    v13 = *(_DWORD *)v12;
    v14 = *((_DWORD *)v12 + 1);
  }
  else
  {
    v13 = 0;
    v14 = 0;
  }
  if ( v13 + 1 > v14 )
  {
    v20 = v14 + 10;
    if ( (unsigned int)v20 < v14 )
    {
      v19 = -1073741675;
      goto LABEL_23;
    }
    v21 = 24 * v20 + 16;
    if ( v21 >= 0xFFFFFFFF )
    {
      v19 = -1073741675;
      goto LABEL_23;
    }
    P = (char *)Process[2].Affinity.Bitmap[18];
    PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, (unsigned int)v21, 0x46447452u);
    v12 = PoolWithQuotaTag;
    if ( !PoolWithQuotaTag )
    {
      v19 = -1073741670;
      v9 = 0LL;
      P = 0LL;
      goto LABEL_23;
    }
    v23 = PoolWithQuotaTag + 2;
    if ( v13 )
    {
      memmove(v23, P + 16, 24LL * v13);
      v11 = 1LL;
    }
    else
    {
      *v23 = 0LL;
      PoolWithQuotaTag[3] = 0LL;
      PoolWithQuotaTag[4] = 0LL;
      v11 = 1LL;
      v13 = 1;
    }
    *(_DWORD *)v12 = v13;
    *((_DWORD *)v12 + 1) = v20;
    *((_BYTE *)v12 + 12) = 0;
    Process[2].Affinity.Bitmap[18] = (unsigned __int64)v12;
  }
  else
  {
    v11 = 1LL;
  }
  if ( v13 > 1 )
  {
    v15 = v12 + 6;
    do
    {
      if ( v26 < *v15 )
        break;
      v11 = (unsigned int)(v11 + 1);
      v15 += 3;
    }
    while ( (unsigned int)v11 < v13 );
  }
  if ( v12[3 * (unsigned int)(v11 - 1) + 3] + (unsigned __int64)LODWORD(v12[3 * (unsigned int)(v11 - 1) + 4]) > v26 )
  {
    v19 = -1073741800;
  }
  else
  {
    v16 = (unsigned int)v11;
    v17 = (_DWORD)v11 == v13;
    if ( (unsigned int)v11 >= v13 )
    {
LABEL_20:
      if ( !v17 )
        memmove(
          &v12[2 * (unsigned int)(v11 + 1) + 2 + (unsigned int)(v11 + 1)],
          &v12[2 * (unsigned int)v11 + 2 + (unsigned int)v11],
          24LL * (v13 - (unsigned int)v11));
      v18 = &v12[3 * v16];
      v18[2] = a1;
      v18[3] = v26;
      *((_DWORD *)v18 + 8) = v25;
      *((_DWORD *)v18 + 9) = v24;
      *(_DWORD *)v12 = v13 + 1;
      v19 = 0;
      goto LABEL_23;
    }
    if ( v12[3 * (unsigned int)v11 + 3] >= v27 )
    {
      v17 = (_DWORD)v11 == v13;
      goto LABEL_20;
    }
    v19 = -1073741800;
  }
LABEL_23:
  if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v8, v9, v10, v11);
  KeAbPostRelease((ULONG_PTR)v8);
  KiLeaveGuardedRegionUnsafe(CurrentThread);
  if ( P )
    ExFreePoolWithTag(P, 0x46447452u);
  return v19;
}
