/*
 * XREFs of EtwpAddRegEntryToGroup @ 0x14058F4F0
 * Callers:
 *     EtwpSetProviderTraitsCommon @ 0x140591004 (EtwpSetProviderTraitsCommon.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     EtwEventEnabled @ 0x1400F3870 (EtwEventEnabled.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     EtwpProviderArrivalCallback @ 0x14058C90C (EtwpProviderArrivalCallback.c)
 *     EtwpAddGuidEntry @ 0x14058E46C (EtwpAddGuidEntry.c)
 *     EtwpAccessCheck @ 0x14058F44C (EtwpAccessCheck.c)
 *     EtwpGetSchematizedFilterSize @ 0x140590420 (EtwpGetSchematizedFilterSize.c)
 *     EtwpUnreferenceGuidEntry @ 0x1405906D4 (EtwpUnreferenceGuidEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x1405907D0 (EtwpFindGuidEntryByGuid.c)
 *     EtwpReferenceGuidEntry @ 0x1405908C8 (EtwpReferenceGuidEntry.c)
 *     EtwpApplyScopeFilters @ 0x14059090C (EtwpApplyScopeFilters.c)
 *     EtwpReleaseLoggerContext @ 0x140590D4C (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140590D94 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpComputeRegEntryEnableInfo @ 0x140591660 (EtwpComputeRegEntryEnableInfo.c)
 *     EtwpAccessCheckFromState @ 0x140591764 (EtwpAccessCheckFromState.c)
 *     EtwpIsGuidAllowed @ 0x140591820 (EtwpIsGuidAllowed.c)
 *     EtwpEventWriteGroupJoin @ 0x1407AADCC (EtwpEventWriteGroupJoin.c)
 *     EtwpCopySchematizedFilters @ 0x1407B17C4 (EtwpCopySchematizedFilters.c)
 */

__int64 __fastcall EtwpAddRegEntryToGroup(__int64 a1, _DWORD *a2, __int64 a3, unsigned int a4, unsigned int *a5)
{
  unsigned __int8 v5; // r13
  __int64 v7; // rax
  char *v10; // r14
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v12; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  int v16; // edi
  int SchematizedFilterSize; // eax
  _QWORD *v18; // rcx
  __int64 v19; // rdx
  _QWORD *v20; // rax
  unsigned __int8 v21; // r12
  unsigned __int16 *v22; // rdi
  unsigned __int8 v23; // r12
  unsigned int *v24; // rsi
  bool v25; // zf
  __int64 v26; // rsi
  __int64 v27; // r15
  unsigned int *v28; // rsi
  __int64 v29; // r15
  __int64 v30; // rdx
  int v31; // eax
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v37; // r13
  __int16 v38; // ax
  __int64 v39; // r13
  void (__fastcall *v40)(GUID *, __int64, __int64, _QWORD, _QWORD, PVOID *, _QWORD); // r15
  PVOID PoolWithTag; // rsi
  __int64 v42; // r8
  int v43; // r13d
  unsigned __int8 v44; // [rsp+40h] [rbp-91h]
  char v45[3]; // [rsp+41h] [rbp-90h] BYREF
  int v46; // [rsp+44h] [rbp-8Dh]
  SIZE_T NumberOfBytes; // [rsp+48h] [rbp-89h]
  unsigned __int16 *v48; // [rsp+50h] [rbp-81h]
  __int64 v49; // [rsp+58h] [rbp-79h]
  PVOID P; // [rsp+60h] [rbp-71h]
  unsigned int *v51; // [rsp+68h] [rbp-69h]
  __int64 v52; // [rsp+70h] [rbp-61h]
  PVOID *v53; // [rsp+78h] [rbp-59h]
  _QWORD v54[5]; // [rsp+80h] [rbp-51h] BYREF
  PVOID v55; // [rsp+A8h] [rbp-29h] BYREF
  int v56; // [rsp+B0h] [rbp-21h]
  unsigned int v57; // [rsp+B4h] [rbp-1Dh]
  _BYTE v58[48]; // [rsp+B8h] [rbp-19h] BYREF

  v5 = 0;
  v44 = 0;
  v53 = 0LL;
  v7 = *(_QWORD *)(a1 + 32);
  v52 = a3;
  v51 = a5;
  v49 = *(_QWORD *)(v7 + 376);
  P = (PVOID)EtwpFindGuidEntryByGuid(v49, a2, 2LL);
  v10 = (char *)P;
  if ( !P )
  {
    P = (PVOID)EtwpAddGuidEntry(v49, a2, 2);
    v10 = (char *)P;
    if ( !P )
      return (unsigned int)-1073741801;
  }
  *a5 = 120;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(v10 + 384), 0LL);
  *((_QWORD *)v10 + 49) = KeGetCurrentThread();
  v12 = KeGetCurrentThread();
  --v12->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(*(_QWORD *)(a1 + 32) + 384LL, 0LL);
  *(_QWORD *)(*(_QWORD *)(a1 + 32) + 392LL) = KeGetCurrentThread();
  if ( *(_QWORD *)(a1 + 40) )
  {
LABEL_35:
    v16 = 0;
    goto LABEL_20;
  }
  v16 = EtwpAccessCheck(*((PSECURITY_DESCRIPTOR *)v10 + 7), 0x1000u, 0LL);
  if ( v16 < 0 )
    goto LABEL_20;
  LOBYTE(v15) = *(_BYTE *)(a1 + 100);
  SchematizedFilterSize = EtwpGetSchematizedFilterSize(*(_QWORD *)(a1 + 32), v15);
  LODWORD(NumberOfBytes) = SchematizedFilterSize;
  if ( SchematizedFilterSize )
    *a5 += SchematizedFilterSize + 16;
  if ( (*(_BYTE *)(a1 + 98) & 2) != 0 && *a5 > a4 )
  {
    v16 = -1073741789;
    goto LABEL_20;
  }
  EtwpReferenceGuidEntry((ULONG_PTR)v10);
  v18 = v10 + 40;
  *(_QWORD *)(a1 + 40) = v10;
  v19 = *((_QWORD *)v10 + 5);
  v20 = (_QWORD *)(a1 + 16);
  if ( *(char **)(v19 + 8) != v10 + 40 )
    __fastfail(3u);
  *v20 = v19;
  v21 = 0;
  *(_QWORD *)(a1 + 24) = v18;
  *(_QWORD *)(v19 + 8) = v20;
  *v18 = v20;
  if ( !*((_DWORD *)v10 + 20) )
  {
    *a5 = 0;
    goto LABEL_35;
  }
  v22 = (unsigned __int16 *)(v10 + 118);
  v48 = (unsigned __int16 *)(v10 + 118);
  do
  {
    if ( !*(_DWORD *)(v22 - 3) )
      goto LABEL_12;
    v39 = EtwpAcquireLoggerContextByLoggerId(v49, *v22, 0LL);
    if ( (unsigned __int8)EtwpIsGuidAllowed(v39, *(_QWORD *)(a1 + 32) + 24LL) )
    {
      ExAcquirePushLockSharedEx(v39 + 704, 0LL);
      if ( *(_QWORD *)(v39 + 792) )
        v46 = EtwpAccessCheckFromState(*(_QWORD *)(a1 + 32) + 24LL);
      else
        v46 = -1073741790;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v39 + 704), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v39 + 704));
      KeAbPostRelease(v39 + 704);
      EtwpReleaseLoggerContext(v39, 0LL);
      v22 = v48;
      if ( v46 >= 0 )
      {
        v5 = (1 << v21) + v44;
        v44 = v5;
        goto LABEL_12;
      }
    }
    else
    {
      EtwpReleaseLoggerContext(v39, 0LL);
    }
    v5 = v44;
LABEL_12:
    v22 += 16;
    ++v21;
    v48 = v22;
  }
  while ( v21 < 8u );
  v23 = 0;
  v45[0] = v5;
  LOBYTE(v13) = 2;
  v16 = 0;
  EtwpApplyScopeFilters(a1, 0LL, v13, v45);
  v24 = v51;
  v25 = (v5 & v45[0]) == 0;
  *(_BYTE *)(a1 + 101) = v5 & v45[0];
  if ( v25 )
  {
    *v24 = 0;
  }
  else
  {
    v26 = v49;
    v27 = 0LL;
    do
    {
      if ( ((unsigned __int8)(1 << v23) & *(_BYTE *)(a1 + 101)) != 0 )
      {
        v37 = EtwpAcquireLoggerContextByLoggerId(v26, *(unsigned __int16 *)(v27 + *(_QWORD *)(a1 + 40) + 118), 0LL);
        v38 = *(_WORD *)(a1 + 98);
        if ( (v38 & 0x20) != 0 || (*(_DWORD *)(v37 + 832) & 0x2000000) != 0 )
        {
          if ( (v38 & 1) != 0 )
          {
            EtwpProviderArrivalCallback(v37, 0, a1);
          }
          else if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(a1 + 80) + 760LL)) )
          {
            KiStackAttachProcess(*(_KPROCESS **)(a1 + 80), 0, (__int64)v58);
            EtwpProviderArrivalCallback(v37, 1, a1);
            KiUnstackDetachProcess((__int64)v58, 0LL);
            ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(a1 + 80) + 760LL));
          }
        }
        EtwpReleaseLoggerContext(v37, 0LL);
      }
      ++v23;
      v27 += 32LL;
    }
    while ( v23 < 8u );
    v10 = (char *)P;
    v28 = v51;
    v29 = v52;
    if ( (*(_BYTE *)(a1 + 98) & 1) != 0 )
    {
      v40 = *(void (__fastcall **)(GUID *, __int64, __int64, _QWORD, _QWORD, PVOID *, _QWORD))(a1 + 88);
      if ( v40 )
      {
        PoolWithTag = 0LL;
        memset(v54, 0, 0x20uLL);
        EtwpComputeRegEntryEnableInfo(a1, v54);
        v43 = NumberOfBytes;
        if ( (_DWORD)NumberOfBytes )
        {
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x46777445u);
          if ( PoolWithTag )
          {
            v53 = &v55;
            v55 = PoolWithTag;
            v56 = v43;
            v57 = 0x80000000;
            EtwpCopySchematizedFilters(PoolWithTag);
          }
        }
        LOBYTE(v42) = BYTE4(v54[0]);
        v40(&NullGuid, 1LL, v42, v54[2], v54[3], v53, *(_QWORD *)(a1 + 80));
        if ( PoolWithTag )
          ExFreePoolWithTag(PoolWithTag, 0);
      }
    }
    else
    {
      EtwpComputeRegEntryEnableInfo(a1, v52 + 72);
      *v28 = 120;
      LOBYTE(v30) = *(_BYTE *)(a1 + 100);
      v31 = EtwpGetSchematizedFilterSize(*(_QWORD *)(a1 + 32), v30);
      if ( v31 )
      {
        *v28 = v31 + 136;
        *(_DWORD *)(v29 + 132) = 0x80000000;
        *(_DWORD *)(v29 + 128) = v31;
        *(_QWORD *)(v29 + 120) = 136LL;
        EtwpCopySchematizedFilters((void *)(v29 + 136));
        *(_DWORD *)(v29 + 116) = 1;
      }
      else
      {
        *(_DWORD *)(v29 + 116) = 0;
      }
    }
  }
LABEL_20:
  *(_QWORD *)(*(_QWORD *)(a1 + 32) + 392LL) = 0LL;
  ExReleasePushLockEx(*(_QWORD *)(a1 + 32) + 384LL, 0LL, v13, v14);
  KeLeaveCriticalRegion();
  *((_QWORD *)v10 + 49) = 0LL;
  ExReleasePushLockEx((ULONG_PTR)(v10 + 384), 0LL, v32, v33);
  KeLeaveCriticalRegion();
  EtwpUnreferenceGuidEntry(v10);
  if ( v16 >= 0 && EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_GROUP_JOIN) )
    EtwpEventWriteGroupJoin(v35, v34, a1);
  return (unsigned int)v16;
}
