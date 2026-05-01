/*
 * XREFs of ?RmpResourceSetRemoveRecipient@@YAXPEAU_RM_RESOURCE_SET@@0K@Z @ 0x18000160C
 * Callers:
 *     ?RmpResourceSetAddRecipient@@YAJPEAU_RM_RESOURCE_SET@@0K@Z @ 0x180001438 (-RmpResourceSetAddRecipient@@YAJPEAU_RM_RESOURCE_SET@@0K@Z.c)
 *     ?RmpResourceSetReleaseResources@@YAXPEAU_RM_RESOURCE_SET@@@Z @ 0x180015ED0 (-RmpResourceSetReleaseResources@@YAXPEAU_RM_RESOURCE_SET@@@Z.c)
 *     ?RmpResourceSetRemoveAllDonors@@YAXPEAU_RM_RESOURCE_SET@@@Z @ 0x180018224 (-RmpResourceSetRemoveAllDonors@@YAXPEAU_RM_RESOURCE_SET@@@Z.c)
 *     ?RmpResourceSetRemoveAllRecipients@@YAXPEAU_RM_RESOURCE_SET@@@Z @ 0x180018240 (-RmpResourceSetRemoveAllRecipients@@YAXPEAU_RM_RESOURCE_SET@@@Z.c)
 * Callees:
 *     ?RmpResourceSetGetHostId@@YA_KPEAU_RM_RESOURCE_SET@@@Z @ 0x180001780 (-RmpResourceSetGetHostId@@YA_KPEAU_RM_RESOURCE_SET@@@Z.c)
 *     ??$RmpArrayRemoveElement@PEAU_RM_RESOURCE_SET@@@@YAKPEAPEAU_RM_RESOURCE_SET@@PEAKPEAU0@@Z @ 0x18000179C (--$RmpArrayRemoveElement@PEAU_RM_RESOURCE_SET@@@@YAKPEAPEAU_RM_RESOURCE_SET@@PEAKPEAU0@@Z.c)
 *     ?RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180007988 (-RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x18000F900 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     ?RmpResourceSetUpdateDonatedCommmit@@YAXPEAU_RM_RESOURCE_SET@@K@Z @ 0x18001813C (-RmpResourceSetUpdateDonatedCommmit@@YAXPEAU_RM_RESOURCE_SET@@K@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     ?RmpResourceSetIsEligibleForCustomTarget@@YAJPEAU_RM_RESOURCE_SET@@_K@Z @ 0x180034CF4 (-RmpResourceSetIsEligibleForCustomTarget@@YAJPEAU_RM_RESOURCE_SET@@_K@Z.c)
 *     ?RmpResourceSetTrySetPpleTarget@@YAJPEAU_RM_RESOURCE_SET@@_KK@Z @ 0x180034DD8 (-RmpResourceSetTrySetPpleTarget@@YAJPEAU_RM_RESOURCE_SET@@_KK@Z.c)
 *     ?RmpPolicyTryGetRevokeAction@@YAKPEAVResourceSet@ExecutionModel@@W4_RM_REVOKE_POLICY@@PEAW4_RM_REVOKE_ACTION@@@Z @ 0x18003BF48 (-RmpPolicyTryGetRevokeAction@@YAKPEAVResourceSet@ExecutionModel@@W4_RM_REVOKE_POLICY@@PEAW4_RM_R.c)
 *     ?Revoke@ResourceSet@ExecutionModel@@QEAAXW4_RM_REVOKE_ACTION@@W4_RM_REVOKE_REASON_INTERNAL@@_KPEAV12@@Z @ 0x18003C2C4 (-Revoke@ResourceSet@ExecutionModel@@QEAAXW4_RM_REVOKE_ACTION@@W4_RM_REVOKE_REASON_INTERNAL@@_KPE.c)
 */

void __fastcall RmpResourceSetRemoveRecipient(
        struct _RM_RESOURCE_SET *a1,
        struct _RM_RESOURCE_SET *a2,
        unsigned int a3)
{
  int v6; // r15d
  _DWORD *v7; // rdx
  int v8; // esi
  __int64 v9; // rax
  unsigned __int64 HostId; // rax
  int v11; // edx
  unsigned __int64 v12; // rax
  UINT32 cData; // edx
  LPCGUID v14; // r8
  LPCGUID v15; // r9
  __int64 v16; // r11
  const GUID *v17; // r8
  const GUID *v18; // r9
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rcx
  int IsEligibleForCustomTarget; // [rsp+30h] [rbp-89h] BYREF
  __int64 v23; // [rsp+38h] [rbp-81h] BYREF
  __int64 v24; // [rsp+40h] [rbp-79h] BYREF
  unsigned __int64 v25; // [rsp+48h] [rbp-71h] BYREF
  unsigned __int64 v26; // [rsp+50h] [rbp-69h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-59h] BYREF
  __int64 *v28; // [rsp+80h] [rbp-39h]
  int v29; // [rsp+88h] [rbp-31h]
  int v30; // [rsp+8Ch] [rbp-2Dh]
  int *p_IsEligibleForCustomTarget; // [rsp+90h] [rbp-29h]
  int v32; // [rsp+98h] [rbp-21h]
  int v33; // [rsp+9Ch] [rbp-1Dh]
  unsigned __int64 *v34; // [rsp+A0h] [rbp-19h]
  int v35; // [rsp+A8h] [rbp-11h]
  int v36; // [rsp+ACh] [rbp-Dh]
  unsigned __int64 *v37; // [rsp+B0h] [rbp-9h]
  UINT32 v38; // [rsp+B8h] [rbp-1h]
  int v39; // [rsp+BCh] [rbp+3h]
  char *v40; // [rsp+C0h] [rbp+7h]
  UINT32 v41; // [rsp+C8h] [rbp+Fh]
  int v42; // [rsp+CCh] [rbp+13h]
  char *v43; // [rsp+D0h] [rbp+17h]
  UINT32 v44; // [rsp+D8h] [rbp+1Fh]
  int v45; // [rsp+DCh] [rbp+23h]

  v6 = RmpArrayRemoveElement<_RM_RESOURCE_SET *>(*((_QWORD *)a1 + 9), (char *)a1 + 80, a2);
  v8 = RmpArrayRemoveElement<_RM_RESOURCE_SET *>(*((_QWORD *)a2 + 12), (char *)a2 + 104, a1);
  if ( (a3 & 8) != 0 )
  {
    if ( !*v7 && (*(_BYTE *)(*((_QWORD *)a2 + 5) + 1498LL) & 7) != 3 )
    {
      RmpPolicyTryGetRevokeAction(*((_QWORD *)a2 + 5), 2LL, &v23);
      ExecutionModel::ResourceSet::Revoke(v16, (unsigned int)v23, 0LL, 0LL, 0LL);
    }
    if ( v8 )
    {
      if ( *((_QWORD *)a2 + 19) )
      {
        IsEligibleForCustomTarget = RmpResourceSetIsEligibleForCustomTarget(a2, 0LL);
        if ( IsEligibleForCustomTarget < 0 )
        {
          if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 9uLL) )
          {
            v19 = *((_QWORD *)a2 + 3);
            v30 = 0;
            v33 = 0;
            v23 = v19;
            v28 = &v23;
            p_IsEligibleForCustomTarget = &IsEligibleForCustomTarget;
            v29 = 8;
            v32 = 4;
            TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180057530, v17, v18, 4u, &pData);
          }
          v20 = RmpResourceSetTrySetPpleTarget(a2, 0LL, 1u);
          v21 = *((_QWORD *)a2 + 5);
          IsEligibleForCustomTarget = v20;
          RmpActivityHostComputeAndApplyEnforcementSettings(*(struct _RM_ACTIVITY_HOST **)(v21 + 1440));
        }
      }
    }
  }
  RmpResourceSetUpdateDonatedCommmit(a1, a3);
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 9uLL) )
  {
    v9 = *((_QWORD *)a1 + 3);
    v30 = 0;
    v33 = 0;
    v23 = v9;
    v28 = &v23;
    v24 = *((_QWORD *)a2 + 3);
    p_IsEligibleForCustomTarget = (int *)&v24;
    v29 = 8;
    v32 = 8;
    HostId = RmpResourceSetGetHostId(a1);
    v36 = 0;
    v25 = HostId;
    v34 = &v25;
    v35 = v11;
    v12 = RmpResourceSetGetHostId(a2);
    v39 = 0;
    v42 = 0;
    v45 = 0;
    v26 = v12;
    v37 = &v26;
    v40 = (char *)a1 + 56;
    v43 = (char *)a1 + 64;
    v38 = cData;
    v41 = cData;
    v44 = cData;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18005757B, v14, v15, cData, &pData);
  }
  if ( v8 )
    RmpObjectRelease(a1);
  if ( v6 )
    RmpObjectRelease(a2);
}
