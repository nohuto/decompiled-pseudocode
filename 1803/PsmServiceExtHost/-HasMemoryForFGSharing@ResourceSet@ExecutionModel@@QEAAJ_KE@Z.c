/*
 * XREFs of ?HasMemoryForFGSharing@ResourceSet@ExecutionModel@@QEAAJ_KE@Z @ 0x18005AB78
 * Callers:
 *     ?RmpResourceSetAddRecipient@@YAJPEAU_RM_RESOURCE_SET@@0K@Z @ 0x180052494 (-RmpResourceSetAddRecipient@@YAJPEAU_RM_RESOURCE_SET@@0K@Z.c)
 *     ?RmpResourceSetIsEligibleForCustomTarget@@YAJPEAU_RM_RESOURCE_SET@@_K@Z @ 0x180052858 (-RmpResourceSetIsEligibleForCustomTarget@@YAJPEAU_RM_RESOURCE_SET@@_K@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     ?RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z @ 0x1800138F0 (-RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z.c)
 *     ?RmpCommitValuesSubtract@@YAJ_K0PEA_K@Z @ 0x18001A360 (-RmpCommitValuesSubtract@@YAJ_K0PEA_K@Z.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     ?RmpActivityHostComputeCommitLimit@@YA_KPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180025A60 (-RmpActivityHostComputeCommitLimit@@YA_KPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     ?GetReportedMemoryCap@ResourceSet@ExecutionModel@@QEBA_KXZ @ 0x18004CB90 (-GetReportedMemoryCap@ResourceSet@ExecutionModel@@QEBA_KXZ.c)
 *     ?GetEnforcedMemoryCap@ResourceSet@ExecutionModel@@QEBA_KXZ @ 0x18005AB34 (-GetEnforcedMemoryCap@ResourceSet@ExecutionModel@@QEBA_KXZ.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::HasMemoryForFGSharing(
        struct _RM_ACTIVITY_HOST **this,
        unsigned __int64 a2)
{
  unsigned int v3; // ebx
  unsigned __int64 EnforcedMemoryCap; // rax
  char v5; // r11
  unsigned __int64 v6; // r10
  unsigned __int64 ReportedMemoryCap; // rax
  struct _RM_ACTIVITY_HOST *v8; // rcx
  unsigned __int64 v10; // [rsp+38h] [rbp-49h] BYREF
  unsigned __int64 v11; // [rsp+40h] [rbp-41h] BYREF
  unsigned __int64 v12; // [rsp+48h] [rbp-39h] BYREF
  unsigned __int64 v13; // [rsp+50h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-29h] BYREF
  unsigned __int64 *v15; // [rsp+78h] [rbp-9h]
  int v16; // [rsp+80h] [rbp-1h]
  int v17; // [rsp+84h] [rbp+3h]
  unsigned __int64 *v18; // [rsp+88h] [rbp+7h]
  int v19; // [rsp+90h] [rbp+Fh]
  int v20; // [rsp+94h] [rbp+13h]
  unsigned __int64 *v21; // [rsp+98h] [rbp+17h]
  int v22; // [rsp+A0h] [rbp+1Fh]
  int v23; // [rsp+A4h] [rbp+23h]
  unsigned __int64 *v24; // [rsp+A8h] [rbp+27h]
  int v25; // [rsp+B0h] [rbp+2Fh]
  int v26; // [rsp+B4h] [rbp+33h]
  unsigned __int64 *v27; // [rsp+B8h] [rbp+37h]
  int v28; // [rsp+C0h] [rbp+3Fh]
  int v29; // [rsp+C4h] [rbp+43h]
  unsigned __int64 v30; // [rsp+F0h] [rbp+6Fh] BYREF

  v30 = a2;
  if ( *((_DWORD *)this + 350) )
  {
    EnforcedMemoryCap = ExecutionModel::ResourceSet::GetEnforcedMemoryCap((ExecutionModel::ResourceSet *)this);
    if ( EnforcedMemoryCap >= v6 )
    {
      if ( !v5 )
        return 0;
      if ( (int)RmpActivityHostQueryCommit(this[180], 0LL, &v11, 0LL) < 0 )
        return 0;
      v13 = RmpActivityHostComputeCommitLimit(this[180]);
      if ( (int)RmpCommitValuesSubtract(v13, v11, &v10) >= 0 && (int)RmpCommitValuesSubtract(v10, v30, &v10) >= 0 )
        return 0;
    }
    else if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 9uLL) )
    {
      ReportedMemoryCap = ExecutionModel::ResourceSet::GetReportedMemoryCap((ExecutionModel::ResourceSet *)this);
      v8 = this[179];
      v17 = 0;
      v20 = 0;
      v23 = 0;
      v12 = ReportedMemoryCap;
      v15 = &v12;
      v18 = (unsigned __int64 *)((char *)v8 + 64);
      v21 = (unsigned __int64 *)((char *)v8 + 72);
      v16 = 8;
      v19 = 8;
      v22 = 8;
      LODWORD(ReportedMemoryCap) = *((_DWORD *)v8 + 22);
      v26 = 0;
      v29 = 0;
      LODWORD(v10) = ReportedMemoryCap;
      v24 = &v10;
      v27 = &v30;
      v25 = 4;
      v28 = 8;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18007F403, 0LL, 0LL, 7u, &pData);
    }
    v3 = -2147220992;
  }
  else
  {
    v3 = -2147220216;
  }
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 9uLL) )
  {
    v17 = 0;
    v20 = 0;
    v23 = 0;
    v15 = &v13;
    v18 = &v11;
    v21 = &v30;
    v16 = 8;
    v19 = 8;
    v22 = 8;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18007F31C, 0LL, 0LL, 5u, &pData);
  }
  return v3;
}
