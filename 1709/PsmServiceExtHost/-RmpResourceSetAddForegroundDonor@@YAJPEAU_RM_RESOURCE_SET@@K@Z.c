/*
 * XREFs of ?RmpResourceSetAddForegroundDonor@@YAJPEAU_RM_RESOURCE_SET@@K@Z @ 0x180034B38
 * Callers:
 *     ?RmpResourceSetEstablishSponsorship@@YAJPEAU_RM_RESOURCE_SET@@K@Z @ 0x180005C64 (-RmpResourceSetEstablishSponsorship@@YAJPEAU_RM_RESOURCE_SET@@K@Z.c)
 * Callees:
 *     ?RmpResourceSetAddRecipient@@YAJPEAU_RM_RESOURCE_SET@@0K@Z @ 0x180001438 (-RmpResourceSetAddRecipient@@YAJPEAU_RM_RESOURCE_SET@@0K@Z.c)
 *     ?RmpActivityHostGetForegroundSet@@YAPEAU_RM_RESOURCE_SET@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180005A38 (-RmpActivityHostGetForegroundSet@@YAPEAU_RM_RESOURCE_SET@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     ?RmpPsmAppFamilyTableFindByHostInfo@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_PSM_APP_FAMILY@@@Z @ 0x180019AF8 (-RmpPsmAppFamilyTableFindByHostInfo@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 */

__int64 __fastcall RmpResourceSetAddForegroundDonor(struct _RM_RESOURCE_SET *a1)
{
  __int64 v2; // rcx
  const wchar_t *v3; // rsi
  _QWORD *v4; // rbx
  __int64 v5; // rdi
  const GUID *v6; // r8
  const GUID *v7; // r9
  __int64 result; // rax
  ExecutionModel::ResourceSet **ForegroundSet; // rax
  const GUID *v10; // r8
  const GUID *v11; // r9
  struct _RM_PSM_APP_FAMILY *v12; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF

  v2 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 1440LL);
  v3 = (const wchar_t *)(v2 + 88);
  if ( (int)RmpPsmAppFamilyTableFindByHostInfo(
              *(struct _RM_SERVICE_GLOBALS **)(v2 + 40),
              (struct _RM_PSM_HOST_INFO *)(v2 + 88),
              &v12) < 0
    || (v4 = (_QWORD *)((char *)v12 + 560), v12 == (struct _RM_PSM_APP_FAMILY *)-560LL) )
  {
LABEL_6:
    if ( hProvider > 4u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180057325, v6, v7, 2u, &pData);
    }
    return 2147747081LL;
  }
  while ( 1 )
  {
    v5 = *(v4 - 1);
    if ( *(_DWORD *)(v5 + 624) == 2 && !_wcsicmp((const wchar_t *)(v5 + 88), v3) )
      break;
    v4 = (_QWORD *)*v4;
    if ( !v4 )
      goto LABEL_6;
  }
  ForegroundSet = (ExecutionModel::ResourceSet **)RmpActivityHostGetForegroundSet((struct _RM_ACTIVITY_HOST *)v5);
  if ( !ForegroundSet )
  {
    if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180057473, v10, v11, 2u, &pData);
    return 2147747081LL;
  }
  result = RmpResourceSetAddRecipient(ForegroundSet, a1, 7u);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
