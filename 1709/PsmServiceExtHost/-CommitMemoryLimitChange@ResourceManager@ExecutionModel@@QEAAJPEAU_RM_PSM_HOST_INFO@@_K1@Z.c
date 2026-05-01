/*
 * XREFs of ?CommitMemoryLimitChange@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_PSM_HOST_INFO@@_K1@Z @ 0x18000D98C
 * Callers:
 *     ?RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@K@Z @ 0x18000A840 (-RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS.c)
 *     ?RmpActivityHostPublishCommitLimit@@YAJPEAU_RM_ACTIVITY_HOST@@_KK@Z @ 0x18001FB0C (-RmpActivityHostPublishCommitLimit@@YAJPEAU_RM_ACTIVITY_HOST@@_KK@Z.c)
 * Callees:
 *     ??$_EqualRangeImpl@U_RM_PSM_HOST_INFO@@@?$_HashTable@U_RM_PSM_HOST_INFO@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@U?$hash@U_RM_PSM_HOST_INFO@@@3@U?$equal_to@U_RM_PSM_HOST_INFO@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@3@$0A@@utl@@AEBAXU?$integral_constant@_N$0A@@1@AEBU_RM_PSM_HOST_INFO@@AEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@utl@@@1@2AEA_K@Z @ 0x180005DE0 (--$_EqualRangeImpl@U_RM_PSM_HOST_INFO@@@-$_HashTable@U_RM_PSM_HOST_INFO@@U-$pair@$$CBU_RM_PSM_HO.c)
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::CommitMemoryLimitChange(
        ExecutionModel::ResourceManager *this,
        struct _RM_PSM_HOST_INFO *a2,
        __int64 a3,
        __int64 a4)
{
  char *v4; // rbx
  unsigned int v5; // edi
  __int64 v8; // rcx
  const GUID *v9; // r9
  const struct _TlgProvider_t *v10; // rcx
  const GUID *v11; // r8
  int v12; // [rsp+30h] [rbp-79h] BYREF
  __int64 v13; // [rsp+38h] [rbp-71h] BYREF
  __int64 v14; // [rsp+40h] [rbp-69h] BYREF
  __int64 v15; // [rsp+48h] [rbp-61h] BYREF
  __int64 v16; // [rsp+50h] [rbp-59h] BYREF
  __int64 v17; // [rsp+58h] [rbp-51h] BYREF
  _QWORD v18[2]; // [rsp+60h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-39h] BYREF
  int *v20; // [rsp+90h] [rbp-19h]
  __int64 v21; // [rsp+98h] [rbp-11h]
  char *v22; // [rsp+A0h] [rbp-9h]
  __int64 v23; // [rsp+A8h] [rbp-1h]
  __int64 *v24; // [rsp+B0h] [rbp+7h]
  __int64 v25; // [rsp+B8h] [rbp+Fh]
  __int64 *v26; // [rsp+C0h] [rbp+17h]
  __int64 v27; // [rsp+C8h] [rbp+1Fh]

  v14 = a3;
  v4 = (char *)this + 248;
  v15 = a4;
  v5 = 0;
  v13 = 0LL;
  utl::_HashTable<_RM_PSM_HOST_INFO,utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>,utl::hash<_RM_PSM_HOST_INFO>,utl::equal_to<_RM_PSM_HOST_INFO>,utl::allocator<utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>>,0>::_EqualRangeImpl<_RM_PSM_HOST_INFO>(
    (__int64)this + 248,
    (__int64)a2,
    (unsigned __int64)a2,
    &v13,
    &v17,
    &v16);
  if ( (char *)v13 != v4 )
  {
    v8 = *(_QWORD *)(v13 + 584);
    v18[0] = v14;
    v18[1] = v15;
    LODWORD(v9) = RtlPublishWnfStateData(v8, 0LL, v18, 16LL, 0LL);
    v12 = (int)v9;
    if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    {
      v21 = 4LL;
      v20 = &v12;
      v22 = (char *)a2 + 544;
      v24 = &v14;
      v26 = &v15;
      v23 = 8LL;
      v25 = 8LL;
      v27 = 8LL;
      TlgWrite(v10, &unk_180055F92, v11, v9, 6u, &pData);
      LODWORD(v9) = v12;
    }
    if ( (int)v9 >= 0 )
      LODWORD(v9) = 0;
    return (unsigned int)v9;
  }
  return v5;
}
