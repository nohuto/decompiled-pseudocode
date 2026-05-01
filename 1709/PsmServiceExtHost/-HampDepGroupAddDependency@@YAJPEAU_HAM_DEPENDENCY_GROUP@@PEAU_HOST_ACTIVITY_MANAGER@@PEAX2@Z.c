/*
 * XREFs of ?HampDepGroupAddDependency@@YAJPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HOST_ACTIVITY_MANAGER@@PEAX2@Z @ 0x180044290
 * Callers:
 *     ?HamSrvAddDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAX1@Z @ 0x18004198C (-HamSrvAddDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAX1@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180017E50 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180017EA0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180019FA0 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     ?RmHamFindHostByPid@@YAJPEAU_RM_SERVICE_GLOBALS@@KPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003FE5C (-RmHamFindHostByPid@@YAJPEAU_RM_SERVICE_GLOBALS@@KPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampDepGroupCompareHostDependencyForRbTree@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x180044694 (-HampDepGroupCompareHostDependencyForRbTree@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?HampDepGroupFindHostDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_HOST_DEPENDENCY_ID@@@Z @ 0x180044A0C (-HampDepGroupFindHostDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180045038 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupWaitEnterStateChange@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180045538 (-HampDepGroupWaitEnterStateChange@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostDepAllocateState@@YAJPEAU_HAM_HOST_DEPENDENCY@@KK@Z @ 0x180045570 (-HampHostDepAllocateState@@YAJPEAU_HAM_HOST_DEPENDENCY@@KK@Z.c)
 *     ?HampHostDepDestroy@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x180045698 (-HampHostDepDestroy@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z.c)
 *     ?HampHostDepInitialize@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x180045710 (-HampHostDepInitialize@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_HOST_DEPENDENCY@@@Z.c)
 *     ?HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180047218 (-HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ACTIVITY_PROPERTIES@@W4_HAM_ACTIVITY_DEPENDENCY_TYPE@@PEAPEAU_HAM_ACTIVITY@@@Z @ 0x180047368 (-HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOS.c)
 *     CemRcObjectDereference @ 0x1800492EC (CemRcObjectDereference.c)
 *     ?HampActivityPropertiesInitialize@@YAXPEBG0PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x18004D0F8 (-HampActivityPropertiesInitialize@@YAXPEBG0PEAU_HAM_ACTIVITY_PROPERTIES@@@Z.c)
 */

__int64 __fastcall HampDepGroupAddDependency(
        struct _HAM_DEPENDENCY_GROUP *a1,
        struct _HOST_ACTIVITY_MANAGER *a2,
        void *a3,
        void *a4)
{
  struct _RM_HAM_ACTIVITY_HOST *v5; // rsi
  __int64 v6; // r14
  int v7; // r12d
  struct _HAM_HOST_DEPENDENCY *v9; // r15
  struct _RM_SERVICE_GLOBALS *v10; // rcx
  __int64 v11; // rdx
  int HostByPid; // ebx
  const GUID *v13; // r8
  const GUID *v14; // r9
  DWORD v15; // r12d
  struct _RM_SERVICE_GLOBALS *v16; // rcx
  int v17; // eax
  struct _RM_HAM_ACTIVITY_HOST *v18; // rdi
  struct _HAM_HOST_DEPENDENCY *Heap; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  int v23; // r12d
  struct _RTL_BALANCED_NODE *v24; // rbx
  __int64 v25; // r8
  struct _RTL_BALANCED_NODE *v26; // rax
  const struct _TlgProvider_t *v27; // rcx
  bool v28; // zf
  struct _RM_HAM_ACTIVITY_HOST *v30; // [rsp+38h] [rbp-C8h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v31; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v32; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int ProcessId; // [rsp+50h] [rbp-B0h]
  struct _HOST_ACTIVITY_MANAGER *v34; // [rsp+58h] [rbp-A8h]
  __int64 v35; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v36; // [rsp+68h] [rbp-98h] BYREF
  _DWORD v37[96]; // [rsp+70h] [rbp-90h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+1F0h] [rbp+F0h] BYREF
  __int64 v39; // [rsp+210h] [rbp+110h]
  int v40; // [rsp+218h] [rbp+118h]
  int v41; // [rsp+21Ch] [rbp+11Ch]
  struct _HAM_DEPENDENCY_GROUP *v42; // [rsp+220h] [rbp+120h]
  int v43; // [rsp+228h] [rbp+128h]
  int v44; // [rsp+22Ch] [rbp+12Ch]
  __int64 *v45; // [rsp+230h] [rbp+130h]
  int v46; // [rsp+238h] [rbp+138h]
  int v47; // [rsp+23Ch] [rbp+13Ch]
  __int64 *v48; // [rsp+240h] [rbp+140h]
  int v49; // [rsp+248h] [rbp+148h]
  int v50; // [rsp+24Ch] [rbp+14Ch]

  v30 = 0LL;
  v5 = 0LL;
  v34 = a2;
  v6 = 0LL;
  v31 = 0LL;
  v7 = 0;
  v32 = 0LL;
  v9 = 0LL;
  ProcessId = GetProcessId(a3);
  HostByPid = RmHamFindHostByPid(v10, ProcessId, &v30);
  if ( HostByPid < 0 )
  {
    v18 = v30;
    goto LABEL_35;
  }
  v15 = GetProcessId(a4);
  v17 = RmHamFindHostByPid(v16, v15, &v31);
  v18 = v30;
  HostByPid = v17;
  v5 = v31;
  if ( v17 < 0 )
  {
LABEL_5:
    v7 = 0;
    goto LABEL_35;
  }
  if ( v30 == v31
    || *((struct _HAM_DEPENDENCY_GROUP **)v30 + 80) != a1
    || *((struct _HAM_DEPENDENCY_GROUP **)v31 + 80) != a1 )
  {
    HostByPid = -1073741776;
    goto LABEL_5;
  }
  Heap = (struct _HAM_HOST_DEPENDENCY *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x58uLL);
  v18 = v30;
  v9 = Heap;
  v5 = v31;
  if ( !Heap )
  {
    v6 = v32;
    HostByPid = -1073741801;
    goto LABEL_5;
  }
  HampHostDepInitialize(v30, v31, Heap);
  HostByPid = HampHostDepAllocateState(v9, ProcessId, v15);
  if ( HostByPid < 0 )
  {
    v7 = 0;
    goto LABEL_33;
  }
  HampActivityPropertiesInitialize(L"HostDependency", L"UiModernForeground", (struct _HAM_ACTIVITY_PROPERTIES *)v37);
  v37[0] |= 0x80u;
  v7 = 1;
  HampDepGroupWaitEnterStateChange(a1);
  HostByPid = HampActCreate(0LL, v34, v5, v37, 1, &v32);
  if ( HostByPid < 0 )
  {
LABEL_33:
    v6 = v32;
    goto LABEL_35;
  }
  v6 = v32;
  *(_QWORD *)(v32 + 64) = v9;
  v20 = *((_QWORD *)v9 + 2);
  v21 = *((_QWORD *)v9 + 4);
  *((_QWORD *)v9 + 6) = v6;
  TpSetWait(v21, v20, 0LL);
  TpSetWait(*((_QWORD *)v9 + 5), *((_QWORD *)v9 + 3), 0LL);
  v22 = *((_QWORD *)v18 - 5);
  v9 = 0LL;
  v36 = *((_QWORD *)v5 - 5);
  v35 = v22;
  if ( HampDepGroupFindHostDependency(a1, (struct _HAM_HOST_DEPENDENCY_ID *)&v35) )
  {
    HostByPid = -1073741270;
  }
  else
  {
    v25 = *(_QWORD *)(v6 + 64) + 56LL;
    v23 = *((_BYTE *)a1 + 72) & 1;
    v24 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)a1 + 8);
    v34 = (struct _HOST_ACTIVITY_MANAGER *)v25;
    LOBYTE(v25) = 0;
    if ( v24 )
    {
      while ( 1 )
      {
        if ( (int)HampDepGroupCompareHostDependencyForRbTree(&v35, v24) < 0 )
        {
          v26 = v24->Children[0];
          if ( v23 )
          {
            if ( !v26 )
              goto LABEL_26;
            v26 = (struct _RTL_BALANCED_NODE *)((unsigned __int64)v24 ^ (unsigned __int64)v26);
          }
          if ( !v26 )
          {
LABEL_26:
            LOBYTE(v25) = 0;
            break;
          }
        }
        else
        {
          v26 = v24->Children[1];
          if ( v23 )
          {
            if ( !v26 )
              goto LABEL_20;
            v26 = (struct _RTL_BALANCED_NODE *)((unsigned __int64)v24 ^ (unsigned __int64)v26);
          }
          if ( !v26 )
          {
LABEL_20:
            v7 = 1;
            LOBYTE(v25) = 1;
            goto LABEL_28;
          }
        }
        v24 = v26;
      }
    }
    v7 = 1;
LABEL_28:
    RtlRbInsertNodeEx((char *)a1 + 64, v24, v25, v34);
    if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x28uLL) )
    {
      v41 = 0;
      v44 = 0;
      v47 = 0;
      v50 = 0;
      v39 = v6 + 40;
      v45 = &v35;
      v48 = &v36;
      v40 = 8;
      v42 = a1;
      v43 = 8;
      v46 = 8;
      v49 = 8;
      TlgWrite(v27, &unk_18005B587, v13, v14, 6u, &pData);
    }
    HostByPid = 0;
  }
LABEL_35:
  if ( v18 )
  {
    RmpAcquireGlobalLock();
    v28 = (*((_QWORD *)v18 + 72))-- == 1LL;
    if ( v28 )
      RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v18 - 64));
    RmpReleaseGlobalLock();
  }
  if ( v5 )
  {
    RmpAcquireGlobalLock();
    v28 = (*((_QWORD *)v5 + 72))-- == 1LL;
    if ( v28 )
      RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v5 - 64));
    RmpReleaseGlobalLock();
  }
  if ( v9 )
    HampHostDepDestroy(v9);
  if ( v6 )
  {
    if ( HostByPid < 0 )
      HampActClose((struct _HAM_ACTIVITY *)v6);
    CemRcObjectDereference(v6, v11, v13, v14);
  }
  if ( v7 )
    HampDepGroupRunStateChangeWorker(a1);
  return (unsigned int)HostByPid;
}
