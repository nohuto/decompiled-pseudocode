/*
 * XREFs of ?RmpActivityHostPublishCommitLimit@@YAJPEAU_RM_ACTIVITY_HOST@@_KK@Z @ 0x18001FB0C
 * Callers:
 *     ?AddCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAT_RM_SID@@PEAT_LARGE_INTEGER@@1@Z @ 0x18000D710 (-AddCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAT_RM_SID@@PEAT_LARGE_INTEGER@.c)
 *     ?NotifyPendingResourceSetTransition@ResourceSet@ExecutionModel@@UEAAJPEAU_ResourceSetInfo@2@@Z @ 0x18003C1F0 (-NotifyPendingResourceSetTransition@ResourceSet@ExecutionModel@@UEAAJPEAU_ResourceSetInfo@2@@Z.c)
 * Callees:
 *     ?CommitMemoryLimitChange@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_PSM_HOST_INFO@@_K1@Z @ 0x18000D98C (-CommitMemoryLimitChange@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_PSM_HOST_INFO@@_K1@Z.c)
 */

__int64 __fastcall RmpActivityHostPublishCommitLimit(struct _RM_ACTIVITY_HOST *a1, unsigned __int64 a2, char a3)
{
  __int64 v3; // rdi
  unsigned __int64 v5; // rax
  __int64 v6; // rcx
  __int64 result; // rax

  v3 = a2;
  if ( *((_DWORD *)a1 + 14) )
    return 0LL;
  v5 = *((_QWORD *)a1 + 150);
  v6 = *((_QWORD *)a1 + 153);
  if ( v5 < a2 )
    v3 = v5;
  if ( v3 == v6 && (a3 & 1) == 0 )
    return 0LL;
  result = ExecutionModel::ResourceManager::CommitMemoryLimitChange(
             *(ExecutionModel::ResourceManager **)(*((_QWORD *)a1 + 5) + 1896LL),
             (struct _RM_ACTIVITY_HOST *)((char *)a1 + 88),
             v6,
             v3);
  if ( (int)result >= 0 )
    *((_QWORD *)a1 + 153) = v3;
  return result;
}
