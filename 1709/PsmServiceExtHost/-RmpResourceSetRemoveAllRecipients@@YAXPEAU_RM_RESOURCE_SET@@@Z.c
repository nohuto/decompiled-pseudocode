/*
 * XREFs of ?RmpResourceSetRemoveAllRecipients@@YAXPEAU_RM_RESOURCE_SET@@@Z @ 0x180018240
 * Callers:
 *     ?RmpResourceSetTransitionSponsorships@@YAJPEAU_RM_RESOURCE_SET@@0@Z @ 0x18001808C (-RmpResourceSetTransitionSponsorships@@YAJPEAU_RM_RESOURCE_SET@@0@Z.c)
 * Callees:
 *     ?RmpResourceSetRemoveRecipient@@YAXPEAU_RM_RESOURCE_SET@@0K@Z @ 0x18000160C (-RmpResourceSetRemoveRecipient@@YAXPEAU_RM_RESOURCE_SET@@0K@Z.c)
 */

void __fastcall RmpResourceSetRemoveAllRecipients(struct _RM_RESOURCE_SET *a1)
{
  while ( *((_DWORD *)a1 + 20) )
    RmpResourceSetRemoveRecipient(a1, **((struct _RM_RESOURCE_SET ***)a1 + 9), 0x48u);
}
