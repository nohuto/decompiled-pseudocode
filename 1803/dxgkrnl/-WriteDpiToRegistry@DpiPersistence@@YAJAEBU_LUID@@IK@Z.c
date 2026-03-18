/*
 * XREFs of ?WriteDpiToRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z @ 0x1C01DD21C
 * Callers:
 *     DxgkUpdateDpiInfoForNewOverride @ 0x1C01DD4A0 (DxgkUpdateDpiInfoForNewOverride.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AllocateMonitorSetIdFromAdapterSource@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z @ 0x1C009D66C (-AllocateMonitorSetIdFromAdapterSource@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z.c)
 *     ?WriteDwordToParticularRegValue@DpiPersistence@@YAJAEBU_UNICODE_STRING@@00QEBGK@Z @ 0x1C009E5F8 (-WriteDwordToParticularRegValue@DpiPersistence@@YAJAEBU_UNICODE_STRING@@00QEBGK@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E29C0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
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
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  const struct _UNICODE_STRING *v21; // r9
  int v22; // eax
  __int64 v23; // rcx
  unsigned __int16 *v25; // [rsp+20h] [rbp-60h]
  unsigned __int16 *v26; // [rsp+20h] [rbp-60h]
  struct _UNICODE_STRING v27; // [rsp+30h] [rbp-50h] BYREF
  struct _UNICODE_STRING v28; // [rsp+40h] [rbp-40h] BYREF
  struct _UNICODE_STRING v29; // [rsp+50h] [rbp-30h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-20h] BYREF
  struct _UNICODE_STRING v31; // [rsp+70h] [rbp-10h] BYREF

  LODWORD(v5) = DpiPersistence::AllocateMonitorSetIdFromAdapterSource(this, a2, &v27, a4);
  if ( (int)v5 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System");
    RtlInitUnicodeString(&v29, L"CurrentControlSet\\Control\\GraphicsDrivers\\ScaleFactors");
    LODWORD(v25) = a3;
    v7 = DpiPersistence::WriteDwordToParticularRegValue(&DestinationString, &v29, &v27, v6, v25);
    v5 = v7;
    if ( v7 < 0 )
    {
      v9 = WdLogNewEntry5_WdError(v8);
      *(_QWORD *)(v9 + 24) = v5;
      WdLogEvent5_WdError(v9);
    }
    v12 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v8) + 74);
    if ( v12 )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v11);
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v12, CurrentProcessSessionId);
    }
    else
    {
      SessionDataForSpecifiedSession = 0LL;
    }
    if ( !SessionDataForSpecifiedSession )
    {
      v16 = WdLogNewEntry5_WdError(v11);
      LODWORD(v5) = -1073741811;
      *(_QWORD *)(v16 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v17);
      v18 = v16;
      *(_QWORD *)(v16 + 32) = -1073741811LL;
LABEL_15:
      WdLogEvent5_WdError(v18);
      goto LABEL_16;
    }
    v28 = *(struct _UNICODE_STRING *)((char *)SessionDataForSpecifiedSession + 18664);
    if ( _mm_srli_si128((__m128i)v28, 8).m128i_u64[0] )
    {
      RtlInitUnicodeString(&v31, L"Control Panel\\Desktop\\PerMonitorSettings\\");
      LODWORD(v26) = a3;
      v22 = DpiPersistence::WriteDwordToParticularRegValue(&v28, &v31, &v27, v21, v26);
      v5 = v22;
      if ( v22 < 0 )
      {
        v18 = WdLogNewEntry5_WdError(v23);
        *(_QWORD *)(v18 + 24) = v5;
        goto LABEL_15;
      }
    }
    else
    {
      if ( v28.Length )
      {
        v19 = WdLogNewEntry5_WdAssertion(v11);
        *(_QWORD *)(v19 + 24) = 763LL;
        WdLogEvent5_WdAssertion(v19);
      }
      v20 = WdLogNewEntry5_WdWarning(v11, v10, v13);
      *(_QWORD *)(v20 + 24) = 764LL;
      WdLogEvent5_WdWarning(v20);
    }
  }
LABEL_16:
  operator delete[](v27.Buffer);
  return (unsigned int)v5;
}
