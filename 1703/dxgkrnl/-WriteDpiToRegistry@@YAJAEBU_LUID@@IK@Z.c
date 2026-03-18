/*
 * XREFs of ?WriteDpiToRegistry@@YAJAEBU_LUID@@IK@Z @ 0x1C01BC07C
 * Callers:
 *     DxgkUpdateDpiInfoForNewOverride @ 0x1C01BC220 (DxgkUpdateDpiInfoForNewOverride.c)
 * Callees:
 *     ?AllocateMonitorSetIdFromAdapterSource@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z @ 0x1C00AD690 (-AllocateMonitorSetIdFromAdapterSource@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z.c)
 *     ?WriteDwordToParticularRegValue@@YAJAEBU_UNICODE_STRING@@00QEBGK@Z @ 0x1C00AE610 (-WriteDwordToParticularRegValue@@YAJAEBU_UNICODE_STRING@@00QEBGK@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00DD7A0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 */

__int64 __fastcall WriteDpiToRegistry(const struct _LUID *a1, unsigned int a2, unsigned int a3)
{
  __int64 v4; // rdi
  const unsigned __int16 *v5; // r9
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  DXGSESSIONMGR *v14; // rbx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int CurrentProcessSessionId; // eax
  __int64 v18; // r8
  __int64 v19; // r9
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rax
  const unsigned __int16 *v29; // r9
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  struct _UNICODE_STRING v34; // [rsp+30h] [rbp-50h] BYREF
  struct _UNICODE_STRING v35; // [rsp+40h] [rbp-40h] BYREF
  struct _UNICODE_STRING v36; // [rsp+50h] [rbp-30h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-20h] BYREF
  struct _UNICODE_STRING v38; // [rsp+70h] [rbp-10h] BYREF

  LODWORD(v4) = AllocateMonitorSetIdFromAdapterSource(a1, a2, &v34);
  if ( (int)v4 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System");
    RtlInitUnicodeString(&v36, L"CurrentControlSet\\Control\\GraphicsDrivers\\ScaleFactors");
    v6 = WriteDwordToParticularRegValue(&DestinationString, &v36, &v34, v5, a3);
    v4 = v6;
    if ( v6 < 0 )
    {
      v11 = WdLogNewEntry5_WdError(v8, v7);
      *(_QWORD *)(v11 + 24) = v4;
      WdLogEvent5_WdError(v11);
    }
    v14 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v8, v7, v9, v10) + 73);
    if ( v14 )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v13, v12, v15, v16);
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                         v14,
                                         CurrentProcessSessionId,
                                         v18,
                                         v19);
    }
    else
    {
      SessionDataForSpecifiedSession = 0LL;
    }
    if ( !SessionDataForSpecifiedSession )
    {
      v21 = WdLogNewEntry5_WdError(v13, v12);
      LODWORD(v4) = -1073741811;
      *(_QWORD *)(v21 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v23, v22, v24, v25);
      v26 = v21;
      *(_QWORD *)(v21 + 32) = -1073741811LL;
LABEL_15:
      WdLogEvent5_WdError(v26);
      goto LABEL_16;
    }
    v35 = (struct _UNICODE_STRING)*((_OWORD *)SessionDataForSpecifiedSession + 1163);
    if ( _mm_srli_si128((__m128i)v35, 8).m128i_u64[0] )
    {
      RtlInitUnicodeString(&v38, L"Control Panel\\Desktop\\PerMonitorSettings\\");
      v30 = WriteDwordToParticularRegValue(&v35, &v38, &v34, v29, a3);
      v4 = v30;
      if ( v30 >= 0 )
        goto LABEL_16;
      v26 = WdLogNewEntry5_WdError(v32, v31);
      *(_QWORD *)(v26 + 24) = v4;
      goto LABEL_15;
    }
    if ( v35.Length )
    {
      v27 = WdLogNewEntry5_WdAssertion(v13, v12, v15, v16);
      *(_QWORD *)(v27 + 24) = 872LL;
      WdLogEvent5_WdAssertion(v27);
    }
    v28 = WdLogNewEntry5_WdWarning(v13, v12, v15, v16);
    *(_QWORD *)(v28 + 24) = 873LL;
    WdLogEvent5_WdWarning(v28);
  }
LABEL_16:
  if ( v34.Buffer )
    ExFreePoolWithTag(v34.Buffer, 0);
  return (unsigned int)v4;
}
