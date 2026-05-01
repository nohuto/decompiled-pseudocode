/*
 * XREFs of ?RmpActivityHostPublishCommitLimit@@YAJPEAU_RM_ACTIVITY_HOST@@_KK@Z @ 0x180033468
 * Callers:
 *     ?AddCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAT_RM_SID@@PEAT_LARGE_INTEGER@@1@Z @ 0x18001C0A0 (-AddCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAT_RM_SID@@PEAT_LARGE_INTEGER@.c)
 *     ?NotifyPendingResourceSetTransition@ResourceSet@ExecutionModel@@UEAAJPEAU_ResourceSetInfo@2@@Z @ 0x18005AFB0 (-NotifyPendingResourceSetTransition@ResourceSet@ExecutionModel@@UEAAJPEAU_ResourceSetInfo@2@@Z.c)
 * Callees:
 *     ?CommitMemoryLimitChange@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_PSM_HOST_INFO@@_K1@Z @ 0x18001C274 (-CommitMemoryLimitChange@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_PSM_HOST_INFO@@_K1@Z.c)
 */

__int64 __fastcall RmpActivityHostPublishCommitLimit(struct _RM_ACTIVITY_HOST *a1, unsigned __int64 a2, char a3)
{
  __int64 v4; // rbx
  __int64 v6; // r8
  __int64 result; // rax

  v4 = a2;
  if ( (*((_BYTE *)a1 + 804) & 1) == 0 && *((_QWORD *)a1 + 168) < a2 )
    v4 = *((_QWORD *)a1 + 168);
  v6 = *((_QWORD *)a1 + 171);
  if ( v4 == v6 && (a3 & 1) == 0 )
    return 0LL;
  result = ExecutionModel::ResourceManager::CommitMemoryLimitChange(
             *(ExecutionModel::ResourceManager **)(*((_QWORD *)a1 + 6) + 2232LL),
             (struct _RM_ACTIVITY_HOST *)((char *)a1 + 88),
             v6,
             v4);
  if ( (int)result >= 0 )
    *((_QWORD *)a1 + 171) = v4;
  return result;
}
