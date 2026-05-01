/*
 * XREFs of ?RmpActivityHostGetSponsorSet@@YAPEAU_RM_RESOURCE_SET@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003604C
 * Callers:
 *     ?RmpResourceSetAddExplicitDonor@@YAJPEAU_RM_RESOURCE_SET@@KK@Z @ 0x1800013B0 (-RmpResourceSetAddExplicitDonor@@YAJPEAU_RM_RESOURCE_SET@@KK@Z.c)
 * Callees:
 *     ?RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT@@@Z @ 0x180006354 (-RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_.c)
 *     ?RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@KW4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x180006F70 (-RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY.c)
 *     ?RmpEmPriorityCompare@@YAJW4Enum@Priority@ExecutionModel@@0@Z @ 0x18001F8EC (-RmpEmPriorityCompare@@YAJW4Enum@Priority@ExecutionModel@@0@Z.c)
 */

struct _RM_RESOURCE_SET *__fastcall RmpActivityHostGetSponsorSet(struct _RM_ACTIVITY_HOST *a1)
{
  __int64 v1; // r8
  struct _RM_RESOURCE_SET *result; // rax
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[1] = 3LL;
  v3[0] = RmpActivityHostEnumerateResourceSetGetFirst((__int64)a1, 3, 0);
  while ( 1 )
  {
    result = RmpActivityHostEnumerateResourceSetGetNext((struct _RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT *)v3);
    if ( !result )
      break;
    if ( (int)RmpEmPriorityCompare(*(_DWORD *)(*(_QWORD *)(*((_QWORD *)result + 179) + 40LL) + 1728LL), 101) > 0 )
      return (struct _RM_RESOURCE_SET *)v1;
  }
  return result;
}
