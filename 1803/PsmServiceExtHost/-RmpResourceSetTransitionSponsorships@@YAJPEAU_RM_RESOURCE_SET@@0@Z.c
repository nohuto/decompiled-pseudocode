/*
 * XREFs of ?RmpResourceSetTransitionSponsorships@@YAJPEAU_RM_RESOURCE_SET@@0@Z @ 0x180052D64
 * Callers:
 *     ?RmpResourceSetTransition@@YAJPEAU_RM_RESOURCE_SET@@0@Z @ 0x180052C6C (-RmpResourceSetTransition@@YAJPEAU_RM_RESOURCE_SET@@0@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     ?RmpResourceSetGetReportedCommitThresholds@@YAXPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@@Z @ 0x1800271F8 (-RmpResourceSetGetReportedCommitThresholds@@YAXPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     ?RmpResourceSetAddRecipient@@YAJPEAU_RM_RESOURCE_SET@@0K@Z @ 0x180052494 (-RmpResourceSetAddRecipient@@YAJPEAU_RM_RESOURCE_SET@@0K@Z.c)
 *     ?RmpResourceSetRemoveAllDonors@@YAXPEAU_RM_RESOURCE_SET@@@Z @ 0x180052914 (-RmpResourceSetRemoveAllDonors@@YAXPEAU_RM_RESOURCE_SET@@@Z.c)
 *     ?RmpResourceSetRemoveAllRecipients@@YAXPEAU_RM_RESOURCE_SET@@@Z @ 0x180052944 (-RmpResourceSetRemoveAllRecipients@@YAXPEAU_RM_RESOURCE_SET@@@Z.c)
 *     ?RmpResourceSetUpdateDonatedCommmit@@YAXPEAU_RM_RESOURCE_SET@@K@Z @ 0x180053190 (-RmpResourceSetUpdateDonatedCommmit@@YAXPEAU_RM_RESOURCE_SET@@K@Z.c)
 */

__int64 __fastcall RmpResourceSetTransitionSponsorships(struct _RM_RESOURCE_SET *a1, struct _RM_RESOURCE_SET *a2)
{
  __int64 v2; // r14
  __int64 v3; // rsi
  unsigned int v6; // r9d
  __int64 v7; // rsi
  const struct _TlgProvider_t *v9; // rcx
  int v10; // [rsp+30h] [rbp-59h] BYREF
  __int64 v11; // [rsp+38h] [rbp-51h] BYREF
  __int64 v12; // [rsp+40h] [rbp-49h] BYREF
  _BYTE v13[16]; // [rsp+48h] [rbp-41h] BYREF
  __int64 v14; // [rsp+58h] [rbp-31h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-19h] BYREF
  int *v16; // [rsp+90h] [rbp+7h]
  int v17; // [rsp+98h] [rbp+Fh]
  int v18; // [rsp+9Ch] [rbp+13h]
  __int64 *v19; // [rsp+A0h] [rbp+17h]
  int v20; // [rsp+A8h] [rbp+1Fh]
  int v21; // [rsp+ACh] [rbp+23h]
  __int64 *v22; // [rsp+B0h] [rbp+27h]
  int v23; // [rsp+B8h] [rbp+2Fh]
  int v24; // [rsp+BCh] [rbp+33h]

  v2 = *((_QWORD *)a2 + 6);
  v3 = 0LL;
  if ( *((_DWORD *)a1 + 22) )
  {
    while ( 1 )
    {
      v10 = RmpResourceSetAddRecipient(a2, *(struct _RM_RESOURCE_SET **)(*((_QWORD *)a1 + 10) + 8 * v3), 0x30u);
      v6 = v10;
      if ( v10 < 0 )
        break;
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= *((_DWORD *)a1 + 22) )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    if ( (*(_BYTE *)(v2 + 1498) & 7u) - 2 > 2 || (v7 = 0LL, !*((_DWORD *)a1 + 28)) )
    {
LABEL_8:
      if ( *((_DWORD *)a2 + 28) && (*(_BYTE *)(v2 + 1498) & 7) != 4 )
      {
        RmpResourceSetGetReportedCommitThresholds(a2, (struct _RM_COMMIT_THRESHOLDS *)v13);
        *((_QWORD *)a2 + 12) = v14;
      }
      RmpResourceSetRemoveAllRecipients((PVOID **)a1);
      RmpResourceSetRemoveAllDonors((PVOID **)a1);
      RmpResourceSetUpdateDonatedCommmit(a2, 5u);
      return 0;
    }
    while ( 1 )
    {
      v10 = RmpResourceSetAddRecipient(*(struct _RM_RESOURCE_SET **)(*((_QWORD *)a1 + 13) + 8 * v7), a2, 0x30u);
      v6 = v10;
      if ( v10 < 0 )
        break;
      v7 = (unsigned int)(v7 + 1);
      if ( (unsigned int)v7 >= *((_DWORD *)a1 + 28) )
        goto LABEL_8;
    }
  }
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 9uLL) )
  {
    v18 = 0;
    v21 = 0;
    v24 = 0;
    v16 = &v10;
    v11 = *((_QWORD *)a2 + 4);
    v19 = &v11;
    v12 = *((_QWORD *)a1 + 4);
    v22 = &v12;
    v17 = 4;
    v20 = 8;
    v23 = 8;
    TlgWrite(v9, &unk_18007D82F, 0LL, 0LL, 5u, &pData);
    return (unsigned int)v10;
  }
  return v6;
}
