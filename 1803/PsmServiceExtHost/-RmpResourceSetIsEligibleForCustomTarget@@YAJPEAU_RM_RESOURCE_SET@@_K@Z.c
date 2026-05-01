/*
 * XREFs of ?RmpResourceSetIsEligibleForCustomTarget@@YAJPEAU_RM_RESOURCE_SET@@_K@Z @ 0x180052858
 * Callers:
 *     ?RmpResourceSetRemoveRecipient@@YAXPEAU_RM_RESOURCE_SET@@0K@Z @ 0x180052974 (-RmpResourceSetRemoveRecipient@@YAXPEAU_RM_RESOURCE_SET@@0K@Z.c)
 *     ?RmpResourceSetTrySetPpleTarget@@YAJPEAU_RM_RESOURCE_SET@@_KK@Z @ 0x180052F08 (-RmpResourceSetTrySetPpleTarget@@YAJPEAU_RM_RESOURCE_SET@@_KK@Z.c)
 * Callees:
 *     ?RmpCommitValuesSubtract@@YAJ_K0PEA_K@Z @ 0x18001A360 (-RmpCommitValuesSubtract@@YAJ_K0PEA_K@Z.c)
 *     ?RmpEmPriorityCompare@@YAJW4Enum@Priority@ExecutionModel@@0@Z @ 0x18004E8F0 (-RmpEmPriorityCompare@@YAJW4Enum@Priority@ExecutionModel@@0@Z.c)
 *     ?HasMemoryForFGSharing@ResourceSet@ExecutionModel@@QEAAJ_KE@Z @ 0x18005AB78 (-HasMemoryForFGSharing@ResourceSet@ExecutionModel@@QEAAJ_KE@Z.c)
 */

__int64 __fastcall RmpResourceSetIsEligibleForCustomTarget(struct _RM_RESOURCE_SET *a1, unsigned __int64 a2)
{
  int v3; // esi
  __int64 v4; // rbx
  ExecutionModel::ResourceSet *v5; // r9
  __int64 result; // rax
  unsigned __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  RmpCommitValuesSubtract(a2, *((_QWORD *)a1 + 12), &v7);
  v3 = 0;
  v4 = 0LL;
  if ( !*((_DWORD *)a1 + 28) )
    return 2147747081LL;
  while ( 1 )
  {
    if ( (int)RmpEmPriorityCompare(
                *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 13) + 8 * v4) + 48LL) + 1720LL),
                101) > 0 )
      v3 = 1;
    result = ExecutionModel::ResourceSet::HasMemoryForFGSharing(v5, v7, v7 != 0);
    if ( (int)result < 0 )
      break;
    v4 = (unsigned int)(v4 + 1);
    if ( (unsigned int)v4 >= *((_DWORD *)a1 + 28) )
    {
      if ( !v3 )
        return 2147747081LL;
      return 0LL;
    }
  }
  return result;
}
