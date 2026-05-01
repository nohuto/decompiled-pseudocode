/*
 * XREFs of ?OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_PSM_HOST_INFO@@@Z @ 0x18001CBEC
 * Callers:
 *     ?HostStateNotification@ResourceManager@ExecutionModel@@UEAAXPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x18001BDF0 (-HostStateNotification@ResourceManager@ExecutionModel@@UEAAXPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_I.c)
 * Callees:
 *     ?RmpActivityHostZeroProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180006DB8 (-RmpActivityHostZeroProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800072D8 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     ?RmpActivityHostFindByHostId@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180010080 (-RmpActivityHostFindByHostId@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHamFindHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180010FD0 (-RmHamFindHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800141C0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     _TlgCreateWsz @ 0x180014DC0 (_TlgCreateWsz.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001B2C0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180023550 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?erase@?$_HashTable@U_RM_PSM_HOST_INFO@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@U?$hash@U_RM_PSM_HOST_INFO@@@3@U?$equal_to@U_RM_PSM_HOST_INFO@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@3@$0A@@utl@@QEAA?AV?$_DlistIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@utl@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@2@@2@V?$_DlistConstIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@utl@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@2@@2@0@Z @ 0x18002BB08 (-erase@-$_HashTable@U_RM_PSM_HOST_INFO@@U-$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@R.c)
 *     ??$_EqualRangeImpl@U_RM_PSM_HOST_INFO@@@?$_HashTable@U_RM_PSM_HOST_INFO@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@U?$hash@U_RM_PSM_HOST_INFO@@@3@U?$equal_to@U_RM_PSM_HOST_INFO@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@3@$0A@@utl@@AEBAXU?$integral_constant@_N$0A@@1@AEBU_RM_PSM_HOST_INFO@@AEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@utl@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@2@@1@2AEA_K@Z @ 0x18002BBC0 (--$_EqualRangeImpl@U_RM_PSM_HOST_INFO@@@-$_HashTable@U_RM_PSM_HOST_INFO@@U-$pair@$$_ea_18002BBC0.c)
 *     ?HampHostCheckNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180032E6C (-HampHostCheckNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 */

void __fastcall ExecutionModel::ResourceManager::OnApplicationTerminated(
        ExecutionModel::ResourceManager *this,
        struct _RM_PSM_HOST_INFO *a2)
{
  __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  struct _RM_ACTIVITY_HOST *v6; // rsi
  struct _RM_HAM_ACTIVITY_HOST *v7; // r14
  struct _RM_ACTIVITY_HOST *v8; // rbx
  int v9; // edx
  char *v10; // r15
  char *v11; // rbx
  int v12; // r9d
  int v13; // r10d
  int v15; // [rsp+30h] [rbp-99h] BYREF
  int v16; // [rsp+34h] [rbp-95h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v17; // [rsp+38h] [rbp-91h] BYREF
  struct _RM_ACTIVITY_HOST *v18; // [rsp+40h] [rbp-89h] BYREF
  char *v19; // [rsp+48h] [rbp-81h] BYREF
  unsigned __int64 v20; // [rsp+50h] [rbp-79h] BYREF
  char v21[8]; // [rsp+58h] [rbp-71h] BYREF
  char v22[8]; // [rsp+60h] [rbp-69h] BYREF
  char v23[8]; // [rsp+68h] [rbp-61h] BYREF
  EVENT_DATA_DESCRIPTOR v24; // [rsp+70h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp-39h] BYREF
  int *v26; // [rsp+A0h] [rbp-29h]
  int v27; // [rsp+A8h] [rbp-21h]
  int v28; // [rsp+ACh] [rbp-1Dh]
  int *v29; // [rsp+B0h] [rbp-19h]
  int v30; // [rsp+B8h] [rbp-11h]
  int v31; // [rsp+BCh] [rbp-Dh]
  unsigned __int64 *v32; // [rsp+C0h] [rbp-9h]
  int v33; // [rsp+C8h] [rbp-1h]
  int v34; // [rsp+CCh] [rbp+3h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D0h] [rbp+7h] BYREF

  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18007C264, 0LL, 0LL, 2u, &pData);
  v4 = *((_QWORD *)this + 19);
  v5 = *((_QWORD *)a2 + 68);
  v6 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v20 = v5;
  RmHamFindHost((struct _HOST_ACTIVITY_MANAGER *)(v4 + 1312), v5, &v17);
  v7 = v17;
  v8 = 0LL;
  if ( v17 )
  {
    HampHostCheckNotifyZeroProcess(v17);
    v6 = (struct _RM_HAM_ACTIVITY_HOST *)((char *)v7 - 64);
    if ( _InterlockedIncrement64((volatile signed __int64 *)v7 - 6) <= 1 )
      __fastfail(0xEu);
    v7 = v17;
    v8 = v6;
    v18 = v6;
  }
  RmpAcquireGlobalLock();
  if ( !v8 )
  {
    RmpActivityHostFindByHostId(*((struct _RM_SERVICE_GLOBALS **)this + 19), v20, &v18);
    v6 = v18;
  }
  if ( v6 )
    RmpActivityHostZeroProcessNotification(v6);
  v19 = 0LL;
  v10 = (char *)this + 192;
  utl::_HashTable<_RM_PSM_HOST_INFO,utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>,utl::hash<_RM_PSM_HOST_INFO>,utl::equal_to<_RM_PSM_HOST_INFO>,utl::allocator<utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>>,0>::_EqualRangeImpl<_RM_PSM_HOST_INFO>(
    (_DWORD)v10,
    v9,
    (_DWORD)a2,
    (unsigned int)&v19,
    (__int64)v22,
    (__int64)v21);
  v11 = v19;
  if ( v19 != v10 )
  {
    NtDeleteWnfStateName(v19 + 576);
    NtDeleteWnfStateName(v11 + 584);
    utl::_HashTable<_RM_PSM_HOST_INFO,utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>,utl::hash<_RM_PSM_HOST_INFO>,utl::equal_to<_RM_PSM_HOST_INFO>,utl::allocator<utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>>,0>::erase(
      v10,
      v23,
      v11,
      *(_QWORD *)v11);
  }
  RmpReleaseGlobalLock();
  if ( v6 )
    RmpObjectRelease(v6);
  if ( v7 )
  {
    RmpAcquireGlobalLock();
    if ( (*((_QWORD *)v7 + 72))-- == 1LL )
      RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v7 - 64));
    RmpReleaseGlobalLock();
  }
  if ( hProvider > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 9uLL) )
    {
      TlgCreateWsz(&pDesc, (LPCWSTR)a2);
      v28 = 0;
      v31 = 0;
      v12 = *((_DWORD *)a2 + 134);
      v34 = 0;
      v26 = &v15;
      v16 = *((_DWORD *)a2 + 133);
      v29 = &v16;
      v32 = &v20;
      v15 = v12;
      v27 = v13;
      v30 = v13;
      v33 = 8;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18007C372, 0LL, 0LL, 6u, &v24);
    }
  }
}
