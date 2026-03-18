/*
 * XREFs of EtwpAddRegEntryToGroup @ 0x1404F2698
 * Callers:
 *     EtwpSetProviderTraitsUm @ 0x1404F22A0 (EtwpSetProviderTraitsUm.c)
 *     EtwpSetProviderTraitsKm @ 0x1405892F4 (EtwpSetProviderTraitsKm.c)
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     KeLeaveCriticalRegion @ 0x1400EEB00 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     EtwpProviderArrivalCallback @ 0x140448030 (EtwpProviderArrivalCallback.c)
 *     EtwpGetSchematizedFilterSize @ 0x1404808F0 (EtwpGetSchematizedFilterSize.c)
 *     EtwpUnreferenceGuidEntry @ 0x140480BE4 (EtwpUnreferenceGuidEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x140480CD0 (EtwpFindGuidEntryByGuid.c)
 *     EtwpReferenceGuidEntry @ 0x140480DC8 (EtwpReferenceGuidEntry.c)
 *     EtwpApplyScopeFilters @ 0x140480E10 (EtwpApplyScopeFilters.c)
 *     EtwpComputeRegEntryEnableInfo @ 0x1404F218C (EtwpComputeRegEntryEnableInfo.c)
 *     EtwpAccessCheck @ 0x1404F2AB8 (EtwpAccessCheck.c)
 *     EtwpReleaseLoggerContext @ 0x1404F2B5C (EtwpReleaseLoggerContext.c)
 *     EtwpIsGuidAllowed @ 0x1404F2BA0 (EtwpIsGuidAllowed.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1404F2C44 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpAccessCheckFromState @ 0x1404F2D14 (EtwpAccessCheckFromState.c)
 *     EtwpAddGuidEntry @ 0x140554888 (EtwpAddGuidEntry.c)
 *     EtwpEventWriteGroupJoin @ 0x14070D78C (EtwpEventWriteGroupJoin.c)
 *     EtwpCopySchematizedFilters @ 0x140712A08 (EtwpCopySchematizedFilters.c)
 */

__int64 __fastcall EtwpAddRegEntryToGroup(__int64 a1, _DWORD *a2, __int64 a3, unsigned int a4, unsigned int *a5)
{
  unsigned int *v5; // rsi
  __int64 v8; // rax
  __int64 v10; // r13
  ULONG_PTR v11; // r14
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v13; // rax
  int v14; // edi
  int SchematizedFilterSize; // eax
  __int64 v16; // r8
  _QWORD *v17; // rcx
  __int64 v18; // rdx
  _QWORD *v19; // rax
  unsigned __int8 v20; // si
  unsigned __int16 *v21; // rdi
  unsigned __int8 v22; // r12
  bool v23; // zf
  char v24; // al
  __int64 v25; // r15
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v30; // r13
  void (__fastcall *v31)(GUID *, __int64, __int64, _QWORD, _QWORD, PVOID *, _QWORD); // r15
  PVOID PoolWithTag; // rsi
  __int64 v33; // r8
  int v34; // r13d
  __int64 v35; // r15
  unsigned __int8 v36; // r12
  __int64 v37; // r13
  __int64 v38; // rax
  char v39[3]; // [rsp+41h] [rbp-90h] BYREF
  int v40; // [rsp+44h] [rbp-8Dh]
  __int64 v41; // [rsp+48h] [rbp-89h]
  SIZE_T NumberOfBytes; // [rsp+50h] [rbp-81h]
  unsigned __int16 *v43; // [rsp+58h] [rbp-79h]
  _QWORD *GuidEntryByGuid; // [rsp+60h] [rbp-71h]
  __int64 v45; // [rsp+68h] [rbp-69h]
  PVOID *v46; // [rsp+70h] [rbp-61h]
  unsigned int *v47; // [rsp+78h] [rbp-59h]
  _QWORD v48[5]; // [rsp+80h] [rbp-51h] BYREF
  PVOID v49; // [rsp+A8h] [rbp-29h] BYREF
  int v50; // [rsp+B0h] [rbp-21h]
  unsigned int v51; // [rsp+B4h] [rbp-1Dh]
  $5BC46E0569261879018906DEC3127961 v52; // [rsp+B8h] [rbp-19h] BYREF

  v5 = a5;
  v46 = 0LL;
  v8 = *(_QWORD *)(a1 + 32);
  v45 = a3;
  v47 = a5;
  v10 = *(_QWORD *)(v8 + 376);
  v41 = v10;
  GuidEntryByGuid = EtwpFindGuidEntryByGuid(v10, a2, 2);
  v11 = (ULONG_PTR)GuidEntryByGuid;
  if ( !GuidEntryByGuid )
  {
    GuidEntryByGuid = (_QWORD *)EtwpAddGuidEntry(v10, a2, 2LL);
    v11 = (ULONG_PTR)GuidEntryByGuid;
    if ( !GuidEntryByGuid )
      return (unsigned int)-1073741801;
  }
  *a5 = 120;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(v11 + 384, 0LL);
  *(_QWORD *)(v11 + 392) = KeGetCurrentThread();
  v13 = KeGetCurrentThread();
  --v13->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(*(_QWORD *)(a1 + 32) + 384LL, 0LL);
  *(_QWORD *)(*(_QWORD *)(a1 + 32) + 392LL) = KeGetCurrentThread();
  if ( *(_QWORD *)(a1 + 40) )
  {
LABEL_31:
    v14 = 0;
    goto LABEL_18;
  }
  v14 = EtwpAccessCheck(*(PSECURITY_DESCRIPTOR *)(v11 + 56), 0x1000u);
  if ( v14 >= 0 )
  {
    SchematizedFilterSize = EtwpGetSchematizedFilterSize(*(_QWORD *)(a1 + 32), *(_BYTE *)(a1 + 100));
    LODWORD(NumberOfBytes) = SchematizedFilterSize;
    if ( SchematizedFilterSize )
      *a5 += SchematizedFilterSize + 16;
    if ( (*(_BYTE *)(a1 + 98) & 2) != 0 && *a5 > a4 )
    {
      v14 = -1073741789;
      goto LABEL_18;
    }
    EtwpReferenceGuidEntry(v11);
    v17 = (_QWORD *)(v11 + 40);
    *(_QWORD *)(a1 + 40) = v11;
    v18 = *(_QWORD *)(v11 + 40);
    v19 = (_QWORD *)(a1 + 16);
    if ( *(_QWORD *)(v18 + 8) != v11 + 40 )
      __fastfail(3u);
    *v19 = v18;
    *(_QWORD *)(a1 + 24) = v17;
    *(_QWORD *)(v18 + 8) = v19;
    *v17 = v19;
    if ( *(_DWORD *)(v11 + 80) )
    {
      v20 = 0;
      v21 = (unsigned __int16 *)(v11 + 118);
      v22 = 0;
      v43 = (unsigned __int16 *)(v11 + 118);
      do
      {
        if ( *(_DWORD *)(v21 - 3) )
        {
          v30 = EtwpAcquireLoggerContextByLoggerId(v41, *v21, 0LL);
          if ( (unsigned __int8)EtwpIsGuidAllowed(v30, *(_QWORD *)(a1 + 32) + 24LL) )
          {
            ExAcquirePushLockSharedEx(v30 + 688, 0LL);
            if ( *(_QWORD *)(v30 + 776) )
              v40 = EtwpAccessCheckFromState(*(_QWORD *)(a1 + 32) + 24LL);
            else
              v40 = -1073741790;
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v30 + 688), 0LL, 17LL) != 17 )
              ExfReleasePushLockShared((signed __int64 *)(v30 + 688));
            KeAbPostRelease(v30 + 688);
            if ( v40 >= 0 )
              v20 += 1 << v22;
            EtwpReleaseLoggerContext(v30, 0LL);
            v21 = v43;
          }
          else
          {
            EtwpReleaseLoggerContext(v30, 0LL);
          }
        }
        v21 += 16;
        ++v22;
        v43 = v21;
      }
      while ( v22 < 8u );
      v39[0] = v20;
      LOBYTE(v16) = 2;
      v14 = 0;
      EtwpApplyScopeFilters(a1, 0, v16, v39);
      v11 = (ULONG_PTR)GuidEntryByGuid;
      v24 = v20 & v39[0];
      v23 = (v20 & v39[0]) == 0;
      v5 = v47;
      v25 = v45;
      *(_BYTE *)(a1 + 101) = v24;
      if ( !v23 )
      {
        if ( (*(_BYTE *)(a1 + 98) & 0x20) != 0 )
        {
          v35 = v41;
          v36 = 0;
          v37 = 0LL;
          do
          {
            if ( ((unsigned __int8)(1 << v36) & *(_BYTE *)(a1 + 101)) != 0 )
            {
              v38 = EtwpAcquireLoggerContextByLoggerId(
                      v35,
                      *(unsigned __int16 *)(*(_QWORD *)(a1 + 40) + v37 + 118),
                      0LL);
              v23 = (*(_BYTE *)(a1 + 98) & 1) == 0;
              v41 = v38;
              if ( v23 )
              {
                if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(a1 + 80) + 760LL)) )
                {
                  KiStackAttachProcess(*(_KPROCESS **)(a1 + 80), 0, (__int64)&v52);
                  EtwpProviderArrivalCallback(v41, 1, a1);
                  KiUnstackDetachProcess(&v52, 0LL);
                  ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(a1 + 80) + 760LL));
                }
              }
              else
              {
                EtwpProviderArrivalCallback(v38, 0, a1);
              }
              EtwpReleaseLoggerContext(v41, 0LL);
            }
            ++v36;
            v37 += 32LL;
          }
          while ( v36 < 8u );
          v25 = v45;
        }
        if ( (*(_BYTE *)(a1 + 98) & 1) != 0 )
        {
          v31 = *(void (__fastcall **)(GUID *, __int64, __int64, _QWORD, _QWORD, PVOID *, _QWORD))(a1 + 88);
          if ( v31 )
          {
            PoolWithTag = 0LL;
            memset(v48, 0, 0x20uLL);
            EtwpComputeRegEntryEnableInfo(a1, (unsigned __int8 *)v48);
            v34 = NumberOfBytes;
            if ( (_DWORD)NumberOfBytes )
            {
              PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x46777445u);
              if ( PoolWithTag )
              {
                v46 = &v49;
                v49 = PoolWithTag;
                v50 = v34;
                v51 = 0x80000000;
                EtwpCopySchematizedFilters(PoolWithTag);
              }
            }
            LOBYTE(v33) = BYTE4(v48[0]);
            v31(&NullGuid, 1LL, v33, v48[2], v48[3], v46, *(_QWORD *)(a1 + 80));
            if ( PoolWithTag )
              ExFreePoolWithTag(PoolWithTag, 0);
          }
        }
        else
        {
          EtwpComputeRegEntryEnableInfo(a1, (unsigned __int8 *)(v25 + 72));
          *v5 = 120;
          v26 = EtwpGetSchematizedFilterSize(*(_QWORD *)(a1 + 32), *(_BYTE *)(a1 + 100));
          if ( v26 )
          {
            *v5 = v26 + 136;
            *(_DWORD *)(v25 + 132) = 0x80000000;
            *(_DWORD *)(v25 + 128) = v26;
            *(_QWORD *)(v25 + 120) = 136LL;
            EtwpCopySchematizedFilters((void *)(v25 + 136));
            *(_DWORD *)(v25 + 116) = 1;
          }
          else
          {
            *(_DWORD *)(v25 + 116) = 0;
          }
        }
        goto LABEL_18;
      }
    }
    *v5 = 0;
    goto LABEL_31;
  }
LABEL_18:
  *(_QWORD *)(*(_QWORD *)(a1 + 32) + 392LL) = 0LL;
  ExReleasePushLockEx(*(_QWORD *)(a1 + 32) + 384LL, 0LL);
  KeLeaveCriticalRegion();
  *(_QWORD *)(v11 + 392) = 0LL;
  ExReleasePushLockEx(v11 + 384, 0LL);
  KeLeaveCriticalRegion();
  EtwpUnreferenceGuidEntry((_QWORD *)v11);
  if ( v14 >= 0 && EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_GROUP_JOIN) )
    EtwpEventWriteGroupJoin(v28, v27, a1);
  return (unsigned int)v14;
}
