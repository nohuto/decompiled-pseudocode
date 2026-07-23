/*
 * XREFs of ObpCreateHandle @ 0x14052CD90
 * Callers:
 *     ObInsertObjectEx @ 0x14050DCA0 (ObInsertObjectEx.c)
 *     ObOpenObjectByPointer @ 0x14050ED20 (ObOpenObjectByPointer.c)
 *     NtOpenProcessTokenEx @ 0x14050EFA0 (NtOpenProcessTokenEx.c)
 *     PsOpenProcess @ 0x14050F290 (PsOpenProcess.c)
 *     ObOpenObjectByNameEx @ 0x14052E3C0 (ObOpenObjectByNameEx.c)
 * Callees:
 *     MiDeleteSubsection @ 0x14002D920 (MiDeleteSubsection.c)
 *     PsGetCurrentThreadProcessId @ 0x14003C360 (PsGetCurrentThreadProcessId.c)
 *     ObReferenceObjectExWithTag @ 0x1400445F0 (ObReferenceObjectExWithTag.c)
 *     SeAccessCheck @ 0x14008D750 (SeAccessCheck.c)
 *     ExAcquireResourceSharedLite @ 0x14008F530 (ExAcquireResourceSharedLite.c)
 *     SepSidInTokenSidHash @ 0x140091F00 (SepSidInTokenSidHash.c)
 *     RtlEqualSid @ 0x1400EDD10 (RtlEqualSid.c)
 *     SeComputeCreatorDeniedRights @ 0x1400EDF40 (SeComputeCreatorDeniedRights.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x1400EEB00 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EFC10 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwDuplicateObject @ 0x14017E6C0 (ZwDuplicateObject.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x14042B8B0 (ExpAllocateHandleTableEntrySlow.c)
 *     SeAppendPrivileges @ 0x1404370B0 (SeAppendPrivileges.c)
 *     SePrivilegeObjectAuditAlarm @ 0x14046C630 (SePrivilegeObjectAuditAlarm.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x14046C68C (SepAdtPrivilegeObjectAuditAlarm.c)
 *     ObpAllocateAndQuerySecurityDescriptorInfo @ 0x14046C97C (ObpAllocateAndQuerySecurityDescriptorInfo.c)
 *     RtlMapGenericMask @ 0x140472660 (RtlMapGenericMask.c)
 *     ObpCallPreOperationCallbacks @ 0x140481100 (ObpCallPreOperationCallbacks.c)
 *     ObpInsertOrLocateNamedObject @ 0x1404F3FB0 (ObpInsertOrLocateNamedObject.c)
 *     ObDereferenceSecurityDescriptor @ 0x1404F48A0 (ObDereferenceSecurityDescriptor.c)
 *     ObpDecrementHandleCount @ 0x1404F5E48 (ObpDecrementHandleCount.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1404F61D0 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     ExpFreeHandleTableEntry @ 0x1404F825C (ExpFreeHandleTableEntry.c)
 *     SePrivilegedServiceAuditAlarm @ 0x14050FBC8 (SePrivilegedServiceAuditAlarm.c)
 *     SePrivilegeCheck @ 0x140527F60 (SePrivilegeCheck.c)
 *     ObpIncrementHandleCountEx @ 0x1405311B0 (ObpIncrementHandleCountEx.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     ObHandleRevocationBlockAddObject @ 0x1406C0BF0 (ObHandleRevocationBlockAddObject.c)
 *     ObpSetObjectAuditInfo @ 0x1406C1550 (ObpSetObjectAuditInfo.c)
 *     ObpPostInterceptHandleCreate @ 0x1406C2054 (ObpPostInterceptHandleCreate.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x1406F3178 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x1406F3EE0 (SepAdtStagingEvent.c)
 *     SepAdtClassifyObjectIntoSubCategory @ 0x1406F462C (SepAdtClassifyObjectIntoSubCategory.c)
 *     EtwpTraceHandle @ 0x14070C11C (EtwpTraceHandle.c)
 *     ExpSetHandleExtraInfo @ 0x140717328 (ExpSetHandleExtraInfo.c)
 *     ExpUpdateDebugInfo @ 0x140717598 (ExpUpdateDebugInfo.c)
 */

__int64 __fastcall ObpCreateHandle(
        int a1,
        char *a2,
        ACCESS_MASK a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        char a7,
        POBJECT_TYPE *a8,
        int a9,
        PVOID *a10,
        __int64 *a11)
{
  int v12; // r15d
  char *v13; // r14
  POBJECT_TYPE *v14; // r13
  unsigned __int64 v16; // rbx
  PEPROCESS Process; // rcx
  ULONG_PTR v18; // rax
  bool v19; // al
  ULONG_PTR v20; // rdi
  __int64 v21; // r14
  KPROCESSOR_MODE AccessMode; // r15
  int v23; // eax
  signed __int64 v24; // rdx
  signed __int64 v25; // rbx
  int v26; // edx
  unsigned __int64 v27; // rbx
  bool v28; // zf
  __int64 v29; // rax
  __int64 result; // rax
  unsigned __int64 v31; // rcx
  ULONG_PTR v32; // r15
  __int64 v33; // rbx
  ACCESS_MASK v34; // edi
  signed __int64 v35; // rdx
  signed __int64 v36; // rbx
  int v37; // edx
  unsigned __int64 v38; // rbx
  bool v39; // zf
  int v40; // r14d
  __int64 v41; // rax
  int v42; // edi
  int v43; // eax
  unsigned int v44; // edi
  unsigned __int64 v45; // r12
  unsigned __int64 v46; // rdi
  __int64 v47; // r13
  char v48; // al
  unsigned int Number; // ecx
  unsigned int v50; // r14d
  int v51; // r15d
  unsigned int v52; // eax
  ULONG_PTR v53; // rbx
  __int64 v54; // rdi
  __int64 v55; // rax
  int v56; // eax
  __int64 v57; // rbx
  __int64 v58; // r14
  char v59; // al
  UNICODE_STRING *v60; // r14
  UNICODE_STRING *v61; // r12
  UNICODE_STRING *v62; // rax
  __int64 v63; // r15
  char v64; // bl
  PVOID v65; // rdi
  int v66; // ebx
  _DWORD *v67; // r9
  POBJECT_TYPE *v68; // r14
  int v69; // edi
  unsigned __int64 v70; // rbx
  PVOID v71; // rax
  int v72; // ebx
  BOOL v73; // edx
  __int64 *v74; // rdi
  __int64 v75; // rbx
  char HandleTableEntrySlow; // bl
  _QWORD *v77; // rbx
  signed __int64 v78; // rax
  signed __int64 v79; // rtt
  signed __int64 v80; // rax
  unsigned __int64 v81; // rax
  __int64 v82; // r12
  unsigned __int64 v83; // rax
  ULONG_PTR v84; // r13
  signed __int64 v85; // rdx
  signed __int64 v86; // rax
  signed __int64 v87; // rbx
  int v88; // edx
  volatile signed __int64 *PoolWithTag; // rbx
  bool v90; // zf
  char v91; // r13
  int v92; // edi
  struct _KTHREAD *v93; // rax
  BOOLEAN v94; // al
  struct _PRIVILEGE_SET *v95; // r12
  BOOLEAN v96; // r14
  ACCESS_MASK v97; // eax
  __int64 v98; // rcx
  volatile signed __int64 *v99; // rbx
  signed __int64 v100; // rax
  signed __int64 v101; // rtt
  __int64 v102; // rbx
  int v103; // r12d
  int v104; // r14d
  _QWORD *v105; // rbx
  signed __int64 v106; // rax
  signed __int64 v107; // rtt
  signed __int64 v108; // rax
  struct _KTHREAD *v109; // rax
  unsigned __int64 v110; // rsi
  struct _KTHREAD *v111; // rax
  struct _ERESOURCE *v112; // rcx
  ULONG_PTR v113; // r12
  signed __int64 v114; // rax
  signed __int64 v115; // rtt
  signed __int64 v116; // rax
  signed __int64 v117; // rtt
  struct _KTHREAD *v118; // rax
  struct _KTHREAD *v119; // rax
  struct _KTHREAD *v120; // rax
  struct _KTHREAD *v121; // rax
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 v123; // rax
  signed __int64 v124; // rtt
  struct _KTHREAD *v125; // r14
  unsigned int v126; // ecx
  volatile signed __int64 *v127; // rdi
  signed __int64 v128; // rax
  bool v129; // cc
  signed __int64 v130; // rax
  __int64 v131; // rcx
  _QWORD *v132; // rax
  struct _KTHREAD *v133; // r15
  unsigned int v134; // ecx
  volatile signed __int64 *v135; // rdi
  signed __int64 v136; // rax
  signed __int64 v137; // rax
  volatile signed __int64 v138; // rcx
  volatile signed __int64 **v139; // rax
  struct _KTHREAD *v140; // r12
  unsigned int v141; // ecx
  volatile signed __int64 *v142; // rdi
  signed __int64 v143; // rax
  signed __int64 v144; // rax
  __int64 v145; // rcx
  _QWORD *v146; // rax
  __int64 v147; // rax
  UNICODE_STRING **v148; // rcx
  int v149; // eax
  __int64 v150; // r8
  __int64 CurrentThreadProcessId; // rax
  __int64 v152; // rax
  __int64 v153; // rdx
  int GrantedAccess; // [rsp+40h] [rbp-E0h]
  int AccessStatus; // [rsp+48h] [rbp-D8h]
  bool v156; // [rsp+A0h] [rbp-80h]
  int v157; // [rsp+A4h] [rbp-7Ch] BYREF
  char v158; // [rsp+A8h] [rbp-78h]
  PVOID Object; // [rsp+B0h] [rbp-70h]
  int v160; // [rsp+B8h] [rbp-68h]
  NTSTATUS v161; // [rsp+BCh] [rbp-64h] BYREF
  ACCESS_MASK AccessMask; // [rsp+C0h] [rbp-60h] BYREF
  POBJECT_TYPE *v163; // [rsp+C8h] [rbp-58h]
  SIZE_T NumberOfBytes; // [rsp+D0h] [rbp-50h] BYREF
  struct _KTHREAD *v165; // [rsp+D8h] [rbp-48h]
  UNICODE_STRING *v166; // [rsp+E0h] [rbp-40h]
  int v167; // [rsp+E8h] [rbp-38h] BYREF
  ACCESS_MASK v168; // [rsp+ECh] [rbp-34h] BYREF
  unsigned int v169; // [rsp+F0h] [rbp-30h]
  int v170; // [rsp+F4h] [rbp-2Ch]
  PVOID v171; // [rsp+F8h] [rbp-28h] BYREF
  unsigned __int64 v172; // [rsp+100h] [rbp-20h]
  ULONG_PTR BugCheckParameter1; // [rsp+108h] [rbp-18h]
  ULONG_PTR BugCheckParameter2; // [rsp+110h] [rbp-10h]
  _DWORD v175[2]; // [rsp+118h] [rbp-8h] BYREF
  HANDLE TargetHandle; // [rsp+120h] [rbp+0h] BYREF
  unsigned int v177; // [rsp+128h] [rbp+8h]
  UNICODE_STRING *v178; // [rsp+130h] [rbp+10h] BYREF
  __int64 v179; // [rsp+138h] [rbp+18h]
  _QWORD v180[2]; // [rsp+140h] [rbp+20h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+150h] [rbp+30h] BYREF
  int v182[2]; // [rsp+158h] [rbp+38h] BYREF
  __int64 *v183; // [rsp+160h] [rbp+40h]
  _DWORD v184[2]; // [rsp+168h] [rbp+48h] BYREF
  __int64 v185; // [rsp+170h] [rbp+50h]
  __int64 v186; // [rsp+178h] [rbp+58h]
  PVOID v187; // [rsp+180h] [rbp+60h] BYREF
  PVOID *v188; // [rsp+188h] [rbp+68h]
  _QWORD v189[6]; // [rsp+190h] [rbp+70h] BYREF
  __int64 v190; // [rsp+1C0h] [rbp+A0h]
  struct _PRIVILEGE_SET RequiredPrivileges; // [rsp+1C8h] [rbp+A8h] BYREF

  v12 = a6;
  v13 = a2;
  v14 = a8;
  v188 = a10;
  v183 = a11;
  v175[0] = 0;
  v171 = 0LL;
  v158 = 0;
  v175[1] = a9;
  Object = a2;
  v170 = a1;
  AccessMask = a3;
  v160 = a6;
  v163 = a8;
  if ( (a6 & 0x200) != 0 )
  {
    v18 = ObpKernelHandleTable;
    Process = PsInitialSystemProcess;
    v16 = ObpKernelHandleTable;
  }
  else
  {
    a3 = AccessMask;
    v16 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[5];
    Process = KeGetCurrentThread()->ApcState.Process;
    v18 = ObpKernelHandleTable;
  }
  BugCheckParameter1 = (ULONG_PTR)Process;
  v172 = v16;
  v19 = v16 == v18;
  v156 = v19;
  if ( a4 && (!v19 || *(_DWORD *)(a4 + 24)) )
  {
    v20 = (ULONG_PTR)(a2 - 48);
    v21 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v20 + 24) ^ (unsigned __int64)BYTE1(v20)];
    if ( (a6 & 0x400) != 0 )
      AccessMode = 1;
    else
      AccessMode = a7;
    if ( (unsigned int)(a1 - 1) > 1 )
    {
      v23 = *(_DWORD *)(a4 + 16);
      if ( (v23 & 0x2000000) != 0 )
        *(_DWORD *)(a4 + 16) = v23 & 0xEDFFFFFF | 0x10000000;
      if ( (*(_DWORD *)(a4 + 16) & 0xF0000000) != 0 )
        RtlMapGenericMask((PACCESS_MASK)(a4 + 16), (PGENERIC_MAPPING)(v21 + 76));
      if ( (*(_DWORD *)(a4 + 16) & 0x1000000) == 0 )
      {
LABEL_13:
        *(_DWORD *)(a4 + 20) |= *(_DWORD *)(a4 + 16);
        *(_DWORD *)(a4 + 16) = 0;
        *(_DWORD *)(a4 + 20) &= *(_DWORD *)(v21 + 92) | 0x1000000;
        _m_prefetchw((const void *)(v20 + 40));
        v24 = *(_QWORD *)(v20 + 40);
        if ( (v24 & 0xF) != 0 )
        {
          do
          {
            v108 = _InterlockedCompareExchange64((volatile signed __int64 *)(v20 + 40), v24 - 1, v24);
            if ( v24 == v108 )
              break;
            v24 = v108;
          }
          while ( (v108 & 0xF) != 0 );
        }
        v25 = v24;
        v26 = v24 & 0xF;
        v27 = v25 & 0xFFFFFFFFFFFFFFF0uLL;
        v28 = v26 == 1;
        if ( !v26 )
        {
          if ( v27 )
          {
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->KernelApcDisable;
            ExAcquirePushLockSharedEx(v20 + 16, 0LL);
            v27 = *(_QWORD *)(v20 + 40) & 0xFFFFFFFFFFFFFFF0uLL;
            if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v27 - 16), 0x10uLL) <= 0 )
              __fastfail(0xEu);
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v20 + 16), 0LL, 17LL) != 17 )
              ExfReleasePushLockShared((signed __int64 *)(v20 + 16));
            KeAbPostRelease(v20 + 16);
            KeLeaveCriticalRegion();
            goto LABEL_230;
          }
          v28 = 0;
        }
        if ( !v28 )
        {
LABEL_18:
          *(_DWORD *)(a4 + 20) &= ~(unsigned int)SeComputeCreatorDeniedRights(
                                                   (PSECURITY_SUBJECT_CONTEXT)(a4 + 32),
                                                   a4,
                                                   *(_DWORD *)(a4 + 20),
                                                   v27);
          if ( v27 )
          {
            v105 = (_QWORD *)(v27 - 32);
            _m_prefetchw(v105 + 2);
            v106 = v105[2];
            while ( v106 - 1 > 0 )
            {
              v107 = v106;
              v106 = _InterlockedCompareExchange64(v105 + 2, v106 - 1, v106);
              if ( v107 == v106 )
                goto LABEL_19;
            }
            if ( v106 != 1 )
              __fastfail(0xEu);
            v125 = KeGetCurrentThread();
            v126 = v105[3] % 0x101uLL;
            --v125->KernelApcDisable;
            v127 = (volatile signed __int64 *)((char *)&ObsSecurityDescriptorCache + 24 * v126);
            ExAcquirePushLockExclusiveEx((ULONG_PTR)v127, 0LL);
            v128 = _InterlockedExchangeAdd64(v105 + 2, 0xFFFFFFFFFFFFFFFFuLL);
            v129 = v128 <= 1;
            v130 = v128 - 1;
            if ( v129 )
            {
              if ( v130 )
                __fastfail(0xEu);
              v131 = *v105;
              v132 = (_QWORD *)v105[1];
              if ( *(_QWORD **)(*v105 + 8LL) != v105 || (_QWORD *)*v132 != v105 )
                __fastfail(3u);
              *v132 = v131;
              *(_QWORD *)(v131 + 8) = v132;
              if ( (_InterlockedExchangeAdd64(v127, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock(v127);
              KeAbPostRelease((ULONG_PTR)v127);
              KeLeaveCriticalRegionThread((__int64)v125);
              ExFreePoolWithTag(v105, 0);
            }
            else
            {
              if ( (_InterlockedExchangeAdd64(v127, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock(v127);
              KeAbPostRelease((ULONG_PTR)v127);
              KeLeaveCriticalRegionThread((__int64)v125);
            }
          }
LABEL_19:
          v161 = 0;
          goto LABEL_20;
        }
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v27 - 16), 0xFuLL) <= 0 )
          __fastfail(0xEu);
LABEL_230:
        _m_prefetchw((const void *)(v20 + 40));
        v123 = *(_QWORD *)(v20 + 40);
        while ( (v123 & 0xF) == 0 )
        {
          if ( v27 != (v123 & 0xFFFFFFFFFFFFFFF0uLL) )
            break;
          v124 = v123;
          v123 = _InterlockedCompareExchange64((volatile signed __int64 *)(v20 + 40), v123 + 15, v123);
          if ( v124 == v123 )
            goto LABEL_18;
        }
        ObDereferenceSecurityDescriptor(v27, 0xFu);
        goto LABEL_18;
      }
      RequiredPrivileges.Privilege[0].Luid = SeSecurityPrivilege;
      RequiredPrivileges.PrivilegeCount = 1;
      RequiredPrivileges.Privilege[0].Attributes = 0;
      RequiredPrivileges.Control = 1;
      if ( SePrivilegeCheck(&RequiredPrivileges, (PSECURITY_SUBJECT_CONTEXT)(a4 + 32), AccessMode) )
      {
        *(_DWORD *)(a4 + 16) &= ~0x1000000u;
        *(_DWORD *)(a4 + 20) |= 0x1000000u;
        SeAppendPrivileges((PACCESS_STATE)a4, &RequiredPrivileges);
        goto LABEL_13;
      }
      SePrivilegedServiceAuditAlarm(0LL, (__int64 *)(a4 + 32), (int *)&RequiredPrivileges, 0);
      return (unsigned int)-1073741727;
    }
    v81 = BYTE1(v20) ^ (unsigned __int64)*(unsigned __int8 *)(v20 + 24);
    v168 = 0;
    Privileges = 0LL;
    v82 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v81];
    v83 = BYTE1(v20) ^ (unsigned __int64)*(unsigned __int8 *)(v20 + 24);
    v166 = (UNICODE_STRING *)v82;
    v84 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v83];
    BugCheckParameter2 = v84;
    if ( *(__int64 (__fastcall **)(_QWORD *, int, DWORD *, void *, ULONG *, PGENERIC_MAPPING, POOL_TYPE, GENERIC_MAPPING *))(v84 + 152) == SeDefaultObjectMethod )
    {
      _m_prefetchw((const void *)(v20 + 40));
      v85 = *(_QWORD *)(v20 + 40);
      if ( (v85 & 0xF) != 0 )
      {
        do
        {
          v86 = _InterlockedCompareExchange64((volatile signed __int64 *)(v20 + 40), v85 - 1, v85);
          if ( v85 == v86 )
            break;
          v85 = v86;
        }
        while ( (v86 & 0xF) != 0 );
      }
      v87 = v85;
      v88 = v85 & 0xF;
      PoolWithTag = (volatile signed __int64 *)(v87 & 0xFFFFFFFFFFFFFFF0uLL);
      v90 = v88 == 1;
      if ( !v88 )
      {
        if ( PoolWithTag )
        {
          v120 = KeGetCurrentThread();
          --v120->KernelApcDisable;
          ExAcquirePushLockSharedEx(v20 + 16, 0LL);
          PoolWithTag = (volatile signed __int64 *)(*(_QWORD *)(v20 + 40) & 0xFFFFFFFFFFFFFFF0uLL);
          if ( _InterlockedExchangeAdd64(PoolWithTag - 2, 0x10uLL) <= 0 )
            __fastfail(0xEu);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v20 + 16), 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)(v20 + 16));
          KeAbPostRelease(v20 + 16);
          KeLeaveCriticalRegion();
          goto LABEL_180;
        }
        v90 = 0;
      }
      if ( !v90 )
      {
LABEL_119:
        v91 = 0;
        if ( !PoolWithTag && ((*(_BYTE *)(BugCheckParameter2 + 66) & 8) != 0 || (*(_BYTE *)(v20 + 26) & 2) != 0) )
          KeBugCheckEx(0x189u, v20, BugCheckParameter2, 1uLL, 0LL);
        v92 = 0;
        goto LABEL_121;
      }
      if ( _InterlockedExchangeAdd64(PoolWithTag - 2, 0xFuLL) <= 0 )
        __fastfail(0xEu);
LABEL_180:
      _m_prefetchw((const void *)(v20 + 40));
      v116 = *(_QWORD *)(v20 + 40);
      while ( (v116 & 0xF) == 0 )
      {
        if ( PoolWithTag != (volatile signed __int64 *)(v116 & 0xFFFFFFFFFFFFFFF0uLL) )
          break;
        v117 = v116;
        v116 = _InterlockedCompareExchange64((volatile signed __int64 *)(v20 + 40), v116 + 15, v116);
        if ( v117 == v116 )
          goto LABEL_119;
      }
      ObDereferenceSecurityDescriptor((__int64)PoolWithTag, 0xFu);
      goto LABEL_119;
    }
    v167 = 447;
    LODWORD(NumberOfBytes) = ObpDefaultSecurityDescriptorLength;
    PoolWithTag = (volatile signed __int64 *)ExAllocatePoolWithTag(
                                               PagedPool,
                                               (unsigned int)ObpDefaultSecurityDescriptorLength,
                                               0x7153624Fu);
    if ( PoolWithTag )
    {
      v113 = v20 + 40;
      v92 = (*(__int64 (__fastcall **)(PVOID, __int64, int *, volatile signed __int64 *, SIZE_T *, ULONG_PTR, _DWORD, ULONG_PTR, KPROCESSOR_MODE))(v84 + 152))(
              Object,
              1LL,
              &v167,
              PoolWithTag,
              &NumberOfBytes,
              v20 + 40,
              *(_DWORD *)(v84 + 100),
              v84 + 76,
              AccessMode);
      if ( v92 == -1073741789 )
      {
        ExFreePoolWithTag((PVOID)PoolWithTag, 0);
        LODWORD(ObpDefaultSecurityDescriptorLength) = NumberOfBytes;
        PoolWithTag = (volatile signed __int64 *)ExAllocatePoolWithTag(
                                                   PagedPool,
                                                   (unsigned int)NumberOfBytes,
                                                   0x7153624Fu);
        if ( !PoolWithTag )
        {
          v92 = -1073741670;
          goto LABEL_255;
        }
        LOBYTE(GrantedAccess) = AccessMode;
        v92 = (*(__int64 (__fastcall **)(PVOID, __int64, int *, volatile signed __int64 *, SIZE_T *, ULONG_PTR, _DWORD, ULONG_PTR, int))(v84 + 152))(
                Object,
                1LL,
                &v167,
                PoolWithTag,
                &NumberOfBytes,
                v113,
                *(_DWORD *)(v84 + 100),
                v84 + 76,
                GrantedAccess);
      }
      if ( v92 < 0 )
      {
        ExFreePoolWithTag((PVOID)PoolWithTag, 0);
        v91 = 0;
      }
      else
      {
        v91 = 1;
      }
      if ( v92 >= 0 )
      {
        v82 = (__int64)v166;
LABEL_121:
        if ( !PoolWithTag )
        {
          *(_DWORD *)(a4 + 20) |= *(_DWORD *)(a4 + 16);
          v14 = v163;
          *(_DWORD *)(a4 + 16) = 0;
          v161 = v92;
          goto LABEL_20;
        }
        v93 = KeGetCurrentThread();
        --v93->KernelApcDisable;
        ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)(a4 + 48) + 48LL), 1u);
        if ( *(_QWORD *)(a4 + 32) )
        {
          v119 = KeGetCurrentThread();
          --v119->KernelApcDisable;
          ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)(a4 + 32) + 48LL), 1u);
        }
        v94 = SeAccessCheck(
                (PSECURITY_DESCRIPTOR)PoolWithTag,
                (PSECURITY_SUBJECT_CONTEXT)(a4 + 32),
                1u,
                *(_DWORD *)(a4 + 16),
                *(_DWORD *)(a4 + 20),
                &Privileges,
                (PGENERIC_MAPPING)(v82 + 76),
                AccessMode,
                &v168,
                &v161);
        v95 = Privileges;
        v96 = v94;
        if ( Privileges )
        {
          SeAppendPrivileges((PACCESS_STATE)a4, Privileges);
          MiDeleteSubsection(v95);
        }
        if ( v96 )
        {
          v97 = v168;
          *(_DWORD *)(a4 + 20) |= v168;
          *(_DWORD *)(a4 + 16) &= ~(v97 | 0x2000000);
        }
        if ( AccessMode )
          SeOpenObjectAuditAlarmWithTransaction(
            v166 + 1,
            Object,
            0LL,
            (PSECURITY_DESCRIPTOR)PoolWithTag,
            (PACCESS_STATE)a4,
            0,
            v96,
            AccessMode,
            0LL,
            (PBOOLEAN)(a4 + 10));
        ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(a4 + 48) + 48LL));
        KeLeaveCriticalRegion();
        v98 = *(_QWORD *)(a4 + 32);
        if ( v98 )
        {
          ExReleaseResourceLite(*(PERESOURCE *)(v98 + 48));
          KeLeaveCriticalRegion();
        }
        if ( v91 )
        {
          ExFreePoolWithTag((PVOID)PoolWithTag, 0);
        }
        else
        {
          v99 = PoolWithTag - 4;
          _m_prefetchw((const void *)(v99 + 2));
          v100 = *((_QWORD *)v99 + 2);
          while ( v100 - 1 > 0 )
          {
            v101 = v100;
            v100 = _InterlockedCompareExchange64(v99 + 2, v100 - 1, v100);
            if ( v101 == v100 )
              goto LABEL_136;
          }
          if ( v100 != 1 )
            __fastfail(0xEu);
          v133 = KeGetCurrentThread();
          v134 = *((_QWORD *)v99 + 3) % 0x101uLL;
          --v133->KernelApcDisable;
          v135 = (volatile signed __int64 *)((char *)&ObsSecurityDescriptorCache + 24 * v134);
          ExAcquirePushLockExclusiveEx((ULONG_PTR)v135, 0LL);
          v136 = _InterlockedExchangeAdd64(v99 + 2, 0xFFFFFFFFFFFFFFFFuLL);
          v129 = v136 <= 1;
          v137 = v136 - 1;
          if ( v129 )
          {
            if ( v137 )
              __fastfail(0xEu);
            v138 = *v99;
            v139 = (volatile signed __int64 **)*((_QWORD *)v99 + 1);
            if ( *(volatile signed __int64 **)(*v99 + 8) != v99 || *v139 != v99 )
              __fastfail(3u);
            *v139 = (volatile signed __int64 *)v138;
            *(_QWORD *)(v138 + 8) = v139;
            if ( (_InterlockedExchangeAdd64(v135, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock(v135);
            KeAbPostRelease((ULONG_PTR)v135);
            KeLeaveCriticalRegionThread((__int64)v133);
            ExFreePoolWithTag((PVOID)v99, 0);
          }
          else
          {
            if ( (_InterlockedExchangeAdd64(v135, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock(v135);
            KeAbPostRelease((ULONG_PTR)v135);
            KeLeaveCriticalRegionThread((__int64)v133);
          }
        }
LABEL_136:
        if ( v96 )
        {
          v14 = v163;
LABEL_20:
          v157 = *(_DWORD *)(a4 + 20);
LABEL_21:
          v13 = (char *)Object;
          v12 = v160;
          goto LABEL_22;
        }
        v92 = v161;
LABEL_192:
        if ( v92 >= 0 )
        {
          v14 = v163;
          goto LABEL_21;
        }
        return (unsigned int)v92;
      }
    }
    else
    {
      v92 = -1073741670;
    }
LABEL_255:
    v161 = v92;
    goto LABEL_192;
  }
  if ( (a3 & 0x2000000) != 0 )
  {
    a3 = a3 & 0xEDFFFFFF | 0x10000000;
    AccessMask = a3;
  }
  if ( (a3 & 0xF0000000) != 0 )
  {
    RtlMapGenericMask(
      &AccessMask,
      (PGENERIC_MAPPING)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*(a2 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)a2 - 48) >> 8)]
                       + 76));
    a3 = AccessMask;
  }
  v157 = a3;
LABEL_22:
  v29 = 0LL;
  v166 = 0LL;
  if ( v14 )
  {
    v29 = (__int64)v14[4];
    v166 = (UNICODE_STRING *)v29;
  }
  result = ObpIncrementHandleCountEx(v170, (unsigned int)&v157, BugCheckParameter1, (_DWORD)v13, a7, v12, v29);
  if ( (int)result < 0 )
    return result;
  if ( a4 )
  {
    if ( v14 )
    {
      result = ObpInsertOrLocateNamedObject(BugCheckParameter1, v13, (ACCESS_MASK *)&v157, a4, a7, v14, (char **)&v171);
      if ( (int)result < 0 )
        return result;
      if ( v171 == v13 )
      {
        v171 = 0LL;
      }
      else
      {
        v13 = (char *)v171;
        Object = v171;
        v158 = 1;
      }
    }
    if ( *(_BYTE *)(a4 + 10) )
      v160 = v12 | 4;
  }
  v31 = (unsigned __int8)*(v13 - 24);
  v32 = (ULONG_PTR)(v13 - 48);
  BugCheckParameter2 = (ULONG_PTR)(v13 - 48);
  v179 = (unsigned __int8)((unsigned __int16)((_WORD)v13 - 48) >> 8);
  v33 = ObTypeIndexTable[v179 ^ (unsigned __int8)ObHeaderCookie ^ v31];
  v163 = (POBJECT_TYPE *)v33;
  v34 = (*(_DWORD *)(v33 + 92) | 0x1000000) & v157;
  v157 = v34;
  if ( a4 )
  {
    _m_prefetchw((const void *)(v32 + 40));
    v35 = *(_QWORD *)(v32 + 40);
    if ( (v35 & 0xF) != 0 )
    {
      do
      {
        v80 = _InterlockedCompareExchange64((volatile signed __int64 *)(v32 + 40), v35 - 1, v35);
        if ( v35 == v80 )
          break;
        v35 = v80;
      }
      while ( (v80 & 0xF) != 0 );
    }
    v36 = v35;
    v37 = v35 & 0xF;
    v38 = v36 & 0xFFFFFFFFFFFFFFF0uLL;
    v39 = v37 == 1;
    if ( !v37 )
    {
      if ( v38 )
      {
        v121 = KeGetCurrentThread();
        --v121->KernelApcDisable;
        ExAcquirePushLockSharedEx(v32 + 16, 0LL);
        v38 = *(_QWORD *)(v32 + 40) & 0xFFFFFFFFFFFFFFF0uLL;
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v38 - 16), 0x10uLL) <= 0 )
          __fastfail(0xEu);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v32 + 16), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v32 + 16));
        KeAbPostRelease(v32 + 16);
        KeLeaveCriticalRegion();
        goto LABEL_175;
      }
      v39 = 0;
    }
    if ( !v39 )
    {
LABEL_35:
      v40 = SeComputeCreatorDeniedRights((PSECURITY_SUBJECT_CONTEXT)(a4 + 32), a4, v157, v38);
      if ( v38 )
      {
        v77 = (_QWORD *)(v38 - 32);
        _m_prefetchw(v77 + 2);
        v78 = v77[2];
        while ( v78 - 1 > 0 )
        {
          v79 = v78;
          v78 = _InterlockedCompareExchange64(v77 + 2, v78 - 1, v78);
          if ( v79 == v78 )
            goto LABEL_36;
        }
        if ( v78 != 1 )
          __fastfail(0xEu);
        v140 = KeGetCurrentThread();
        v141 = v77[3] % 0x101uLL;
        --v140->KernelApcDisable;
        v142 = (volatile signed __int64 *)((char *)&ObsSecurityDescriptorCache + 24 * v141);
        ExAcquirePushLockExclusiveEx((ULONG_PTR)v142, 0LL);
        v143 = _InterlockedExchangeAdd64(v77 + 2, 0xFFFFFFFFFFFFFFFFuLL);
        v129 = v143 <= 1;
        v144 = v143 - 1;
        if ( v129 )
        {
          if ( v144 )
            __fastfail(0xEu);
          v145 = *v77;
          v146 = (_QWORD *)v77[1];
          if ( *(_QWORD **)(*v77 + 8LL) != v77 || (_QWORD *)*v146 != v77 )
            __fastfail(3u);
          *v146 = v145;
          *(_QWORD *)(v145 + 8) = v146;
          if ( (_InterlockedExchangeAdd64(v142, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v142);
          KeAbPostRelease((ULONG_PTR)v142);
          KeLeaveCriticalRegionThread((__int64)v140);
          ExFreePoolWithTag(v77, 0);
        }
        else
        {
          if ( (_InterlockedExchangeAdd64(v142, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v142);
          KeAbPostRelease((ULONG_PTR)v142);
          KeLeaveCriticalRegionThread((__int64)v140);
        }
      }
LABEL_36:
      v41 = *(_QWORD *)(a4 + 72);
      v34 = ~v40 & v157;
      v33 = (__int64)v163;
      v13 = (char *)Object;
      v157 = v34;
      *(_DWORD *)(a4 + 20) = v34;
      v175[0] = *(_DWORD *)(v41 + 28);
      goto LABEL_37;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v38 - 16), 0xFuLL) <= 0 )
      __fastfail(0xEu);
LABEL_175:
    _m_prefetchw((const void *)(v32 + 40));
    v114 = *(_QWORD *)(v32 + 40);
    while ( (v114 & 0xF) == 0 )
    {
      if ( v38 != (v114 & 0xFFFFFFFFFFFFFFF0uLL) )
        break;
      v115 = v114;
      v114 = _InterlockedCompareExchange64((volatile signed __int64 *)(v32 + 40), v114 + 15, v114);
      if ( v115 == v114 )
        goto LABEL_35;
    }
    ObDereferenceSecurityDescriptor(v38, 0xFu);
    goto LABEL_35;
  }
LABEL_37:
  if ( a5 )
  {
    ObReferenceObjectExWithTag((__int64)v13, a5);
    v34 = v157;
  }
  if ( v171 )
  {
    ObfDereferenceObject(v171);
    v34 = v157;
  }
  v180[1] = v180;
  v180[0] = v180;
  if ( (*(_BYTE *)(v33 + 66) & 0x40) != 0 && *(_QWORD *)(v33 + 200) != v33 + 200 )
  {
    v102 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v32 + 24) ^ (unsigned __int64)BYTE1(v32)];
    v103 = v34 & *(_DWORD *)(v102 + 96);
    memset(v189, 0, 0x28uLL);
    LODWORD(v189[0]) = 1;
    v185 = 0LL;
    v186 = 0LL;
    v189[4] = v184;
    v189[2] = v102;
    v184[1] = v34;
    HIDWORD(v189[0]) ^= (BYTE4(v189[0]) ^ v156) & 1;
    v189[1] = Object;
    v189[3] = 0LL;
    v184[0] = v34;
    v72 = ObpCallPreOperationCallbacks(v102, (__int64)v189, v180);
    if ( v72 < 0 )
    {
      ObpDecrementHandleCount((_KPROCESS *)BugCheckParameter1, v32);
      if ( a5 )
      {
        if ( a5 > 1 )
          _InterlockedExchangeAdd64((volatile signed __int64 *)v32, (int)(1 - a5));
        ObfDereferenceObject(Object);
      }
      return (unsigned int)v72;
    }
    if ( v156 )
    {
      v34 = v157;
    }
    else
    {
      v104 = (v103 | v184[0]) & v34;
      v157 = v104;
      v34 = v104;
      if ( a4 )
        *(_DWORD *)(a4 + 20) = v104;
    }
  }
  v42 = v34 & 0x1FFFFFF;
  v190 = 0LL;
  v43 = v42 | 0x2000000;
  v44 = v42 & 0xFDFFFFFF;
  if ( (v160 & 8) != 0 )
    v44 = v43;
  v45 = (v32 << 16) & 0xFFFFFFFFFFF1FFFFuLL | ((unsigned __int64)(v160 & 7) << 17) | 1;
  LODWORD(v190) = v44;
  v165 = KeGetCurrentThread();
  --v165->KernelApcDisable;
  v46 = v172;
  v47 = 0LL;
  v48 = *(_BYTE *)(v172 + 44);
  if ( (v48 & 4) != 0 )
  {
LABEL_297:
    v58 = (__int64)v165;
    goto LABEL_64;
  }
  if ( (v48 & 1) != 0 )
    Number = 0;
  else
    Number = KeGetPcr()->Prcb.Number;
  v50 = Number;
  v160 = ExpFreeListCount;
  v169 = Number;
LABEL_48:
  v51 = 0;
  v177 = *(_DWORD *)v46;
  v52 = v160;
  while ( 1 )
  {
    v53 = v46 + ((v50 + 1LL) << 6);
    if ( *(_QWORD *)(v53 + 8) )
      break;
LABEL_94:
    if ( ++v50 == v52 )
      v50 = 0;
    if ( ++v51 >= v52 )
    {
      v50 = v169;
      v75 = v46 + ((v169 + 1LL) << 6);
      ExAcquirePushLockExclusiveEx(v46 + 56, 0LL);
      if ( v177 == *(_DWORD *)v46 )
        HandleTableEntrySlow = ExpAllocateHandleTableEntrySlow((unsigned int *)v46, v75);
      else
        HandleTableEntrySlow = 1;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v46 + 56), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v46 + 56));
      KeAbPostRelease(v46 + 56);
      if ( !HandleTableEntrySlow )
        goto LABEL_296;
      goto LABEL_48;
    }
  }
  ExAcquirePushLockExclusiveEx(v46 + ((v50 + 1LL) << 6), 0LL);
  v54 = *(_QWORD *)(v53 + 8);
  if ( v54 )
  {
    v55 = *(_QWORD *)(v54 + 8);
    *(_QWORD *)(v53 + 8) = v55;
    if ( !v55 )
      *(_QWORD *)(v53 + 16) = 0LL;
    v56 = ++*(_DWORD *)(v53 + 24);
    if ( v56 > *(_DWORD *)(v53 + 28) )
      *(_DWORD *)(v53 + 28) = v56;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v53, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v53);
  KeAbPostRelease(v53);
  if ( !v54 )
  {
    v52 = v160;
    v46 = v172;
    goto LABEL_94;
  }
  v47 = *(_QWORD *)((v54 & 0xFFFFFFFFFFFFF000uLL) + 8) + 4 * ((__int64)(v54 - (v54 & 0xFFFFFFFFFFFFF000uLL)) >> 4);
  if ( !v175[0] && !a9 )
  {
    v57 = v172;
    goto LABEL_61;
  }
  v57 = v172;
  if ( (unsigned int)ExpSetHandleExtraInfo(v172, v47, v175) )
  {
    ExpFreeHandleTableEntry(v57, v47, v54);
    v47 = 0LL;
LABEL_296:
    v32 = BugCheckParameter2;
    goto LABEL_297;
  }
LABEL_61:
  v58 = (__int64)v165;
  if ( *(_QWORD *)(v57 + 96) )
    ExpUpdateDebugInfo(v57, v165, v47, 1LL);
  v32 = BugCheckParameter2;
  *(_QWORD *)(v54 + 8) = v190;
  *(_QWORD *)v54 = v45;
LABEL_64:
  KeLeaveCriticalRegionThread(v58);
  if ( !v47 )
  {
    ObpDecrementHandleCount((_KPROCESS *)BugCheckParameter1, v32);
    if ( a5 )
    {
      if ( a5 > 1 )
        _InterlockedExchangeAdd64((volatile signed __int64 *)v32, (int)(1 - a5));
      ObfDereferenceObject(Object);
    }
    v68 = v163;
    v72 = -1073741670;
    v71 = Object;
    v73 = v156;
    v74 = v183;
    goto LABEL_88;
  }
  if ( !a4 )
  {
    v68 = v163;
    goto LABEL_82;
  }
  v59 = *(_BYTE *)(v32 + 26);
  v60 = 0LL;
  v178 = 0LL;
  v61 = 0LL;
  if ( (v59 & 0x20) == 0
    || (v147 = ObpInfoMaskToOffset[v59 & 0x3F], v148 = (UNICODE_STRING **)(v32 - v147), v32 == v147) )
  {
    v62 = v166;
    if ( !v166 )
      goto LABEL_68;
LABEL_185:
    v60 = v62;
    goto LABEL_68;
  }
  v62 = *v148;
  if ( *v148 )
    goto LABEL_185;
  if ( v166 )
  {
    ObpSetObjectAuditInfo(v32, v166);
  }
  else if ( (POBJECT_TYPE *)ObTypeIndexTable[v179 ^ (unsigned __int8)ObHeaderCookie ^ (unsigned __int64)*(unsigned __int8 *)(v32 + 24)] != IoFileObjectType
         || (*(_DWORD *)(*((_QWORD *)Object + 1) + 52LL) & 0x10) == 0 )
  {
    v149 = ObpAllocateAndQuerySecurityDescriptorInfo((__int64)Object, 32, &v178);
    v61 = v178;
    if ( v178 )
    {
      if ( v149 >= 0 )
      {
        v60 = v178;
        ObpSetObjectAuditInfo(v32, v178);
      }
    }
  }
LABEL_68:
  v63 = *(_QWORD *)(a4 + 72);
  v64 = 0;
  *(_QWORD *)v182 = v47;
  TargetHandle = 0LL;
  v65 = 0LL;
  if ( !v60 )
  {
    v60 = *(UNICODE_STRING **)(v63 + 56);
    if ( !v60 )
      v60 = *(UNICODE_STRING **)(a4 + 64);
  }
  if ( *(_BYTE *)(a4 + 9) )
  {
    if ( *(_BYTE *)(a4 + 124) )
    {
      SepAdtPrivilegeObjectAuditAlarm(
        &SeSubsystemName,
        (unsigned __int16 *)(a4 + 144),
        (unsigned __int16 *)(a4 + 128),
        v47,
        *(_QWORD *)(a4 + 32),
        *(_QWORD *)(a4 + 48),
        *(_QWORD *)(a4 + 56),
        *(_DWORD *)(a4 + 20),
        *(int **)v63,
        1);
      goto LABEL_73;
    }
  }
  else if ( !*(_BYTE *)(v63 + 216) )
  {
    goto LABEL_73;
  }
  if ( ZwDuplicateObject(
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         (HANDLE)v47,
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         &TargetHandle,
         0,
         0x200u,
         2u) >= 0 )
  {
    ObReferenceObjectByHandle(TargetHandle, 0, 0LL, 0, &v187, 0LL);
    v65 = v187;
  }
  LOBYTE(v150) = 1;
  LOWORD(v161) = SepAdtClassifyObjectIntoSubCategory(v65, a4 + 144, v150, 0LL);
  if ( v65 )
    ObfDereferenceObject(v65);
  if ( TargetHandle )
  {
    ZwClose(TargetHandle);
    TargetHandle = 0LL;
  }
  CurrentThreadProcessId = PsGetCurrentThreadProcessId();
  v64 = SepAdtOpenObjectAuditAlarm(
          (unsigned __int16)v161,
          (int)&SeSubsystemName,
          (int)v182,
          (int)a4 + 144,
          a4 + 128,
          v60,
          *(_QWORD *)(a4 + 32),
          *(_QWORD *)(a4 + 48),
          *(_DWORD *)(a4 + 24),
          *(_DWORD *)(a4 + 20),
          *(_QWORD *)v63,
          1,
          CurrentThreadProcessId,
          2,
          0LL,
          0,
          0LL,
          v63 + 32,
          a4);
  v152 = PsGetCurrentThreadProcessId();
  LOBYTE(AccessStatus) = 1;
  SepAdtStagingEvent(
    (unsigned __int16)v161,
    v153,
    v182,
    a4 + 144,
    a4 + 128,
    *(_QWORD *)(a4 + 32),
    *(_QWORD *)(a4 + 48),
    *(_DWORD *)(a4 + 24),
    *(_DWORD *)(a4 + 20),
    AccessStatus,
    v152,
    a4);
LABEL_73:
  *(_BYTE *)(a4 + 10) = v64;
  v66 = v170;
  if ( !v170 )
  {
    v67 = **(_DWORD ***)(a4 + 72);
    if ( v67 )
    {
      if ( *v67 )
      {
        SePrivilegeObjectAuditAlarm(
          v47,
          (__int64 *)(a4 + 32),
          *(_DWORD *)(a4 + 20),
          (__int64)v67,
          1,
          KeGetCurrentThread()->PreviousMode);
        v61 = v178;
      }
    }
  }
  if ( v61 )
    ExFreePoolWithTag(v61, 0);
  v68 = v163;
  if ( !v66 )
  {
    v69 = 0;
    if ( v163 == CmKeyObjectType || v163 == IoFileObjectType )
    {
      v70 = *(_QWORD *)(a4 + 32);
      if ( v70 )
      {
        v109 = KeGetCurrentThread();
        v110 = *(_QWORD *)(a4 + 48);
        --v109->KernelApcDisable;
        if ( v110 >= v70 )
        {
          ExAcquireResourceSharedLite(*(PERESOURCE *)(v70 + 48), 1u);
          v118 = KeGetCurrentThread();
          --v118->KernelApcDisable;
          v112 = *(struct _ERESOURCE **)(v110 + 48);
        }
        else
        {
          ExAcquireResourceSharedLite(*(PERESOURCE *)(v110 + 48), 1u);
          v111 = KeGetCurrentThread();
          --v111->KernelApcDisable;
          v112 = *(struct _ERESOURCE **)(v70 + 48);
        }
        ExAcquireResourceSharedLite(v112, 1u);
        if ( (*(_DWORD *)(v70 + 200) & 0x4000) != 0
          && *(int *)(v70 + 196) >= 2
          && !RtlEqualSid(**(PSID **)(v110 + 152), **(PSID **)(v70 + 152))
          && SepSidInTokenSidHash(
               (PSID_AND_ATTRIBUTES_HASH)(v110 + 808),
               0LL,
               (void *)SeConstrainedImpersonationCapabilitySid,
               0,
               1,
               0) )
        {
          v69 = ObHandleRevocationBlockAddObject(*(_QWORD *)(v70 + 216) + 128LL, Object);
        }
        ExReleaseResourceLite(*(PERESOURCE *)(v110 + 48));
        KeLeaveCriticalRegion();
        ExReleaseResourceLite(*(PERESOURCE *)(v70 + 48));
        KeLeaveCriticalRegion();
        if ( v69 < 0 )
          return (unsigned int)v69;
      }
    }
  }
LABEL_82:
  v71 = Object;
  if ( a5 && v188 )
    *v188 = Object;
  v72 = 0;
  v73 = v156;
  if ( v158 )
    v72 = 0x40000000;
  if ( v156 )
    v47 |= 0xFFFFFFFF80000000uLL;
  v74 = v183;
  *v183 = v47;
LABEL_88:
  if ( (_QWORD *)v180[0] != v180 )
  {
    ObpPostInterceptHandleCreate((_DWORD)v71, v73, v72, v157, (__int64)v180);
    v71 = Object;
  }
  if ( (xmmword_1403E4010 & 0x40) != 0 && v72 >= 0 )
    EtwpTraceHandle(4384LL, *v74, v71, v68);
  return (unsigned int)v72;
}
