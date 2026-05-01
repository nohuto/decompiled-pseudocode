/*
 * XREFs of ?RmpActivityHostGetForegroundSet@@YAPEAU_RM_RESOURCE_SET@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18005460C
 * Callers:
 *     ?IsForegroundProcess@ResourceManager@ExecutionModel@@QEAAHK@Z @ 0x18004EEA4 (-IsForegroundProcess@ResourceManager@ExecutionModel@@QEAAHK@Z.c)
 *     ?RmpResourceSetAddExplicitDonor@@YAJPEAU_RM_RESOURCE_SET@@KK@Z @ 0x180052228 (-RmpResourceSetAddExplicitDonor@@YAJPEAU_RM_RESOURCE_SET@@KK@Z.c)
 *     ?RmpResourceSetAddForegroundDonor@@YAJPEAU_RM_RESOURCE_SET@@K@Z @ 0x1800522B8 (-RmpResourceSetAddForegroundDonor@@YAJPEAU_RM_RESOURCE_SET@@K@Z.c)
 *     ?RmpResourceSetAddPpleDonors@@YAJPEAU_RM_RESOURCE_SET@@K@Z @ 0x1800523C4 (-RmpResourceSetAddPpleDonors@@YAJPEAU_RM_RESOURCE_SET@@K@Z.c)
 * Callees:
 *     ?RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT@@@Z @ 0x18002511C (-RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_.c)
 *     ?RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@KW4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x180025180 (-RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY.c)
 */

struct _RM_RESOURCE_SET *__fastcall RmpActivityHostGetForegroundSet(struct _RM_ACTIVITY_HOST *a1)
{
  unsigned __int64 v1; // rax
  __int64 v2; // rdx
  struct ExecutionModel::ResourceSet *Next; // rax
  struct ExecutionModel::ResourceSet *v4; // rcx
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF

  v6[1] = 3LL;
  v6[0] = RmpActivityHostEnumerateResourceSetGetFirst((__int64)a1, 3, 0);
  while ( 1 )
  {
    Next = RmpActivityHostEnumerateResourceSetGetNext((struct _RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT *)v6);
    v4 = Next;
    if ( !Next )
      return 0LL;
    if ( (*((_BYTE *)Next + 1498) & 0x20) != 0 )
      break;
    v1 = *((int *)Next + 364);
    if ( (unsigned int)v1 <= 0x29 )
    {
      v2 = 0x24704100001LL;
      if ( _bittest64(&v2, v1) )
        break;
    }
  }
  return (struct _RM_RESOURCE_SET *)*((_QWORD *)v4 + 179);
}
