/*
 * XREFs of ?RmpResourceSetTransitionSponsorships@@YAJPEAU_RM_RESOURCE_SET@@0@Z @ 0x18001808C
 * Callers:
 *     ?RmpResourceSetTransition@@YAJPEAU_RM_RESOURCE_SET@@0@Z @ 0x18001825C (-RmpResourceSetTransition@@YAJPEAU_RM_RESOURCE_SET@@0@Z.c)
 * Callees:
 *     ?RmpResourceSetAddRecipient@@YAJPEAU_RM_RESOURCE_SET@@0K@Z @ 0x180001438 (-RmpResourceSetAddRecipient@@YAJPEAU_RM_RESOURCE_SET@@0K@Z.c)
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     ?RmpResourceSetUpdateDonatedCommmit@@YAXPEAU_RM_RESOURCE_SET@@K@Z @ 0x18001813C (-RmpResourceSetUpdateDonatedCommmit@@YAXPEAU_RM_RESOURCE_SET@@K@Z.c)
 *     ?RmpResourceSetRemoveAllDonors@@YAXPEAU_RM_RESOURCE_SET@@@Z @ 0x180018224 (-RmpResourceSetRemoveAllDonors@@YAXPEAU_RM_RESOURCE_SET@@@Z.c)
 *     ?RmpResourceSetRemoveAllRecipients@@YAXPEAU_RM_RESOURCE_SET@@@Z @ 0x180018240 (-RmpResourceSetRemoveAllRecipients@@YAXPEAU_RM_RESOURCE_SET@@@Z.c)
 *     ?RmpResourceSetGetReportedCommitThresholds@@YAXPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@@Z @ 0x18001847C (-RmpResourceSetGetReportedCommitThresholds@@YAXPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 */

__int64 __fastcall RmpResourceSetTransitionSponsorships(struct _RM_RESOURCE_SET *a1, struct _RM_RESOURCE_SET *a2)
{
  __int64 v2; // r14
  __int64 v3; // rsi
  const GUID *v6; // r9
  __int64 v8; // rsi
  const struct _TlgProvider_t *v9; // rcx
  const GUID *v10; // r8
  int v11; // [rsp+30h] [rbp-59h] BYREF
  __int64 v12; // [rsp+38h] [rbp-51h] BYREF
  __int64 v13; // [rsp+40h] [rbp-49h] BYREF
  _BYTE v14[16]; // [rsp+48h] [rbp-41h] BYREF
  __int64 v15; // [rsp+58h] [rbp-31h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-19h] BYREF
  int *v17; // [rsp+90h] [rbp+7h]
  int v18; // [rsp+98h] [rbp+Fh]
  int v19; // [rsp+9Ch] [rbp+13h]
  __int64 *v20; // [rsp+A0h] [rbp+17h]
  int v21; // [rsp+A8h] [rbp+1Fh]
  int v22; // [rsp+ACh] [rbp+23h]
  __int64 *v23; // [rsp+B0h] [rbp+27h]
  int v24; // [rsp+B8h] [rbp+2Fh]
  int v25; // [rsp+BCh] [rbp+33h]

  v2 = *((_QWORD *)a2 + 5);
  v3 = 0LL;
  if ( *((_DWORD *)a1 + 20) )
  {
    while ( 1 )
    {
      v11 = RmpResourceSetAddRecipient(
              (ExecutionModel::ResourceSet **)a2,
              *(struct _RM_RESOURCE_SET **)(*((_QWORD *)a1 + 9) + 8 * v3),
              0x30u);
      LODWORD(v6) = v11;
      if ( v11 < 0 )
        break;
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= *((_DWORD *)a1 + 20) )
        goto LABEL_2;
    }
  }
  else
  {
LABEL_2:
    if ( (*(_BYTE *)(v2 + 1498) & 7u) - 2 > 2 || (v8 = 0LL, !*((_DWORD *)a1 + 26)) )
    {
LABEL_3:
      if ( *((_DWORD *)a2 + 26) && (*(_BYTE *)(v2 + 1498) & 7) != 4 )
      {
        RmpResourceSetGetReportedCommitThresholds(a2, (struct _RM_COMMIT_THRESHOLDS *)v14);
        *((_QWORD *)a2 + 11) = v15;
      }
      RmpResourceSetRemoveAllRecipients(a1);
      RmpResourceSetRemoveAllDonors(a1);
      RmpResourceSetUpdateDonatedCommmit(a2, 5u);
      LODWORD(v6) = 0;
      return (unsigned int)v6;
    }
    while ( 1 )
    {
      v11 = RmpResourceSetAddRecipient(*(ExecutionModel::ResourceSet ***)(*((_QWORD *)a1 + 12) + 8 * v8), a2, 0x30u);
      LODWORD(v6) = v11;
      if ( v11 < 0 )
        break;
      v8 = (unsigned int)(v8 + 1);
      if ( (unsigned int)v8 >= *((_DWORD *)a1 + 26) )
        goto LABEL_3;
    }
  }
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 9uLL) )
  {
    v19 = 0;
    v22 = 0;
    v25 = 0;
    v17 = &v11;
    v12 = *((_QWORD *)a2 + 3);
    v20 = &v12;
    v13 = *((_QWORD *)a1 + 3);
    v23 = &v13;
    v18 = 4;
    v21 = 8;
    v24 = 8;
    TlgWrite(v9, &unk_1800573C7, v10, v6, 5u, &pData);
    LODWORD(v6) = v11;
  }
  return (unsigned int)v6;
}
