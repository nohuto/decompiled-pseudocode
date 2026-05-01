/*
 * XREFs of ??0_ResourceInfo@ExecutionModel@@QEAA@XZ @ 0x18001EE20
 * Callers:
 *     ?EvaluateResourceRequest@ResourceSet@ExecutionModel@@QEAAJ_KW4Enum@PendType@2@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@PEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@PEA_N5@Z @ 0x1800204B0 (-EvaluateResourceRequest@ResourceSet@ExecutionModel@@QEAAJ_KW4Enum@PendType@2@PEAU_RM_RESOURCE_U.c)
 * Callees:
 *     <none>
 */

ExecutionModel::_ResourceInfo *__fastcall ExecutionModel::_ResourceInfo::_ResourceInfo(
        ExecutionModel::_ResourceInfo *this)
{
  ExecutionModel::_ResourceInfo *result; // rax

  *(_DWORD *)this = -1;
  *((_QWORD *)this + 1) = 0LL;
  *((_WORD *)this + 10) = 0;
  result = this;
  *((_DWORD *)this + 4) = 101;
  return result;
}
