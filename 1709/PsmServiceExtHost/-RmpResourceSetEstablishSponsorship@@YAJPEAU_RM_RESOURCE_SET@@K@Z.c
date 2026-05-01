/*
 * XREFs of ?RmpResourceSetEstablishSponsorship@@YAJPEAU_RM_RESOURCE_SET@@K@Z @ 0x180005C64
 * Callers:
 *     ?AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEAXPEAUIResourceSetCallback@2@2PEBGPEAT_RM_SID@@KK_KKPEAU_RM_ACTIVATOR@@PEA_NPEAVResourceSet@2@6PEAPEAV82@@Z @ 0x18000F210 (-AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITIO.c)
 * Callees:
 *     ?RmpResourceSetAddExplicitDonor@@YAJPEAU_RM_RESOURCE_SET@@KK@Z @ 0x1800013B0 (-RmpResourceSetAddExplicitDonor@@YAJPEAU_RM_RESOURCE_SET@@KK@Z.c)
 *     ?RmpResourceSetAddPpleDonors@@YAJPEAU_RM_RESOURCE_SET@@K@Z @ 0x1800057A4 (-RmpResourceSetAddPpleDonors@@YAJPEAU_RM_RESOURCE_SET@@K@Z.c)
 *     ?RmpCommitValuesSubtract@@YAJ_K0PEA_K@Z @ 0x180006F4C (-RmpCommitValuesSubtract@@YAJ_K0PEA_K@Z.c)
 *     ?RmpResourceSetCheckAddPpleRecipient@@YAJPEAU_RM_RESOURCE_SET@@@Z @ 0x18001B404 (-RmpResourceSetCheckAddPpleRecipient@@YAJPEAU_RM_RESOURCE_SET@@@Z.c)
 *     ?RmpResourceSetAddForegroundDonor@@YAJPEAU_RM_RESOURCE_SET@@K@Z @ 0x180034B38 (-RmpResourceSetAddForegroundDonor@@YAJPEAU_RM_RESOURCE_SET@@K@Z.c)
 */

__int64 __fastcall RmpResourceSetEstablishSponsorship(struct _RM_RESOURCE_SET *a1, unsigned int a2)
{
  struct _RM_RESOURCE_SET *v2; // r11
  __int64 v4; // rcx
  int v5; // r10d
  unsigned int v6; // r9d
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  int v10; // r10d
  __int64 v12; // rdx
  int v13; // r10d

  v2 = a1;
  v4 = *((_QWORD *)a1 + 5);
  v5 = *(_BYTE *)(v4 + 1498) & 7;
  if ( (*(_BYTE *)(v4 + 1498) & 7) == 0 )
  {
    v6 = 0;
    if ( !a2 )
      return v6;
LABEL_6:
    v8 = *(_QWORD *)(v4 + 1880);
    if ( v8 && (v12 = *(_QWORD *)(v8 + 1432)) != 0 )
      v9 = *(_QWORD *)(v12 + 88);
    else
      v9 = 0LL;
    RmpCommitValuesSubtract(*(_QWORD *)(v4 + 1480), v9, (unsigned __int64 *)v2 + 11);
    goto LABEL_9;
  }
  v6 = 0;
  if ( (unsigned int)(v5 - 2) <= 2 && v5 != 3 && !*(_QWORD *)(v4 + 1864) )
    return v6;
  if ( v5 != 4 )
    goto LABEL_6;
LABEL_9:
  if ( a2 )
  {
    return (unsigned int)RmpResourceSetAddExplicitDonor(v2, a2);
  }
  else
  {
    v10 = v5 - 1;
    if ( v10 )
    {
      v13 = v10 - 1;
      if ( v13 )
      {
        if ( v13 != 1 )
          return (unsigned int)-805306367;
        return (unsigned int)RmpResourceSetAddPpleDonors(v2);
      }
      else
      {
        return (unsigned int)RmpResourceSetAddForegroundDonor(v2, a2);
      }
    }
    else
    {
      return (unsigned int)RmpResourceSetCheckAddPpleRecipient(v2);
    }
  }
}
