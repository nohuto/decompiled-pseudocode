/*
 * XREFs of ?RmpActivityHostQueryEffectivePriority@@YAJPEAU_RM_ACTIVITY_HOST@@_KPEAW4Enum@Priority@ExecutionModel@@@Z @ 0x180036124
 * Callers:
 *     ?RmpActivityHostPopulateMetrics@@YAXPEAU_RM_POLICY_WORK_BUFFER@@GW4Enum@Priority@ExecutionModel@@@Z @ 0x180005354 (-RmpActivityHostPopulateMetrics@@YAXPEAU_RM_POLICY_WORK_BUFFER@@GW4Enum@Priority@ExecutionModel@.c)
 *     ?RmpActivityHostRevokeResourceSets@@YAXPEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAVResourceSet@ExecutionModel@@@Z @ 0x180036344 (-RmpActivityHostRevokeResourceSets@@YAXPEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_.c)
 * Callees:
 *     ?RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT@@@Z @ 0x180006354 (-RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_.c)
 *     ?RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@KW4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x180006F70 (-RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY.c)
 *     ?RmpEmPriorityCompare@@YAJW4Enum@Priority@ExecutionModel@@0@Z @ 0x18001F8EC (-RmpEmPriorityCompare@@YAJW4Enum@Priority@ExecutionModel@@0@Z.c)
 */

__int64 __fastcall RmpActivityHostQueryEffectivePriority(
        struct _RM_ACTIVITY_HOST *a1,
        unsigned __int64 a2,
        enum ExecutionModel::Priority::Enum *a3)
{
  int v4; // ebx
  struct ExecutionModel::ResourceSet *Next; // rax
  unsigned int v7; // edi
  unsigned __int64 v8; // rdx
  int v9; // ecx
  __int64 First; // [rsp+20h] [rbp-18h] BYREF
  int v12; // [rsp+28h] [rbp-10h]
  int v13; // [rsp+2Ch] [rbp-Ch]

  v13 = 0;
  v4 = 101;
  v12 = 2;
  First = RmpActivityHostEnumerateResourceSetGetFirst((__int64)a1, 2, 0);
  Next = RmpActivityHostEnumerateResourceSetGetNext((struct _RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT *)&First);
  v7 = 0;
  while ( Next )
  {
    v8 = *(_QWORD *)(*((_QWORD *)Next + 180) + 1168LL);
    if ( a2 > v8 )
      v9 = *((_DWORD *)Next + 353);
    else
      v9 = *((_DWORD *)Next + 352);
    if ( v4 >= v9 )
    {
      if ( a2 > v8 )
        v4 = *((_DWORD *)Next + 353);
      else
        v4 = *((_DWORD *)Next + 352);
    }
    Next = RmpActivityHostEnumerateResourceSetGetNext((struct _RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT *)&First);
  }
  if ( (int)RmpEmPriorityCompare(v4, 100) >= 0 )
    *(_DWORD *)a3 = v4;
  else
    return (unsigned int)-1073740759;
  return v7;
}
