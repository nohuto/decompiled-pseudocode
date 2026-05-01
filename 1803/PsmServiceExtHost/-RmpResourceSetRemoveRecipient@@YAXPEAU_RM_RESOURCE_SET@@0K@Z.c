/*
 * XREFs of ?RmpResourceSetRemoveRecipient@@YAXPEAU_RM_RESOURCE_SET@@0K@Z @ 0x180052974
 * Callers:
 *     ?RmpResourceSetReleaseResources@@YAXPEAU_RM_RESOURCE_SET@@@Z @ 0x18002EF70 (-RmpResourceSetReleaseResources@@YAXPEAU_RM_RESOURCE_SET@@@Z.c)
 *     ?RmpResourceSetAddRecipient@@YAJPEAU_RM_RESOURCE_SET@@0K@Z @ 0x180052494 (-RmpResourceSetAddRecipient@@YAJPEAU_RM_RESOURCE_SET@@0K@Z.c)
 *     ?RmpResourceSetRemoveAllDonors@@YAXPEAU_RM_RESOURCE_SET@@@Z @ 0x180052914 (-RmpResourceSetRemoveAllDonors@@YAXPEAU_RM_RESOURCE_SET@@@Z.c)
 *     ?RmpResourceSetRemoveAllRecipients@@YAXPEAU_RM_RESOURCE_SET@@@Z @ 0x180052944 (-RmpResourceSetRemoveAllRecipients@@YAXPEAU_RM_RESOURCE_SET@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180023550 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180025D6C (-RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     ??$RmpArrayRemoveElement@PEAU_RM_RESOURCE_SET@@@@YAKPEAPEAU_RM_RESOURCE_SET@@PEAKPEAU0@@Z @ 0x18004E790 (--$RmpArrayRemoveElement@PEAU_RM_RESOURCE_SET@@@@YAKPEAPEAU_RM_RESOURCE_SET@@PEAKPEAU0@@Z.c)
 *     ?RmpResourceSetIsEligibleForCustomTarget@@YAJPEAU_RM_RESOURCE_SET@@_K@Z @ 0x180052858 (-RmpResourceSetIsEligibleForCustomTarget@@YAJPEAU_RM_RESOURCE_SET@@_K@Z.c)
 *     ?RmpResourceSetTrySetPpleTarget@@YAJPEAU_RM_RESOURCE_SET@@_KK@Z @ 0x180052F08 (-RmpResourceSetTrySetPpleTarget@@YAJPEAU_RM_RESOURCE_SET@@_KK@Z.c)
 *     ?RmpResourceSetUpdateDonatedCommmit@@YAXPEAU_RM_RESOURCE_SET@@K@Z @ 0x180053190 (-RmpResourceSetUpdateDonatedCommmit@@YAXPEAU_RM_RESOURCE_SET@@K@Z.c)
 *     ?RmpPolicyTryGetRevokeAction@@YAKPEAVResourceSet@ExecutionModel@@W4_RM_REVOKE_POLICY@@PEAW4_RM_REVOKE_ACTION@@@Z @ 0x18005A910 (-RmpPolicyTryGetRevokeAction@@YAKPEAVResourceSet@ExecutionModel@@W4_RM_REVOKE_POLICY@@PEAW4_RM_R.c)
 *     ?Revoke@ResourceSet@ExecutionModel@@QEAAXW4_RM_REVOKE_ACTION@@W4_RM_REVOKE_REASON_INTERNAL@@_KPEAV12@@Z @ 0x18005B17C (-Revoke@ResourceSet@ExecutionModel@@QEAAXW4_RM_REVOKE_ACTION@@W4_RM_REVOKE_REASON_INTERNAL@@_KPE.c)
 *     ?RequestStop@HAM_ACTIVITY_RM_CONTEXT@@QEAAX_K@Z @ 0x1800662F8 (-RequestStop@HAM_ACTIVITY_RM_CONTEXT@@QEAAX_K@Z.c)
 */

void __fastcall RmpResourceSetRemoveRecipient(char *P, __int64 a2, unsigned int a3)
{
  int v6; // r15d
  int v7; // eax
  __int64 v8; // r10
  int v9; // esi
  __int64 v10; // r10
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  int IsEligibleForCustomTarget; // [rsp+30h] [rbp-89h] BYREF
  __int64 v19; // [rsp+38h] [rbp-81h] BYREF
  __int64 v20; // [rsp+40h] [rbp-79h] BYREF
  __int64 v21; // [rsp+48h] [rbp-71h] BYREF
  __int64 v22; // [rsp+50h] [rbp-69h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-59h] BYREF
  __int64 *v24; // [rsp+80h] [rbp-39h]
  int v25; // [rsp+88h] [rbp-31h]
  int v26; // [rsp+8Ch] [rbp-2Dh]
  int *p_IsEligibleForCustomTarget; // [rsp+90h] [rbp-29h]
  int v28; // [rsp+98h] [rbp-21h]
  int v29; // [rsp+9Ch] [rbp-1Dh]
  __int64 *v30; // [rsp+A0h] [rbp-19h]
  int v31; // [rsp+A8h] [rbp-11h]
  int v32; // [rsp+ACh] [rbp-Dh]
  __int64 *v33; // [rsp+B0h] [rbp-9h]
  int v34; // [rsp+B8h] [rbp-1h]
  int v35; // [rsp+BCh] [rbp+3h]
  char *v36; // [rsp+C0h] [rbp+7h]
  int v37; // [rsp+C8h] [rbp+Fh]
  int v38; // [rsp+CCh] [rbp+13h]
  char *v39; // [rsp+D0h] [rbp+17h]
  int v40; // [rsp+D8h] [rbp+1Fh]
  int v41; // [rsp+DCh] [rbp+23h]

  v6 = RmpArrayRemoveElement<_RM_RESOURCE_SET *>(*((_QWORD **)P + 10), (unsigned int *)P + 22, a2);
  v7 = RmpArrayRemoveElement<_RM_RESOURCE_SET *>(*(_QWORD **)(a2 + 104), (unsigned int *)(a2 + 112), (__int64)P);
  v8 = *(_QWORD *)(a2 + 48);
  v9 = v7;
  if ( (a3 & 8) != 0 )
  {
    if ( !*(_DWORD *)(a2 + 112) && (*(_BYTE *)(v8 + 1498) & 7) != 3 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(v8 + 1440) + 804LL) & 1) != 0 )
      {
        HAM_ACTIVITY_RM_CONTEXT::RequestStop(*(HAM_ACTIVITY_RM_CONTEXT **)(v8 + 1832), *(_QWORD *)(v8 + 1880));
      }
      else
      {
        RmpPolicyTryGetRevokeAction(*(_QWORD *)(a2 + 48), 2LL, &v19);
        ExecutionModel::ResourceSet::Revoke(v10, (unsigned int)v19, 0LL, 0LL, 0LL);
      }
    }
    if ( v9 )
    {
      if ( *(_QWORD *)(a2 + 160) )
      {
        IsEligibleForCustomTarget = RmpResourceSetIsEligibleForCustomTarget((struct _RM_RESOURCE_SET *)a2, 0LL);
        if ( IsEligibleForCustomTarget < 0 )
        {
          if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 9uLL) )
          {
            v11 = *(_QWORD *)(a2 + 32);
            v26 = 0;
            v29 = 0;
            v19 = v11;
            v24 = &v19;
            p_IsEligibleForCustomTarget = &IsEligibleForCustomTarget;
            v25 = 8;
            v28 = 4;
            TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18007D77C, 0LL, 0LL, 4u, &pData);
          }
          v12 = RmpResourceSetTrySetPpleTarget((struct _RM_RESOURCE_SET *)a2, 0LL, 1u);
          v13 = *(_QWORD *)(a2 + 48);
          IsEligibleForCustomTarget = v12;
          RmpActivityHostComputeAndApplyEnforcementSettings(*(struct _RM_ACTIVITY_HOST **)(v13 + 1440));
        }
      }
    }
  }
  RmpResourceSetUpdateDonatedCommmit((struct _RM_RESOURCE_SET *)P, a3);
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 9uLL) )
  {
    v26 = 0;
    v29 = 0;
    v19 = *((_QWORD *)P + 4);
    v24 = &v19;
    v20 = *(_QWORD *)(a2 + 32);
    p_IsEligibleForCustomTarget = (int *)&v20;
    v14 = *((_QWORD *)P + 6);
    v25 = 8;
    v28 = 8;
    v15 = *(_QWORD *)(*(_QWORD *)(v14 + 1440) + 32LL);
    v32 = 0;
    v21 = v15;
    v30 = &v21;
    v16 = *(_QWORD *)(a2 + 48);
    v31 = 8;
    v17 = *(_QWORD *)(*(_QWORD *)(v16 + 1440) + 32LL);
    v35 = 0;
    v38 = 0;
    v41 = 0;
    v22 = v17;
    v33 = &v22;
    v36 = P + 64;
    v39 = P + 72;
    v34 = 8;
    v37 = 8;
    v40 = 8;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18007D8C5, 0LL, 0LL, 8u, &pData);
  }
  if ( v9 )
    RmpObjectRelease(P);
  if ( v6 )
    RmpObjectRelease((char *)a2);
}
