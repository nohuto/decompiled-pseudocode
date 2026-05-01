/*
 * XREFs of ?RmpQoSGetEarliestHostInfo@@YAPEAU_RM_ACTIVITY_ENFORCEMENT_INFO@@PEAU_RM_QOS_CONTEXT@@@Z @ 0x180003CE4
 * Callers:
 *     ?RmpQoSCheckHostsSetTimer@@YAXPEAU_RM_QOS_CONTEXT@@_K@Z @ 0x180003C4C (-RmpQoSCheckHostsSetTimer@@YAXPEAU_RM_QOS_CONTEXT@@_K@Z.c)
 *     ?RmpQoSRundown@@YAXPEAU_RM_QOS_CONTEXT@@@Z @ 0x18003FD18 (-RmpQoSRundown@@YAXPEAU_RM_QOS_CONTEXT@@@Z.c)
 * Callees:
 *     <none>
 */

struct _RM_ACTIVITY_ENFORCEMENT_INFO *__fastcall RmpQoSGetEarliestHostInfo(struct _RM_QOS_CONTEXT *a1)
{
  if ( *(struct _RM_QOS_CONTEXT **)a1 == a1 )
    return 0LL;
  else
    return (struct _RM_ACTIVITY_ENFORCEMENT_INFO *)(*(_QWORD *)a1 - 168LL);
}
