/*
 * XREFs of ?AddCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAT_RM_SID@@PEAT_LARGE_INTEGER@@1@Z @ 0x18001C0A0
 * Callers:
 *     ?RegisterCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAXPEAT_LARGE_INTEGER@@1@Z @ 0x18001E170 (-RegisterCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAXPEAT_LARGE_INTEGER@@1@Z.c)
 * Callees:
 *     ?RmpActivityHostFindByPsmId@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000D788 (-RmpActivityHostFindByPsmId@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_ACTIV.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180014210 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001B210 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?GetPSMInfo@ResourceManager@ExecutionModel@@UEAAJKPEAU_RM_PSM_HOST_INFO@@@Z @ 0x18001C080 (-GetPSMInfo@ResourceManager@ExecutionModel@@UEAAJKPEAU_RM_PSM_HOST_INFO@@@Z.c)
 *     ?UpdateCommitMemoryLevel@ResourceManager@ExecutionModel@@UEAAJPEAU_RM_ACTIVITY_HOST@@W4_RM_COMMIT_LEVEL@@1@Z @ 0x18001C3C0 (-UpdateCommitMemoryLevel@ResourceManager@ExecutionModel@@UEAAJPEAU_RM_ACTIVITY_HOST@@W4_RM_COMMI.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180023550 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?CreateCommitMemoryWnfStates@ResourceManager@ExecutionModel@@SAJPEAT_RM_SID@@PEAU_WNF_STATE_NAME@@1@Z @ 0x18002A6B4 (-CreateCommitMemoryWnfStates@ResourceManager@ExecutionModel@@SAJPEAT_RM_SID@@PEAU_WNF_STATE_NAME.c)
 *     ??$_EqualRangeImpl@U_RM_PSM_HOST_INFO@@@?$_HashTable@U_RM_PSM_HOST_INFO@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@U?$hash@U_RM_PSM_HOST_INFO@@@3@U?$equal_to@U_RM_PSM_HOST_INFO@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@3@$0A@@utl@@AEBAXU?$integral_constant@_N$0A@@1@AEBU_RM_PSM_HOST_INFO@@AEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@utl@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@2@@1@2AEA_K@Z @ 0x18002BBC0 (--$_EqualRangeImpl@U_RM_PSM_HOST_INFO@@@-$_HashTable@U_RM_PSM_HOST_INFO@@U-$pair@$$_ea_18002BBC0.c)
 *     ??$_NewNodeConstruct@AEAU_RM_PSM_HOST_INFO@@AEAUCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@?$_HashTable@U_RM_PSM_HOST_INFO@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@U?$hash@U_RM_PSM_HOST_INFO@@@3@U?$equal_to@U_RM_PSM_HOST_INFO@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@3@$0A@@utl@@AEAAPEAU?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@1@AEAU_RM_PSM_HOST_INFO@@AEAUCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@Z @ 0x18002BD40 (--$_NewNodeConstruct@AEAU_RM_PSM_HOST_INFO@@AEAUCommitMemoryWnfStates@ResourceManager@ExecutionM.c)
 *     ?_EmplaceImpl@?$_HashTable@U_RM_PSM_HOST_INFO@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@U?$hash@U_RM_PSM_HOST_INFO@@@3@U?$equal_to@U_RM_PSM_HOST_INFO@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@3@$0A@@utl@@AEAA?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@utl@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@2@@utl@@_N@2@U?$integral_constant@_N$0A@@2@V?$_DlistConstIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@utl@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@2@@2@PEAU?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@2@@Z @ 0x18002BF6C (-_EmplaceImpl@-$_HashTable@U_RM_PSM_HOST_INFO@@U-$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfS.c)
 *     ?RmpActivityHostPublishCommitLimit@@YAJPEAU_RM_ACTIVITY_HOST@@_KK@Z @ 0x180033468 (-RmpActivityHostPublishCommitLimit@@YAJPEAU_RM_ACTIVITY_HOST@@_KK@Z.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     memset_0 @ 0x180041D1C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180041D40 (_guard_dispatch_icall_nop.c)
 */

int __fastcall ExecutionModel::ResourceManager::AddCommitMemoryWnfStates(
        struct _RM_SERVICE_GLOBALS **this,
        unsigned int a2,
        union _RM_SID *a3,
        union _LARGE_INTEGER *a4,
        union _LARGE_INTEGER *a5)
{
  int (__fastcall *v9)(ExecutionModel::ResourceManager *, unsigned int, struct _RM_PSM_HOST_INFO *); // rax
  int result; // eax
  int v11; // edx
  union _LARGE_INTEGER *v12; // rdi
  __int64 v13; // rcx
  void *Block; // rax
  int v15; // r8d
  unsigned int *v16; // r14
  __int64 v17; // r9
  void (__fastcall *v18)(struct _RM_SERVICE_GLOBALS **, unsigned int *, _QWORD, __int64); // rax
  PVOID P; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v20; // [rsp+38h] [rbp-C8h] BYREF
  int v21[2]; // [rsp+40h] [rbp-C0h] BYREF
  char v22; // [rsp+48h] [rbp-B8h]
  _BYTE v23[8]; // [rsp+50h] [rbp-B0h] BYREF
  struct _WNF_STATE_NAME v24; // [rsp+58h] [rbp-A8h] BYREF
  struct _WNF_STATE_NAME v25; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v26[3]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v27[560]; // [rsp+80h] [rbp-80h] BYREF

  v24 = 0LL;
  v25 = 0LL;
  memset_0(v27, 0, 0x228uLL);
  v9 = (int (__fastcall *)(ExecutionModel::ResourceManager *, unsigned int, struct _RM_PSM_HOST_INFO *))*((_QWORD *)*this + 5);
  if ( v9 == ExecutionModel::ResourceManager::GetPSMInfo )
    result = ExecutionModel::ResourceManager::GetPSMInfo(
               (ExecutionModel::ResourceManager *)this,
               a2,
               (struct _RM_PSM_HOST_INFO *)v27);
  else
    result = v9((ExecutionModel::ResourceManager *)this, a2, (struct _RM_PSM_HOST_INFO *)v27);
  if ( result >= 0 )
  {
    P = 0LL;
    utl::_HashTable<_RM_PSM_HOST_INFO,utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>,utl::hash<_RM_PSM_HOST_INFO>,utl::equal_to<_RM_PSM_HOST_INFO>,utl::allocator<utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>>,0>::_EqualRangeImpl<_RM_PSM_HOST_INFO>(
      (_DWORD)this + 192,
      v11,
      (unsigned int)v27,
      (unsigned int)&P,
      (__int64)v21,
      (__int64)v23);
    v12 = (union _LARGE_INTEGER *)P;
    if ( P == this + 24 )
    {
      result = ExecutionModel::ResourceManager::CreateCommitMemoryWnfStates(a3, &v24, &v25);
      if ( result < 0 )
        return result;
      Block = (void *)utl::_HashTable<_RM_PSM_HOST_INFO,utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>,utl::hash<_RM_PSM_HOST_INFO>,utl::equal_to<_RM_PSM_HOST_INFO>,utl::allocator<utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>>,0>::_NewNodeConstruct<_RM_PSM_HOST_INFO &,ExecutionModel::ResourceManager::CommitMemoryWnfStates &>(
                        v13,
                        v27,
                        &v24);
      utl::_HashTable<_RM_PSM_HOST_INFO,utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>,utl::hash<_RM_PSM_HOST_INFO>,utl::equal_to<_RM_PSM_HOST_INFO>,utl::allocator<utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>>,0>::_EmplaceImpl(
        (_DWORD)this + 192,
        (int)v21,
        v15,
        0,
        Block);
      if ( !v22 )
      {
        NtDeleteWnfStateName(&v24);
        NtDeleteWnfStateName(&v25);
        return -2147024882;
      }
      v12 = *(union _LARGE_INTEGER **)v21;
      if ( (int)RmpActivityHostFindByPsmId(this[19], (struct _RM_PSM_HOST_INFO *)v27, (struct _RM_ACTIVITY_HOST **)&P) < 0 )
      {
        v26[0] = 0LL;
        v26[1] = 0LL;
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))RtlPublishWnfStateData)(v25, 0LL, v26, 16LL, 0LL);
        v20 = 0x100000000LL;
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))RtlPublishWnfStateData)(v24, 0LL, &v20, 8LL, 0LL);
      }
      else
      {
        v16 = (unsigned int *)P;
        HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)((char *)P + 64), 0);
        RmpActivityHostPublishCommitLimit((struct _RM_ACTIVITY_HOST *)v16, *((_QWORD *)v16 + 171), 1u);
        v17 = v16[344];
        v18 = (void (__fastcall *)(struct _RM_SERVICE_GLOBALS **, unsigned int *, _QWORD, __int64))*((_QWORD *)*this + 4);
        if ( (char *)v18 == (char *)ExecutionModel::ResourceManager::UpdateCommitMemoryLevel )
          ExecutionModel::ResourceManager::UpdateCommitMemoryLevel(this, v16, 0LL, v17);
        else
          v18(this, v16, 0LL, v17);
        HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)(v16 + 16));
        RmpObjectRelease(v16);
      }
    }
    *a4 = v12[72];
    *a5 = v12[73];
    return 0;
  }
  return result;
}
