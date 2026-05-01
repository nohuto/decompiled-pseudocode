/*
 * XREFs of ?HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAPEAU_HAM_HOST_DEPENDENCY@@PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180026BB8
 * Callers:
 *     ?HampDepGroupAddDonationDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@_K1PEAU_HAM_ACTIVITY_PROPERTIES@@PEAPEAU_HAM_ACTIVITY@@@Z @ 0x180004AD8 (-HampDepGroupAddDonationDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@_K1PE.c)
 *     ?HampDepGroupAddProcessDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1@Z @ 0x180008AB0 (-HampDepGroupAddProcessDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1@Z.c)
 *     ?HampDepGroupAddTerminateDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K01W4_HAM_TERMINATE_TYPE@@E@Z @ 0x180028D90 (-HampDepGroupAddTerminateDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K01W4_HAM_TERMINATE_TYPE@@E@.c)
 *     ?HampDepGroupAddDynamicDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_K1PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x180066634 (-HampDepGroupAddDynamicDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_K1PEAU_HAM_ACTIVITY_PROPERTIE.c)
 *     ?HampDepGroupAddPpleDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0@Z @ 0x180066914 (-HampDepGroupAddPpleDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0@Z.c)
 * Callees:
 *     ?HampDonationDepInitialize@@YAXPEAU_HAM_DEPENDENCY_LINK@@PEAU_RM_HAM_ACTIVITY_HOST@@_K1PEAU_HAM_DONATION_DEPENDENCY@@@Z @ 0x180005274 (-HampDonationDepInitialize@@YAXPEAU_HAM_DEPENDENCY_LINK@@PEAU_RM_HAM_ACTIVITY_HOST@@_K1PEAU_HAM_.c)
 *     ?HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000BB78 (-HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000F450 (-HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000F4B8 (-HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000FD20 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x1800182E0 (-HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     ?HampDepGroupFindDepLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_LINK_ID@@@Z @ 0x180026F7C (-HampDepGroupFindDepLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPEND.c)
 *     ?HampDepGroupEnsureHostDisposition@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180026FF0 (-HampDepGroupEnsureHostDisposition@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@.c)
 *     ?HampDepGroupCreateLink@@YAJPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_LINK_ID@@PEAPEAU_HAM_DEPENDENCY_LINK@@@Z @ 0x180027644 (-HampDepGroupCreateLink@@YAJPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_LINK_ID@@PEAPEAU_HAM_.c)
 *     ?HampDepLinkGetDependencyByType@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_LINK@@W4_HAM_HOST_DEPENDENCY_TYPE@@@Z @ 0x180028D4C (-HampDepLinkGetDependencyByType@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_LINK@@W4_HAM_HO.c)
 *     ?HampHostProcessDepAllocateState@@YAJPEAU_HAM_HOST_PROCESS_DEPENDENCY@@KK@Z @ 0x180029328 (-HampHostProcessDepAllocateState@@YAJPEAU_HAM_HOST_PROCESS_DEPENDENCY@@KK@Z.c)
 *     ?HampHostProcessDepInitialize@@YAXPEAU_HAM_DEPENDENCY_LINK@@PEAU_RM_HAM_ACTIVITY_HOST@@1PEAU_HAM_HOST_PROCESS_DEPENDENCY@@@Z @ 0x1800293B0 (-HampHostProcessDepInitialize@@YAXPEAU_HAM_DEPENDENCY_LINK@@PEAU_RM_HAM_ACTIVITY_HOST@@1PEAU_HAM.c)
 *     ?HampTerminateDepInitialize@@YAXPEAU_HAM_DEPENDENCY_LINK@@PEAU_RM_HAM_ACTIVITY_HOST@@_K12W4_HAM_TERMINATE_REASON@@W4_HAM_TERMINATE_TYPE@@PEAU_HAM_TERMINATE_DEPENDENCY@@@Z @ 0x18002941C (-HampTerminateDepInitialize@@YAXPEAU_HAM_DEPENDENCY_LINK@@PEAU_RM_HAM_ACTIVITY_HOST@@_K12W4_HAM_.c)
 *     ?HampHostDepDestroy@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x180033278 (-HampHostDepDestroy@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     ?HampDepGroupCheckCreateDependencyActivity@@YAJPEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAU_RM_HAM_ACTIVITY_HOST@@KPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x1800409A0 (-HampDepGroupCheckCreateDependencyActivity@@YAJPEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAU_RM_HAM_A.c)
 *     memset_0 @ 0x180041D1C (memset_0.c)
 *     ?HampHostDynamicDepAllocateState@@YAJPEAU_HAM_HOST_DYNAMIC_DEPENDENCY@@@Z @ 0x180068A58 (-HampHostDynamicDepAllocateState@@YAJPEAU_HAM_HOST_DYNAMIC_DEPENDENCY@@@Z.c)
 *     ?HampHostDynamicDepInitialize@@YAXPEAU_HAM_DEPENDENCY_LINK@@PEAU_RM_HAM_ACTIVITY_HOST@@1PEAU_HAM_HOST_DYNAMIC_DEPENDENCY@@@Z @ 0x180068B90 (-HampHostDynamicDepInitialize@@YAXPEAU_HAM_DEPENDENCY_LINK@@PEAU_RM_HAM_ACTIVITY_HOST@@1PEAU_HAM.c)
 */

__int64 __fastcall HampDepGroupAddDependency(
        struct _RM_HAM_ACTIVITY_HOST *a1,
        struct _RM_HAM_ACTIVITY_HOST *a2,
        struct _HAM_ADD_DEPENDENCY_PARAMETERS *a3,
        struct _HAM_HOST_DEPENDENCY **a4,
        struct _HAM_DEPENDENCY_GROUP **a5)
{
  int v9; // ebx
  int v10; // eax
  struct _HAM_DEPENDENCY_GROUP *v11; // rsi
  struct _HAM_DEPENDENCY_LINK *DepLink; // rax
  __int64 v13; // rdx
  __int64 DependencyByType; // rdi
  SIZE_T v15; // r8
  _QWORD *Heap; // rdi
  struct _HAM_DEPENDENCY_LINK *v17; // rsi
  int State; // eax
  struct _HAM_DEPENDENCY_GROUP *v19; // rbx
  _QWORD *v20; // rax
  _QWORD *v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rdx
  const struct _TlgProvider_t *v24; // rcx
  __int64 v25; // rax
  char v27; // [rsp+40h] [rbp-A1h] BYREF
  struct _HAM_DEPENDENCY_GROUP *v28; // [rsp+48h] [rbp-99h] BYREF
  struct _HAM_DEPENDENCY_LINK *v29; // [rsp+50h] [rbp-91h] BYREF
  struct _HAM_DEPENDENCY_GROUP **v30; // [rsp+58h] [rbp-89h]
  __int64 v31; // [rsp+60h] [rbp-81h] BYREF
  __int64 v32; // [rsp+68h] [rbp-79h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-71h] BYREF
  __int64 v34; // [rsp+90h] [rbp-51h]
  __int64 v35; // [rsp+98h] [rbp-49h]
  struct _HAM_DEPENDENCY_GROUP *v36; // [rsp+A0h] [rbp-41h]
  __int64 v37; // [rsp+A8h] [rbp-39h]
  __int64 *v38; // [rsp+B0h] [rbp-31h]
  __int64 v39; // [rsp+B8h] [rbp-29h]
  __int64 *v40; // [rsp+C0h] [rbp-21h]
  __int64 v41; // [rsp+C8h] [rbp-19h]
  char *v42; // [rsp+D0h] [rbp-11h]
  __int64 v43; // [rsp+D8h] [rbp-9h]

  v28 = 0LL;
  v30 = a5;
  if ( a1 == a2 )
    return (unsigned int)-1073741776;
  v10 = HampDepGroupEnsureHostDisposition(a1, a2, &v28);
  v11 = v28;
  v9 = v10;
  if ( v10 >= 0 )
  {
    v31 = *((_QWORD *)a1 - 4);
    v32 = *((_QWORD *)a2 - 4);
    DepLink = HampDepGroupFindDepLink(v28, (struct _HAM_DEPENDENCY_LINK_ID *)&v31);
    v29 = DepLink;
    if ( DepLink )
    {
      if ( *(_BYTE *)a3 > 3u )
      {
        DependencyByType = 0LL;
      }
      else
      {
        LOBYTE(v13) = *(_BYTE *)a3;
        DependencyByType = HampDepLinkGetDependencyByType(DepLink, v13);
      }
    }
    else
    {
      DependencyByType = 0LL;
      v9 = HampDepGroupCreateLink(v11, (struct _HAM_DEPENDENCY_LINK_ID *)&v31, &v29);
      if ( v9 < 0 )
        goto LABEL_53;
    }
    if ( DependencyByType )
    {
      if ( (*(_BYTE *)(DependencyByType + 36) & 1) == 0 )
      {
        v9 = -1073741270;
        goto LABEL_53;
      }
      HampDepGroupRunStateChangeWorkerIteration(v11);
    }
    if ( *(_BYTE *)a3 )
    {
      switch ( *(_BYTE *)a3 )
      {
        case 1:
          v15 = 80LL;
          break;
        case 2:
          v15 = 48LL;
          break;
        case 3:
          v15 = 88LL;
          break;
        case 4:
          v15 = 104LL;
          break;
        default:
          v9 = -1073741583;
          goto LABEL_53;
      }
    }
    else
    {
      v15 = 96LL;
    }
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v15);
    if ( !Heap )
    {
      v11 = v28;
      v9 = -1073741801;
      goto LABEL_53;
    }
    v17 = v29;
    *((_BYTE *)Heap + 40) = *(_BYTE *)a3;
    if ( *(_BYTE *)a3 )
    {
      if ( *(_BYTE *)a3 != 1 )
      {
        switch ( *(_BYTE *)a3 )
        {
          case 2:
            memset_0(Heap, 0, 0x30uLL);
            *((_BYTE *)Heap + 40) = 2;
            Heap[1] = v17;
            break;
          case 3:
            HampTerminateDepInitialize(
              v17,
              a1,
              *((_QWORD *)a3 + 50),
              a2,
              *((_QWORD *)a3 + 51),
              *((_DWORD *)a3 + 104),
              *((_DWORD *)a3 + 105),
              Heap);
            break;
          case 4:
            HampDonationDepInitialize(v17, a1, *((_QWORD *)a3 + 50), a2, (struct _HAM_DONATION_DEPENDENCY *)Heap);
            break;
        }
LABEL_37:
        v9 = HampDepGroupCheckCreateDependencyActivity(
               a3,
               a2,
               *((_BYTE *)Heap + 40) == 4,
               (struct _HAM_HOST_DEPENDENCY *)Heap);
        if ( v9 >= 0 )
        {
          v19 = v28;
          HampDepGroupAcquireLockExclusive(v28);
          v20 = Heap + 2;
          if ( *((_BYTE *)Heap + 40) > 3u )
          {
            v21 = (_QWORD *)((char *)v17 + 80);
            v22 = *((_QWORD *)v17 + 10);
            if ( *(struct _HAM_DEPENDENCY_LINK **)(v22 + 8) != (struct _HAM_DEPENDENCY_LINK *)((char *)v17 + 80) )
              __fastfail(3u);
          }
          else
          {
            v21 = (_QWORD *)((char *)v17 + 64);
            v22 = *((_QWORD *)v17 + 8);
            if ( *(struct _HAM_DEPENDENCY_LINK **)(v22 + 8) != (struct _HAM_DEPENDENCY_LINK *)((char *)v17 + 64) )
              __fastfail(3u);
          }
          *v20 = v22;
          Heap[3] = v21;
          *(_QWORD *)(v22 + 8) = v20;
          *v21 = v20;
          HampDepGroupReleaseLockExclusive(v19);
          if ( _volatile_metadata <= 4u )
          {
            v11 = 0LL;
          }
          else
          {
            v11 = 0LL;
            if ( TlgKeywordOn((TraceLoggingHProvider)&_volatile_metadata, 8uLL) )
            {
              v25 = *Heap + 40LL;
              v35 = v23;
              v34 = v25;
              v38 = &v31;
              v40 = &v32;
              v27 = *(_BYTE *)a3;
              v42 = &v27;
              v36 = v19;
              v37 = v23;
              v39 = v23;
              v41 = v23;
              v43 = 1LL;
              TlgWrite(v24, &unk_180083430, 0LL, 0LL, 7u, &pData);
            }
          }
          if ( a4 )
            *a4 = (struct _HAM_HOST_DEPENDENCY *)Heap;
          Heap = 0LL;
          *v30 = v19;
          v9 = 0;
          goto LABEL_51;
        }
LABEL_50:
        v11 = v28;
LABEL_51:
        if ( Heap )
          HampHostDepDestroy((struct _HAM_HOST_DEPENDENCY *)Heap);
        goto LABEL_53;
      }
      HampHostDynamicDepInitialize(v17, a1, a2, (struct _HAM_HOST_DYNAMIC_DEPENDENCY *)Heap);
      State = HampHostDynamicDepAllocateState((struct _HAM_HOST_DYNAMIC_DEPENDENCY *)Heap);
    }
    else
    {
      HampHostProcessDepInitialize(v17, a1, a2, (struct _HAM_HOST_PROCESS_DEPENDENCY *)Heap);
      State = HampHostProcessDepAllocateState(
                (struct _HAM_HOST_PROCESS_DEPENDENCY *)Heap,
                *((_DWORD *)a3 + 104),
                *((_DWORD *)a3 + 105));
    }
    v9 = State;
    if ( State < 0 )
      goto LABEL_50;
    goto LABEL_37;
  }
LABEL_53:
  if ( v11 )
  {
    HampDepGroupRunStateChangeWorker(v11);
    HampDepGroupDereference(v11);
  }
  return (unsigned int)v9;
}
