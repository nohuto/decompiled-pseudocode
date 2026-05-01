/*
 * XREFs of ?RmpResourceSetAddRecipient@@YAJPEAU_RM_RESOURCE_SET@@0K@Z @ 0x180001438
 * Callers:
 *     ?RmpResourceSetAddExplicitDonor@@YAJPEAU_RM_RESOURCE_SET@@KK@Z @ 0x1800013B0 (-RmpResourceSetAddExplicitDonor@@YAJPEAU_RM_RESOURCE_SET@@KK@Z.c)
 *     ?RmpResourceSetAddPpleDonors@@YAJPEAU_RM_RESOURCE_SET@@K@Z @ 0x1800057A4 (-RmpResourceSetAddPpleDonors@@YAJPEAU_RM_RESOURCE_SET@@K@Z.c)
 *     ?RmpResourceSetTransitionSponsorships@@YAJPEAU_RM_RESOURCE_SET@@0@Z @ 0x18001808C (-RmpResourceSetTransitionSponsorships@@YAJPEAU_RM_RESOURCE_SET@@0@Z.c)
 *     ?RmpResourceSetCheckAddPpleRecipient@@YAJPEAU_RM_RESOURCE_SET@@@Z @ 0x18001B404 (-RmpResourceSetCheckAddPpleRecipient@@YAJPEAU_RM_RESOURCE_SET@@@Z.c)
 *     ?RmpResourceSetAddForegroundDonor@@YAJPEAU_RM_RESOURCE_SET@@K@Z @ 0x180034B38 (-RmpResourceSetAddForegroundDonor@@YAJPEAU_RM_RESOURCE_SET@@K@Z.c)
 * Callees:
 *     ?RmpResourceSetRemoveRecipient@@YAXPEAU_RM_RESOURCE_SET@@0K@Z @ 0x18000160C (-RmpResourceSetRemoveRecipient@@YAXPEAU_RM_RESOURCE_SET@@0K@Z.c)
 *     ?RmpResourceSetGetHostId@@YA_KPEAU_RM_RESOURCE_SET@@@Z @ 0x180001780 (-RmpResourceSetGetHostId@@YA_KPEAU_RM_RESOURCE_SET@@@Z.c)
 *     ??$RmpArrayInsertAtEnd@PEAU_RM_RESOURCE_SET@@@@YAJPEAPEAPEAU_RM_RESOURCE_SET@@PEAK1PEAU0@@Z @ 0x1800017CC (--$RmpArrayInsertAtEnd@PEAU_RM_RESOURCE_SET@@@@YAJPEAPEAPEAU_RM_RESOURCE_SET@@PEAK1PEAU0@@Z.c)
 *     ?HasMemoryForFGSharing@ResourceSet@ExecutionModel@@QEAAJ_KE@Z @ 0x180001A70 (-HasMemoryForFGSharing@ResourceSet@ExecutionModel@@QEAAJ_KE@Z.c)
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     ?RmpObjectAddRef@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x18001549C (-RmpObjectAddRef@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     ?RmpResourceSetUpdateDonatedCommmit@@YAXPEAU_RM_RESOURCE_SET@@K@Z @ 0x18001813C (-RmpResourceSetUpdateDonatedCommmit@@YAXPEAU_RM_RESOURCE_SET@@K@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 */

__int64 __fastcall RmpResourceSetAddRecipient(
        ExecutionModel::ResourceSet **a1,
        struct _RM_RESOURCE_SET *a2,
        unsigned int a3)
{
  int v6; // r9d
  int v7; // r9d
  int v8; // r10d
  unsigned __int64 HostId; // rax
  int v10; // edx
  unsigned __int64 v11; // rax
  int v12; // edx
  LPCGUID v13; // r8
  LPCGUID v14; // r9
  UINT32 cData; // r10d
  unsigned int v17; // edx
  __int64 i; // rcx
  int HasMemoryForFGSharing; // [rsp+30h] [rbp-89h] BYREF
  ExecutionModel::ResourceSet *v20; // [rsp+38h] [rbp-81h] BYREF
  __int64 v21; // [rsp+40h] [rbp-79h] BYREF
  unsigned __int64 v22; // [rsp+48h] [rbp-71h] BYREF
  unsigned __int64 v23; // [rsp+50h] [rbp-69h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-59h] BYREF
  int *p_HasMemoryForFGSharing; // [rsp+80h] [rbp-39h]
  int v26; // [rsp+88h] [rbp-31h]
  int v27; // [rsp+8Ch] [rbp-2Dh]
  ExecutionModel::ResourceSet **v28; // [rsp+90h] [rbp-29h]
  int v29; // [rsp+98h] [rbp-21h]
  int v30; // [rsp+9Ch] [rbp-1Dh]
  __int64 *v31; // [rsp+A0h] [rbp-19h]
  int v32; // [rsp+A8h] [rbp-11h]
  int v33; // [rsp+ACh] [rbp-Dh]
  unsigned __int64 *v34; // [rsp+B0h] [rbp-9h]
  int v35; // [rsp+B8h] [rbp-1h]
  int v36; // [rsp+BCh] [rbp+3h]
  unsigned __int64 *v37; // [rsp+C0h] [rbp+7h]
  int v38; // [rsp+C8h] [rbp+Fh]
  int v39; // [rsp+CCh] [rbp+13h]
  char *v40; // [rsp+D0h] [rbp+17h]
  int v41; // [rsp+D8h] [rbp+1Fh]
  int v42; // [rsp+DCh] [rbp+23h]
  char *v43; // [rsp+E0h] [rbp+27h]
  int v44; // [rsp+E8h] [rbp+2Fh]
  int v45; // [rsp+ECh] [rbp+33h]

  if ( (a3 & 0x10) == 0 )
    goto LABEL_2;
  v17 = *((_DWORD *)a2 + 26);
  for ( i = 0LL; (unsigned int)i < v17; i = (unsigned int)(i + 1) )
  {
    if ( *(ExecutionModel::ResourceSet ***)(*((_QWORD *)a2 + 12) + 8 * i) == a1 )
      break;
  }
  if ( (unsigned int)i < v17 )
  {
    v7 = 0;
    HasMemoryForFGSharing = 0;
  }
  else
  {
LABEL_2:
    HasMemoryForFGSharing = ExecutionModel::ResourceSet::HasMemoryForFGSharing(
                              a1[5],
                              *((_QWORD *)a2 + 11),
                              (a3 & 0x20) == 0);
    if ( HasMemoryForFGSharing < 0
      || ((RmpObjectAddRef(a2),
           v6 = RmpArrayInsertAtEnd<_RM_RESOURCE_SET *>(a1 + 9, (char *)a1 + 84, a1 + 10, a2),
           v6 < 0)
       || (RmpObjectAddRef((struct _RM_OBJECT_HEADER *)a1),
           v6 = RmpArrayInsertAtEnd<_RM_RESOURCE_SET *>((char *)a2 + 96, (char *)a2 + 108, (char *)a2 + 104, a1),
           v6 < 0)
        ? (v7 = v6 | 0x10000000)
        : (RmpResourceSetUpdateDonatedCommmit((struct _RM_RESOURCE_SET *)a1, a3), v7 = 0),
          HasMemoryForFGSharing = v7,
          v7 < 0) )
    {
      RmpResourceSetRemoveRecipient((struct _RM_RESOURCE_SET *)a1, a2, 0);
      v7 = HasMemoryForFGSharing;
    }
  }
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 9uLL) )
  {
    v27 = 0;
    v30 = 0;
    v33 = 0;
    p_HasMemoryForFGSharing = &HasMemoryForFGSharing;
    v20 = a1[3];
    v28 = &v20;
    v21 = *((_QWORD *)a2 + 3);
    v31 = &v21;
    v26 = 4;
    v29 = v8 - 1;
    v32 = v8 - 1;
    HostId = RmpResourceSetGetHostId((struct _RM_RESOURCE_SET *)a1);
    v36 = 0;
    v22 = HostId;
    v34 = &v22;
    v35 = v10;
    v11 = RmpResourceSetGetHostId(a2);
    v39 = 0;
    v42 = 0;
    v45 = 0;
    v23 = v11;
    v37 = &v23;
    v40 = (char *)(a1 + 7);
    v43 = (char *)(a1 + 8);
    v38 = v12;
    v41 = v12;
    v44 = v12;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800574AA, v13, v14, cData, &pData);
    return (unsigned int)HasMemoryForFGSharing;
  }
  return (unsigned int)v7;
}
