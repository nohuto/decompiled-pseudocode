/*
 * XREFs of EtwpAddRegEntryToGroup @ 0x1404901C0
 * Callers:
 *     EtwpSetProviderTraitsCommon @ 0x14048E848 (EtwpSetProviderTraitsCommon.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     EtwEventEnabled @ 0x1400A0940 (EtwEventEnabled.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     EtwpAddGuidEntry @ 0x14048972C (EtwpAddGuidEntry.c)
 *     EtwpComputeRegEntryEnableInfo @ 0x14048E508 (EtwpComputeRegEntryEnableInfo.c)
 *     EtwpIsGuidAllowed @ 0x14048E60C (EtwpIsGuidAllowed.c)
 *     EtwpAccessCheck @ 0x140490118 (EtwpAccessCheck.c)
 *     EtwpGetSchematizedFilterSize @ 0x140491B04 (EtwpGetSchematizedFilterSize.c)
 *     EtwpUnreferenceGuidEntry @ 0x140491D2C (EtwpUnreferenceGuidEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x140491E20 (EtwpFindGuidEntryByGuid.c)
 *     EtwpReferenceGuidEntry @ 0x140491F18 (EtwpReferenceGuidEntry.c)
 *     EtwpApplyScopeFilters @ 0x140491F60 (EtwpApplyScopeFilters.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1404921A4 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x14049227C (EtwpReleaseLoggerContext.c)
 *     EtwpAccessCheckFromState @ 0x140492A5C (EtwpAccessCheckFromState.c)
 *     EtwpProviderArrivalCallback @ 0x1404F0FC4 (EtwpProviderArrivalCallback.c)
 *     EtwpEventWriteGroupJoin @ 0x140749100 (EtwpEventWriteGroupJoin.c)
 *     EtwpCopySchematizedFilters @ 0x140750AF0 (EtwpCopySchematizedFilters.c)
 */

__int64 __fastcall EtwpAddRegEntryToGroup(__int64 a1, unsigned int *a2, __int64 a3, unsigned int a4, unsigned int *a5)
{
  __int64 v5; // rax
  int v7; // r14d
  __int64 v10; // rbp
  unsigned __int8 v11; // r12
  ULONG_PTR v12; // r13
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v14; // rax
  int SchematizedFilterSize; // eax
  __int64 v16; // r8
  _QWORD *v17; // rcx
  __int64 v18; // rdx
  _QWORD *v19; // rax
  unsigned __int8 v20; // di
  unsigned __int16 *v21; // rbx
  PVOID *v22; // r15
  bool v23; // zf
  unsigned __int8 v24; // bl
  __int64 v25; // rdi
  __int64 v26; // rbx
  unsigned int *v27; // r15
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v32; // r14
  int v33; // r15d
  __int64 v34; // rbp
  __int16 v35; // ax
  void (__fastcall *v36)(GUID *, __int64, _QWORD, _QWORD, _QWORD, PVOID *, _QWORD); // rbx
  void *v37; // rdi
  int v38; // ebp
  __int64 v39; // rdx
  PVOID PoolWithTag; // rax
  char v41[4]; // [rsp+40h] [rbp-D8h] BYREF
  _DWORD NumberOfBytes[3]; // [rsp+44h] [rbp-D4h]
  char *GuidEntryByGuid; // [rsp+50h] [rbp-C8h]
  unsigned int *v44; // [rsp+60h] [rbp-B8h]
  __int64 v45; // [rsp+68h] [rbp-B0h]
  _QWORD v46[5]; // [rsp+70h] [rbp-A8h] BYREF
  PVOID v47; // [rsp+98h] [rbp-80h] BYREF
  int v48; // [rsp+A0h] [rbp-78h]
  unsigned int v49; // [rsp+A4h] [rbp-74h]
  $709EDFC2F9E0D4565D6AA3C4377BC643 v50; // [rsp+A8h] [rbp-70h] BYREF

  v5 = *(_QWORD *)(a1 + 32);
  v7 = 0;
  v45 = a3;
  v44 = a5;
  v10 = *(_QWORD *)(v5 + 376);
  v11 = 0;
  *(_QWORD *)&NumberOfBytes[1] = v10;
  GuidEntryByGuid = (char *)EtwpFindGuidEntryByGuid(v10, a2, 2LL);
  v12 = (ULONG_PTR)GuidEntryByGuid;
  if ( GuidEntryByGuid || (GuidEntryByGuid = EtwpAddGuidEntry(v10, a2, 2), (v12 = (ULONG_PTR)GuidEntryByGuid) != 0) )
  {
    *a5 = 120;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v12 + 384, 0LL);
    *(_QWORD *)(v12 + 392) = KeGetCurrentThread();
    v14 = KeGetCurrentThread();
    --v14->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(*(_QWORD *)(a1 + 32) + 384LL, 0LL);
    *(_QWORD *)(*(_QWORD *)(a1 + 32) + 392LL) = KeGetCurrentThread();
    if ( !*(_QWORD *)(a1 + 40) )
    {
      v7 = EtwpAccessCheck(*(PSECURITY_DESCRIPTOR *)(v12 + 56), 0x1000u, 0LL);
      if ( v7 >= 0 )
      {
        SchematizedFilterSize = EtwpGetSchematizedFilterSize(*(_QWORD *)(a1 + 32), *(unsigned __int8 *)(a1 + 100));
        NumberOfBytes[0] = SchematizedFilterSize;
        if ( SchematizedFilterSize )
          *a5 += SchematizedFilterSize + 16;
        if ( (*(_BYTE *)(a1 + 98) & 2) != 0 && *a5 > a4 )
        {
          v7 = -1073741789;
        }
        else
        {
          EtwpReferenceGuidEntry(v12);
          v17 = (_QWORD *)(v12 + 40);
          *(_QWORD *)(a1 + 40) = v12;
          v18 = *(_QWORD *)(v12 + 40);
          v19 = (_QWORD *)(a1 + 16);
          if ( *(_QWORD *)(v18 + 8) != v12 + 40 )
            __fastfail(3u);
          *v19 = v18;
          *(_QWORD *)(a1 + 24) = v17;
          *(_QWORD *)(v18 + 8) = v19;
          *v17 = v19;
          if ( *(_DWORD *)(v12 + 80) )
          {
            v20 = 0;
            v21 = (unsigned __int16 *)(v12 + 118);
            do
            {
              if ( *(_DWORD *)(v21 - 3) )
              {
                v32 = EtwpAcquireLoggerContextByLoggerId(v10, *v21, 0LL);
                if ( EtwpIsGuidAllowed(v32, (const void *)(*(_QWORD *)(a1 + 32) + 24LL)) )
                {
                  ExAcquirePushLockSharedEx(v32 + 704, 0LL);
                  if ( *(_QWORD *)(v32 + 792) )
                    v33 = EtwpAccessCheckFromState(*(_QWORD *)(a1 + 32) + 24LL);
                  else
                    v33 = -1073741790;
                  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v32 + 704), 0LL, 17LL) != 17 )
                    ExfReleasePushLockShared((signed __int64 *)(v32 + 704));
                  KeAbPostRelease(v32 + 704);
                  if ( v33 >= 0 )
                    v11 += 1 << v20;
                  EtwpReleaseLoggerContext(v32, 0LL);
                  v10 = *(_QWORD *)&NumberOfBytes[1];
                }
                else
                {
                  EtwpReleaseLoggerContext(v32, 0LL);
                }
              }
              ++v20;
              v21 += 16;
            }
            while ( v20 < 8u );
            v22 = 0LL;
            v41[0] = v11;
            LOBYTE(v16) = 2;
            v7 = 0;
            EtwpApplyScopeFilters(a1, 0LL, v16, v41);
            v12 = (ULONG_PTR)GuidEntryByGuid;
            v23 = (v11 & v41[0]) == 0;
            *(_BYTE *)(a1 + 101) = v11 & v41[0];
            if ( v23 )
            {
              *v44 = 0;
            }
            else
            {
              v24 = 0;
              v25 = 0LL;
              do
              {
                if ( ((unsigned __int8)(1 << v24) & *(_BYTE *)(a1 + 101)) != 0 )
                {
                  v34 = EtwpAcquireLoggerContextByLoggerId(
                          v10,
                          *(unsigned __int16 *)(v25 + *(_QWORD *)(a1 + 40) + 118),
                          0LL);
                  v35 = *(_WORD *)(a1 + 98);
                  if ( (v35 & 0x20) != 0 || (*(_DWORD *)(v34 + 832) & 0x2000000) != 0 )
                  {
                    if ( (v35 & 1) != 0 )
                    {
                      EtwpProviderArrivalCallback(v34, 0LL, a1);
                    }
                    else if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)(a1 + 80) + 760LL)) )
                    {
                      KiStackAttachProcess(*(_KPROCESS **)(a1 + 80), 0, (__int64)&v50);
                      LOBYTE(v39) = 1;
                      EtwpProviderArrivalCallback(v34, v39, a1);
                      KiUnstackDetachProcess(&v50, 0LL);
                      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)(a1 + 80) + 760LL));
                    }
                  }
                  EtwpReleaseLoggerContext(v34, 0LL);
                }
                v10 = *(_QWORD *)&NumberOfBytes[1];
                ++v24;
                v25 += 32LL;
              }
              while ( v24 < 8u );
              if ( (*(_BYTE *)(a1 + 98) & 1) != 0 )
              {
                v36 = *(void (__fastcall **)(GUID *, __int64, _QWORD, _QWORD, _QWORD, PVOID *, _QWORD))(a1 + 88);
                if ( v36 )
                {
                  v37 = 0LL;
                  memset(v46, 0, 0x20uLL);
                  EtwpComputeRegEntryEnableInfo(a1, (unsigned __int8 *)v46);
                  v38 = NumberOfBytes[0];
                  if ( NumberOfBytes[0] )
                  {
                    PoolWithTag = ExAllocatePoolWithTag(PagedPool, NumberOfBytes[0], 0x46777445u);
                    v37 = PoolWithTag;
                    if ( PoolWithTag )
                    {
                      v22 = &v47;
                      v47 = PoolWithTag;
                      v48 = v38;
                      v49 = 0x80000000;
                      EtwpCopySchematizedFilters(PoolWithTag);
                    }
                    else
                    {
                      v22 = 0LL;
                    }
                  }
                  v36(&NullGuid, 1LL, BYTE4(v46[0]), v46[2], v46[3], v22, *(_QWORD *)(a1 + 80));
                  if ( v37 )
                    ExFreePoolWithTag(v37, 0);
                }
              }
              else
              {
                v26 = v45;
                EtwpComputeRegEntryEnableInfo(a1, (unsigned __int8 *)(v45 + 72));
                v27 = v44;
                *v44 = 120;
                v28 = EtwpGetSchematizedFilterSize(*(_QWORD *)(a1 + 32), *(unsigned __int8 *)(a1 + 100));
                if ( v28 )
                {
                  *v27 = v28 + 136;
                  *(_DWORD *)(v26 + 132) = 0x80000000;
                  *(_DWORD *)(v26 + 128) = v28;
                  *(_QWORD *)(v26 + 120) = 136LL;
                  EtwpCopySchematizedFilters((void *)(v26 + 136));
                  *(_DWORD *)(v26 + 116) = 1;
                }
                else
                {
                  *(_DWORD *)(v26 + 116) = 0;
                }
              }
            }
          }
          else
          {
            *a5 = 0;
            v7 = 0;
          }
        }
      }
    }
    *(_QWORD *)(*(_QWORD *)(a1 + 32) + 392LL) = 0LL;
    ExReleasePushLockEx(*(_QWORD *)(a1 + 32) + 384LL, 0LL);
    KeLeaveCriticalRegion();
    *(_QWORD *)(v12 + 392) = 0LL;
    ExReleasePushLockEx(v12 + 384, 0LL);
    KeLeaveCriticalRegion();
    EtwpUnreferenceGuidEntry(v12);
    if ( v7 >= 0 && EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_GROUP_JOIN) )
      EtwpEventWriteGroupJoin(v30, v29, a1);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v7;
}
