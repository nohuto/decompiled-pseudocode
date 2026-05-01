/*
 * XREFs of ?RmpResourceSetAddRecipient@@YAJPEAU_RM_RESOURCE_SET@@0K@Z @ 0x180052494
 * Callers:
 *     ?RmpResourceSetAddExplicitDonor@@YAJPEAU_RM_RESOURCE_SET@@KK@Z @ 0x180052228 (-RmpResourceSetAddExplicitDonor@@YAJPEAU_RM_RESOURCE_SET@@KK@Z.c)
 *     ?RmpResourceSetAddForegroundDonor@@YAJPEAU_RM_RESOURCE_SET@@K@Z @ 0x1800522B8 (-RmpResourceSetAddForegroundDonor@@YAJPEAU_RM_RESOURCE_SET@@K@Z.c)
 *     ?RmpResourceSetAddPpleDonors@@YAJPEAU_RM_RESOURCE_SET@@K@Z @ 0x1800523C4 (-RmpResourceSetAddPpleDonors@@YAJPEAU_RM_RESOURCE_SET@@K@Z.c)
 *     ?RmpResourceSetCheckAddPpleRecipient@@YAJPEAU_RM_RESOURCE_SET@@@Z @ 0x1800526DC (-RmpResourceSetCheckAddPpleRecipient@@YAJPEAU_RM_RESOURCE_SET@@@Z.c)
 *     ?RmpResourceSetTransitionSponsorships@@YAJPEAU_RM_RESOURCE_SET@@0@Z @ 0x180052D64 (-RmpResourceSetTransitionSponsorships@@YAJPEAU_RM_RESOURCE_SET@@0@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     ??$RmpArrayFindElementIndex@PEAU_RM_RESOURCE_SET@@@@YAKPEAPEAU_RM_RESOURCE_SET@@KPEAU0@@Z @ 0x18004E528 (--$RmpArrayFindElementIndex@PEAU_RM_RESOURCE_SET@@@@YAKPEAPEAU_RM_RESOURCE_SET@@KPEAU0@@Z.c)
 *     ??$RmpArrayInsertAtEnd@PEAU_RM_RESOURCE_SET@@@@YAJPEAPEAPEAU_RM_RESOURCE_SET@@PEAK1PEAU0@@Z @ 0x18004E74C (--$RmpArrayInsertAtEnd@PEAU_RM_RESOURCE_SET@@@@YAJPEAPEAPEAU_RM_RESOURCE_SET@@PEAK1PEAU0@@Z.c)
 *     ?RmpResourceSetRemoveRecipient@@YAXPEAU_RM_RESOURCE_SET@@0K@Z @ 0x180052974 (-RmpResourceSetRemoveRecipient@@YAXPEAU_RM_RESOURCE_SET@@0K@Z.c)
 *     ?RmpResourceSetUpdateDonatedCommmit@@YAXPEAU_RM_RESOURCE_SET@@K@Z @ 0x180053190 (-RmpResourceSetUpdateDonatedCommmit@@YAXPEAU_RM_RESOURCE_SET@@K@Z.c)
 *     ?HasMemoryForFGSharing@ResourceSet@ExecutionModel@@QEAAJ_KE@Z @ 0x18005AB78 (-HasMemoryForFGSharing@ResourceSet@ExecutionModel@@QEAAJ_KE@Z.c)
 */

__int64 __fastcall RmpResourceSetAddRecipient(
        struct _RM_RESOURCE_SET *a1,
        struct _RM_RESOURCE_SET *a2,
        unsigned int a3)
{
  unsigned int Element; // eax
  unsigned int v7; // edx
  int v8; // r9d
  int v9; // r9d
  UINT32 cData; // r10d
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  int HasMemoryForFGSharing; // [rsp+30h] [rbp-99h] BYREF
  __int64 v17; // [rsp+38h] [rbp-91h] BYREF
  __int64 v18; // [rsp+40h] [rbp-89h] BYREF
  __int64 v19; // [rsp+48h] [rbp-81h] BYREF
  __int64 v20; // [rsp+50h] [rbp-79h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-69h] BYREF
  int *p_HasMemoryForFGSharing; // [rsp+80h] [rbp-49h]
  int v23; // [rsp+88h] [rbp-41h]
  int v24; // [rsp+8Ch] [rbp-3Dh]
  __int64 *v25; // [rsp+90h] [rbp-39h]
  UINT32 v26; // [rsp+98h] [rbp-31h]
  int v27; // [rsp+9Ch] [rbp-2Dh]
  __int64 *v28; // [rsp+A0h] [rbp-29h]
  UINT32 v29; // [rsp+A8h] [rbp-21h]
  int v30; // [rsp+ACh] [rbp-1Dh]
  __int64 *v31; // [rsp+B0h] [rbp-19h]
  UINT32 v32; // [rsp+B8h] [rbp-11h]
  int v33; // [rsp+BCh] [rbp-Dh]
  __int64 *v34; // [rsp+C0h] [rbp-9h]
  UINT32 v35; // [rsp+C8h] [rbp-1h]
  int v36; // [rsp+CCh] [rbp+3h]
  char *v37; // [rsp+D0h] [rbp+7h]
  UINT32 v38; // [rsp+D8h] [rbp+Fh]
  int v39; // [rsp+DCh] [rbp+13h]
  char *v40; // [rsp+E0h] [rbp+17h]
  UINT32 v41; // [rsp+E8h] [rbp+1Fh]
  int v42; // [rsp+ECh] [rbp+23h]

  if ( (a3 & 0x10) != 0
    && (Element = RmpArrayFindElementIndex<_RM_RESOURCE_SET *>(*((_QWORD **)a2 + 13), *((_DWORD *)a2 + 28), (__int64)a1),
        Element < v7) )
  {
    v8 = 0;
    HasMemoryForFGSharing = 0;
  }
  else
  {
    HasMemoryForFGSharing = ExecutionModel::ResourceSet::HasMemoryForFGSharing(
                              *((ExecutionModel::ResourceSet **)a1 + 6),
                              *((_QWORD *)a2 + 12),
                              (a3 & 0x20) == 0);
    if ( HasMemoryForFGSharing < 0 )
      goto LABEL_14;
    if ( _InterlockedIncrement64((volatile signed __int64 *)a2 + 2) <= 1 )
      __fastfail(0xEu);
    v9 = RmpArrayInsertAtEnd<_RM_RESOURCE_SET *>(
           (PVOID *)a1 + 10,
           (unsigned int *)a1 + 23,
           (_DWORD *)a1 + 22,
           (__int64)a2);
    if ( v9 < 0 )
      goto LABEL_8;
    if ( _InterlockedIncrement64((volatile signed __int64 *)a1 + 2) <= 1 )
      __fastfail(0xEu);
    v9 = RmpArrayInsertAtEnd<_RM_RESOURCE_SET *>(
           (PVOID *)a2 + 13,
           (unsigned int *)a2 + 29,
           (_DWORD *)a2 + 28,
           (__int64)a1);
    if ( v9 < 0 )
    {
LABEL_8:
      v8 = v9 | 0x10000000;
    }
    else
    {
      RmpResourceSetUpdateDonatedCommmit(a1, a3);
      v8 = 0;
    }
    HasMemoryForFGSharing = v8;
    if ( v8 < 0 )
    {
LABEL_14:
      RmpResourceSetRemoveRecipient(a1, a2, 0);
      v8 = HasMemoryForFGSharing;
    }
  }
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 9uLL) )
  {
    v24 = 0;
    v27 = 0;
    v30 = 0;
    p_HasMemoryForFGSharing = &HasMemoryForFGSharing;
    v17 = *((_QWORD *)a1 + 4);
    v25 = &v17;
    v18 = *((_QWORD *)a2 + 4);
    v28 = &v18;
    v11 = *((_QWORD *)a1 + 6);
    v23 = 4;
    v26 = cData - 1;
    v29 = cData - 1;
    v12 = *(_QWORD *)(*(_QWORD *)(v11 + 1440) + 32LL);
    v33 = 0;
    v19 = v12;
    v31 = &v19;
    v13 = *((_QWORD *)a2 + 6);
    v32 = cData - 1;
    v14 = *(_QWORD *)(*(_QWORD *)(v13 + 1440) + 32LL);
    v36 = 0;
    v39 = 0;
    v42 = 0;
    v20 = v14;
    v34 = &v20;
    v37 = (char *)a1 + 64;
    v40 = (char *)a1 + 72;
    v35 = cData - 1;
    v38 = cData - 1;
    v41 = cData - 1;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18007D941, 0LL, 0LL, cData, &pData);
    return (unsigned int)HasMemoryForFGSharing;
  }
  return (unsigned int)v8;
}
