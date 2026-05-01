/*
 * XREFs of ?RmpResourceSetUpdateDonatedCommmit@@YAXPEAU_RM_RESOURCE_SET@@K@Z @ 0x180053190
 * Callers:
 *     ?RmpResourceSetAddRecipient@@YAJPEAU_RM_RESOURCE_SET@@0K@Z @ 0x180052494 (-RmpResourceSetAddRecipient@@YAJPEAU_RM_RESOURCE_SET@@0K@Z.c)
 *     ?RmpResourceSetRemoveRecipient@@YAXPEAU_RM_RESOURCE_SET@@0K@Z @ 0x180052974 (-RmpResourceSetRemoveRecipient@@YAXPEAU_RM_RESOURCE_SET@@0K@Z.c)
 *     ?RmpResourceSetTransitionSponsorships@@YAJPEAU_RM_RESOURCE_SET@@0@Z @ 0x180052D64 (-RmpResourceSetTransitionSponsorships@@YAJPEAU_RM_RESOURCE_SET@@0@Z.c)
 *     ?RmpResourceSetUpdateReceivedCommit@@YAXPEAU_RM_RESOURCE_SET@@_K@Z @ 0x180053360 (-RmpResourceSetUpdateReceivedCommit@@YAXPEAU_RM_RESOURCE_SET@@_K@Z.c)
 * Callees:
 *     ?RmpCommitValuesAdd@@YAJ_K0PEA_K@Z @ 0x180025C9C (-RmpCommitValuesAdd@@YAJ_K0PEA_K@Z.c)
 *     ?RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180025D6C (-RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpResourceSetUpdateElasticRecipient@@YAXPEAU_RM_RESOURCE_SET@@@Z @ 0x180053284 (-RmpResourceSetUpdateElasticRecipient@@YAXPEAU_RM_RESOURCE_SET@@@Z.c)
 */

void __fastcall RmpResourceSetUpdateDonatedCommmit(struct _RM_RESOURCE_SET *a1, char a2)
{
  unsigned int v2; // ebx
  unsigned __int64 v5; // r11
  unsigned __int64 v6; // rsi
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rdx
  int v10; // r14d
  unsigned __int64 v11; // [rsp+60h] [rbp+18h] BYREF
  unsigned __int64 v12; // [rsp+68h] [rbp+20h] BYREF

  if ( (a2 & 1) != 0 )
  {
    v2 = 0;
    v5 = 0LL;
    v6 = 0LL;
    v11 = 0LL;
    v12 = 0LL;
    if ( *((_DWORD *)a1 + 22) )
    {
      v7 = *((_QWORD *)a1 + 10);
      v8 = *((unsigned int *)a1 + 22);
      do
      {
        v9 = *(_QWORD *)(*(_QWORD *)v7 + 96LL);
        if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v7 + 48LL) + 1498LL) & 7) == 4 )
        {
          RmpCommitValuesAdd(v6, v9, &v12);
          v6 = v12;
        }
        else
        {
          RmpCommitValuesAdd(v5, v9, &v11);
          v5 = v11;
        }
        v7 += 8LL;
        --v8;
      }
      while ( v8 );
    }
    if ( v5 == *((_QWORD *)a1 + 8) )
    {
      if ( v6 == *((_QWORD *)a1 + 9) )
        return;
      v10 = 0;
    }
    else
    {
      v10 = 1;
    }
    *((_QWORD *)a1 + 8) = v5;
    *((_QWORD *)a1 + 9) = v6;
    if ( (a2 & 2) != 0 )
      RmpActivityHostComputeAndApplyEnforcementSettings(*(struct _RM_ACTIVITY_HOST **)(*((_QWORD *)a1 + 6) + 1440LL));
    if ( v10 && (a2 & 4) != 0 && *((_DWORD *)a1 + 22) )
    {
      do
        RmpResourceSetUpdateElasticRecipient(*(struct _RM_RESOURCE_SET **)(*((_QWORD *)a1 + 10) + 8LL * v2++));
      while ( v2 < *((_DWORD *)a1 + 22) );
    }
  }
}
