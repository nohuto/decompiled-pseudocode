/*
 * XREFs of ?WriteDpiToRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z @ 0x1C01D46BC
 * Callers:
 *     DxgkUpdateDpiInfoForNewOverride @ 0x1C01D4860 (DxgkUpdateDpiInfoForNewOverride.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00903E0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?AllocateMonitorSetIdFromAdapterSource@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z @ 0x1C00E1D98 (-AllocateMonitorSetIdFromAdapterSource@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z.c)
 *     ?WriteDwordToParticularRegValue@DpiPersistence@@YAJAEBU_UNICODE_STRING@@00QEBGK@Z @ 0x1C00F7CF0 (-WriteDwordToParticularRegValue@DpiPersistence@@YAJAEBU_UNICODE_STRING@@00QEBGK@Z.c)
 */

__int64 __fastcall DpiPersistence::WriteDpiToRegistry(
        struct _LUID *this,
        const struct _LUID *a2,
        int a3,
        struct _UNICODE_STRING *a4)
{
  __int64 v5; // rdi
  const struct _UNICODE_STRING *v6; // r9
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  DXGSESSIONMGR *v12; // rbx
  __int64 v13; // r8
  unsigned int CurrentProcessSessionId; // eax
  __int64 v15; // r8
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  const struct _UNICODE_STRING *v22; // r9
  int v23; // eax
  __int64 v24; // rcx
  unsigned __int16 *v26; // [rsp+20h] [rbp-60h]
  unsigned __int16 *v27; // [rsp+20h] [rbp-60h]
  struct _UNICODE_STRING v28; // [rsp+30h] [rbp-50h] BYREF
  struct _UNICODE_STRING v29; // [rsp+40h] [rbp-40h] BYREF
  struct _UNICODE_STRING v30; // [rsp+50h] [rbp-30h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-20h] BYREF
  struct _UNICODE_STRING v32; // [rsp+70h] [rbp-10h] BYREF

  LODWORD(v5) = DpiPersistence::AllocateMonitorSetIdFromAdapterSource(this, a2, &v28, a4);
  if ( (int)v5 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System");
    RtlInitUnicodeString(&v30, L"CurrentControlSet\\Control\\GraphicsDrivers\\ScaleFactors");
    LODWORD(v26) = a3;
    v7 = DpiPersistence::WriteDwordToParticularRegValue(&DestinationString, &v30, &v28, v6, v26);
    v5 = v7;
    if ( v7 < 0 )
    {
      v9 = WdLogNewEntry5_WdError(v8);
      *(_QWORD *)(v9 + 24) = v5;
      WdLogEvent5_WdError(v9);
    }
    v12 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v8) + 73);
    if ( v12 )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v11);
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                         v12,
                                         CurrentProcessSessionId,
                                         v15);
    }
    else
    {
      SessionDataForSpecifiedSession = 0LL;
    }
    if ( !SessionDataForSpecifiedSession )
    {
      v17 = WdLogNewEntry5_WdError(v11);
      LODWORD(v5) = -1073741811;
      *(_QWORD *)(v17 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v18);
      v19 = v17;
      *(_QWORD *)(v17 + 32) = -1073741811LL;
LABEL_15:
      WdLogEvent5_WdError(v19);
      goto LABEL_16;
    }
    v29 = *(struct _UNICODE_STRING *)((char *)SessionDataForSpecifiedSession + 18616);
    if ( _mm_srli_si128((__m128i)v29, 8).m128i_u64[0] )
    {
      RtlInitUnicodeString(&v32, L"Control Panel\\Desktop\\PerMonitorSettings\\");
      LODWORD(v27) = a3;
      v23 = DpiPersistence::WriteDwordToParticularRegValue(&v29, &v32, &v28, v22, v27);
      v5 = v23;
      if ( v23 >= 0 )
        goto LABEL_16;
      v19 = WdLogNewEntry5_WdError(v24);
      *(_QWORD *)(v19 + 24) = v5;
      goto LABEL_15;
    }
    if ( v29.Length )
    {
      v20 = WdLogNewEntry5_WdAssertion(v11);
      *(_QWORD *)(v20 + 24) = 875LL;
      WdLogEvent5_WdAssertion(v20);
    }
    v21 = WdLogNewEntry5_WdWarning(v11, v10, v13);
    *(_QWORD *)(v21 + 24) = 876LL;
    WdLogEvent5_WdWarning(v21);
  }
LABEL_16:
  if ( v28.Buffer )
    ExFreePoolWithTag(v28.Buffer, 0);
  return (unsigned int)v5;
}
