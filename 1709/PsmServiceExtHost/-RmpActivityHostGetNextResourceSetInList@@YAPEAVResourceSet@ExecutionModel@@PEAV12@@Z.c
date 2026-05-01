/*
 * XREFs of ?RmpActivityHostGetNextResourceSetInList@@YAPEAVResourceSet@ExecutionModel@@PEAV12@@Z @ 0x180014A9C
 * Callers:
 *     ?RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@K@Z @ 0x18000A840 (-RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS.c)
 * Callees:
 *     <none>
 */

struct ExecutionModel::ResourceSet *__fastcall RmpActivityHostGetNextResourceSetInList(
        struct ExecutionModel::ResourceSet *a1)
{
  __int64 v1; // r9
  struct ExecutionModel::ResourceSet *result; // rax

  v1 = *((_QWORD *)a1 + 177);
  result = 0LL;
  if ( v1 != *((_QWORD *)a1 + 180) + 24 * (*((int *)a1 + 362) + 34LL) )
    return (struct ExecutionModel::ResourceSet *)(v1 - 1416);
  return result;
}
