/*
 * XREFs of ?HampDepGroupRemoveDependency@@YAJPEAU_HAM_DEPENDENCY_GROUP@@PEAX1@Z @ 0x180044EB0
 * Callers:
 *     ?HamSrvRemoveDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAX1@Z @ 0x180042654 (-HamSrvRemoveDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAX1@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180017E50 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180017EA0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180019FA0 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     ?RmHamFindHostByPid@@YAJPEAU_RM_SERVICE_GLOBALS@@KPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003FE5C (-RmHamFindHostByPid@@YAJPEAU_RM_SERVICE_GLOBALS@@KPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampDepGroupFindHostDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_HOST_DEPENDENCY_ID@@@Z @ 0x180044A0C (-HampDepGroupFindHostDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180045038 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupWaitEnterStateChange@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180045538 (-HampDepGroupWaitEnterStateChange@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 */

__int64 __fastcall HampDepGroupRemoveDependency(struct _HAM_DEPENDENCY_GROUP *a1, HANDLE Process, HANDLE a3)
{
  struct _RM_HAM_ACTIVITY_HOST *v4; // rbx
  int v6; // r15d
  DWORD ProcessId; // eax
  struct _RM_SERVICE_GLOBALS *v8; // rcx
  int HostByPid; // eax
  struct _RM_HAM_ACTIVITY_HOST *v10; // rsi
  unsigned int v11; // edi
  DWORD v12; // eax
  struct _RM_SERVICE_GLOBALS *v13; // rcx
  int v14; // eax
  __int64 v15; // rax
  union _RTL_BALANCED_NODE::$9BF36C84E3411792BEB9166F3629864E *HostDependency; // rdi
  __int64 v17; // rdx
  const struct _TlgProvider_t *v18; // rcx
  const GUID *v19; // r8
  const GUID *v20; // r9
  ULONG_PTR ParentValue; // rax
  bool v22; // zf
  struct _RM_HAM_ACTIVITY_HOST *v24; // [rsp+30h] [rbp-49h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v25; // [rsp+38h] [rbp-41h] BYREF
  _QWORD v26[2]; // [rsp+40h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-29h] BYREF
  ULONG_PTR v28; // [rsp+70h] [rbp-9h]
  int v29; // [rsp+78h] [rbp-1h]
  int v30; // [rsp+7Ch] [rbp+3h]
  struct _HAM_DEPENDENCY_GROUP *v31; // [rsp+80h] [rbp+7h]
  int v32; // [rsp+88h] [rbp+Fh]
  int v33; // [rsp+8Ch] [rbp+13h]

  v25 = 0LL;
  v4 = 0LL;
  v24 = 0LL;
  v6 = 0;
  ProcessId = GetProcessId(Process);
  HostByPid = RmHamFindHostByPid(v8, ProcessId, &v25);
  v10 = v25;
  v11 = HostByPid;
  if ( HostByPid >= 0 )
  {
    v12 = GetProcessId(a3);
    v14 = RmHamFindHostByPid(v13, v12, &v24);
    v4 = v24;
    v11 = v14;
    if ( v14 >= 0 )
    {
      v6 = 1;
      v15 = *((_QWORD *)v10 - 5);
      v26[1] = *((_QWORD *)v24 - 5);
      v26[0] = v15;
      HampDepGroupWaitEnterStateChange(a1);
      HostDependency = HampDepGroupFindHostDependency(a1, (struct _HAM_HOST_DEPENDENCY_ID *)v26);
      if ( HostDependency )
      {
        if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x28uLL) )
        {
          ParentValue = HostDependency[6].ParentValue;
          v30 = 0;
          v33 = 0;
          v28 = v17 + ParentValue;
          v29 = v17 - 32;
          v32 = v17 - 32;
          v31 = a1;
          TlgWrite(v18, &unk_18005B6EC, v19, v20, 4u, &pData);
        }
        HIDWORD(HostDependency[10].ParentValue) |= 1u;
        v11 = 0;
      }
      else
      {
        v11 = -1073741072;
      }
    }
  }
  if ( v10 )
  {
    RmpAcquireGlobalLock();
    v22 = (*((_QWORD *)v10 + 72))-- == 1LL;
    if ( v22 )
      RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v10 - 64));
    RmpReleaseGlobalLock();
  }
  if ( v4 )
  {
    RmpAcquireGlobalLock();
    v22 = (*((_QWORD *)v4 + 72))-- == 1LL;
    if ( v22 )
      RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v4 - 64));
    RmpReleaseGlobalLock();
  }
  if ( v6 )
    HampDepGroupRunStateChangeWorker(a1);
  return v11;
}
