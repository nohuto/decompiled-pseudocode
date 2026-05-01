/*
 * XREFs of ?HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x1800182E0
 * Callers:
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000FD20 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAPEAU_HAM_HOST_DEPENDENCY@@PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180026BB8 (-HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@P.c)
 * Callees:
 *     ?HampHostIsTerminateQueued@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180006460 (-HampHostIsTerminateQueued@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostQueueTerminate@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@@Z @ 0x180006920 (-HampHostQueueTerminate@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_R.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800072D8 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampPkgSnapshotDebugState@@YAEPEAU_HAM_PACKAGE@@@Z @ 0x18000BF04 (-HampPkgSnapshotDebugState@@YAEPEAU_HAM_PACKAGE@@@Z.c)
 *     CempLockTrackerMarkReleased @ 0x180014260 (CempLockTrackerMarkReleased.c)
 *     ?HampHostShouldTerminate@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180016C24 (-HampHostShouldTerminate@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampDepGroupEvaluateDependencies@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_LIST_ENTRY@@@Z @ 0x180016CE0 (-HampDepGroupEvaluateDependencies@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?HampHostNeedsEnforcementUpdate@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180018F30 (-HampHostNeedsEnforcementUpdate@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampDepGroupGetFirstDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18001B120 (-HampDepGroupGetFirstDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001B2C0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampDepGroupProcessActionForActivity@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_DEPENDENCY_ACTION@@@Z @ 0x18002B6F0 (-HampDepGroupProcessActionForActivity@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_DEPENDENCY_ACTION@@@Z.c)
 *     ?HampDepGroupTryLockAndReferenceMembers@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x18002C220 (-HampDepGroupTryLockAndReferenceMembers@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_WORKE.c)
 *     ?HampDepGroupProcessDonations@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18002CC40 (-HampDepGroupProcessDonations@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupGetNextLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU1@@Z @ 0x1800322CC (-HampDepGroupGetNextLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU1@@Z.c)
 *     ?RmActivityHostReferenceFromHam@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003231C (-RmActivityHostReferenceFromHam@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostDepDestroy@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x180033278 (-HampHostDepDestroy@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     ?HampHostCheckSetStaticDonation@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18004040C (-HampHostCheckSetStaticDonation@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z @ 0x180041DDC (-RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z.c)
 *     ?RmHamEnforcementEmptySignalAbort@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18005C07C (-RmHamEnforcementEmptySignalAbort@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampDepGroupDereferenceMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x180066BB8 (-HampDepGroupDereferenceMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z.c)
 *     ?HampDepGroupProcessActivityActionForGroup@@YAJPEAU_HAM_DEPENDENCY_GROUP@@W4_HAM_DEPENDENCY_ACTION@@@Z @ 0x180066F34 (-HampDepGroupProcessActivityActionForGroup@@YAJPEAU_HAM_DEPENDENCY_GROUP@@W4_HAM_DEPENDENCY_ACTI.c)
 *     ?HampDepGroupUnlockMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x1800675BC (-HampDepGroupUnlockMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z.c)
 */

__int64 __fastcall HampDepGroupRunStateChangeWorkerIteration(struct _HAM_DEPENDENCY_GROUP *a1)
{
  int v1; // r14d
  _QWORD *v3; // rdi
  _QWORD *v4; // rbx
  char v5; // cl
  struct _LIST_ENTRY *Blink; // rcx
  struct _LIST_ENTRY *v7; // rax
  struct _HAM_HOST_DEPENDENCY *FirstDependency; // rbx
  struct _HAM_DEPENDENCY_LINK *v9; // rdx
  struct _HAM_DEPENDENCY_LINK *v10; // r8
  struct _HAM_DEPENDENCY_LINK *i; // rax
  struct _HAM_DEPENDENCY_LINK *v12; // rdx
  struct _HAM_DEPENDENCY_LINK *v13; // rdx
  _QWORD *Value; // rax
  bool v15; // zf
  __int64 *j; // rdi
  _QWORD *v17; // rax
  struct _HAM_HOST_DEPENDENCY *v18; // rbx
  struct _HAM_DEPENDENCY_LINK *v19; // rdx
  struct _HAM_HOST_DEPENDENCY *v20; // r9
  struct _HAM_DEPENDENCY_LINK *v21; // r8
  struct _HAM_DEPENDENCY_LINK *k; // rcx
  int v23; // eax
  struct _HAM_HOST_DEPENDENCY *v24; // rbx
  struct _HAM_DEPENDENCY_LINK *v25; // rdx
  struct _HAM_HOST_DEPENDENCY *v26; // r9
  struct _HAM_DEPENDENCY_LINK *v27; // r8
  struct _HAM_DEPENDENCY_LINK *m; // rcx
  int v29; // eax
  struct _HAM_DEPENDENCY_LINK *v30; // rdx
  struct _HAM_HOST_DEPENDENCY *v31; // rbx
  struct _HAM_HOST_DEPENDENCY *v32; // rdi
  struct _HAM_DEPENDENCY_LINK *v33; // r8
  struct _HAM_DEPENDENCY_LINK *n; // rcx
  int v35; // eax
  DWORD v36; // edi
  _QWORD *v37; // rbx
  _QWORD *v38; // rax
  DWORD v39; // edi
  __int64 v40; // rsi
  _QWORD *v41; // rbx
  __int64 v42; // r15
  DWORD v43; // edi
  _QWORD *v44; // rbx
  __int64 v45; // rcx
  int v46; // r12d
  BOOL v47; // ebx
  BOOL v48; // edi
  bool v49; // al
  int v50; // edx
  int v51; // r8d
  unsigned __int64 v52; // rax
  _QWORD *v53; // rax
  char v54; // bl
  char v55; // di
  BOOL v56; // r12d
  unsigned __int64 v57; // rax
  int v58; // eax
  BOOL v59; // r15d
  __int64 v60; // rax
  __int64 v61; // rax
  _QWORD *v62; // rax
  _QWORD *v63; // rax
  __int64 v64; // rdx
  _QWORD *v65; // rcx
  __int64 v66; // rdx
  __int64 v67; // rcx
  unsigned int v69; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v70[2]; // [rsp+38h] [rbp-C8h] BYREF
  struct _LIST_ENTRY v71; // [rsp+48h] [rbp-B8h] BYREF
  int v72; // [rsp+58h] [rbp-A8h] BYREF
  int v73; // [rsp+5Ch] [rbp-A4h] BYREF
  int v74; // [rsp+60h] [rbp-A0h] BYREF
  int v75; // [rsp+64h] [rbp-9Ch] BYREF
  int v76; // [rsp+68h] [rbp-98h] BYREF
  char v77[4]; // [rsp+6Ch] [rbp-94h] BYREF
  __int64 v78; // [rsp+70h] [rbp-90h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+78h] [rbp-88h] BYREF
  EVENT_DESCRIPTOR v80; // [rsp+88h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+98h] [rbp-68h] BYREF
  void *v82; // [rsp+A8h] [rbp-58h]
  int v83; // [rsp+B0h] [rbp-50h]
  int v84; // [rsp+B4h] [rbp-4Ch]
  struct _EVENT_DATA_DESCRIPTOR v85; // [rsp+C0h] [rbp-40h] BYREF
  void *v86; // [rsp+D0h] [rbp-30h]
  int v87; // [rsp+D8h] [rbp-28h]
  int v88; // [rsp+DCh] [rbp-24h]
  unsigned int *v89; // [rsp+E0h] [rbp-20h]
  __int64 v90; // [rsp+E8h] [rbp-18h]
  struct _HAM_DEPENDENCY_GROUP *v91; // [rsp+F0h] [rbp-10h]
  __int64 v92; // [rsp+F8h] [rbp-8h]
  __int64 *v93; // [rsp+100h] [rbp+0h]
  __int64 v94; // [rsp+108h] [rbp+8h]

  v1 = 0;
  if ( _volatile_metadata > 4u )
  {
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_1800920F8;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_1800835A0 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *(unsigned __int16 *)off_1800920F8;
    v82 = &unk_1800835AB;
    UserData.Reserved = 2;
    v83 = 30;
    v84 = 1;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
  if ( *((_DWORD *)a1 + 32) != GetCurrentThreadId() )
    __int2c();
  v71.Blink = &v71;
  v71.Flink = &v71;
  v70[1] = v70;
  v70[0] = v70;
  while ( !HampDepGroupTryLockAndReferenceMembers(a1, (struct _HAM_DEPENDENCY_WORKER_CONTEXT *)v70) )
  {
    HampDepGroupUnlockMembers((struct _HAM_DEPENDENCY_WORKER_CONTEXT *)v70);
    HampDepGroupDereferenceMembers((struct _HAM_DEPENDENCY_WORKER_CONTEXT *)v70);
  }
  v3 = (_QWORD *)v70[0];
  v78 = *((_QWORD *)a1 + 14);
  v71.Blink = &v71;
  for ( v71.Flink = &v71; v3 != v70; v3 = (_QWORD *)*v3 )
  {
    v4 = v3 - 88;
    v3[26] = 0LL;
    HampHostCheckSetStaticDonation((struct _RM_HAM_ACTIVITY_HOST *)(v3 - 88));
    if ( (*(v3 - 9) & 0x400000000LL) == 0 )
    {
      RmHamHostGetCurrentState(
        (struct _RM_HAM_ACTIVITY_HOST *)(v3 - 88),
        (union _RM_OPTIMIZATION_STATE *)&v72,
        (union _RM_OPTIMIZATION_STATE *)&v73);
      v5 = v73 & 0x80;
      v72 &= 0x180u;
      v73 &= 0x180u;
      if ( (v72 & 0x80u) != 0 && v5 >= 0 )
        continue;
    }
    Blink = v71.Blink;
    v7 = (struct _LIST_ENTRY *)(v4 + 90);
    if ( v71.Blink->Flink != &v71 )
      __fastfail(3u);
    v4[91] = v71.Blink;
    v7->Flink = &v71;
    Blink->Flink = v7;
    v71.Blink = (struct _LIST_ENTRY *)(v4 + 90);
    *((_DWORD *)v4 + 184) |= 2u;
  }
  HampDepGroupEvaluateDependencies(a1, &v71);
  FirstDependency = HampDepGroupGetFirstDependency(a1);
  if ( FirstDependency )
  {
    while ( 1 )
    {
      do
      {
        if ( (*((_BYTE *)FirstDependency + 32) & 7) == 5 )
          HampHostQueueTerminate(
            *((_QWORD *)FirstDependency + 7),
            *((_DWORD *)FirstDependency + 21),
            *((_DWORD *)FirstDependency + 20),
            0LL,
            2);
        v9 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)FirstDependency + 2);
        v10 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)FirstDependency + 1);
        FirstDependency = 0LL;
        if ( v9 != (struct _HAM_DEPENDENCY_LINK *)((char *)v10 + 64) )
          FirstDependency = (struct _HAM_DEPENDENCY_LINK *)((char *)v9 - 16);
      }
      while ( FirstDependency );
      i = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)v10 + 1);
      if ( i )
      {
        v12 = *(struct _HAM_DEPENDENCY_LINK **)i;
        if ( *(_QWORD *)i )
        {
          do
          {
            i = v12;
            v12 = *(struct _HAM_DEPENDENCY_LINK **)v12;
          }
          while ( v12 );
        }
      }
      else
      {
        for ( i = (struct _HAM_DEPENDENCY_LINK *)(*((_QWORD *)v10 + 2) & 0xFFFFFFFFFFFFFFFCuLL);
              i;
              i = (struct _HAM_DEPENDENCY_LINK *)(*((_QWORD *)i + 2) & 0xFFFFFFFFFFFFFFFCuLL) )
        {
          if ( *(struct _HAM_DEPENDENCY_LINK **)i == v10 )
            break;
          v10 = i;
        }
      }
      if ( !i )
        break;
      while ( 1 )
      {
        v13 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)i + 8);
        FirstDependency = 0LL;
        if ( v13 != (struct _HAM_DEPENDENCY_LINK *)((char *)i + 64) )
          FirstDependency = (struct _HAM_DEPENDENCY_LINK *)((char *)v13 - 16);
        if ( FirstDependency )
          break;
        i = HampDepGroupGetNextLink(i);
        if ( !i )
          goto LABEL_33;
      }
    }
  }
LABEL_33:
  HampDepGroupProcessDonations(a1);
  *((_DWORD *)a1 + 4) = 0;
  RtlReleaseSRWLockExclusive((char *)a1 + 8);
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_BYTE *)Value & 8) == 0 )
      __int2c();
    v15 = Value[4]-- == 1LL;
    if ( v15 )
      *Value &= ~8uLL;
  }
  for ( j = (__int64 *)v70[0]; j != v70; j = (__int64 *)*j )
  {
    if ( (j[4] & 1) != 0 )
    {
      if ( HampLockTrackerId != -1 )
      {
        v17 = TlsGetValue(HampLockTrackerId);
        if ( (*(_BYTE *)v17 & 2) == 0 )
          __int2c();
        v15 = v17[2]-- == 1LL;
        if ( v15 )
          *v17 &= ~2uLL;
      }
      *((_DWORD *)j - 174) = 0;
      RtlReleaseSRWLockExclusive(j - 88);
      *((_DWORD *)j + 8) &= ~1u;
    }
  }
  v18 = HampDepGroupGetFirstDependency(a1);
  while ( v18 )
  {
    v19 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)v18 + 2);
    v20 = v18;
    v21 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)v18 + 1);
    v18 = 0LL;
    if ( v19 != (struct _HAM_DEPENDENCY_LINK *)((char *)v21 + 64) )
      v18 = (struct _HAM_DEPENDENCY_LINK *)((char *)v19 - 16);
    if ( !v18 )
    {
      k = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)v21 + 1);
      if ( k )
      {
        v19 = *(struct _HAM_DEPENDENCY_LINK **)k;
        if ( *(_QWORD *)k )
        {
          do
          {
            k = v19;
            v19 = *(struct _HAM_DEPENDENCY_LINK **)v19;
          }
          while ( v19 );
        }
      }
      else
      {
        for ( k = (struct _HAM_DEPENDENCY_LINK *)(*((_QWORD *)v21 + 2) & 0xFFFFFFFFFFFFFFFCuLL);
              k;
              k = (struct _HAM_DEPENDENCY_LINK *)(*((_QWORD *)k + 2) & 0xFFFFFFFFFFFFFFFCuLL) )
        {
          if ( *(struct _HAM_DEPENDENCY_LINK **)k == v21 )
            break;
          v21 = k;
        }
      }
      if ( k )
      {
        while ( 1 )
        {
          v19 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)k + 8);
          v18 = 0LL;
          if ( v19 != (struct _HAM_DEPENDENCY_LINK *)((char *)k + 64) )
            v18 = (struct _HAM_DEPENDENCY_LINK *)((char *)v19 - 16);
          if ( v18 )
            break;
          k = HampDepGroupGetNextLink(k);
          if ( !k )
            goto LABEL_63;
        }
      }
      else
      {
LABEL_63:
        v18 = 0LL;
      }
    }
    if ( (*((_BYTE *)v20 + 32) & 7) == 3 )
    {
      if ( *((_BYTE *)v20 + 40) == (*((_BYTE *)v20 + 32) & 7) )
      {
        HampHostDepDestroy(v20);
      }
      else
      {
        LOBYTE(v19) = 3;
        v23 = HampDepGroupProcessActionForActivity(*(_QWORD *)v20, v19);
        if ( v23 < 0 )
          goto LABEL_70;
      }
    }
  }
  v23 = 0;
LABEL_70:
  v69 = v23;
  v24 = HampDepGroupGetFirstDependency(a1);
  while ( v24 )
  {
    v25 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)v24 + 2);
    v26 = v24;
    v27 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)v24 + 1);
    v24 = 0LL;
    if ( v25 != (struct _HAM_DEPENDENCY_LINK *)((char *)v27 + 64) )
      v24 = (struct _HAM_DEPENDENCY_LINK *)((char *)v25 - 16);
    if ( !v24 )
    {
      m = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)v27 + 1);
      if ( m )
      {
        v25 = *(struct _HAM_DEPENDENCY_LINK **)m;
        if ( *(_QWORD *)m )
        {
          do
          {
            m = v25;
            v25 = *(struct _HAM_DEPENDENCY_LINK **)v25;
          }
          while ( v25 );
        }
      }
      else
      {
        for ( m = (struct _HAM_DEPENDENCY_LINK *)(*((_QWORD *)v27 + 2) & 0xFFFFFFFFFFFFFFFCuLL);
              m;
              m = (struct _HAM_DEPENDENCY_LINK *)(*((_QWORD *)m + 2) & 0xFFFFFFFFFFFFFFFCuLL) )
        {
          if ( *(struct _HAM_DEPENDENCY_LINK **)m == v27 )
            break;
          v27 = m;
        }
      }
      if ( m )
      {
        while ( 1 )
        {
          v25 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)m + 8);
          v24 = 0LL;
          if ( v25 != (struct _HAM_DEPENDENCY_LINK *)((char *)m + 64) )
            v24 = (struct _HAM_DEPENDENCY_LINK *)((char *)v25 - 16);
          if ( v24 )
            break;
          m = HampDepGroupGetNextLink(m);
          if ( !m )
            goto LABEL_86;
        }
      }
      else
      {
LABEL_86:
        v24 = 0LL;
      }
    }
    if ( (*((_DWORD *)v26 + 8) & 7) == 2 )
    {
      if ( *((_BYTE *)v26 + 40) == 3 )
      {
        HampHostDepDestroy(v26);
      }
      else
      {
        LOBYTE(v25) = 2;
        v29 = HampDepGroupProcessActionForActivity(*(_QWORD *)v26, v25);
        if ( v29 < 0 )
          goto LABEL_93;
      }
    }
  }
  v29 = 0;
LABEL_93:
  v69 = v29;
  v31 = HampDepGroupGetFirstDependency(a1);
  while ( v31 )
  {
    v30 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)v31 + 2);
    v32 = v31;
    v33 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)v31 + 1);
    v31 = 0LL;
    if ( v30 != (struct _HAM_DEPENDENCY_LINK *)((char *)v33 + 64) )
      v31 = (struct _HAM_DEPENDENCY_LINK *)((char *)v30 - 16);
    if ( !v31 )
    {
      n = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)v33 + 1);
      if ( n )
      {
        v30 = *(struct _HAM_DEPENDENCY_LINK **)n;
        if ( *(_QWORD *)n )
        {
          do
          {
            n = v30;
            v30 = *(struct _HAM_DEPENDENCY_LINK **)v30;
          }
          while ( v30 );
        }
      }
      else
      {
        for ( n = (struct _HAM_DEPENDENCY_LINK *)(*((_QWORD *)v33 + 2) & 0xFFFFFFFFFFFFFFFCuLL);
              n;
              n = (struct _HAM_DEPENDENCY_LINK *)(*((_QWORD *)n + 2) & 0xFFFFFFFFFFFFFFFCuLL) )
        {
          if ( *(struct _HAM_DEPENDENCY_LINK **)n == v33 )
            break;
          v33 = n;
        }
      }
      if ( n )
      {
        while ( 1 )
        {
          v30 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)n + 8);
          v31 = 0LL;
          if ( v30 != (struct _HAM_DEPENDENCY_LINK *)((char *)n + 64) )
            v31 = (struct _HAM_DEPENDENCY_LINK *)((char *)v30 - 16);
          if ( v31 )
            break;
          n = HampDepGroupGetNextLink(n);
          if ( !n )
            goto LABEL_109;
        }
      }
      else
      {
LABEL_109:
        v31 = 0LL;
      }
    }
    if ( (*((_DWORD *)v32 + 8) & 7) == 1 )
    {
      if ( *((_BYTE *)v32 + 40) == 3 )
      {
        HampHostDepDestroy(v32);
      }
      else
      {
        LOBYTE(v30) = 1;
        v35 = HampDepGroupProcessActionForActivity(*(_QWORD *)v32, v30);
        if ( v35 < 0 )
          goto LABEL_117;
        *((_DWORD *)v32 + 8) &= 0xFFFFFFFC;
        *((_DWORD *)v32 + 8) |= 4u;
      }
    }
  }
  v35 = 0;
LABEL_117:
  v69 = v35;
  if ( v35 >= 0 )
  {
    v69 = 0;
  }
  else
  {
    LOBYTE(v30) = 4;
    HampDepGroupProcessActivityActionForGroup(a1, v30);
  }
  v36 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    v37 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v36) & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
      __int2c();
    *v37 |= 8uLL;
    ++v37[4];
  }
  RtlAcquireSRWLockExclusive((char *)a1 + 8);
  GetCurrentThreadId();
  *((_QWORD *)a1 + 13) = v78;
  *((_DWORD *)a1 + 4) = 0;
  RtlReleaseSRWLockExclusive((char *)a1 + 8);
  if ( HampLockTrackerId != -1 )
  {
    v38 = TlsGetValue(HampLockTrackerId);
    if ( (*(_BYTE *)v38 & 8) == 0 )
      __int2c();
    v15 = v38[4]-- == 1LL;
    if ( v15 )
      *v38 &= ~8uLL;
  }
  RmpAcquireGlobalLock();
  while ( (_QWORD *)v70[0] != v70 )
  {
    v39 = HampLockTrackerId;
    v40 = v70[0] - 704LL;
    if ( HampLockTrackerId != -1 )
    {
      v41 = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v39) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
        __int2c();
      *v41 |= 2uLL;
      ++v41[2];
    }
    RtlAcquireSRWLockExclusive(v40);
    *(_DWORD *)(v40 + 8) = GetCurrentThreadId();
    if ( (*(_BYTE *)(v40 + 740) & 1) != 0 )
    {
      v42 = *(_QWORD *)(v40 + 664);
      if ( v42 )
      {
        v43 = HampLockTrackerId;
        if ( HampLockTrackerId != -1 )
        {
          v44 = TlsGetValue(HampLockTrackerId);
          if ( (*(_QWORD *)TlsGetValue(v43) & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
            __int2c();
          *v44 |= 8uLL;
          ++v44[4];
        }
        RtlAcquireSRWLockExclusive(v42 + 8);
        *(_DWORD *)(v42 + 16) = GetCurrentThreadId();
        v45 = *(_QWORD *)(v40 + 664);
        v46 = 1;
        v47 = *(_QWORD *)(v45 + 104) < *(_QWORD *)(v40 + 600);
        v48 = *(_DWORD *)(v45 + 92) != 0;
      }
      else
      {
        v47 = 0;
        v48 = 0;
        v46 = 0;
      }
      if ( (*(_BYTE *)(v40 + 740) & 1) != 0 )
      {
        RmHamHostGetCurrentState(
          (struct _RM_HAM_ACTIVITY_HOST *)v40,
          (union _RM_OPTIMIZATION_STATE *)&v76,
          (union _RM_OPTIMIZATION_STATE *)v77);
        v49 = HampPkgSnapshotDebugState(*(struct _HAM_PACKAGE **)(*(_QWORD *)(v40 + 744) + 88LL));
        v50 = v76;
        if ( !v49
          || (*(_BYTE *)(v40 + 638) & 1) != 0
          || HampHostIsTerminateQueued((struct _RM_HAM_ACTIVITY_HOST *)v40)
          || !v51 )
        {
          if ( v47 )
          {
            v1 = v50 & 0x188;
          }
          else
          {
            v52 = *(_QWORD *)(v40 + 632);
            if ( (v52 & 0x2000000000LL) != 0 )
            {
              if ( v48 )
                v1 = v50;
            }
            else
            {
              v1 = ~(unsigned __int8)(v52 >> 37) & 8 | 0x180;
            }
          }
        }
      }
      if ( v46 )
      {
        *(_DWORD *)(v42 + 16) = 0;
        RtlReleaseSRWLockExclusive(v42 + 8);
        if ( HampLockTrackerId != -1 )
        {
          v53 = TlsGetValue(HampLockTrackerId);
          if ( (*(_BYTE *)v53 & 8) == 0 )
            __int2c();
          v15 = v53[4]-- == 1LL;
          if ( v15 )
            *v53 &= ~8uLL;
        }
      }
      RmHamHostGetCurrentState(
        (struct _RM_HAM_ACTIVITY_HOST *)v40,
        (union _RM_OPTIMIZATION_STATE *)&v74,
        (union _RM_OPTIMIZATION_STATE *)&v75);
      v54 = v74 & 0x80;
      v55 = v75 & 0x80;
      v56 = v1 != v74
         || HampHostShouldTerminate((struct _RM_HAM_ACTIVITY_HOST *)v40)
         || (*(_QWORD *)(v40 + 632) & 0x800000000000LL) != 0
         || HampHostNeedsEnforcementUpdate((struct _RM_HAM_ACTIVITY_HOST *)v40);
      v57 = *(_QWORD *)(v40 + 632);
      v59 = 0;
      if ( (v57 & 0x800000000000LL) != 0 )
      {
        v58 = (v57 >> 29) & 7;
        if ( v58 )
        {
          if ( v58 != 5LL )
            v59 = 1;
        }
      }
      if ( HampHostNeedsEnforcementUpdate((struct _RM_HAM_ACTIVITY_HOST *)v40) )
      {
        v59 = 1;
        goto LABEL_184;
      }
      if ( (v1 & 0x80u) != 0 || v54 >= 0 && v55 >= 0 )
      {
        if ( (v1 & 8) != 0 )
          goto LABEL_181;
        if ( (v74 & 8) != 0 )
          goto LABEL_176;
        if ( (v75 & 8) == 0 )
LABEL_181:
          v60 = (*(_QWORD *)(v40 + 632) >> 47) & 1LL;
        else
          LODWORD(v60) = 1;
      }
      else
      {
LABEL_176:
        LODWORD(v60) = 1;
      }
      if ( v59 || (_DWORD)v60 )
      {
LABEL_184:
        if ( v56 )
        {
          if ( (*(_BYTE *)(v40 + 1096) & 0x27) != 0 )
            RmHamEnforcementEmptySignalAbort((struct _RM_HAM_ACTIVITY_HOST *)v40);
          if ( v59 )
            RtlWakeAllConditionVariable(v40 + 656);
          goto LABEL_189;
        }
      }
      else
      {
LABEL_189:
        if ( v56 )
        {
          v61 = *(_QWORD *)(v40 + 632);
          if ( (v61 & 0x100000000LL) == 0 )
          {
            *(_QWORD *)(v40 + 632) = v61 | 0x100000000LL;
            RmActivityHostReferenceFromHam((struct _RM_HAM_ACTIVITY_HOST *)v40);
            TpPostWork(*(_QWORD *)(v40 + 616));
          }
        }
      }
      v1 = 0;
    }
    if ( HampLockTrackerId != -1 )
    {
      v62 = TlsGetValue(HampLockTrackerId);
      if ( (*(_BYTE *)v62 & 2) == 0 )
        __int2c();
      v15 = v62[2]-- == 1LL;
      if ( v15 )
        *v62 &= ~2uLL;
    }
    *(_DWORD *)(v40 + 8) = 0;
    RtlReleaseSRWLockExclusive(v40);
    v63 = (_QWORD *)(v40 + 704);
    v64 = *(_QWORD *)(v40 + 704);
    if ( *(_QWORD *)(v64 + 8) != v40 + 704 || (v65 = *(_QWORD **)(v40 + 712), (_QWORD *)*v65 != v63) )
      __fastfail(3u);
    *v65 = v64;
    *(_QWORD *)(v64 + 8) = v65;
    *v63 = 0LL;
    *(_QWORD *)(v40 + 712) = 0LL;
    v15 = (*(_QWORD *)(v40 + 576))-- == 1LL;
    *(_DWORD *)(v40 + 736) = 0;
    if ( v15 )
      RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)(v40 - 64));
  }
  dword_1800937F8 = 0;
  RtlReleaseSRWLockExclusive(&RmpGlobalLock);
  CempLockTrackerMarkReleased(v67, v66, 0);
  if ( _volatile_metadata > 4u && (byte_180092100 & 8) != 0 && (qword_180092108 & 8) == qword_180092108 )
  {
    v90 = 4LL;
    v89 = &v69;
    v93 = &v78;
    v91 = a1;
    v92 = 8LL;
    v94 = 8LL;
    *(_DWORD *)&v80.Level = 516;
    v85.Ptr = (ULONGLONG)off_1800920F8;
    *(_DWORD *)&v80.Id = ((unsigned int)&unk_180083531 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v80.Keyword = 8LL;
    v85.Size = *(unsigned __int16 *)off_1800920F8;
    v86 = &unk_18008353C;
    v85.Reserved = 2;
    v87 = 56;
    v88 = 1;
    EventWriteTransfer(RegHandle, &v80, 0LL, 0LL, 5u, &v85);
  }
  return v69;
}
