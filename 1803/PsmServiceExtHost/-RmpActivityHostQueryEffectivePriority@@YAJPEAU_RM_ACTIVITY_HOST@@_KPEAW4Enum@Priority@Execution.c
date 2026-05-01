/*
 * XREFs of ?RmpActivityHostQueryEffectivePriority@@YAJPEAU_RM_ACTIVITY_HOST@@_KPEAW4Enum@Priority@ExecutionModel@@@Z @ 0x18005479C
 * Callers:
 *     ?RmpActivityHostPopulateMetrics@@YAXPEAU_RM_POLICY_WORK_BUFFER@@GW4Enum@Priority@ExecutionModel@@@Z @ 0x18002E054 (-RmpActivityHostPopulateMetrics@@YAXPEAU_RM_POLICY_WORK_BUFFER@@GW4Enum@Priority@ExecutionModel@.c)
 *     ?RmpActivityHostRevokeResourceSets@@YAXPEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAVResourceSet@ExecutionModel@@@Z @ 0x180054958 (-RmpActivityHostRevokeResourceSets@@YAXPEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_.c)
 * Callees:
 *     ?RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT@@@Z @ 0x18002511C (-RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_.c)
 *     ?RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@KW4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x180025180 (-RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY.c)
 *     ?RmpEmPriorityCompare@@YAJW4Enum@Priority@ExecutionModel@@0@Z @ 0x18004E8F0 (-RmpEmPriorityCompare@@YAJW4Enum@Priority@ExecutionModel@@0@Z.c)
 */

__int64 __fastcall RmpActivityHostQueryEffectivePriority(
        struct _RM_ACTIVITY_HOST *a1,
        unsigned __int64 a2,
        enum ExecutionModel::Priority::Enum *a3)
{
  int v5; // ebx
  struct ExecutionModel::ResourceSet *Next; // rax
  unsigned int v8; // edi
  unsigned __int64 v9; // rdx
  int v10; // ecx
  __int64 First; // [rsp+20h] [rbp-18h] BYREF
  int v13; // [rsp+28h] [rbp-10h]
  int v14; // [rsp+2Ch] [rbp-Ch]

  v14 = 0;
  v5 = 101;
  v13 = 2;
  First = RmpActivityHostEnumerateResourceSetGetFirst((__int64)a1, 2, 0);
  Next = RmpActivityHostEnumerateResourceSetGetNext((struct _RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT *)&First);
  v8 = 0;
  while ( Next )
  {
    v9 = *(_QWORD *)(*((_QWORD *)Next + 180) + 1312LL);
    if ( a2 > v9 )
      v10 = *((_DWORD *)Next + 353);
    else
      v10 = *((_DWORD *)Next + 352);
    if ( v5 >= v10 )
    {
      if ( a2 > v9 )
        v5 = *((_DWORD *)Next + 353);
      else
        v5 = *((_DWORD *)Next + 352);
    }
    Next = RmpActivityHostEnumerateResourceSetGetNext((struct _RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT *)&First);
  }
  if ( (*((_BYTE *)a1 + 804) & 1) != 0 )
  {
    if ( v5 >= 80 )
      v5 = 80;
  }
  else if ( (int)RmpEmPriorityCompare(v5, 100) < 0 )
  {
    return (unsigned int)-1073740759;
  }
  *(_DWORD *)a3 = v5;
  return v8;
}
