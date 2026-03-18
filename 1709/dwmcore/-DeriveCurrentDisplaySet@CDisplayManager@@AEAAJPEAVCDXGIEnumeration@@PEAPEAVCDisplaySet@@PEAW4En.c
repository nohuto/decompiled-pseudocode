/*
 * XREFs of ?DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAVCDXGIEnumeration@@PEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateComparison@@@Z @ 0x180010AF4
 * Callers:
 *     ?GetCurrentDisplaySetInternal@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@@Z @ 0x180010D80 (-GetCurrentDisplaySetInternal@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@@Z.c)
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x180012360 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z @ 0x180029EC0 (-PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180004630 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180005610 (_TlgWrite.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800106C4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?CreateNewDisplaySet@CDisplayManager@@AEAAJPEBVCDXGIEnumeration@@KKKPEA_NPEAPEAVCDisplaySet@@@Z @ 0x180010940 (-CreateNewDisplaySet@CDisplayManager@@AEAAJPEBVCDXGIEnumeration@@KKKPEA_NPEAPEAVCDisplaySet@@@Z.c)
 *     ?CombineNewAndOldDisplaySets@CDisplayManager@@AEAAJPEAVCDisplaySet@@0@Z @ 0x180010CC8 (-CombineNewAndOldDisplaySets@CDisplayManager@@AEAAJPEAVCDisplaySet@@0@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?LogTelemetry@CDisplaySet@@SAXPEAV1@0W4Enum@DisplayStateComparison@@@Z @ 0x180076FCC (-LogTelemetry@CDisplaySet@@SAXPEAV1@0W4Enum@DisplayStateComparison@@@Z.c)
 *     ??$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z @ 0x18008395C (--$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     McTemplateU0qqq @ 0x1801252C0 (McTemplateU0qqq.c)
 */

__int64 __fastcall CDisplayManager::DeriveCurrentDisplaySet(
        LPCRITICAL_SECTION lpCriticalSection,
        struct CDXGIEnumeration *a2,
        struct CDisplaySet **a3,
        enum DisplayStateComparison::Enum *a4)
{
  _DWORD *v4; // rdi
  unsigned int v5; // r15d
  int v9; // esi
  char v10; // bl
  struct CDisplaySet *v11; // rbx
  struct CDisplaySet *DebugInfo; // rdi
  struct CCrossThreadComposition *v13; // rax
  char v14; // cl
  CDisplayManager *v15; // rcx
  __int64 v16; // r9
  const GUID *v18; // r8
  const GUID *v19; // r9
  const GUID *v20; // r8
  const GUID *v21; // r9
  bool v22; // [rsp+40h] [rbp-C0h] BYREF
  int v23; // [rsp+44h] [rbp-BCh] BYREF
  CDisplayManager *v24; // [rsp+48h] [rbp-B8h] BYREF
  struct CDisplaySet *v25; // [rsp+50h] [rbp-B0h] BYREF
  ULONG v26; // [rsp+58h] [rbp-A8h] BYREF
  int v27; // [rsp+5Ch] [rbp-A4h] BYREF
  int v28; // [rsp+60h] [rbp-A0h] BYREF
  struct CDisplaySet *v29; // [rsp+68h] [rbp-98h] BYREF
  struct _RTL_CRITICAL_SECTION *v30; // [rsp+70h] [rbp-90h] BYREF
  struct CDisplaySet **v31; // [rsp+78h] [rbp-88h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-80h] BYREF
  int *v33; // [rsp+A0h] [rbp-60h]
  __int64 v34; // [rsp+A8h] [rbp-58h]
  GUID *v35; // [rsp+B0h] [rbp-50h]
  __int64 v36; // [rsp+B8h] [rbp-48h]
  CDisplayManager **v37; // [rsp+C0h] [rbp-40h]
  __int64 v38; // [rsp+C8h] [rbp-38h]
  _DWORD *v39; // [rsp+D0h] [rbp-30h]
  __int64 v40; // [rsp+D8h] [rbp-28h]
  char *v41; // [rsp+E0h] [rbp-20h]
  __int64 v42; // [rsp+E8h] [rbp-18h]
  ULONG *v43; // [rsp+F0h] [rbp-10h]
  __int64 v44; // [rsp+F8h] [rbp-8h]
  int *v45; // [rsp+100h] [rbp+0h]
  __int64 v46; // [rsp+108h] [rbp+8h]
  int *v47; // [rsp+110h] [rbp+10h]
  __int64 v48; // [rsp+118h] [rbp+18h]
  EVENT_DATA_DESCRIPTOR v49; // [rsp+120h] [rbp+20h] BYREF
  GUID *v50; // [rsp+140h] [rbp+40h]
  int v51; // [rsp+148h] [rbp+48h]
  int v52; // [rsp+14Ch] [rbp+4Ch]

  v31 = a3;
  v23 = 0;
  v4 = (_DWORD *)&lpCriticalSection[1].SpinCount + 1;
  v25 = 0LL;
  v5 = 0;
  v29 = 0LL;
  v22 = 0;
LABEL_2:
  v9 = 0;
  while ( 1 )
  {
    LODWORD(v24) = *v4;
    HIDWORD(v24) = GdiEntry13();
    v27 = DrvQueryPrivateDisplayChangeUniqueness();
    v23 = CDisplayManager::CreateNewDisplaySet(
            (CDisplayManager *)(unsigned int)v24,
            a2,
            SHIDWORD(v24),
            v27,
            (unsigned int)v24,
            &v22,
            &v25);
    v26 = GdiEntry13();
    v28 = DrvQueryPrivateDisplayChangeUniqueness();
    if ( v23 == -2003304442 || v24 != (CDisplayManager *)__PAIR64__(v26, *v4) )
    {
      if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
      {
        v34 = 4LL;
        v33 = &v23;
        v35 = &gDwmCoreTelemetryActivityId;
        v37 = &v24;
        v41 = (char *)&v24 + 4;
        v43 = &v26;
        v45 = &v27;
        v47 = &v28;
        v36 = 16LL;
        v38 = 4LL;
        v39 = v4;
        v40 = 4LL;
        v42 = 4LL;
        v44 = 4LL;
        v46 = 4LL;
        v48 = 4LL;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1802149AE, v18, v19, 0xAu, &pData);
      }
      ReleaseInterface<CDisplaySet const>(&v25);
      v10 = v22;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) == 0 )
        goto LABEL_30;
LABEL_24:
      McTemplateU0qqq(
        (unsigned int)&Microsoft_Windows_Dwm_Core_Provider_Context,
        (unsigned int)&EVTDESC_SCHEDULE_DERIVEDISPLAYSET,
        0,
        v9,
        v22);
      goto LABEL_30;
    }
    v10 = v22;
    if ( !v22 )
      break;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      goto LABEL_24;
LABEL_30:
    if ( (unsigned int)++v9 >= 0xA )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        McTemplateU0qqq(
          (unsigned int)&Microsoft_Windows_Dwm_Core_Provider_Context,
          (unsigned int)&EVTDESC_SCHEDULE_DERIVEDISPLAYSET,
          0,
          v9,
          v10);
      if ( !v10 )
      {
        if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
        {
          v52 = 0;
          v50 = &gDwmCoreTelemetryActivityId;
          v51 = 16;
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180214973, v20, v21, 3u, &v49);
        }
        v23 = -2003304442;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003304442, 0x212u);
        goto LABEL_40;
      }
      goto LABEL_2;
    }
  }
  if ( v23 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0x1D3u);
LABEL_40:
    v11 = v25;
    goto LABEL_19;
  }
  v30 = lpCriticalSection;
  EnterCriticalSection(lpCriticalSection);
  v11 = v25;
  DebugInfo = (struct CDisplaySet *)lpCriticalSection[1].DebugInfo;
  v29 = DebugInfo;
  lpCriticalSection[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)v25;
  if ( v11 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v11);
    v11 = v25;
    DebugInfo = v29;
  }
  v13 = g_pComposition;
  v14 = 1;
  if ( g_pComposition )
    v14 = *((_BYTE *)g_pComposition + 1297);
  v5 = v14 != 0 ? 3 : 0;
  if ( DebugInfo )
  {
    CDisplaySet::LogTelemetry(DebugInfo, lpCriticalSection[1].DebugInfo, v5);
    CDisplayManager::CombineNewAndOldDisplaySets(v15, v11, DebugInfo);
    v13 = g_pComposition;
  }
  if ( v13 )
  {
    v16 = *((_QWORD *)v13 + 44);
    if ( v16 )
      *(_BYTE *)(v16 + 28) = 1;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0qqq(
      (unsigned int)&Microsoft_Windows_Dwm_Core_Provider_Context,
      (unsigned int)&EVTDESC_SCHEDULE_DERIVEDISPLAYSET,
      1,
      v9,
      0);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v30);
LABEL_19:
  if ( a4 )
    *(_DWORD *)a4 = v5;
  *v31 = v11;
  ReleaseInterface<CDisplaySet const>(&v29);
  return (unsigned int)v23;
}
