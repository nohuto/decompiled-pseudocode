/*
 * XREFs of CmEnumerateKey @ 0x1404ACAA0
 * Callers:
 *     NtEnumerateKey @ 0x1404AC500 (NtEnumerateKey.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     PsBoostThreadIo @ 0x1400FE2B0 (PsBoostThreadIo.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquireResourceSharedLite @ 0x140100120 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     CmpLockRegistryExclusive @ 0x14049BC8C (CmpLockRegistryExclusive.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x1404A339C (CmpUpdateKeyNodeAccessBits.c)
 *     CmpDereferenceKeyControlBlock @ 0x1404A86C0 (CmpDereferenceKeyControlBlock.c)
 *     CmpQueryKeyDataFromNode @ 0x1404AC0B0 (CmpQueryKeyDataFromNode.c)
 *     CmpUnlockTwoKcbs @ 0x1404ACE30 (CmpUnlockTwoKcbs.c)
 *     CmpLockTwoKcbsShared @ 0x1404ACECC (CmpLockTwoKcbsShared.c)
 *     CmpFindSubKeyByNumberEx @ 0x1404ACF50 (CmpFindSubKeyByNumberEx.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1404AD468 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1404AECB0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x14054BFC8 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpEnumerateLayeredKey @ 0x1406F2910 (CmpEnumerateLayeredKey.c)
 *     CmpFindSubKeyByNumberFromMergedView @ 0x1406F517C (CmpFindSubKeyByNumberFromMergedView.c)
 */

__int64 __fastcall CmEnumerateKey(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5,
        unsigned int a6,
        unsigned int *a7)
{
  unsigned int v7; // edi
  int v10; // r14d
  __int64 v12; // r12
  struct _KTHREAD *CurrentThread; // rax
  __int64 v14; // rsi
  __int64 v15; // r13
  ULONG_PTR v16; // rbx
  int v17; // edx
  ULONG_PTR *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  int SubKeyByNumberFromMergedView; // r14d
  unsigned int v22; // r14d
  __int64 v23; // rax
  __int64 v24; // r15
  __int64 v25; // rdx
  int v27; // eax
  ULONG_PTR *p_BugCheckParameter2; // rax
  int v29; // edx
  int v30; // ecx
  __int64 v32; // [rsp+48h] [rbp-79h] BYREF
  unsigned int v33; // [rsp+50h] [rbp-71h] BYREF
  __int64 v34; // [rsp+58h] [rbp-69h] BYREF
  ULONG_PTR v35; // [rsp+60h] [rbp-61h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+68h] [rbp-59h] BYREF
  int v37; // [rsp+70h] [rbp-51h]
  unsigned int *v38; // [rsp+78h] [rbp-49h]
  __int64 v39; // [rsp+80h] [rbp-41h]
  __int64 v40; // [rsp+88h] [rbp-39h] BYREF
  _BYTE v41[8]; // [rsp+90h] [rbp-31h] BYREF
  _BYTE v42[48]; // [rsp+98h] [rbp-29h] BYREF

  v7 = 0;
  v39 = a5;
  v38 = a7;
  v10 = a3;
  v32 = 0xFFFFFFFFLL;
  v12 = 0LL;
  v37 = a4;
  v35 = 0LL;
  v34 = 0LL;
  BugCheckParameter2 = 0LL;
  v40 = 0LL;
  if ( qword_1403CA2E8 )
  {
    KiStackAttachProcess((_KPROCESS *)qword_1403CA2E8, 0, (__int64)v42);
  }
  else
  {
    KiStackAttachProcess(KeGetCurrentThread()->ApcState.Process, 0, (__int64)v42);
    v12 = v34;
  }
  if ( *(_WORD *)(*(_QWORD *)(a1 + 8) + 58LL) )
  {
    while ( 1 )
    {
      v27 = CmpEnumerateLayeredKey(a1, v10, a4, v39, a6, (__int64)v38, (__int64)&v40, v7++ <= 0xA);
      SubKeyByNumberFromMergedView = v27;
      if ( v27 != -1073741267 )
        break;
      v10 = a3;
    }
    goto LABEL_28;
  }
  if ( *(_QWORD *)(a1 + 56) || *(_QWORD *)(a1 + 64) )
  {
    CmpLockRegistryExclusive();
  }
  else if ( !CmpPuntBoot )
  {
    PsBoostThreadIo((__int64)KeGetCurrentThread(), 0LL);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite((PERESOURCE)&CmpRegistryLock, 1u);
    v12 = v34;
  }
  v14 = *(_QWORD *)(a1 + 8);
  if ( a2 )
    v15 = *(_QWORD *)(a2 + 8);
  else
    v15 = 0LL;
  CmpLockTwoKcbsShared(v15, *(_QWORD *)(a1 + 8));
  if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, 0LL) )
  {
    if ( (*(_DWORD *)(a1 + 48) & 1) != 0 )
      SubKeyByNumberFromMergedView = -1073740763;
    else
      SubKeyByNumberFromMergedView = -1073741444;
    goto LABEL_24;
  }
  if ( *(_QWORD *)(a1 + 56) || *(_QWORD *)(a1 + 64) )
  {
    SubKeyByNumberFromMergedView = CmpTransSearchAddTransFromKeyBody(a1, &v34);
    if ( SubKeyByNumberFromMergedView < 0 )
      goto LABEL_24;
    v12 = v34;
    SubKeyByNumberFromMergedView = CmpPerformKeyBodyDeletionCheck(a1, v34);
    if ( SubKeyByNumberFromMergedView < 0 )
      goto LABEL_24;
    v10 = a3;
  }
  if ( a2 )
  {
    SubKeyByNumberFromMergedView = CmpPerformKeyBodyDeletionCheck(a2, v12);
    if ( SubKeyByNumberFromMergedView < 0 )
      goto LABEL_24;
    v10 = a3;
LABEL_49:
    p_BugCheckParameter2 = &BugCheckParameter2;
    if ( !v12 )
      p_BugCheckParameter2 = 0LL;
    v29 = v14;
    v30 = v15;
    if ( !a2 )
    {
      v29 = 0;
      v30 = v14;
    }
    SubKeyByNumberFromMergedView = CmpFindSubKeyByNumberFromMergedView(
                                     v30,
                                     v29,
                                     v10,
                                     v12,
                                     (__int64)&v35,
                                     (__int64)&v33,
                                     (__int64)p_BugCheckParameter2,
                                     (__int64)v41);
    if ( SubKeyByNumberFromMergedView < 0 )
      goto LABEL_24;
    v16 = v35;
    goto LABEL_19;
  }
  if ( CmpVEEnabled && (*(_DWORD *)(v14 + 176) & 0x1000000) != 0 )
    goto LABEL_49;
  v16 = *(_QWORD *)(v14 + 24);
  v17 = *(_DWORD *)(v14 + 32);
  v35 = v16;
  if ( v12 )
  {
    v18 = &BugCheckParameter2;
    v19 = v15;
    v20 = v14;
  }
  else
  {
    v18 = 0LL;
    v19 = 0LL;
    v20 = 0LL;
  }
  SubKeyByNumberFromMergedView = CmpFindSubKeyByNumberEx(v16, v17, v10, (unsigned int)&v33, v20, v19, v12, (__int64)v18);
  if ( SubKeyByNumberFromMergedView >= 0 )
  {
LABEL_19:
    v22 = v33;
    if ( v33 == -1 )
    {
      SubKeyByNumberFromMergedView = -2147483622;
    }
    else
    {
      v23 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(v16 + 8))(v16, v33, &v32);
      v24 = v23;
      if ( (*(_DWORD *)(v16 + 160) & 0x8001) == 0 && (*(_BYTE *)(v23 + 12) & (unsigned __int8)CmpAccessBitForPhase) == 0 )
      {
        (*(void (__fastcall **)(ULONG_PTR, __int64 *))(v16 + 16))(v16, &v32);
        ExAcquirePushLockSharedEx(v16 + 72, 0LL);
        v24 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(v16 + 8))(v16, v22, &v32);
        CmpUpdateKeyNodeAccessBits(v16, v24, v22);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v16 + 72), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v16 + 72));
        KeAbPostRelease(v16 + 72);
        v16 = v35;
        v12 = v34;
      }
      SubKeyByNumberFromMergedView = CmpQueryKeyDataFromNode(v16, v24, v37, v39, a6, v38, BugCheckParameter2, v12);
      if ( v24 )
        (*(void (__fastcall **)(ULONG_PTR, __int64 *))(v16 + 16))(v16, &v32);
    }
  }
LABEL_24:
  CmpUnlockTwoKcbs(v15, v14);
  if ( BugCheckParameter2 )
    CmpDereferenceKeyControlBlock(BugCheckParameter2);
  if ( !CmpPuntBoot )
  {
    ExReleaseResourceLite((PERESOURCE)&CmpRegistryLock);
    KeLeaveCriticalRegion();
    LOBYTE(v25) = 1;
    PsBoostThreadIo((__int64)KeGetCurrentThread(), v25);
  }
LABEL_28:
  KiUnstackDetachProcess((__int64)v42, 0LL);
  return (unsigned int)SubKeyByNumberFromMergedView;
}
