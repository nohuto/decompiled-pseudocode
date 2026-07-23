/*
 * XREFs of ObpCreateHandle @ 0x1404AE7E0
 * Callers:
 *     ObOpenObjectByNameEx @ 0x1404AC5A0 (ObOpenObjectByNameEx.c)
 *     ObInsertObjectEx @ 0x1404BC710 (ObInsertObjectEx.c)
 *     PsOpenProcess @ 0x1404C4620 (PsOpenProcess.c)
 *     NtOpenProcessTokenEx @ 0x1404C5240 (NtOpenProcessTokenEx.c)
 *     ObOpenObjectByPointer @ 0x1404C5930 (ObOpenObjectByPointer.c)
 * Callees:
 *     MiDeleteSubsection @ 0x14000DDD0 (MiDeleteSubsection.c)
 *     ObfReferenceObjectWithTag @ 0x140024260 (ObfReferenceObjectWithTag.c)
 *     SepSidInTokenSidHash @ 0x140068A00 (SepSidInTokenSidHash.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     SeAccessCheck @ 0x14007E440 (SeAccessCheck.c)
 *     ExAcquireResourceSharedLite @ 0x1400800D0 (ExAcquireResourceSharedLite.c)
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     SeComputeCreatorDeniedRights @ 0x1400829D0 (SeComputeCreatorDeniedRights.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     PsGetCurrentThreadProcessId @ 0x1400851E0 (PsGetCurrentThreadProcessId.c)
 *     RtlEqualSid @ 0x140087C60 (RtlEqualSid.c)
 *     ObReferenceObjectExWithTag @ 0x14008AAD0 (ObReferenceObjectExWithTag.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x1401092D0 (OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwDuplicateObject @ 0x14017E040 (ZwDuplicateObject.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x14045DC44 (ExpAllocateHandleTableEntrySlow.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x14046BC3C (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SePrivilegedServiceAuditAlarm @ 0x14046C374 (SePrivilegedServiceAuditAlarm.c)
 *     ObDereferenceSecurityDescriptor @ 0x140484DE0 (ObDereferenceSecurityDescriptor.c)
 *     ObpInsertOrLocateNamedObject @ 0x140486408 (ObpInsertOrLocateNamedObject.c)
 *     ObpDecrementHandleCount @ 0x140487254 (ObpDecrementHandleCount.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140487F80 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     ObpIncrementHandleCountEx @ 0x1404B1770 (ObpIncrementHandleCountEx.c)
 *     RtlMapGenericMask @ 0x1404C0550 (RtlMapGenericMask.c)
 *     SePrivilegeCheck @ 0x1404C45D0 (SePrivilegeCheck.c)
 *     ExpFreeHandleTableEntry @ 0x1404FBF0C (ExpFreeHandleTableEntry.c)
 *     SeAppendPrivileges @ 0x14056D5D0 (SeAppendPrivileges.c)
 *     ObpAllocateAndQuerySecurityDescriptorInfo @ 0x1405942D4 (ObpAllocateAndQuerySecurityDescriptorInfo.c)
 *     ObHandleRevocationBlockAddObject @ 0x1406EF6A0 (ObHandleRevocationBlockAddObject.c)
 *     ObpSetObjectAuditInfo @ 0x1406EFEFC (ObpSetObjectAuditInfo.c)
 *     ObpCallPostOperationCallbacks @ 0x1406F0A30 (ObpCallPostOperationCallbacks.c)
 *     ObpPostInterceptHandleCreate @ 0x1406F0AD4 (ObpPostInterceptHandleCreate.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14072AC08 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x14072B970 (SepAdtStagingEvent.c)
 *     SepAdtClassifyObjectIntoSubCategory @ 0x14072C0C4 (SepAdtClassifyObjectIntoSubCategory.c)
 *     EtwpTraceHandle @ 0x140747764 (EtwpTraceHandle.c)
 *     ExpSetHandleExtraInfo @ 0x140756A98 (ExpSetHandleExtraInfo.c)
 *     ExpUpdateDebugInfo @ 0x140756D18 (ExpUpdateDebugInfo.c)
 */

__int64 __fastcall ObpCreateHandle(
        int a1,
        char *a2,
        int a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        char a7,
        __int64 a8,
        int a9,
        PVOID *a10,
        unsigned __int64 *a11)
{
  char *v11; // r15
  unsigned int v12; // esi
  unsigned __int64 v14; // rdi
  ULONG_PTR v15; // rdi
  KPROCESSOR_MODE AccessMode; // si
  ULONG_PTR v17; // r15
  int v18; // eax
  signed __int64 v19; // rdx
  signed __int64 v20; // rbx
  int v21; // edx
  unsigned __int64 v22; // rbx
  bool v23; // zf
  __int64 v24; // rax
  ULONG_PTR v25; // rdi
  __int64 result; // rax
  __int64 v27; // r15
  __int64 v28; // rbx
  int v29; // edi
  signed __int64 v30; // rdx
  signed __int64 v31; // rbx
  int v32; // edx
  unsigned __int64 v33; // rbx
  bool v34; // zf
  __int64 v35; // rax
  PVOID v36; // r13
  int v37; // edi
  int v38; // eax
  unsigned int v39; // edi
  unsigned __int64 v40; // r12
  unsigned __int64 v41; // rsi
  __int64 v42; // rbx
  char v43; // al
  unsigned int Number; // edx
  unsigned int v45; // ecx
  unsigned int v46; // r13d
  unsigned int v47; // r15d
  ULONG_PTR v48; // rdi
  unsigned int v49; // eax
  char HandleTableEntrySlow; // r13
  __int64 v51; // rdi
  unsigned __int64 *v52; // rsi
  unsigned __int64 v53; // rax
  int v54; // eax
  unsigned __int64 v55; // rdi
  __int64 v56; // r13
  __int64 v57; // rdi
  void *v58; // r15
  void *v59; // r13
  void *v60; // rax
  char v61; // di
  PVOID v62; // rsi
  __int64 v63; // r12
  int v64; // edi
  int *v65; // rdx
  POBJECT_TYPE *v66; // r15
  unsigned __int64 v67; // rdi
  PVOID v68; // r10
  bool v69; // cl
  unsigned __int64 *v70; // rdi
  unsigned __int64 v71; // rax
  int v72; // ebx
  _QWORD *v73; // rbx
  signed __int64 v74; // rax
  signed __int64 v75; // rtt
  signed __int64 v76; // rax
  signed __int64 v77; // rdx
  signed __int64 v78; // rax
  signed __int64 v79; // rbx
  int v80; // edx
  volatile signed __int64 *PoolWithTag; // rbx
  bool v82; // zf
  int v83; // edi
  struct _KTHREAD *v84; // rax
  BOOLEAN v85; // r12
  ACCESS_MASK v86; // eax
  UNICODE_STRING *v87; // rcx
  __int64 v88; // rcx
  volatile signed __int64 *v89; // rbx
  signed __int64 v90; // rax
  signed __int64 v91; // rtt
  int v92; // esi
  __int64 v93; // rbx
  struct _EX_RUNDOWN_REF *v94; // rdi
  struct _EX_RUNDOWN_REF *v95; // r13
  struct _KTHREAD *v96; // rax
  struct _KTHREAD *v97; // rax
  ULONG_PTR v98; // r12
  struct _EX_RUNDOWN_REF *v99; // rbx
  __int64 v100; // rcx
  struct _KTHREAD *v101; // rdx
  void (__fastcall *Count)(_QWORD, _QWORD *); // rax
  struct _KTHREAD *v103; // rax
  struct _KTHREAD *v104; // rcx
  int v105; // esi
  struct _KTHREAD *v106; // rax
  unsigned __int64 v107; // rsi
  struct _KTHREAD *v108; // rax
  struct _ERESOURCE *v109; // rcx
  _QWORD *v110; // rbx
  signed __int64 v111; // rax
  signed __int64 v112; // rtt
  signed __int64 v113; // rax
  struct _KTHREAD *v114; // rax
  signed __int64 v115; // rax
  signed __int64 v116; // rtt
  signed __int64 v117; // rax
  signed __int64 v118; // rtt
  __int64 (__fastcall *v119)(PVOID, __int64, int *, volatile signed __int64 *, unsigned int *, ULONG_PTR, int, ULONG_PTR, KPROCESSOR_MODE); // rax
  struct _KTHREAD *v120; // rax
  __int64 v121; // rax
  struct _KTHREAD *v122; // rax
  struct _KTHREAD *v123; // rax
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 v125; // rax
  signed __int64 v126; // rtt
  struct _KTHREAD *v127; // rsi
  unsigned int v128; // ecx
  volatile signed __int64 *v129; // rdi
  signed __int64 v130; // rax
  bool v131; // cc
  signed __int64 v132; // rax
  __int64 v133; // rcx
  _QWORD *v134; // rax
  struct _KTHREAD *v135; // rsi
  unsigned int v136; // ecx
  volatile signed __int64 *v137; // rdi
  signed __int64 v138; // rax
  signed __int64 v139; // rax
  volatile signed __int64 v140; // rcx
  volatile signed __int64 **v141; // rax
  struct _KTHREAD *v142; // r12
  unsigned int v143; // ecx
  volatile signed __int64 *v144; // rdi
  signed __int64 v145; // rax
  signed __int64 v146; // rax
  __int64 v147; // rcx
  _QWORD *v148; // rax
  struct _KTHREAD *v149; // rax
  struct _KTHREAD **v150; // rcx
  __int64 v151; // rax
  void **v152; // rcx
  int v153; // eax
  __int64 v154; // r8
  unsigned __int64 CurrentThreadProcessId; // rax
  unsigned __int64 v156; // rax
  __int64 v157; // rdx
  int GenericMapping; // [rsp+30h] [rbp-F0h]
  int GrantedAccess; // [rsp+40h] [rbp-E0h]
  int AccessStatus; // [rsp+48h] [rbp-D8h]
  bool v161; // [rsp+A0h] [rbp-80h]
  char v162; // [rsp+A1h] [rbp-7Fh]
  int v163; // [rsp+A4h] [rbp-7Ch] BYREF
  int v164; // [rsp+A8h] [rbp-78h]
  unsigned int v165; // [rsp+ACh] [rbp-74h]
  PVOID Object; // [rsp+B0h] [rbp-70h]
  NTSTATUS v167; // [rsp+B8h] [rbp-68h] BYREF
  ACCESS_MASK AccessMask; // [rsp+C0h] [rbp-60h] BYREF
  struct _KTHREAD *v169; // [rsp+C8h] [rbp-58h]
  unsigned int NumberOfBytes; // [rsp+D0h] [rbp-50h] BYREF
  int NumberOfBytes_4; // [rsp+D4h] [rbp-4Ch]
  _QWORD *v172; // [rsp+D8h] [rbp-48h] BYREF
  struct _LIST_ENTRY *v173; // [rsp+E0h] [rbp-40h]
  ACCESS_MASK v174; // [rsp+E8h] [rbp-38h] BYREF
  int v175; // [rsp+ECh] [rbp-34h]
  PVOID v176; // [rsp+F0h] [rbp-30h] BYREF
  unsigned __int64 v177; // [rsp+F8h] [rbp-28h]
  __int64 v178; // [rsp+100h] [rbp-20h]
  POBJECT_TYPE *v179; // [rsp+108h] [rbp-18h]
  __int64 v180; // [rsp+110h] [rbp-10h]
  int v181; // [rsp+118h] [rbp-8h] BYREF
  HANDLE TargetHandle; // [rsp+120h] [rbp+0h] BYREF
  void *v183; // [rsp+128h] [rbp+8h] BYREF
  _DWORD v184[2]; // [rsp+130h] [rbp+10h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+138h] [rbp+18h]
  PPRIVILEGE_SET Privileges; // [rsp+140h] [rbp+20h] BYREF
  __int64 v187; // [rsp+148h] [rbp+28h]
  _QWORD v188[5]; // [rsp+150h] [rbp+30h] BYREF
  int v189[2]; // [rsp+178h] [rbp+58h] BYREF
  unsigned __int64 *v190; // [rsp+180h] [rbp+60h]
  _DWORD v191[2]; // [rsp+188h] [rbp+68h] BYREF
  __int64 v192; // [rsp+190h] [rbp+70h]
  __int64 v193; // [rsp+198h] [rbp+78h]
  PVOID v194; // [rsp+1A0h] [rbp+80h] BYREF
  PVOID *v195; // [rsp+1A8h] [rbp+88h]
  unsigned __int64 v196; // [rsp+1B8h] [rbp+98h]
  _QWORD v197[6]; // [rsp+1C0h] [rbp+A0h] BYREF
  struct _PRIVILEGE_SET RequiredPrivileges; // [rsp+1F0h] [rbp+D0h] BYREF

  v11 = a2;
  v12 = a6;
  v195 = a10;
  v190 = a11;
  v184[0] = 0;
  v176 = 0LL;
  v162 = 0;
  Object = a2;
  v184[1] = a9;
  v175 = a1;
  AccessMask = a3;
  v165 = a6;
  if ( (a6 & 0x200) != 0 )
  {
    v14 = ObpKernelHandleTable;
    BugCheckParameter1 = (ULONG_PTR)PsInitialSystemProcess;
  }
  else
  {
    a3 = AccessMask;
    v14 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[5];
    BugCheckParameter1 = (ULONG_PTR)KeGetCurrentThread()->ApcState.Process;
  }
  v177 = v14;
  v161 = v14 == ObpKernelHandleTable;
  if ( a4 && (v14 != ObpKernelHandleTable || *(_DWORD *)(a4 + 24)) )
  {
    v15 = (ULONG_PTR)(a2 - 48);
    AccessMode = 1;
    v17 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*(a2 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)a2 - 48) >> 8)];
    if ( (a6 & 0x400) == 0 )
      AccessMode = a7;
    if ( (unsigned int)(a1 - 1) > 1 )
    {
      v18 = *(_DWORD *)(a4 + 16);
      if ( (v18 & 0x2000000) != 0 )
        *(_DWORD *)(a4 + 16) = v18 & 0xEDFFFFFF | 0x10000000;
      if ( (*(_DWORD *)(a4 + 16) & 0xF0000000) != 0 )
        RtlMapGenericMask((PACCESS_MASK)(a4 + 16), (PGENERIC_MAPPING)(v17 + 76));
      if ( (*(_DWORD *)(a4 + 16) & 0x1000000) == 0 )
      {
LABEL_13:
        *(_DWORD *)(a4 + 20) |= *(_DWORD *)(a4 + 16);
        *(_DWORD *)(a4 + 16) = 0;
        *(_DWORD *)(a4 + 20) &= *(_DWORD *)(v17 + 92) | 0x1000000;
        _m_prefetchw((const void *)(v15 + 40));
        v19 = *(_QWORD *)(v15 + 40);
        if ( (v19 & 0xF) != 0 )
        {
          do
          {
            v113 = _InterlockedCompareExchange64((volatile signed __int64 *)(v15 + 40), v19 - 1, v19);
            if ( v19 == v113 )
              break;
            v19 = v113;
          }
          while ( (v113 & 0xF) != 0 );
        }
        v20 = v19;
        v21 = v19 & 0xF;
        v22 = v20 & 0xFFFFFFFFFFFFFFF0uLL;
        v23 = v21 == 1;
        if ( !v21 )
        {
          if ( v22 )
          {
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->KernelApcDisable;
            ExAcquirePushLockSharedEx(v15 + 16, 0LL);
            v22 = *(_QWORD *)(v15 + 40) & 0xFFFFFFFFFFFFFFF0uLL;
            if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v22 - 16), 0x10uLL) <= 0 )
              __fastfail(0xEu);
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v15 + 16), 0LL, 17LL) != 17 )
              ExfReleasePushLockShared((signed __int64 *)(v15 + 16));
            KeAbPostRelease(v15 + 16);
            KeLeaveCriticalRegion();
            goto LABEL_251;
          }
          v23 = 0;
        }
        if ( !v23 )
        {
LABEL_18:
          *(_DWORD *)(a4 + 20) &= ~(unsigned int)SeComputeCreatorDeniedRights(
                                                   (PSECURITY_SUBJECT_CONTEXT)(a4 + 32),
                                                   a4,
                                                   *(_DWORD *)(a4 + 20),
                                                   v22);
          if ( v22 )
          {
            v110 = (_QWORD *)(v22 - 32);
            _m_prefetchw(v110 + 2);
            v111 = v110[2];
            while ( v111 - 1 > 0 )
            {
              v112 = v111;
              v111 = _InterlockedCompareExchange64(v110 + 2, v111 - 1, v111);
              if ( v112 == v111 )
                goto LABEL_19;
            }
            if ( v111 != 1 )
              __fastfail(0xEu);
            v127 = KeGetCurrentThread();
            v128 = v110[3] % 0x101uLL;
            --v127->KernelApcDisable;
            v129 = (volatile signed __int64 *)((char *)&ObsSecurityDescriptorCache + 24 * v128);
            ExAcquirePushLockExclusiveEx((ULONG_PTR)v129, 0LL);
            v130 = _InterlockedExchangeAdd64(v110 + 2, 0xFFFFFFFFFFFFFFFFuLL);
            v131 = v130 <= 1;
            v132 = v130 - 1;
            if ( v131 )
            {
              if ( v132 )
                __fastfail(0xEu);
              v133 = *v110;
              v134 = (_QWORD *)v110[1];
              if ( *(_QWORD **)(*v110 + 8LL) != v110 || (_QWORD *)*v134 != v110 )
                __fastfail(3u);
              *v134 = v133;
              *(_QWORD *)(v133 + 8) = v134;
              if ( (_InterlockedExchangeAdd64(v129, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock(v129);
              KeAbPostRelease((ULONG_PTR)v129);
              KeLeaveCriticalRegionThread((__int64)v127);
              ExFreePoolWithTag(v110, 0);
            }
            else
            {
              if ( (_InterlockedExchangeAdd64(v129, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock(v129);
              KeAbPostRelease((ULONG_PTR)v129);
              KeLeaveCriticalRegionThread((__int64)v127);
            }
          }
LABEL_19:
          v167 = 0;
          goto LABEL_20;
        }
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v22 - 16), 0xFuLL) <= 0 )
          __fastfail(0xEu);
LABEL_251:
        _m_prefetchw((const void *)(v15 + 40));
        v125 = *(_QWORD *)(v15 + 40);
        while ( (v125 & 0xF) == 0 )
        {
          if ( v22 != (v125 & 0xFFFFFFFFFFFFFFF0uLL) )
            break;
          v126 = v125;
          v125 = _InterlockedCompareExchange64((volatile signed __int64 *)(v15 + 40), v125 + 15, v125);
          if ( v126 == v125 )
            goto LABEL_18;
        }
        ObDereferenceSecurityDescriptor(v22, 0xFu);
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
    v174 = 0;
    Privileges = 0LL;
    if ( *(_UNKNOWN **)(v17 + 152) == &SeDefaultObjectMethod )
    {
      _m_prefetchw((const void *)(v15 + 40));
      v77 = *(_QWORD *)(v15 + 40);
      if ( (v77 & 0xF) != 0 )
      {
        do
        {
          v78 = _InterlockedCompareExchange64((volatile signed __int64 *)(v15 + 40), v77 - 1, v77);
          if ( v77 == v78 )
            break;
          v77 = v78;
        }
        while ( (v78 & 0xF) != 0 );
      }
      v79 = v77;
      v80 = v77 & 0xF;
      PoolWithTag = (volatile signed __int64 *)(v79 & 0xFFFFFFFFFFFFFFF0uLL);
      v82 = v80 == 1;
      if ( !v80 )
      {
        if ( PoolWithTag )
        {
          v122 = KeGetCurrentThread();
          --v122->KernelApcDisable;
          ExAcquirePushLockSharedEx(v15 + 16, 0LL);
          PoolWithTag = (volatile signed __int64 *)(*(_QWORD *)(v15 + 40) & 0xFFFFFFFFFFFFFFF0uLL);
          if ( _InterlockedExchangeAdd64(PoolWithTag - 2, 0x10uLL) <= 0 )
            __fastfail(0xEu);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v15 + 16), 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)(v15 + 16));
          KeAbPostRelease(v15 + 16);
          KeLeaveCriticalRegion();
          goto LABEL_189;
        }
        v82 = 0;
      }
      if ( !v82 )
      {
LABEL_111:
        LOBYTE(v164) = 0;
        if ( !PoolWithTag && ((*(_BYTE *)(v17 + 66) & 8) != 0 || (*(_BYTE *)(v15 + 26) & 2) != 0) )
          KeBugCheckEx(0x189u, v15, v17, 1uLL, 0LL);
        v83 = 0;
        goto LABEL_113;
      }
      if ( _InterlockedExchangeAdd64(PoolWithTag - 2, 0xFuLL) <= 0 )
        __fastfail(0xEu);
LABEL_189:
      _m_prefetchw((const void *)(v15 + 40));
      v115 = *(_QWORD *)(v15 + 40);
      while ( (v115 & 0xF) == 0 )
      {
        if ( PoolWithTag != (volatile signed __int64 *)(v115 & 0xFFFFFFFFFFFFFFF0uLL) )
          break;
        v116 = v115;
        v115 = _InterlockedCompareExchange64((volatile signed __int64 *)(v15 + 40), v115 + 15, v115);
        if ( v116 == v115 )
          goto LABEL_111;
      }
      ObDereferenceSecurityDescriptor((__int64)PoolWithTag, 0xFu);
      goto LABEL_111;
    }
    v181 = 447;
    NumberOfBytes = ObpDefaultSecurityDescriptorLength;
    PoolWithTag = (volatile signed __int64 *)ExAllocatePoolWithTag(
                                               PagedPool,
                                               (unsigned int)ObpDefaultSecurityDescriptorLength,
                                               0x7153624Fu);
    if ( PoolWithTag )
    {
      GenericMapping = *(_DWORD *)(v17 + 100);
      v119 = *(__int64 (__fastcall **)(PVOID, __int64, int *, volatile signed __int64 *, unsigned int *, ULONG_PTR, int, ULONG_PTR, KPROCESSOR_MODE))(v17 + 152);
      v180 = v15 + 40;
      v83 = v119(Object, 1LL, &v181, PoolWithTag, &NumberOfBytes, v15 + 40, GenericMapping, v17 + 76, AccessMode);
      if ( v83 == -1073741789 )
      {
        ExFreePoolWithTag((PVOID)PoolWithTag, 0);
        LODWORD(ObpDefaultSecurityDescriptorLength) = NumberOfBytes;
        PoolWithTag = (volatile signed __int64 *)ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x7153624Fu);
        if ( !PoolWithTag )
        {
          v83 = -1073741670;
          goto LABEL_278;
        }
        LOBYTE(GrantedAccess) = AccessMode;
        v83 = (*(__int64 (__fastcall **)(PVOID, __int64, int *, volatile signed __int64 *, unsigned int *, __int64, _DWORD, ULONG_PTR, int))(v17 + 152))(
                Object,
                1LL,
                &v181,
                PoolWithTag,
                &NumberOfBytes,
                v180,
                *(_DWORD *)(v17 + 100),
                v17 + 76,
                GrantedAccess);
      }
      LOBYTE(v164) = 1;
      if ( v83 >= 0 )
      {
LABEL_113:
        if ( !PoolWithTag )
        {
          *(_DWORD *)(a4 + 20) |= *(_DWORD *)(a4 + 16);
          *(_DWORD *)(a4 + 16) = 0;
          v167 = v83;
LABEL_20:
          v11 = (char *)Object;
          v163 = *(_DWORD *)(a4 + 20);
LABEL_21:
          v12 = v165;
          goto LABEL_22;
        }
        v84 = KeGetCurrentThread();
        --v84->KernelApcDisable;
        ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)(a4 + 48) + 48LL), 1u);
        if ( *(_QWORD *)(a4 + 32) )
        {
          v120 = KeGetCurrentThread();
          --v120->KernelApcDisable;
          ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)(a4 + 32) + 48LL), 1u);
        }
        v85 = SeAccessCheck(
                (PSECURITY_DESCRIPTOR)PoolWithTag,
                (PSECURITY_SUBJECT_CONTEXT)(a4 + 32),
                1u,
                *(_DWORD *)(a4 + 16),
                *(_DWORD *)(a4 + 20),
                &Privileges,
                (PGENERIC_MAPPING)(v17 + 76),
                AccessMode,
                &v174,
                &v167);
        if ( Privileges )
        {
          SeAppendPrivileges((PACCESS_STATE)a4, Privileges);
          MiDeleteSubsection(Privileges);
        }
        if ( v85 )
        {
          v86 = v174;
          *(_DWORD *)(a4 + 20) |= v174;
          *(_DWORD *)(a4 + 16) &= ~(v86 | 0x2000000);
        }
        if ( AccessMode )
        {
          v87 = (UNICODE_STRING *)(v17 + 16);
          v11 = (char *)Object;
          SeOpenObjectAuditAlarmWithTransaction(
            v87,
            Object,
            0LL,
            (PSECURITY_DESCRIPTOR)PoolWithTag,
            (PACCESS_STATE)a4,
            0,
            v85,
            AccessMode,
            0LL,
            (PBOOLEAN)(a4 + 10));
        }
        else
        {
          v11 = (char *)Object;
        }
        ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(a4 + 48) + 48LL));
        KeLeaveCriticalRegion();
        v88 = *(_QWORD *)(a4 + 32);
        if ( v88 )
        {
          ExReleaseResourceLite(*(PERESOURCE *)(v88 + 48));
          KeLeaveCriticalRegion();
        }
        if ( (_BYTE)v164 )
        {
          ExFreePoolWithTag((PVOID)PoolWithTag, 0);
        }
        else
        {
          v89 = PoolWithTag - 4;
          _m_prefetchw((const void *)(v89 + 2));
          v90 = *((_QWORD *)v89 + 2);
          while ( v90 - 1 > 0 )
          {
            v91 = v90;
            v90 = _InterlockedCompareExchange64(v89 + 2, v90 - 1, v90);
            if ( v91 == v90 )
              goto LABEL_128;
          }
          if ( v90 != 1 )
            __fastfail(0xEu);
          v135 = KeGetCurrentThread();
          v136 = *((_QWORD *)v89 + 3) % 0x101uLL;
          --v135->KernelApcDisable;
          v137 = (volatile signed __int64 *)((char *)&ObsSecurityDescriptorCache + 24 * v136);
          ExAcquirePushLockExclusiveEx((ULONG_PTR)v137, 0LL);
          v138 = _InterlockedExchangeAdd64(v89 + 2, 0xFFFFFFFFFFFFFFFFuLL);
          v131 = v138 <= 1;
          v139 = v138 - 1;
          if ( v131 )
          {
            if ( v139 )
              __fastfail(0xEu);
            v140 = *v89;
            v141 = (volatile signed __int64 **)*((_QWORD *)v89 + 1);
            if ( *(volatile signed __int64 **)(*v89 + 8) != v89 || *v141 != v89 )
              __fastfail(3u);
            *v141 = (volatile signed __int64 *)v140;
            *(_QWORD *)(v140 + 8) = v141;
            if ( (_InterlockedExchangeAdd64(v137, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock(v137);
            KeAbPostRelease((ULONG_PTR)v137);
            KeLeaveCriticalRegionThread((__int64)v135);
            ExFreePoolWithTag((PVOID)v89, 0);
          }
          else
          {
            if ( (_InterlockedExchangeAdd64(v137, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock(v137);
            KeAbPostRelease((ULONG_PTR)v137);
            KeLeaveCriticalRegionThread((__int64)v135);
          }
        }
LABEL_128:
        if ( v85 )
          goto LABEL_20;
        v83 = v167;
        goto LABEL_130;
      }
      ExFreePoolWithTag((PVOID)PoolWithTag, 0);
      LOBYTE(v164) = 0;
    }
    else
    {
      v83 = -1073741670;
    }
LABEL_278:
    v11 = (char *)Object;
    v167 = v83;
LABEL_130:
    if ( v83 >= 0 )
      goto LABEL_21;
    return (unsigned int)v83;
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
  v163 = a3;
LABEL_22:
  v24 = 0LL;
  v180 = 0LL;
  if ( a8 )
  {
    v24 = *(_QWORD *)(a8 + 32);
    v180 = v24;
  }
  v25 = BugCheckParameter1;
  result = ObpIncrementHandleCountEx(v175, (unsigned int)&v163, BugCheckParameter1, (_DWORD)v11, a7, v12, v24);
  if ( (int)result < 0 )
    return result;
  if ( a4 )
  {
    if ( a8 )
    {
      result = ObpInsertOrLocateNamedObject(v25, v11, (__int64)&v163, a4, a7, (_DWORD *)a8, &v176);
      if ( (int)result < 0 )
        return result;
      if ( v176 == v11 )
      {
        v176 = 0LL;
      }
      else
      {
        v11 = (char *)v176;
        v162 = 1;
      }
      Object = v11;
    }
    if ( *(_BYTE *)(a4 + 10) )
    {
      v12 |= 4u;
      v165 = v12;
    }
  }
  v27 = (__int64)(v11 - 48);
  v178 = v27;
  v187 = BYTE1(v27);
  v28 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v27 + 24) ^ (unsigned __int64)BYTE1(v27)];
  v179 = (POBJECT_TYPE *)v28;
  v29 = (*(_DWORD *)(v28 + 92) | 0x1000000) & v163;
  v163 = v29;
  if ( a4 )
  {
    _m_prefetchw((const void *)(v27 + 40));
    v30 = *(_QWORD *)(v27 + 40);
    if ( (v30 & 0xF) != 0 )
    {
      do
      {
        v76 = _InterlockedCompareExchange64((volatile signed __int64 *)(v27 + 40), v30 - 1, v30);
        if ( v30 == v76 )
          break;
        v30 = v76;
      }
      while ( (v76 & 0xF) != 0 );
    }
    v31 = v30;
    v32 = v30 & 0xF;
    v33 = v31 & 0xFFFFFFFFFFFFFFF0uLL;
    v34 = v32 == 1;
    if ( !v32 )
    {
      if ( v33 )
      {
        v123 = KeGetCurrentThread();
        --v123->KernelApcDisable;
        ExAcquirePushLockSharedEx(v27 + 16, 0LL);
        v33 = *(_QWORD *)(v27 + 40) & 0xFFFFFFFFFFFFFFF0uLL;
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v33 - 16), 0x10uLL) <= 0 )
          __fastfail(0xEu);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v27 + 16), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v27 + 16));
        KeAbPostRelease(v27 + 16);
        KeLeaveCriticalRegion();
        goto LABEL_194;
      }
      v34 = 0;
    }
    if ( !v34 )
    {
LABEL_35:
      v12 = SeComputeCreatorDeniedRights((PSECURITY_SUBJECT_CONTEXT)(a4 + 32), a4, v163, v33);
      if ( v33 )
      {
        v73 = (_QWORD *)(v33 - 32);
        _m_prefetchw(v73 + 2);
        v74 = v73[2];
        while ( v74 - 1 > 0 )
        {
          v75 = v74;
          v74 = _InterlockedCompareExchange64(v73 + 2, v74 - 1, v74);
          if ( v75 == v74 )
            goto LABEL_36;
        }
        if ( v74 != 1 )
          __fastfail(0xEu);
        v142 = KeGetCurrentThread();
        v143 = v73[3] % 0x101uLL;
        --v142->KernelApcDisable;
        v144 = (volatile signed __int64 *)((char *)&ObsSecurityDescriptorCache + 24 * v143);
        ExAcquirePushLockExclusiveEx((ULONG_PTR)v144, 0LL);
        v145 = _InterlockedExchangeAdd64(v73 + 2, 0xFFFFFFFFFFFFFFFFuLL);
        v131 = v145 <= 1;
        v146 = v145 - 1;
        if ( v131 )
        {
          if ( v146 )
            __fastfail(0xEu);
          v147 = *v73;
          v148 = (_QWORD *)v73[1];
          if ( *(_QWORD **)(*v73 + 8LL) != v73 || (_QWORD *)*v148 != v73 )
            __fastfail(3u);
          *v148 = v147;
          *(_QWORD *)(v147 + 8) = v148;
          if ( (_InterlockedExchangeAdd64(v144, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v144);
          KeAbPostRelease((ULONG_PTR)v144);
          KeLeaveCriticalRegionThread((__int64)v142);
          ExFreePoolWithTag(v73, 0);
        }
        else
        {
          if ( (_InterlockedExchangeAdd64(v144, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v144);
          KeAbPostRelease((ULONG_PTR)v144);
          KeLeaveCriticalRegionThread((__int64)v142);
        }
      }
LABEL_36:
      v35 = *(_QWORD *)(a4 + 72);
      v29 = ~v12 & v163;
      LOBYTE(v12) = v165;
      v28 = (__int64)v179;
      v163 = v29;
      *(_DWORD *)(a4 + 20) = v29;
      v184[0] = *(_DWORD *)(v35 + 28);
      goto LABEL_37;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v33 - 16), 0xFuLL) <= 0 )
      __fastfail(0xEu);
LABEL_194:
    _m_prefetchw((const void *)(v27 + 40));
    v117 = *(_QWORD *)(v27 + 40);
    while ( (v117 & 0xF) == 0 )
    {
      if ( v33 != (v117 & 0xFFFFFFFFFFFFFFF0uLL) )
        break;
      v118 = v117;
      v117 = _InterlockedCompareExchange64((volatile signed __int64 *)(v27 + 40), v117 + 15, v117);
      if ( v118 == v117 )
        goto LABEL_35;
    }
    ObDereferenceSecurityDescriptor(v33, 0xFu);
    goto LABEL_35;
  }
LABEL_37:
  v36 = Object;
  if ( a5 )
  {
    ObReferenceObjectExWithTag((__int64)Object, a5);
    v29 = v163;
  }
  if ( v176 )
  {
    ObfDereferenceObject(v176);
    v29 = v163;
  }
  v173 = (struct _LIST_ENTRY *)&v172;
  v172 = &v172;
  if ( (*(_BYTE *)(v28 + 66) & 0x40) != 0 && *(_QWORD *)(v28 + 200) != v28 + 200 )
  {
    v92 = v29;
    v93 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v27 + 24) ^ (unsigned __int64)BYTE1(v27)];
    NumberOfBytes_4 = v29 & *(_DWORD *)(v93 + 96);
    memset(v188, 0, sizeof(v188));
    v192 = 0LL;
    v193 = 0LL;
    v188[4] = v191;
    v191[1] = v29;
    v191[0] = v29;
    v188[1] = v36;
    v94 = 0LL;
    v188[3] = 0LL;
    v95 = (struct _EX_RUNDOWN_REF *)(v93 + 200);
    LODWORD(v188[0]) = 1;
    HIDWORD(v188[0]) = v161 | HIDWORD(v188[0]) & 0xFFFFFFFE;
    v188[2] = v93;
    v169 = 0LL;
    v96 = KeGetCurrentThread();
    --v96->KernelApcDisable;
    ObfReferenceObjectWithTag((PVOID)v188[1], 0x6243624Fu);
    v97 = KeGetCurrentThread();
    --v97->SpecialApcDisable;
    v98 = v93 + 184;
    ExAcquirePushLockSharedEx(v93 + 184, 0LL);
    v99 = *(struct _EX_RUNDOWN_REF **)(v93 + 200);
    if ( (struct _EX_RUNDOWN_REF *)v95->Count != v95 )
    {
      do
      {
        if ( (HIDWORD(v99[2].Ptr) & 1) != 0
          && (v99[2].Count & LODWORD(v188[0])) != 0
          && ExAcquireRundownProtection_0(v99 + 7) )
        {
          ExReleasePushLockEx(v98, 0LL);
          v101 = KeGetCurrentThread();
          v23 = v101->SpecialApcDisable++ == -1;
          if ( v23 && ($B476B70DB57F76B110DA5B9238C3E934 *)v101->ApcState.ApcListHead[0].Flink != &v101->152 )
            KiCheckForKernelApcDelivery(v100);
          if ( v94 )
          {
            ExReleaseRundownProtection_0(v94);
            v94 = 0LL;
          }
          if ( v99[6].Count )
          {
            v149 = (struct _KTHREAD *)ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x6C46624Fu);
            v169 = v149;
            if ( !v149 )
            {
              ExReleaseRundownProtection_0(v99 + 7);
              if ( v172 == &v172 )
              {
                KeLeaveCriticalRegion();
                ObfDereferenceObjectWithTag((PVOID)v188[1], 0x6243624Fu);
              }
              else
              {
                memset(v197, 0, sizeof(v197));
                v197[0] = v188[0];
                v197[2] = v188[2];
                v197[1] = v188[1];
                LODWORD(v197[4]) = -1073741670;
                ObpCallPostOperationCallbacks(v197, &v172);
              }
              ObpDecrementHandleCount((_KPROCESS *)BugCheckParameter1, v27);
              if ( a5 )
              {
                if ( a5 > 1 )
                  _InterlockedExchangeAdd64((volatile signed __int64 *)v27, (int)(1 - a5));
                ObfDereferenceObject(Object);
              }
              return 3221225626LL;
            }
            v149->Header.WaitListHead.Blink = (struct _LIST_ENTRY *)v99;
            v149->SListFaultAddress = 0LL;
            v150 = (struct _KTHREAD **)v173;
            if ( v173->Flink != (struct _LIST_ENTRY *)&v172 )
              __fastfail(3u);
            v149->Header.WaitListHead.Flink = v173;
            *(_QWORD *)&v149->Header.Lock = &v172;
            *v150 = v149;
            v173 = (struct _LIST_ENTRY *)v149;
          }
          Count = (void (__fastcall *)(_QWORD, _QWORD *))v99[5].Count;
          if ( Count )
          {
            Count(*(_QWORD *)(v99[3].Count + 8), v188);
            if ( v99[6].Count )
              v169->SListFaultAddress = (void *)v188[3];
            else
              v94 = v99 + 7;
            v188[3] = 0LL;
          }
          v103 = KeGetCurrentThread();
          --v103->SpecialApcDisable;
          ExAcquirePushLockSharedEx(v98, 0LL);
        }
        v99 = (struct _EX_RUNDOWN_REF *)v99->Count;
      }
      while ( v99 != v95 );
    }
    ExReleasePushLockEx(v98, 0LL);
    v104 = KeGetCurrentThread();
    v23 = v104->SpecialApcDisable++ == -1;
    if ( v23 && ($B476B70DB57F76B110DA5B9238C3E934 *)v104->ApcState.ApcListHead[0].Flink != &v104->152 )
      KiCheckForKernelApcDelivery((__int64)v104);
    if ( v94 )
      ExReleaseRundownProtection_0(v94);
    if ( v172 == &v172 )
    {
      ObfDereferenceObjectWithTag((PVOID)v188[1], 0x6243624Fu);
      KeLeaveCriticalRegion();
    }
    if ( v161 )
    {
      v29 = v163;
    }
    else
    {
      v105 = (NumberOfBytes_4 | v191[0]) & v92;
      v163 = v105;
      v29 = v105;
      if ( a4 )
        *(_DWORD *)(a4 + 20) = v105;
    }
    LOBYTE(v12) = v165;
  }
  v37 = v29 & 0x1FFFFFF;
  v196 = 0LL;
  v38 = v37 | 0x2000000;
  v39 = v37 & 0xFDFFFFFF;
  if ( (v12 & 8) != 0 )
    v39 = v38;
  v40 = (v27 << 16) & 0xFFFFFFFFFFF1FFFFuLL | ((unsigned __int64)(v12 & 7) << 17) | 1;
  LODWORD(v196) = v39;
  v169 = KeGetCurrentThread();
  --v169->KernelApcDisable;
  v41 = v177;
  v42 = 0LL;
  v43 = *(_BYTE *)(v177 + 44);
  if ( (v43 & 4) != 0 )
  {
LABEL_327:
    v56 = (__int64)v169;
    goto LABEL_73;
  }
  if ( (v43 & 1) != 0 )
    Number = 0;
  else
    Number = KeGetPcr()->Prcb.Number;
  v45 = ExpFreeListCount;
  v164 = ExpFreeListCount;
  v165 = Number;
LABEL_48:
  v46 = 0;
  NumberOfBytes_4 = *(_DWORD *)v41;
  v47 = Number;
  while ( 1 )
  {
    v48 = v41 + ((v47 + 1LL) << 6);
    if ( *(_QWORD *)(v48 + 8) )
      break;
LABEL_50:
    v49 = v47 + 1;
    ++v46;
    v47 = 0;
    if ( v49 != v45 )
      v47 = v49;
    if ( v46 >= v45 )
    {
      HandleTableEntrySlow = 1;
      v51 = v41 + ((v165 + 1LL) << 6);
      ExAcquirePushLockExclusiveEx(v41 + 56, 0LL);
      if ( NumberOfBytes_4 == *(_DWORD *)v41 )
        HandleTableEntrySlow = ExpAllocateHandleTableEntrySlow((unsigned int *)v41, v51);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v41 + 56), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v41 + 56));
      KeAbPostRelease(v41 + 56);
      if ( HandleTableEntrySlow )
      {
        v45 = v164;
        Number = v165;
        goto LABEL_48;
      }
      v27 = v178;
      goto LABEL_327;
    }
  }
  ExAcquirePushLockExclusiveEx(v41 + ((v47 + 1LL) << 6), 0LL);
  v52 = *(unsigned __int64 **)(v48 + 8);
  if ( v52 )
  {
    v53 = v52[1];
    *(_QWORD *)(v48 + 8) = v53;
    if ( !v53 )
      *(_QWORD *)(v48 + 16) = 0LL;
    v54 = ++*(_DWORD *)(v48 + 24);
    if ( v54 > *(_DWORD *)(v48 + 28) )
      *(_DWORD *)(v48 + 28) = v54;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v48, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v48);
  KeAbPostRelease(v48);
  if ( !v52 )
  {
    v41 = v177;
    v45 = v164;
    goto LABEL_50;
  }
  v42 = *(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFF000uLL) + 8)
      + 4 * ((__int64)((__int64)v52 - ((unsigned __int64)v52 & 0xFFFFFFFFFFFFF000uLL)) >> 4);
  if ( v184[0] || a9 )
  {
    v55 = v177;
    if ( (unsigned int)ExpSetHandleExtraInfo(v177, v42, v184) )
    {
      ExpFreeHandleTableEntry(v55, v42, v52);
      v27 = v178;
      v42 = 0LL;
      goto LABEL_327;
    }
  }
  else
  {
    v55 = v177;
  }
  v56 = (__int64)v169;
  if ( *(_QWORD *)(v55 + 96) )
    ExpUpdateDebugInfo(v55, v169, v42, 1LL);
  v27 = v178;
  v52[1] = v196;
  *v52 = v40;
LABEL_73:
  KeLeaveCriticalRegionThread(v56);
  if ( !v42 )
  {
    ObpDecrementHandleCount((_KPROCESS *)BugCheckParameter1, v27);
    if ( a5 )
    {
      if ( a5 > 1 )
        _InterlockedExchangeAdd64((volatile signed __int64 *)v27, (int)(1 - a5));
      ObfDereferenceObject(Object);
    }
    v66 = v179;
    v72 = -1073741670;
    v68 = Object;
    v69 = v161;
    v70 = v190;
    goto LABEL_94;
  }
  if ( !a4 )
  {
    v66 = v179;
    goto LABEL_90;
  }
  v57 = v178;
  v58 = 0LL;
  v59 = 0LL;
  v183 = 0LL;
  if ( (*(_BYTE *)(v178 + 26) & 0x20) == 0
    || (v151 = ObpInfoMaskToOffset[*(_BYTE *)(v178 + 26) & 0x3F], v152 = (void **)(v178 - v151), v178 == v151) )
  {
    v60 = (void *)v180;
    if ( !v180 )
      goto LABEL_77;
LABEL_214:
    v58 = v60;
    goto LABEL_77;
  }
  v60 = *v152;
  if ( *v152 )
    goto LABEL_214;
  if ( v180 )
  {
    ObpSetObjectAuditInfo(v178, v180);
  }
  else if ( (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v178 + 24) ^ (unsigned __int64)(unsigned __int8)v187] != IoFileObjectType
         || (*(_DWORD *)(*((_QWORD *)Object + 1) + 52LL) & 0x10) == 0 )
  {
    v153 = ObpAllocateAndQuerySecurityDescriptorInfo(Object, 32LL, &v183);
    v59 = v183;
    if ( v183 )
    {
      if ( v153 >= 0 )
      {
        v58 = v183;
        ObpSetObjectAuditInfo(v57, v183);
      }
    }
  }
LABEL_77:
  v61 = 0;
  TargetHandle = 0LL;
  *(_QWORD *)v189 = v42;
  v62 = 0LL;
  v63 = *(_QWORD *)(a4 + 72);
  if ( !v58 )
  {
    v58 = *(void **)(v63 + 56);
    if ( !v58 )
      v58 = *(void **)(a4 + 64);
  }
  if ( *(_BYTE *)(a4 + 9) )
  {
    if ( *(_BYTE *)(a4 + 124) )
    {
      SepAdtPrivilegeObjectAuditAlarm(
        &SeSubsystemName,
        (unsigned __int16 *)(a4 + 144),
        (unsigned __int16 *)(a4 + 128),
        v42,
        *(_QWORD *)(a4 + 32),
        *(_QWORD *)(a4 + 48),
        *(_QWORD *)(a4 + 56),
        *(_DWORD *)(a4 + 20),
        *(int **)v63,
        1);
      goto LABEL_82;
    }
  }
  else if ( !*(_BYTE *)(v63 + 216) )
  {
    goto LABEL_82;
  }
  if ( ZwDuplicateObject(
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         (HANDLE)v42,
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         &TargetHandle,
         0,
         0x200u,
         2u) >= 0 )
  {
    ObReferenceObjectByHandle(TargetHandle, 0, 0LL, 0, &v194, 0LL);
    v62 = v194;
  }
  LOBYTE(v154) = 1;
  LOWORD(v164) = SepAdtClassifyObjectIntoSubCategory(v62, a4 + 144, v154, 0LL);
  if ( v62 )
    ObfDereferenceObject(v62);
  if ( TargetHandle )
  {
    ZwClose(TargetHandle);
    TargetHandle = 0LL;
  }
  CurrentThreadProcessId = PsGetCurrentThreadProcessId();
  v61 = SepAdtOpenObjectAuditAlarm(
          (unsigned __int16)v164,
          (int)&SeSubsystemName,
          (int)v189,
          (int)a4 + 144,
          a4 + 128,
          v58,
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
  v156 = PsGetCurrentThreadProcessId();
  LOBYTE(AccessStatus) = 1;
  SepAdtStagingEvent(
    (unsigned __int16)v164,
    v157,
    v189,
    a4 + 144,
    a4 + 128,
    *(_QWORD *)(a4 + 32),
    *(_QWORD *)(a4 + 48),
    *(_DWORD *)(a4 + 24),
    *(_DWORD *)(a4 + 20),
    AccessStatus,
    v156,
    a4);
LABEL_82:
  *(_BYTE *)(a4 + 10) = v61;
  v64 = v175;
  if ( !v175 )
  {
    v65 = **(int ***)(a4 + 72);
    if ( v65 )
    {
      if ( *v65 )
      {
        if ( KeGetCurrentThread()->PreviousMode )
          SepAdtPrivilegeObjectAuditAlarm(
            &SeSubsystemName,
            0LL,
            0LL,
            v42,
            *(_QWORD *)(a4 + 32),
            *(_QWORD *)(a4 + 48),
            *(_QWORD *)(a4 + 56),
            *(_DWORD *)(a4 + 20),
            v65,
            1);
        v59 = v183;
      }
    }
  }
  if ( v59 )
    ExFreePoolWithTag(v59, 0);
  v66 = v179;
  if ( !v64 && (v179 == CmKeyObjectType || v179 == IoFileObjectType) )
  {
    v67 = *(_QWORD *)(a4 + 32);
    if ( v67 )
    {
      v106 = KeGetCurrentThread();
      v107 = *(_QWORD *)(a4 + 48);
      --v106->KernelApcDisable;
      if ( v107 >= v67 )
      {
        ExAcquireResourceSharedLite(*(PERESOURCE *)(v67 + 48), 1u);
        v114 = KeGetCurrentThread();
        --v114->KernelApcDisable;
        v109 = *(struct _ERESOURCE **)(v107 + 48);
      }
      else
      {
        ExAcquireResourceSharedLite(*(PERESOURCE *)(v107 + 48), 1u);
        v108 = KeGetCurrentThread();
        --v108->KernelApcDisable;
        v109 = *(struct _ERESOURCE **)(v67 + 48);
      }
      ExAcquireResourceSharedLite(v109, 1u);
      if ( (*(_DWORD *)(v67 + 200) & 0x4000) != 0
        && *(int *)(v67 + 196) >= 2
        && !RtlEqualSid(**(PSID **)(v107 + 152), **(PSID **)(v67 + 152)) )
      {
        v121 = OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO(v178);
        if ( v121 )
          LOBYTE(v121) = 1;
        if ( (_BYTE)v121
          && SepSidInTokenSidHash(
               (PSID_AND_ATTRIBUTES_HASH)(v107 + 808),
               0LL,
               SeConstrainedImpersonationCapabilitySid,
               0,
               1,
               0) )
        {
          ObHandleRevocationBlockAddObject(*(_QWORD *)(v67 + 216) + 128LL, Object);
        }
      }
      ExReleaseResourceLite(*(PERESOURCE *)(v107 + 48));
      KeLeaveCriticalRegion();
      ExReleaseResourceLite(*(PERESOURCE *)(v67 + 48));
      KeLeaveCriticalRegion();
    }
  }
LABEL_90:
  v68 = Object;
  if ( a5 && v195 )
    *v195 = Object;
  v69 = v161;
  v70 = v190;
  v71 = v42 | 0xFFFFFFFF80000000uLL;
  if ( !v161 )
    v71 = v42;
  *v190 = v71;
  v72 = v162 != 0 ? 0x40000000 : 0;
LABEL_94:
  if ( v172 != &v172 )
  {
    ObpPostInterceptHandleCreate((_DWORD)v68, v69, v72, v163, (__int64)&v172);
    v68 = Object;
  }
  if ( (xmmword_140401150 & 0x40) != 0 && v72 >= 0 )
    EtwpTraceHandle(4384LL, *v70, v68, v66);
  return (unsigned int)v72;
}
