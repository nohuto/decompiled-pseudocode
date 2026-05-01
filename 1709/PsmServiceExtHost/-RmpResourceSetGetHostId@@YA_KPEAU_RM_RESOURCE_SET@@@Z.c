/*
 * XREFs of ?RmpResourceSetGetHostId@@YA_KPEAU_RM_RESOURCE_SET@@@Z @ 0x180001780
 * Callers:
 *     ?RmpResourceSetAddRecipient@@YAJPEAU_RM_RESOURCE_SET@@0K@Z @ 0x180001438 (-RmpResourceSetAddRecipient@@YAJPEAU_RM_RESOURCE_SET@@0K@Z.c)
 *     ?RmpResourceSetRemoveRecipient@@YAXPEAU_RM_RESOURCE_SET@@0K@Z @ 0x18000160C (-RmpResourceSetRemoveRecipient@@YAXPEAU_RM_RESOURCE_SET@@0K@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RmpResourceSetGetHostId(struct _RM_RESOURCE_SET *a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 1440LL);
  if ( v1 )
    return *(_QWORD *)(v1 + 24);
  else
    return -1LL;
}
