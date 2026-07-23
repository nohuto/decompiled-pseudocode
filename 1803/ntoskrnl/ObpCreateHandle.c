/*
 * XREFs of ObpCreateHandle @ 0x1405AB660
 * Callers:
 *     ObInsertObjectEx @ 0x1404C3DD0 (ObInsertObjectEx.c)
 *     NtOpenProcessTokenEx @ 0x14059A540 (NtOpenProcessTokenEx.c)
 *     ObOpenObjectByPointer @ 0x14059A7F0 (ObOpenObjectByPointer.c)
 *     ObOpenObjectByNameEx @ 0x1405AC6B0 (ObOpenObjectByNameEx.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140002440 (CmSiFreeMemory.c)
 *     SepSidInTokenSidHash @ 0x14005E750 (SepSidInTokenSidHash.c)
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     PsGetCurrentThreadProcessId @ 0x1400A1C70 (PsGetCurrentThreadProcessId.c)
 *     OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x1400AA020 (OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO.c)
 *     ObReferenceObjectExWithTag @ 0x1400EB030 (ObReferenceObjectExWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquireResourceSharedLite @ 0x140100120 (ExAcquireResourceSharedLite.c)
 *     SeAccessCheck @ 0x140100B90 (SeAccessCheck.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     SeComputeCreatorDeniedRights @ 0x1401047E0 (SeComputeCreatorDeniedRights.c)
 *     RtlEqualSid @ 0x140105600 (RtlEqualSid.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwDuplicateObject @ 0x1401A7C40 (ZwDuplicateObject.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     ObDereferenceSecurityDescriptor @ 0x1404C7150 (ObDereferenceSecurityDescriptor.c)
 *     RtlMapGenericMask @ 0x1404C8DF0 (RtlMapGenericMask.c)
 *     ObpCallPreOperationCallbacks @ 0x1404CE670 (ObpCallPreOperationCallbacks.c)
 *     ObpInsertOrLocateNamedObject @ 0x1404D4B8C (ObpInsertOrLocateNamedObject.c)
 *     SePrivilegedServiceAuditAlarm @ 0x1404D5720 (SePrivilegedServiceAuditAlarm.c)
 *     SePrivilegeObjectAuditAlarm @ 0x1404D58C0 (SePrivilegeObjectAuditAlarm.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x1404D591C (SepAdtPrivilegeObjectAuditAlarm.c)
 *     ExpFreeHandleTableEntry @ 0x1405120A0 (ExpFreeHandleTableEntry.c)
 *     ObpDecrementHandleCount @ 0x140519894 (ObpDecrementHandleCount.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x14053E640 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SeAppendPrivileges @ 0x14053E890 (SeAppendPrivileges.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x140553A18 (ExpAllocateHandleTableEntrySlow.c)
 *     ObpAllocateAndQuerySecurityDescriptorInfo @ 0x14055CFEC (ObpAllocateAndQuerySecurityDescriptorInfo.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     ObpIncrementHandleCountEx @ 0x1405AB080 (ObpIncrementHandleCountEx.c)
 *     SePrivilegeCheck @ 0x1405B0D30 (SePrivilegeCheck.c)
 *     ObHandleRevocationBlockAddObject @ 0x140758BA0 (ObHandleRevocationBlockAddObject.c)
 *     ObpSetObjectAuditInfo @ 0x14075938C (ObpSetObjectAuditInfo.c)
 *     ObpPostInterceptHandleCreate @ 0x140759EA4 (ObpPostInterceptHandleCreate.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14078EFAC (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x14078FD14 (SepAdtStagingEvent.c)
 *     SepAdtClassifyObjectIntoSubCategory @ 0x140790464 (SepAdtClassifyObjectIntoSubCategory.c)
 *     EtwpTraceHandle @ 0x1407A8E90 (EtwpTraceHandle.c)
 *     ExpSetHandleExtraInfo @ 0x1407BD530 (ExpSetHandleExtraInfo.c)
 *     ExpUpdateDebugInfo @ 0x1407BD7BC (ExpUpdateDebugInfo.c)
 */

__int64 __fastcall ObpCreateHandle(
        unsigned int a1,
        char *a2,
        ACCESS_MASK a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        KPROCESSOR_MODE a7,
        unsigned __int64 a8,
        int a9,
        PVOID *a10,
        unsigned __int64 *a11)
{
  unsigned int v12; // esi
  unsigned __int64 v13; // rbx
  char *v14; // r13
  unsigned int *v15; // r12
  PEPROCESS Process; // rax
  ULONG_PTR v17; // rdi
  KPROCESSOR_MODE AccessMode; // r15
  ULONG_PTR v19; // r13
  unsigned int v20; // eax
  signed __int64 v21; // rdx
  signed __int64 v22; // rbx
  unsigned int v23; // edx
  unsigned __int64 v24; // rbx
  unsigned __int64 v25; // rax
  ULONG_PTR v26; // r12
  __int64 result; // rax
  __int64 v28; // r12
  __int64 v29; // rbx
  int v30; // edi
  signed __int64 v31; // rdx
  signed __int64 v32; // rbx
  unsigned int v33; // edx
  unsigned __int64 v34; // rbx
  __int64 v35; // rax
  int v36; // edi
  unsigned __int64 v37; // r13
  unsigned int *v38; // r8
  PVOID v39; // rsi
  __int64 v40; // rbx
  char v41; // al
  unsigned int Number; // edx
  unsigned int v43; // ecx
  unsigned int v44; // r12d
  unsigned int v45; // r15d
  ULONG_PTR v46; // rdi
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rsi
  __int64 v51; // rax
  int v52; // eax
  unsigned int *v53; // r12
  __int64 v54; // rdi
  char v55; // al
  void *v56; // r15
  void *v57; // r13
  void *v58; // rax
  __int64 v59; // r12
  char v60; // di
  unsigned int v61; // edi
  _DWORD *v62; // r9
  POBJECT_TYPE *v63; // r15
  unsigned __int64 v64; // rdi
  PVOID v65; // r10
  bool v66; // cl
  unsigned __int64 *v67; // rdi
  unsigned __int64 v68; // rax
  int v69; // ebx
  unsigned int v70; // eax
  volatile signed __int64 *v71; // rsi
  __int64 v72; // rdi
  char HandleTableEntrySlow; // r15
  __int64 v74; // r8
  __int64 v75; // r9
  unsigned int *v76; // r12
  __int64 v77; // rdx
  volatile signed __int64 *v78; // rbx
  signed __int64 v79; // rax
  signed __int64 v80; // rcx
  bool v81; // zf
  signed __int64 v82; // rtt
  signed __int64 v83; // rax
  signed __int64 v84; // rdx
  signed __int64 v85; // rax
  signed __int64 v86; // rbx
  unsigned int v87; // edx
  char *PoolWithTag; // rbx
  int v89; // edi
  struct _KTHREAD *v90; // rax
  __int64 v91; // rdi
  BOOLEAN v92; // al
  struct _PRIVILEGE_SET *v93; // r12
  BOOLEAN v94; // si
  ACCESS_MASK v95; // eax
  UNICODE_STRING *v96; // rcx
  volatile signed __int64 *v97; // rbx
  signed __int64 v98; // rax
  signed __int64 v99; // rcx
  bool v100; // zf
  signed __int64 v101; // rtt
  __int64 v102; // rbx
  int v103; // r15d
  int v104; // esi
  struct _KTHREAD *v105; // rax
  unsigned __int64 v106; // rsi
  struct _KTHREAD *v107; // rax
  struct _ERESOURCE *v108; // rcx
  signed __int64 v109; // rax
  ULONG_PTR v110; // r12
  struct _KTHREAD *v111; // rax
  signed __int64 v112; // rax
  signed __int64 v113; // rtt
  signed __int64 v114; // rax
  signed __int64 v115; // rtt
  struct _KTHREAD *v116; // rax
  __int64 v117; // rax
  struct _KTHREAD *v118; // rax
  struct _KTHREAD *v119; // rax
  signed __int64 v120; // rax
  signed __int64 v121; // rtt
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v123; // r12
  volatile signed __int64 *v124; // rdi
  volatile signed __int64 *v125; // r15
  __int64 v126; // rdx
  __int64 v127; // r8
  __int64 v128; // r9
  signed __int64 v129; // rax
  bool v130; // cc
  signed __int64 v131; // rax
  volatile signed __int64 *i; // rax
  struct _KTHREAD *v133; // r12
  volatile signed __int64 *v134; // rdi
  volatile signed __int64 *v135; // r15
  __int64 v136; // rdx
  __int64 v137; // r8
  __int64 v138; // r9
  signed __int64 v139; // rax
  signed __int64 v140; // rax
  volatile signed __int64 *j; // rax
  __int64 v142; // rax
  void **v143; // rcx
  int v144; // eax
  __int64 v145; // r8
  unsigned __int64 CurrentThreadProcessId; // rax
  unsigned __int64 v147; // rax
  __int64 v148; // rdx
  int GrantedAccess; // [rsp+40h] [rbp-E0h]
  int AccessStatus; // [rsp+48h] [rbp-D8h]
  bool v151; // [rsp+A0h] [rbp-80h]
  char v152; // [rsp+A1h] [rbp-7Fh]
  ACCESS_MASK v153; // [rsp+A4h] [rbp-7Ch] BYREF
  unsigned int v154; // [rsp+A8h] [rbp-78h]
  PVOID Object; // [rsp+B0h] [rbp-70h]
  int v156; // [rsp+B8h] [rbp-68h]
  NTSTATUS v157; // [rsp+BCh] [rbp-64h] BYREF
  SIZE_T NumberOfBytes; // [rsp+C0h] [rbp-60h] BYREF
  ACCESS_MASK AccessMask; // [rsp+C8h] [rbp-58h] BYREF
  unsigned int *v160; // [rsp+D0h] [rbp-50h]
  char *v161; // [rsp+D8h] [rbp-48h]
  struct _KTHREAD *v162; // [rsp+E0h] [rbp-40h]
  unsigned __int64 v163; // [rsp+E8h] [rbp-38h]
  int v164; // [rsp+F0h] [rbp-30h] BYREF
  ACCESS_MASK v165; // [rsp+F4h] [rbp-2Ch] BYREF
  unsigned int v166; // [rsp+F8h] [rbp-28h]
  PVOID v167; // [rsp+100h] [rbp-20h] BYREF
  POBJECT_TYPE *v168; // [rsp+108h] [rbp-18h]
  int v169; // [rsp+110h] [rbp-10h]
  int v170; // [rsp+114h] [rbp-Ch]
  ULONG_PTR BugCheckParameter1; // [rsp+118h] [rbp-8h]
  HANDLE TargetHandle; // [rsp+120h] [rbp+0h] BYREF
  unsigned __int64 v173; // [rsp+128h] [rbp+8h]
  unsigned int v174; // [rsp+130h] [rbp+10h]
  void *v175; // [rsp+138h] [rbp+18h] BYREF
  _QWORD v176[2]; // [rsp+140h] [rbp+20h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+150h] [rbp+30h] BYREF
  int v178[2]; // [rsp+158h] [rbp+38h] BYREF
  unsigned __int64 *v179; // [rsp+160h] [rbp+40h]
  _DWORD v180[2]; // [rsp+168h] [rbp+48h] BYREF
  __int64 v181; // [rsp+170h] [rbp+50h]
  __int64 v182; // [rsp+178h] [rbp+58h]
  PVOID v183; // [rsp+180h] [rbp+60h] BYREF
  PVOID *v184; // [rsp+188h] [rbp+68h]
  _QWORD v185[6]; // [rsp+190h] [rbp+70h] BYREF
  __int64 v186; // [rsp+1C0h] [rbp+A0h]
  struct _PRIVILEGE_SET RequiredPrivileges; // [rsp+1C8h] [rbp+A8h] BYREF

  v12 = a6;
  v13 = a8;
  v14 = a2;
  v184 = a10;
  v179 = a11;
  v169 = 0;
  v152 = 0;
  Object = a2;
  v170 = a9;
  v166 = a1;
  AccessMask = a3;
  v154 = a6;
  v163 = a8;
  v167 = 0LL;
  if ( (a6 & 0x200) != 0 )
  {
    v15 = (unsigned int *)ObpKernelHandleTable;
    Process = PsInitialSystemProcess;
  }
  else
  {
    v15 = (unsigned int *)KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[5];
    Process = KeGetCurrentThread()->ApcState.Process;
  }
  v160 = v15;
  BugCheckParameter1 = (ULONG_PTR)Process;
  v151 = v15 == (unsigned int *)ObpKernelHandleTable;
  if ( !a4 || v15 == (unsigned int *)ObpKernelHandleTable && !*(_DWORD *)(a4 + 24) )
  {
    if ( (a3 & 0x2000000) != 0 )
    {
      a3 = a3 & 0xEDFFFFFF | 0x10000000;
      AccessMask = a3;
    }
    if ( (a3 & 0xF0000000) != 0 )
      RtlMapGenericMask(
        &AccessMask,
        (PGENERIC_MAPPING)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*(a2 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)a2 - 48) >> 8)]
                         + 76));
    v153 = AccessMask;
    goto LABEL_21;
  }
  v17 = (ULONG_PTR)(a2 - 48);
  AccessMode = 1;
  v19 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*(a2 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)a2 - 48) >> 8)];
  if ( (a6 & 0x400) == 0 )
    AccessMode = a7;
  if ( a1 - 1 > 1 )
  {
    v20 = *(_DWORD *)(a4 + 16);
    if ( (v20 & 0x2000000) != 0 )
    {
      v20 = v20 & 0xEDFFFFFF | 0x10000000;
      *(_DWORD *)(a4 + 16) = v20;
    }
    if ( (v20 & 0xF0000000) != 0 )
    {
      RtlMapGenericMask((PACCESS_MASK)(a4 + 16), (PGENERIC_MAPPING)(v19 + 76));
      v20 = *(_DWORD *)(a4 + 16);
    }
    if ( (v20 & 0x1000000) == 0 )
      goto LABEL_13;
    RequiredPrivileges.Privilege[0].Luid = SeSecurityPrivilege;
    RequiredPrivileges.PrivilegeCount = 1;
    RequiredPrivileges.Control = 1;
    RequiredPrivileges.Privilege[0].Attributes = 0;
    if ( SePrivilegeCheck(&RequiredPrivileges, (PSECURITY_SUBJECT_CONTEXT)(a4 + 32), AccessMode) )
    {
      *(_DWORD *)(a4 + 16) &= ~0x1000000u;
      *(_DWORD *)(a4 + 20) |= 0x1000000u;
      SeAppendPrivileges((PACCESS_STATE)a4, &RequiredPrivileges);
LABEL_13:
      *(_DWORD *)(a4 + 20) |= *(_DWORD *)(a4 + 16);
      *(_DWORD *)(a4 + 16) = 0;
      *(_DWORD *)(a4 + 20) &= *(_DWORD *)(v19 + 92) | 0x1000000;
      _m_prefetchw((const void *)(v17 + 40));
      v21 = *(_QWORD *)(v17 + 40);
      if ( (v21 & 0xF) != 0 )
      {
        do
        {
          v109 = _InterlockedCompareExchange64((volatile signed __int64 *)(v17 + 40), v21 - 1, v21);
          if ( v21 == v109 )
            break;
          v21 = v109;
        }
        while ( (v109 & 0xF) != 0 );
      }
      v22 = v21;
      v23 = v21 & 0xF;
      v24 = v22 & 0xFFFFFFFFFFFFFFF0uLL;
      if ( v23 <= 1 && v24 )
      {
        if ( v23 == 1 )
        {
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v24 - 24), 0xFuLL) <= 0 )
            __fastfail(0xEu);
        }
        else
        {
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          ExAcquirePushLockSharedEx(v17 + 16, 0LL);
          v24 = *(_QWORD *)(v17 + 40) & 0xFFFFFFFFFFFFFFF0uLL;
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v24 - 24), 0x10uLL) <= 0 )
            __fastfail(0xEu);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v17 + 16), 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)(v17 + 16));
          KeAbPostRelease(v17 + 16);
          KeLeaveCriticalRegion();
        }
        _m_prefetchw((const void *)(v17 + 40));
        v120 = *(_QWORD *)(v17 + 40);
        while ( (v120 & 0xF) == 0 )
        {
          if ( v24 != (v120 & 0xFFFFFFFFFFFFFFF0uLL) )
            break;
          v121 = v120;
          v120 = _InterlockedCompareExchange64((volatile signed __int64 *)(v17 + 40), v120 + 15, v120);
          if ( v121 == v120 )
            goto LABEL_16;
        }
        ObDereferenceSecurityDescriptor(v24, 0xFu);
      }
LABEL_16:
      *(_DWORD *)(a4 + 20) &= ~(unsigned int)SeComputeCreatorDeniedRights(
                                               (PSECURITY_SUBJECT_CONTEXT)(a4 + 32),
                                               a4,
                                               *(_DWORD *)(a4 + 20),
                                               v24);
      if ( v24 )
        ObDereferenceSecurityDescriptor(v24, 1u);
      v157 = 0;
      goto LABEL_19;
    }
    SePrivilegedServiceAuditAlarm(0, (__int64 *)(a4 + 32), (__int64)&RequiredPrivileges, 0);
    return (unsigned int)-1073741727;
  }
  v165 = 0;
  Privileges = 0LL;
  if ( *(__int64 (__fastcall **)(void *, int, DWORD *, void *, ULONG *, __int64 *, POOL_TYPE, GENERIC_MAPPING *))(v19 + 152) != SeDefaultObjectMethod )
  {
    v164 = 447;
    LODWORD(NumberOfBytes) = ObpDefaultSecurityDescriptorLength;
    PoolWithTag = (char *)ExAllocatePoolWithTag(
                            PagedPool,
                            (unsigned int)ObpDefaultSecurityDescriptorLength,
                            0x7153624Fu);
    if ( PoolWithTag )
    {
      v110 = v17 + 40;
      v89 = (*(__int64 (__fastcall **)(PVOID, __int64, int *, char *, SIZE_T *, ULONG_PTR, _DWORD, ULONG_PTR, KPROCESSOR_MODE))(v19 + 152))(
              Object,
              1LL,
              &v164,
              PoolWithTag,
              &NumberOfBytes,
              v17 + 40,
              *(_DWORD *)(v19 + 100),
              v19 + 76,
              AccessMode);
      if ( v89 == -1073741789 )
      {
        ExFreePoolWithTag(PoolWithTag, 0);
        LODWORD(ObpDefaultSecurityDescriptorLength) = NumberOfBytes;
        PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x7153624Fu);
        if ( !PoolWithTag )
        {
          v89 = -1073741670;
          goto LABEL_233;
        }
        LOBYTE(GrantedAccess) = AccessMode;
        v89 = (*(__int64 (__fastcall **)(PVOID, __int64, int *, char *, SIZE_T *, ULONG_PTR, _DWORD, ULONG_PTR, int))(v19 + 152))(
                Object,
                1LL,
                &v164,
                PoolWithTag,
                &NumberOfBytes,
                v110,
                *(_DWORD *)(v19 + 100),
                v19 + 76,
                GrantedAccess);
      }
      LOBYTE(v156) = 1;
      if ( v89 >= 0 )
        goto LABEL_111;
      ExFreePoolWithTag(PoolWithTag, 0);
      LOBYTE(v156) = 0;
    }
    else
    {
      v89 = -1073741670;
    }
LABEL_233:
    v14 = (char *)Object;
    v157 = v89;
LABEL_127:
    if ( v89 >= 0 )
      goto LABEL_20;
    return (unsigned int)v89;
  }
  _m_prefetchw((const void *)(v17 + 40));
  v84 = *(_QWORD *)(v17 + 40);
  if ( (v84 & 0xF) != 0 )
  {
    do
    {
      v85 = _InterlockedCompareExchange64((volatile signed __int64 *)(v17 + 40), v84 - 1, v84);
      if ( v84 == v85 )
        break;
      v84 = v85;
    }
    while ( (v85 & 0xF) != 0 );
  }
  v86 = v84;
  v87 = v84 & 0xF;
  PoolWithTag = (char *)(v86 & 0xFFFFFFFFFFFFFFF0uLL);
  if ( v87 <= 1 && PoolWithTag )
  {
    if ( v87 == 1 )
    {
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)PoolWithTag - 3, 0xFuLL) <= 0 )
        __fastfail(0xEu);
    }
    else
    {
      v118 = KeGetCurrentThread();
      --v118->KernelApcDisable;
      ExAcquirePushLockSharedEx(v17 + 16, 0LL);
      PoolWithTag = (char *)(*(_QWORD *)(v17 + 40) & 0xFFFFFFFFFFFFFFF0uLL);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)PoolWithTag - 3, 0x10uLL) <= 0 )
        __fastfail(0xEu);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v17 + 16), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v17 + 16));
      KeAbPostRelease(v17 + 16);
      KeLeaveCriticalRegion();
    }
    _m_prefetchw((const void *)(v17 + 40));
    v112 = *(_QWORD *)(v17 + 40);
    while ( (v112 & 0xF) == 0 )
    {
      if ( PoolWithTag != (char *)(v112 & 0xFFFFFFFFFFFFFFF0uLL) )
        break;
      v113 = v112;
      v112 = _InterlockedCompareExchange64((volatile signed __int64 *)(v17 + 40), v112 + 15, v112);
      if ( v113 == v112 )
        goto LABEL_109;
    }
    ObDereferenceSecurityDescriptor((__int64)PoolWithTag, 0xFu);
  }
LABEL_109:
  LOBYTE(v156) = 0;
  if ( !PoolWithTag && ((*(_BYTE *)(v19 + 66) & 8) != 0 || (*(_BYTE *)(v17 + 26) & 2) != 0) )
    KeBugCheckEx(0x189u, v17, v19, 1uLL, 0LL);
  v89 = 0;
LABEL_111:
  if ( PoolWithTag )
  {
    v90 = KeGetCurrentThread();
    v91 = a4 + 32;
    --v90->KernelApcDisable;
    ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)(a4 + 48) + 48LL), 1u);
    if ( *(_QWORD *)(a4 + 32) )
    {
      v116 = KeGetCurrentThread();
      --v116->KernelApcDisable;
      ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)v91 + 48LL), 1u);
    }
    v92 = SeAccessCheck(
            PoolWithTag,
            (PSECURITY_SUBJECT_CONTEXT)(a4 + 32),
            1u,
            *(_DWORD *)(a4 + 16),
            *(_DWORD *)(a4 + 20),
            &Privileges,
            (PGENERIC_MAPPING)(v19 + 76),
            AccessMode,
            &v165,
            &v157);
    v93 = Privileges;
    v94 = v92;
    if ( Privileges )
    {
      SeAppendPrivileges((PACCESS_STATE)a4, Privileges);
      CmSiFreeMemory(v93);
    }
    if ( v94 )
    {
      v95 = v165;
      *(_DWORD *)(a4 + 20) |= v165;
      *(_DWORD *)(a4 + 16) &= ~(v95 | 0x2000000);
    }
    if ( AccessMode )
    {
      v96 = (UNICODE_STRING *)(v19 + 16);
      v14 = (char *)Object;
      SeOpenObjectAuditAlarmWithTransaction(
        v96,
        Object,
        0LL,
        PoolWithTag,
        (PACCESS_STATE)a4,
        0,
        v94,
        AccessMode,
        0LL,
        (PBOOLEAN)(a4 + 10));
    }
    else
    {
      v14 = (char *)Object;
    }
    ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(a4 + 48) + 48LL));
    KeLeaveCriticalRegion();
    if ( *(_QWORD *)v91 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)v91 + 48LL));
      KeLeaveCriticalRegion();
    }
    if ( (_BYTE)v156 )
    {
      ExFreePoolWithTag(PoolWithTag, 0);
    }
    else
    {
      v97 = (volatile signed __int64 *)(PoolWithTag - 32);
      _m_prefetchw((const void *)(v97 + 1));
      v98 = *((_QWORD *)v97 + 1);
      v99 = v98 - 1;
      v100 = v98 == 1;
      if ( v98 - 1 <= 0 )
      {
LABEL_234:
        if ( !v100 )
          __fastfail(0xEu);
        v123 = KeGetCurrentThread();
        v124 = (volatile signed __int64 *)((char *)&ObsSecurityDescriptorCache
                                         + 16 * (unsigned __int8)*((_DWORD *)v97 + 4));
        --v123->KernelApcDisable;
        v125 = v124 + 1;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)v124, 0LL);
        v129 = _InterlockedExchangeAdd64(v97 + 1, 0xFFFFFFFFFFFFFFFFuLL);
        v130 = v129 <= 1;
        v131 = v129 - 1;
        if ( v130 )
        {
          if ( v131 )
            __fastfail(0xEu);
          for ( i = (volatile signed __int64 *)*v125; i != v97; i = (volatile signed __int64 *)*i )
            v125 = i;
          *v125 = *v97;
          if ( (_InterlockedExchangeAdd64(v124, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v124, v126, v127, v128);
          KeAbPostRelease((ULONG_PTR)v124);
          KeLeaveCriticalRegionThread((__int64)v123);
          ExFreePoolWithTag((PVOID)v97, 0x6353624Fu);
        }
        else
        {
          if ( (_InterlockedExchangeAdd64(v124, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v124, v126, v127, v128);
          KeAbPostRelease((ULONG_PTR)v124);
          KeLeaveCriticalRegionThread((__int64)v123);
        }
      }
      else
      {
        while ( 1 )
        {
          v101 = v98;
          v98 = _InterlockedCompareExchange64(v97 + 1, v99, v98);
          if ( v101 == v98 )
            break;
          v99 = v98 - 1;
          v100 = v98 == 1;
          if ( v98 - 1 <= 0 )
            goto LABEL_234;
        }
      }
    }
    if ( v94 )
      goto LABEL_19;
    v89 = v157;
    goto LABEL_127;
  }
  *(_DWORD *)(a4 + 20) |= *(_DWORD *)(a4 + 16);
  *(_DWORD *)(a4 + 16) = 0;
  v157 = v89;
LABEL_19:
  v14 = (char *)Object;
  v153 = *(_DWORD *)(a4 + 20);
LABEL_20:
  v12 = v154;
  v13 = v163;
LABEL_21:
  v25 = 0LL;
  v163 = 0LL;
  if ( v13 )
  {
    v25 = *(_QWORD *)(v13 + 32);
    v163 = v25;
  }
  v26 = BugCheckParameter1;
  result = ObpIncrementHandleCountEx(v166, (__int64)&v153, BugCheckParameter1, (__int64)v14, a7, v12, v25);
  if ( (int)result < 0 )
    return result;
  if ( a4 )
  {
    if ( v13 )
    {
      result = ObpInsertOrLocateNamedObject(v26, v14, (__int64)&v153, a4, a7, (_DWORD *)v13, &v167);
      if ( (int)result < 0 )
        return result;
      if ( v167 == v14 )
      {
        v167 = 0LL;
      }
      else
      {
        v14 = (char *)v167;
        v152 = 1;
      }
      Object = v14;
    }
    if ( *(_BYTE *)(a4 + 10) )
    {
      v12 |= 4u;
      v154 = v12;
    }
  }
  v28 = (__int64)(v14 - 48);
  v161 = v14 - 48;
  v173 = (unsigned __int8)((unsigned __int16)((_WORD)v14 - 48) >> 8);
  v29 = ObTypeIndexTable[(unsigned __int8)*(v14 - 24) ^ (unsigned __int8)ObHeaderCookie ^ v173];
  v168 = (POBJECT_TYPE *)v29;
  v30 = (*(_DWORD *)(v29 + 92) | 0x1000000) & v153;
  v153 = v30;
  if ( a4 )
  {
    _m_prefetchw((const void *)(v28 + 40));
    v31 = *(_QWORD *)(v28 + 40);
    if ( (v31 & 0xF) != 0 )
    {
      do
      {
        v83 = _InterlockedCompareExchange64((volatile signed __int64 *)(v28 + 40), v31 - 1, v31);
        if ( v31 == v83 )
          break;
        v31 = v83;
      }
      while ( (v83 & 0xF) != 0 );
    }
    v32 = v31;
    v33 = v31 & 0xF;
    v34 = v32 & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v33 <= 1 && v34 )
    {
      if ( v33 == 1 )
      {
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v34 - 24), 0xFuLL) <= 0 )
          __fastfail(0xEu);
      }
      else
      {
        v119 = KeGetCurrentThread();
        --v119->KernelApcDisable;
        ExAcquirePushLockSharedEx(v28 + 16, 0LL);
        v34 = *(_QWORD *)(v28 + 40) & 0xFFFFFFFFFFFFFFF0uLL;
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v34 - 24), 0x10uLL) <= 0 )
          __fastfail(0xEu);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v28 + 16), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v28 + 16));
        KeAbPostRelease(v28 + 16);
        KeLeaveCriticalRegion();
      }
      _m_prefetchw((const void *)(v28 + 40));
      v114 = *(_QWORD *)(v28 + 40);
      while ( (v114 & 0xF) == 0 )
      {
        if ( v34 != (v114 & 0xFFFFFFFFFFFFFFF0uLL) )
          break;
        v115 = v114;
        v114 = _InterlockedCompareExchange64((volatile signed __int64 *)(v28 + 40), v114 + 15, v114);
        if ( v115 == v114 )
          goto LABEL_32;
      }
      ObDereferenceSecurityDescriptor(v34, 0xFu);
    }
LABEL_32:
    v12 = SeComputeCreatorDeniedRights((PSECURITY_SUBJECT_CONTEXT)(a4 + 32), a4, v153, v34);
    if ( v34 )
    {
      v78 = (volatile signed __int64 *)(v34 - 32);
      _m_prefetchw((const void *)(v78 + 1));
      v79 = *((_QWORD *)v78 + 1);
      v80 = v79 - 1;
      v81 = v79 == 1;
      if ( v79 - 1 <= 0 )
      {
LABEL_251:
        if ( !v81 )
          __fastfail(0xEu);
        v133 = KeGetCurrentThread();
        v134 = (volatile signed __int64 *)((char *)&ObsSecurityDescriptorCache
                                         + 16 * (unsigned __int8)*((_DWORD *)v78 + 4));
        --v133->KernelApcDisable;
        v135 = v134 + 1;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)v134, 0LL);
        v139 = _InterlockedExchangeAdd64(v78 + 1, 0xFFFFFFFFFFFFFFFFuLL);
        v130 = v139 <= 1;
        v140 = v139 - 1;
        if ( v130 )
        {
          if ( v140 )
            __fastfail(0xEu);
          for ( j = (volatile signed __int64 *)*v135; j != v78; j = (volatile signed __int64 *)*j )
            v135 = j;
          *v135 = *v78;
          if ( (_InterlockedExchangeAdd64(v134, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v134, v136, v137, v138);
          KeAbPostRelease((ULONG_PTR)v134);
          KeLeaveCriticalRegionThread((__int64)v133);
          ExFreePoolWithTag((PVOID)v78, 0x6353624Fu);
        }
        else
        {
          if ( (_InterlockedExchangeAdd64(v134, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v134, v136, v137, v138);
          KeAbPostRelease((ULONG_PTR)v134);
          KeLeaveCriticalRegionThread((__int64)v133);
        }
        v28 = (__int64)v161;
      }
      else
      {
        while ( 1 )
        {
          v82 = v79;
          v79 = _InterlockedCompareExchange64(v78 + 1, v80, v79);
          if ( v82 == v79 )
            break;
          v80 = v79 - 1;
          v81 = v79 == 1;
          if ( v79 - 1 <= 0 )
            goto LABEL_251;
        }
      }
    }
    v35 = *(_QWORD *)(a4 + 72);
    v30 = ~v12 & v153;
    LOBYTE(v12) = v154;
    v29 = (__int64)v168;
    v153 = v30;
    *(_DWORD *)(a4 + 20) = v30;
    v169 = *(_DWORD *)(v35 + 28);
  }
  if ( a5 )
  {
    ObReferenceObjectExWithTag((ULONG_PTR)Object, a5);
    v30 = v153;
  }
  if ( v167 )
  {
    ObfDereferenceObject(v167);
    v30 = v153;
  }
  v176[1] = v176;
  v176[0] = v176;
  if ( (*(_BYTE *)(v29 + 66) & 0x40) != 0 && *(_QWORD *)(v29 + 200) != v29 + 200 )
  {
    v102 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)v173 ^ (unsigned __int64)*(unsigned __int8 *)(v28 + 24)];
    v103 = v30 & *(_DWORD *)(v102 + 96);
    memset(v185, 0, 0x28uLL);
    v181 = 0LL;
    v182 = 0LL;
    HIDWORD(v185[0]) = v151 | HIDWORD(v185[0]) & 0xFFFFFFFE;
    v185[4] = v180;
    v185[1] = Object;
    v185[3] = 0LL;
    LODWORD(v185[0]) = 1;
    v185[2] = v102;
    v180[1] = v30;
    v180[0] = v30;
    v69 = ObpCallPreOperationCallbacks(v102, (__int64)v185, v176);
    if ( v69 < 0 )
    {
      ObpDecrementHandleCount((_KPROCESS *)BugCheckParameter1, v28);
      if ( a5 )
      {
        if ( a5 > 1 )
          _InterlockedExchangeAdd64((volatile signed __int64 *)v28, (int)(1 - a5));
        ObfDereferenceObject(Object);
      }
      return (unsigned int)v69;
    }
    if ( v151 )
    {
      v30 = v153;
      LOBYTE(v12) = v154;
    }
    else
    {
      v104 = (v103 | v180[0]) & v30;
      v153 = v104;
      v30 = v104;
      if ( a4 )
        *(_DWORD *)(a4 + 20) = v104;
      LOBYTE(v12) = v154;
    }
  }
  v36 = v30 & 0x1FFFFFF;
  v186 = 0LL;
  if ( (v12 & 8) != 0 )
    v36 |= 0x2000000u;
  v37 = (v28 << 16) & 0xFFFFFFFFFFF1FFFFuLL | ((unsigned __int64)(v12 & 7) << 17) | 1;
  LODWORD(v186) = v36;
  v162 = KeGetCurrentThread();
  --v162->KernelApcDisable;
  v38 = v160;
  v39 = 0LL;
  v40 = 0LL;
  v41 = *((_BYTE *)v160 + 44);
  if ( (v41 & 4) != 0 )
  {
LABEL_273:
    v54 = (__int64)v162;
    goto LABEL_61;
  }
  if ( (v41 & 1) != 0 )
    Number = 0;
  else
    Number = KeGetPcr()->Prcb.Number;
  v43 = ExpFreeListCount;
  v156 = ExpFreeListCount;
  v154 = Number;
LABEL_45:
  v44 = 0;
  v174 = *v38;
  v45 = Number;
  while ( 1 )
  {
    v46 = (ULONG_PTR)&v38[16 * v45 + 16];
    if ( *(_QWORD *)(v46 + 8) )
      break;
LABEL_89:
    v70 = v45 + 1;
    ++v44;
    v45 = 0;
    if ( v70 != v43 )
      v45 = v70;
    if ( v44 >= v43 )
    {
      v71 = (volatile signed __int64 *)(v38 + 14);
      v72 = (__int64)&v38[16 * v154 + 16];
      HandleTableEntrySlow = 1;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(v38 + 14), 0LL);
      v76 = v160;
      if ( v174 == *v160 )
        HandleTableEntrySlow = ExpAllocateHandleTableEntrySlow(v160, v72);
      v77 = _InterlockedExchangeAdd64(v71, 0xFFFFFFFFFFFFFFFFuLL);
      LOBYTE(v77) = v77 & 6;
      if ( (_BYTE)v77 == 2 )
        ExfTryToWakePushLock(v71, v77, v74, v75);
      KeAbPostRelease((ULONG_PTR)v71);
      v39 = 0LL;
      if ( HandleTableEntrySlow )
      {
        v43 = v156;
        v38 = v76;
        Number = v154;
        goto LABEL_45;
      }
      goto LABEL_272;
    }
  }
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&v38[16 * v45 + 16], 0LL);
  v50 = *(_QWORD *)(v46 + 8);
  if ( v50 )
  {
    v51 = *(_QWORD *)(v50 + 8);
    *(_QWORD *)(v46 + 8) = v51;
    if ( !v51 )
      *(_QWORD *)(v46 + 16) = 0LL;
    v52 = ++*(_DWORD *)(v46 + 24);
    if ( v52 > *(_DWORD *)(v46 + 28) )
      *(_DWORD *)(v46 + 28) = v52;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v46, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v46, v47, v48, v49);
  KeAbPostRelease(v46);
  if ( !v50 )
  {
    v43 = v156;
    v38 = v160;
    goto LABEL_89;
  }
  v40 = *(_QWORD *)((v50 & 0xFFFFFFFFFFFFF000uLL) + 8) + 4 * ((__int64)(v50 - (v50 & 0xFFFFFFFFFFFFF000uLL)) >> 4);
  if ( !v169 && !a9 )
  {
    v53 = v160;
    goto LABEL_58;
  }
  v53 = v160;
  if ( (unsigned int)ExpSetHandleExtraInfo(v160, v40) )
  {
    ExpFreeHandleTableEntry((__int64)v53, v40, v50);
    v39 = 0LL;
    v40 = 0LL;
LABEL_272:
    v28 = (__int64)v161;
    goto LABEL_273;
  }
LABEL_58:
  v54 = (__int64)v162;
  if ( *((_QWORD *)v53 + 12) )
    ExpUpdateDebugInfo(v53, v162, v40, 1LL);
  v28 = (__int64)v161;
  *(_QWORD *)(v50 + 8) = v186;
  *(_QWORD *)v50 = v37;
  v39 = 0LL;
LABEL_61:
  KeLeaveCriticalRegionThread(v54);
  if ( !v40 )
  {
    ObpDecrementHandleCount((_KPROCESS *)BugCheckParameter1, v28);
    if ( a5 )
    {
      if ( a5 > 1 )
        _InterlockedExchangeAdd64((volatile signed __int64 *)v28, (int)(1 - a5));
      ObfDereferenceObject(Object);
    }
    v63 = v168;
    v69 = -1073741670;
    v66 = v151;
    v65 = Object;
    v67 = v179;
    goto LABEL_83;
  }
  if ( !a4 )
  {
    v63 = v168;
    goto LABEL_79;
  }
  v55 = *(_BYTE *)(v28 + 26);
  v56 = 0LL;
  v175 = 0LL;
  v57 = 0LL;
  if ( (v55 & 0x20) == 0 || (v142 = ObpInfoMaskToOffset[v55 & 0x3F], v143 = (void **)(v28 - v142), v28 == v142) )
  {
    v58 = (void *)v163;
    if ( !v163 )
      goto LABEL_65;
LABEL_185:
    v56 = v58;
    goto LABEL_65;
  }
  v58 = *v143;
  if ( *v143 )
    goto LABEL_185;
  if ( v163 )
  {
    ObpSetObjectAuditInfo(v28, v163);
  }
  else if ( (POBJECT_TYPE *)ObTypeIndexTable[*(unsigned __int8 *)(v28 + 24) ^ (unsigned __int8)ObHeaderCookie ^ (unsigned __int64)(unsigned __int8)v173] != IoFileObjectType
         || (*(_DWORD *)(*((_QWORD *)Object + 1) + 52LL) & 0x10) == 0 )
  {
    v144 = ObpAllocateAndQuerySecurityDescriptorInfo((__int64)Object, 32, &v175);
    v57 = v175;
    if ( v175 )
    {
      if ( v144 >= 0 )
      {
        v56 = v175;
        ObpSetObjectAuditInfo(v28, v175);
      }
    }
  }
LABEL_65:
  v59 = *(_QWORD *)(a4 + 72);
  v60 = 0;
  *(_QWORD *)v178 = v40;
  TargetHandle = 0LL;
  if ( !v56 )
  {
    v56 = *(void **)(v59 + 56);
    if ( !v56 )
      v56 = *(void **)(a4 + 64);
  }
  if ( *(_BYTE *)(a4 + 9) )
  {
    if ( *(_BYTE *)(a4 + 124) )
    {
      SepAdtPrivilegeObjectAuditAlarm(
        &SeSubsystemName,
        (unsigned __int16 *)(a4 + 144),
        (unsigned __int16 *)(a4 + 128),
        v40,
        *(_QWORD *)(a4 + 32),
        *(_QWORD *)(a4 + 48),
        *(_QWORD *)(a4 + 56),
        *(_DWORD *)(a4 + 20),
        *(int **)v59,
        1);
      goto LABEL_70;
    }
  }
  else if ( !*(_BYTE *)(v59 + 216) )
  {
    goto LABEL_70;
  }
  if ( ZwDuplicateObject(
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         (HANDLE)v40,
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         &TargetHandle,
         0,
         0x200u,
         2u) >= 0 )
  {
    ObReferenceObjectByHandle(TargetHandle, 0, 0LL, 0, &v183, 0LL);
    v39 = v183;
  }
  LOBYTE(v145) = 1;
  LOWORD(v156) = SepAdtClassifyObjectIntoSubCategory(v39, a4 + 144, v145, 0LL);
  if ( v39 )
    ObfDereferenceObject(v39);
  if ( TargetHandle )
  {
    ZwClose(TargetHandle);
    TargetHandle = 0LL;
  }
  CurrentThreadProcessId = PsGetCurrentThreadProcessId();
  v60 = SepAdtOpenObjectAuditAlarm(
          (unsigned __int16)v156,
          (int)&SeSubsystemName,
          (int)v178,
          (int)a4 + 144,
          a4 + 128,
          v56,
          *(_QWORD *)(a4 + 32),
          *(_QWORD *)(a4 + 48),
          *(_DWORD *)(a4 + 24),
          *(_DWORD *)(a4 + 20),
          *(_QWORD *)v59,
          1,
          CurrentThreadProcessId,
          2,
          0LL,
          0,
          0LL,
          v59 + 32,
          a4);
  v147 = PsGetCurrentThreadProcessId();
  LOBYTE(AccessStatus) = 1;
  SepAdtStagingEvent(
    (unsigned __int16)v156,
    v148,
    v178,
    a4 + 144,
    a4 + 128,
    *(_QWORD *)(a4 + 32),
    *(_QWORD *)(a4 + 48),
    *(_DWORD *)(a4 + 24),
    *(_DWORD *)(a4 + 20),
    AccessStatus,
    v147,
    a4);
LABEL_70:
  *(_BYTE *)(a4 + 10) = v60;
  v61 = v166;
  if ( !v166 )
  {
    v62 = **(_DWORD ***)(a4 + 72);
    if ( v62 )
    {
      if ( *v62 )
      {
        SePrivilegeObjectAuditAlarm(
          v40,
          (__int64 *)(a4 + 32),
          *(_DWORD *)(a4 + 20),
          (__int64)v62,
          1,
          KeGetCurrentThread()->PreviousMode);
        v57 = v175;
      }
    }
  }
  if ( v57 )
    ExFreePoolWithTag(v57, 0);
  v63 = v168;
  if ( !v61 && (v168 == CmKeyObjectType || v168 == IoFileObjectType) )
  {
    v64 = *(_QWORD *)(a4 + 32);
    if ( v64 )
    {
      v105 = KeGetCurrentThread();
      v106 = *(_QWORD *)(a4 + 48);
      --v105->KernelApcDisable;
      if ( v106 >= v64 )
      {
        ExAcquireResourceSharedLite(*(PERESOURCE *)(v64 + 48), 1u);
        v111 = KeGetCurrentThread();
        --v111->KernelApcDisable;
        v108 = *(struct _ERESOURCE **)(v106 + 48);
      }
      else
      {
        ExAcquireResourceSharedLite(*(PERESOURCE *)(v106 + 48), 1u);
        v107 = KeGetCurrentThread();
        --v107->KernelApcDisable;
        v108 = *(struct _ERESOURCE **)(v64 + 48);
      }
      ExAcquireResourceSharedLite(v108, 1u);
      if ( (*(_DWORD *)(v64 + 200) & 0x4000) != 0
        && *(int *)(v64 + 196) >= 2
        && !RtlEqualSid(**(PSID **)(v106 + 152), **(PSID **)(v64 + 152)) )
      {
        v117 = OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO((__int64)v161);
        if ( v117 )
          LOBYTE(v117) = 1;
        if ( (_BYTE)v117
          && SepSidInTokenSidHash(
               (PSID_AND_ATTRIBUTES_HASH)(v106 + 808),
               0LL,
               SeConstrainedImpersonationCapabilitySid,
               0,
               1,
               0,
               0) )
        {
          ObHandleRevocationBlockAddObject(*(_QWORD *)(v64 + 216) + 128LL, Object);
        }
      }
      ExReleaseResourceLite(*(PERESOURCE *)(v106 + 48));
      KeLeaveCriticalRegion();
      ExReleaseResourceLite(*(PERESOURCE *)(v64 + 48));
      KeLeaveCriticalRegion();
    }
  }
LABEL_79:
  v65 = Object;
  if ( a5 && v184 )
    *v184 = Object;
  v66 = v151;
  v67 = v179;
  v68 = v40 | 0xFFFFFFFF80000000uLL;
  if ( !v151 )
    v68 = v40;
  *v179 = v68;
  v69 = v152 != 0 ? 0x40000000 : 0;
LABEL_83:
  if ( (_QWORD *)v176[0] != v176 )
  {
    ObpPostInterceptHandleCreate((_DWORD)v65, v66, v69, v153, (__int64)v176);
    v65 = Object;
  }
  if ( (xmmword_14044C2D0 & 0x40) != 0 && v69 >= 0 )
    EtwpTraceHandle(4384LL, *v67, v65, v63);
  return (unsigned int)v69;
}
