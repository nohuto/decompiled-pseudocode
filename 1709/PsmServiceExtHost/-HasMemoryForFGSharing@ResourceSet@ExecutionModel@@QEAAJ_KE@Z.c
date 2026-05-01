/*
 * XREFs of ?HasMemoryForFGSharing@ResourceSet@ExecutionModel@@QEAAJ_KE@Z @ 0x180001A70
 * Callers:
 *     ?RmpResourceSetAddRecipient@@YAJPEAU_RM_RESOURCE_SET@@0K@Z @ 0x180001438 (-RmpResourceSetAddRecipient@@YAJPEAU_RM_RESOURCE_SET@@0K@Z.c)
 *     ?RmpResourceSetIsEligibleForCustomTarget@@YAJPEAU_RM_RESOURCE_SET@@_K@Z @ 0x180034CF4 (-RmpResourceSetIsEligibleForCustomTarget@@YAJPEAU_RM_RESOURCE_SET@@_K@Z.c)
 * Callees:
 *     ?GetEnforcedMemoryCap@ResourceSet@ExecutionModel@@QEBA_KXZ @ 0x1800018E0 (-GetEnforcedMemoryCap@ResourceSet@ExecutionModel@@QEBA_KXZ.c)
 *     ?GetReportedMemoryCap@ResourceSet@ExecutionModel@@QEBA_KXZ @ 0x180001924 (-GetReportedMemoryCap@ResourceSet@ExecutionModel@@QEBA_KXZ.c)
 *     ?RmpActivityHostQueryRawTypeSpecificCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z @ 0x180001B44 (-RmpActivityHostQueryRawTypeSpecificCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z.c)
 *     ?RmpCommitValuesSubtract@@YAJ_K0PEA_K@Z @ 0x180006F4C (-RmpCommitValuesSubtract@@YAJ_K0PEA_K@Z.c)
 *     ?RmpActivityHostComputeCommitLimit@@YA_KPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180007F60 (-RmpActivityHostComputeCommitLimit@@YA_KPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::HasMemoryForFGSharing(
        struct _RM_ACTIVITY_HOST **this,
        unsigned __int64 a2)
{
  unsigned __int64 EnforcedMemoryCap; // rax
  char v4; // r11
  unsigned __int64 v5; // r10
  unsigned int v6; // ebx
  const GUID *v8; // r8
  const GUID *v9; // r9
  unsigned __int64 ReportedMemoryCap; // rax
  struct _RM_ACTIVITY_HOST *v11; // rcx
  LPCGUID v12; // r8
  LPCGUID v13; // r9
  unsigned __int64 v14; // [rsp+38h] [rbp-49h] BYREF
  unsigned __int64 v15; // [rsp+40h] [rbp-41h] BYREF
  unsigned __int64 v16; // [rsp+48h] [rbp-39h] BYREF
  unsigned __int64 v17; // [rsp+50h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-29h] BYREF
  unsigned __int64 *v19; // [rsp+78h] [rbp-9h]
  int v20; // [rsp+80h] [rbp-1h]
  int v21; // [rsp+84h] [rbp+3h]
  unsigned __int64 *v22; // [rsp+88h] [rbp+7h]
  int v23; // [rsp+90h] [rbp+Fh]
  int v24; // [rsp+94h] [rbp+13h]
  unsigned __int64 *v25; // [rsp+98h] [rbp+17h]
  int v26; // [rsp+A0h] [rbp+1Fh]
  int v27; // [rsp+A4h] [rbp+23h]
  unsigned __int64 *v28; // [rsp+A8h] [rbp+27h]
  int v29; // [rsp+B0h] [rbp+2Fh]
  int v30; // [rsp+B4h] [rbp+33h]
  unsigned __int64 *v31; // [rsp+B8h] [rbp+37h]
  int v32; // [rsp+C0h] [rbp+3Fh]
  int v33; // [rsp+C4h] [rbp+43h]
  unsigned __int64 v34; // [rsp+F0h] [rbp+6Fh] BYREF

  v34 = a2;
  if ( *((_DWORD *)this + 350) )
  {
    EnforcedMemoryCap = ExecutionModel::ResourceSet::GetEnforcedMemoryCap((ExecutionModel::ResourceSet *)this);
    if ( EnforcedMemoryCap < v5 )
    {
      if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 9uLL) )
      {
        ReportedMemoryCap = ExecutionModel::ResourceSet::GetReportedMemoryCap((ExecutionModel::ResourceSet *)this);
        v11 = this[179];
        v21 = 0;
        v24 = 0;
        v27 = 0;
        v16 = ReportedMemoryCap;
        v19 = &v16;
        v22 = (unsigned __int64 *)((char *)v11 + 56);
        v25 = (unsigned __int64 *)((char *)v11 + 64);
        v20 = 8;
        v23 = 8;
        v26 = 8;
        LODWORD(ReportedMemoryCap) = *((_DWORD *)v11 + 20);
        v30 = 0;
        v33 = 0;
        LODWORD(v14) = ReportedMemoryCap;
        v28 = &v14;
        v31 = &v34;
        v29 = 4;
        v32 = 8;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18005908D, v12, v13, 7u, &pData);
      }
    }
    else
    {
      if ( !v4 )
        return 0;
      if ( (int)RmpActivityHostQueryRawTypeSpecificCommit(this[180], &v15) < 0 )
        return 0;
      v17 = RmpActivityHostComputeCommitLimit(this[180]);
      if ( (int)RmpCommitValuesSubtract(v17, v15, &v14) >= 0 && (int)RmpCommitValuesSubtract(v14, v34, &v14) >= 0 )
        return 0;
    }
    v6 = -2147220992;
  }
  else
  {
    v6 = -2147220216;
  }
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 9uLL) )
  {
    v21 = 0;
    v24 = 0;
    v27 = 0;
    v19 = &v17;
    v22 = &v15;
    v25 = &v34;
    v20 = 8;
    v23 = 8;
    v26 = 8;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180059025, v8, v9, 5u, &pData);
  }
  return v6;
}
