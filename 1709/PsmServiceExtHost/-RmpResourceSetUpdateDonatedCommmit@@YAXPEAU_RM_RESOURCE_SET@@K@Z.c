/*
 * XREFs of ?RmpResourceSetUpdateDonatedCommmit@@YAXPEAU_RM_RESOURCE_SET@@K@Z @ 0x18001813C
 * Callers:
 *     ?RmpResourceSetAddRecipient@@YAJPEAU_RM_RESOURCE_SET@@0K@Z @ 0x180001438 (-RmpResourceSetAddRecipient@@YAJPEAU_RM_RESOURCE_SET@@0K@Z.c)
 *     ?RmpResourceSetRemoveRecipient@@YAXPEAU_RM_RESOURCE_SET@@0K@Z @ 0x18000160C (-RmpResourceSetRemoveRecipient@@YAXPEAU_RM_RESOURCE_SET@@0K@Z.c)
 *     ?RmpResourceSetTransitionSponsorships@@YAJPEAU_RM_RESOURCE_SET@@0@Z @ 0x18001808C (-RmpResourceSetTransitionSponsorships@@YAJPEAU_RM_RESOURCE_SET@@0@Z.c)
 *     ?RmpResourceSetUpdateReceivedCommit@@YAXPEAU_RM_RESOURCE_SET@@_K@Z @ 0x180035060 (-RmpResourceSetUpdateReceivedCommit@@YAXPEAU_RM_RESOURCE_SET@@_K@Z.c)
 * Callees:
 *     ?RmpCommitValuesAdd@@YAJ_K0PEA_K@Z @ 0x18000631C (-RmpCommitValuesAdd@@YAJ_K0PEA_K@Z.c)
 *     ?RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180007988 (-RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpResourceSetUpdateElasticRecipient@@YAXPEAU_RM_RESOURCE_SET@@@Z @ 0x18001F83C (-RmpResourceSetUpdateElasticRecipient@@YAXPEAU_RM_RESOURCE_SET@@@Z.c)
 */

void __fastcall RmpResourceSetUpdateDonatedCommmit(struct _RM_RESOURCE_SET *a1, char a2)
{
  unsigned int v2; // ebx
  unsigned __int64 v5; // r11
  unsigned __int64 v6; // rsi
  int v7; // r14d
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rdx
  unsigned __int64 v11; // [rsp+60h] [rbp+18h] BYREF
  unsigned __int64 v12; // [rsp+68h] [rbp+20h] BYREF

  if ( (a2 & 1) != 0 )
  {
    v2 = 0;
    v5 = 0LL;
    v6 = 0LL;
    v11 = 0LL;
    v12 = 0LL;
    if ( *((_DWORD *)a1 + 20) )
    {
      v8 = *((_QWORD *)a1 + 9);
      v9 = *((unsigned int *)a1 + 20);
      do
      {
        v10 = *(_QWORD *)(*(_QWORD *)v8 + 88LL);
        if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v8 + 40LL) + 1498LL) & 7) == 4 )
        {
          RmpCommitValuesAdd(v6, v10, &v12);
          v6 = v12;
        }
        else
        {
          RmpCommitValuesAdd(v5, v10, &v11);
          v5 = v11;
        }
        v8 += 8LL;
        --v9;
      }
      while ( v9 );
    }
    if ( v5 == *((_QWORD *)a1 + 7) )
    {
      if ( v6 == *((_QWORD *)a1 + 8) )
        return;
      v7 = 0;
    }
    else
    {
      v7 = 1;
    }
    *((_QWORD *)a1 + 7) = v5;
    *((_QWORD *)a1 + 8) = v6;
    if ( (a2 & 2) != 0 )
      RmpActivityHostComputeAndApplyEnforcementSettings(*(struct _RM_ACTIVITY_HOST **)(*((_QWORD *)a1 + 5) + 1440LL));
    if ( v7 && (a2 & 4) != 0 && *((_DWORD *)a1 + 20) )
    {
      do
        RmpResourceSetUpdateElasticRecipient(*(struct _RM_RESOURCE_SET **)(*((_QWORD *)a1 + 9) + 8LL * v2++));
      while ( v2 < *((_DWORD *)a1 + 20) );
    }
  }
}
