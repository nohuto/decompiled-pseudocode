/*
 * XREFs of ?RmpResourceSetRemoveAllRecipients@@YAXPEAU_RM_RESOURCE_SET@@@Z @ 0x180052944
 * Callers:
 *     ?RmpResourceSetTransitionSponsorships@@YAJPEAU_RM_RESOURCE_SET@@0@Z @ 0x180052D64 (-RmpResourceSetTransitionSponsorships@@YAJPEAU_RM_RESOURCE_SET@@0@Z.c)
 * Callees:
 *     ?RmpResourceSetRemoveRecipient@@YAXPEAU_RM_RESOURCE_SET@@0K@Z @ 0x180052974 (-RmpResourceSetRemoveRecipient@@YAXPEAU_RM_RESOURCE_SET@@0K@Z.c)
 */

void __fastcall RmpResourceSetRemoveAllRecipients(PVOID **a1)
{
  while ( *((_DWORD *)a1 + 22) )
    RmpResourceSetRemoveRecipient(a1, *a1[10], 0x48u);
}
