/*
 * XREFs of ?CommitMemoryLimitChange@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_PSM_HOST_INFO@@_K1@Z @ 0x18001C274
 * Callers:
 *     ?RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@K@Z @ 0x1800142B0 (-RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS.c)
 *     ?HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800172C0 (-HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostPublishCommitLimit@@YAJPEAU_RM_ACTIVITY_HOST@@_KK@Z @ 0x180033468 (-RmpActivityHostPublishCommitLimit@@YAJPEAU_RM_ACTIVITY_HOST@@_KK@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     ??$_EqualRangeImpl@U_RM_PSM_HOST_INFO@@@?$_HashTable@U_RM_PSM_HOST_INFO@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@U?$hash@U_RM_PSM_HOST_INFO@@@3@U?$equal_to@U_RM_PSM_HOST_INFO@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@3@$0A@@utl@@AEBAXU?$integral_constant@_N$0A@@1@AEBU_RM_PSM_HOST_INFO@@AEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@utl@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@2@@1@2AEA_K@Z @ 0x18002BBC0 (--$_EqualRangeImpl@U_RM_PSM_HOST_INFO@@@-$_HashTable@U_RM_PSM_HOST_INFO@@U-$pair@$$_ea_18002BBC0.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
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
  int v9; // r9d
  const struct _TlgProvider_t *v10; // rcx
  int v11; // [rsp+30h] [rbp-79h] BYREF
  __int64 v12; // [rsp+38h] [rbp-71h] BYREF
  __int64 v13; // [rsp+40h] [rbp-69h] BYREF
  __int64 v14; // [rsp+48h] [rbp-61h] BYREF
  _BYTE v15[8]; // [rsp+50h] [rbp-59h] BYREF
  _BYTE v16[8]; // [rsp+58h] [rbp-51h] BYREF
  _QWORD v17[2]; // [rsp+60h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-39h] BYREF
  int *v19; // [rsp+90h] [rbp-19h]
  __int64 v20; // [rsp+98h] [rbp-11h]
  char *v21; // [rsp+A0h] [rbp-9h]
  __int64 v22; // [rsp+A8h] [rbp-1h]
  __int64 *v23; // [rsp+B0h] [rbp+7h]
  __int64 v24; // [rsp+B8h] [rbp+Fh]
  __int64 *v25; // [rsp+C0h] [rbp+17h]
  __int64 v26; // [rsp+C8h] [rbp+1Fh]

  v13 = a3;
  v4 = (char *)this + 192;
  v14 = a4;
  v5 = 0;
  v12 = 0LL;
  utl::_HashTable<_RM_PSM_HOST_INFO,utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>,utl::hash<_RM_PSM_HOST_INFO>,utl::equal_to<_RM_PSM_HOST_INFO>,utl::allocator<utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>>,0>::_EqualRangeImpl<_RM_PSM_HOST_INFO>(
    (_DWORD)this + 192,
    (_DWORD)a2,
    (_DWORD)a2,
    (unsigned int)&v12,
    (__int64)v16,
    (__int64)v15);
  if ( (char *)v12 != v4 )
  {
    v8 = *(_QWORD *)(v12 + 584);
    v17[0] = v13;
    v17[1] = v14;
    v9 = RtlPublishWnfStateData(v8, 0LL, v17, 16LL, 0LL);
    v11 = v9;
    if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    {
      v20 = 4LL;
      v19 = &v11;
      v21 = (char *)a2 + 544;
      v23 = &v13;
      v25 = &v14;
      v22 = 8LL;
      v24 = 8LL;
      v26 = 8LL;
      TlgWrite(v10, &unk_18007C631, 0LL, 0LL, 6u, &pData);
      v9 = v11;
    }
    if ( v9 >= 0 )
      return 0;
    return (unsigned int)v9;
  }
  return v5;
}
