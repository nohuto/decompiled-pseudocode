/*
 * XREFs of ?RmpActivityHostGetForegroundSet@@YAPEAU_RM_RESOURCE_SET@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180005A38
 * Callers:
 *     ?RmpResourceSetAddExplicitDonor@@YAJPEAU_RM_RESOURCE_SET@@KK@Z @ 0x1800013B0 (-RmpResourceSetAddExplicitDonor@@YAJPEAU_RM_RESOURCE_SET@@KK@Z.c)
 *     ?RmpResourceSetAddPpleDonors@@YAJPEAU_RM_RESOURCE_SET@@K@Z @ 0x1800057A4 (-RmpResourceSetAddPpleDonors@@YAJPEAU_RM_RESOURCE_SET@@K@Z.c)
 *     ?IsForegroundProcess@ResourceManager@ExecutionModel@@QEAAHK@Z @ 0x1800320A0 (-IsForegroundProcess@ResourceManager@ExecutionModel@@QEAAHK@Z.c)
 *     ?RmpResourceSetAddForegroundDonor@@YAJPEAU_RM_RESOURCE_SET@@K@Z @ 0x180034B38 (-RmpResourceSetAddForegroundDonor@@YAJPEAU_RM_RESOURCE_SET@@K@Z.c)
 * Callees:
 *     ?RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT@@@Z @ 0x180006354 (-RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_.c)
 *     ?RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@KW4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x180006F70 (-RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY.c)
 */

struct _RM_RESOURCE_SET *__fastcall RmpActivityHostGetForegroundSet(struct _RM_ACTIVITY_HOST *a1)
{
  struct ExecutionModel::ResourceSet *Next; // rax
  struct ExecutionModel::ResourceSet *v2; // rcx
  unsigned __int64 v4; // rax
  __int64 v5; // rdx
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF

  v6[1] = 3LL;
  v6[0] = RmpActivityHostEnumerateResourceSetGetFirst(a1, 3LL, 0LL);
  while ( 1 )
  {
    Next = RmpActivityHostEnumerateResourceSetGetNext((struct _RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT *)v6);
    v2 = Next;
    if ( !Next )
      break;
    if ( (*((_BYTE *)Next + 1498) & 0x20) == 0 )
    {
      v4 = *((int *)Next + 364);
      if ( (unsigned int)v4 > 0x29 )
        continue;
      v5 = 0x24704100001LL;
      if ( !_bittest64(&v5, v4) )
        continue;
    }
    return (struct _RM_RESOURCE_SET *)*((_QWORD *)v2 + 179);
  }
  return 0LL;
}
