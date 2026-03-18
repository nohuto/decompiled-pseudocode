/*
 * XREFs of ?DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAVCDXGIEnumeration@@PEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateComparison@@@Z @ 0x18001EDEC
 * Callers:
 *     ?GetCurrentDisplaySetInternal@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@@Z @ 0x18001EFC4 (-GetCurrentDisplaySetInternal@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@@Z.c)
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z @ 0x180048000 (-PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z.c)
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x18005BBB0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 *     ?UpdateRenderTargetState@CDrawingContext@@AEAAJXZ @ 0x180067410 (-UpdateRenderTargetState@CDrawingContext@@AEAAJXZ.c)
 * Callees:
 *     ?CreateNewDisplaySet@CDisplayManager@@AEAAJPEBVCDXGIEnumeration@@KKKPEA_NPEAPEAVCDisplaySet@@@Z @ 0x18001EB98 (-CreateNewDisplaySet@CDisplayManager@@AEAAJPEBVCDXGIEnumeration@@KKKPEA_NPEAPEAVCDisplaySet@@@Z.c)
 *     ?CombineNewAndOldDisplaySets@CDisplayManager@@AEAAJPEAVCDisplaySet@@0@Z @ 0x18001ED40 (-CombineNewAndOldDisplaySets@CDisplayManager@@AEAAJPEAVCDisplaySet@@0@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180089DE4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ??$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z @ 0x1800B69A4 (--$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z.c)
 *     ?LogTelemetry@CDisplaySet@@SAXPEAV1@0W4Enum@DisplayStateComparison@@@Z @ 0x1800C6EC0 (-LogTelemetry@CDisplaySet@@SAXPEAV1@0W4Enum@DisplayStateComparison@@@Z.c)
 *     _TlgKeywordOn @ 0x1800D1850 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800D1994 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     McTemplateU0qqq @ 0x180147E74 (McTemplateU0qqq.c)
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
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rdx
  struct CDisplaySet *v12; // rbx
  struct CDisplaySet *v13; // rdi
  struct CCrossThreadComposition *v14; // rax
  char v15; // cl
  CDisplayManager *v16; // rcx
  __int64 v17; // r9
  bool v19; // [rsp+40h] [rbp-C0h] BYREF
  int v20; // [rsp+44h] [rbp-BCh] BYREF
  CDisplayManager *v21; // [rsp+48h] [rbp-B8h] BYREF
  struct CDisplaySet *v22; // [rsp+50h] [rbp-B0h] BYREF
  ULONG v23; // [rsp+58h] [rbp-A8h] BYREF
  int v24; // [rsp+5Ch] [rbp-A4h] BYREF
  int v25; // [rsp+60h] [rbp-A0h] BYREF
  struct CDisplaySet *v26; // [rsp+68h] [rbp-98h] BYREF
  LPCRITICAL_SECTION v27; // [rsp+70h] [rbp-90h] BYREF
  struct CDisplaySet **v28; // [rsp+78h] [rbp-88h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-80h] BYREF
  int *v30; // [rsp+A0h] [rbp-60h]
  __int64 v31; // [rsp+A8h] [rbp-58h]
  GUID *v32; // [rsp+B0h] [rbp-50h]
  __int64 v33; // [rsp+B8h] [rbp-48h]
  CDisplayManager **v34; // [rsp+C0h] [rbp-40h]
  __int64 v35; // [rsp+C8h] [rbp-38h]
  _DWORD *v36; // [rsp+D0h] [rbp-30h]
  __int64 v37; // [rsp+D8h] [rbp-28h]
  char *v38; // [rsp+E0h] [rbp-20h]
  __int64 v39; // [rsp+E8h] [rbp-18h]
  ULONG *v40; // [rsp+F0h] [rbp-10h]
  __int64 v41; // [rsp+F8h] [rbp-8h]
  int *v42; // [rsp+100h] [rbp+0h]
  __int64 v43; // [rsp+108h] [rbp+8h]
  int *v44; // [rsp+110h] [rbp+10h]
  __int64 v45; // [rsp+118h] [rbp+18h]
  EVENT_DATA_DESCRIPTOR v46; // [rsp+120h] [rbp+20h] BYREF
  GUID *v47; // [rsp+140h] [rbp+40h]
  int v48; // [rsp+148h] [rbp+48h]
  int v49; // [rsp+14Ch] [rbp+4Ch]

  v28 = a3;
  v20 = 0;
  v4 = (_DWORD *)&lpCriticalSection[1].SpinCount + 1;
  v22 = 0LL;
  v5 = 0;
  v26 = 0LL;
  v19 = 0;
LABEL_2:
  v9 = 0;
  while ( 1 )
  {
    LODWORD(v21) = *v4;
    HIDWORD(v21) = GdiEntry13();
    v24 = DrvQueryPrivateDisplayChangeUniqueness();
    v20 = CDisplayManager::CreateNewDisplaySet(
            (CDisplayManager *)(unsigned int)v21,
            a2,
            SHIDWORD(v21),
            v24,
            (unsigned int)v21,
            &v19,
            &v22);
    v23 = GdiEntry13();
    v25 = DrvQueryPrivateDisplayChangeUniqueness();
    if ( v20 == -2003304442 || v21 != (CDisplayManager *)__PAIR64__(v23, *v4) )
    {
      if ( dword_1802D3FA0 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1802D3FA0, 0x400000000000uLL) )
      {
        v31 = 4LL;
        v30 = &v20;
        v32 = &gDwmCoreTelemetryActivityId;
        v34 = &v21;
        v38 = (char *)&v21 + 4;
        v40 = &v23;
        v42 = &v24;
        v44 = &v25;
        v33 = 16LL;
        v35 = 4LL;
        v36 = v4;
        v37 = 4LL;
        v39 = 4LL;
        v41 = 4LL;
        v43 = 4LL;
        v45 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1802D3FA0, &unk_1802A9949, 0LL, 0LL, 0xAu, &pData);
      }
      ReleaseInterface<CDisplaySet const>(&v22);
      v10 = v19;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) == 0 )
        goto LABEL_30;
LABEL_24:
      McTemplateU0qqq(
        (unsigned int)&Microsoft_Windows_Dwm_Core_Provider_Context,
        (unsigned int)&EVTDESC_SCHEDULE_DERIVEDISPLAYSET,
        0,
        v9,
        v19);
      goto LABEL_30;
    }
    v10 = v19;
    if ( !v19 )
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
        if ( dword_1802D3FA0 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1802D3FA0, 0x400000000000uLL) )
        {
          v49 = 0;
          v47 = &gDwmCoreTelemetryActivityId;
          v48 = 16;
          TlgWrite((TraceLoggingHProvider)&dword_1802D3FA0, &unk_1802A990E, 0LL, 0LL, 3u, &v46);
        }
        v20 = -2003304442;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003304442, 0x212u);
        goto LABEL_40;
      }
      goto LABEL_2;
    }
  }
  if ( v20 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x1D3u);
LABEL_40:
    v12 = v22;
    goto LABEL_19;
  }
  v27 = lpCriticalSection;
  EnterCriticalSection(lpCriticalSection);
  DebugInfo = lpCriticalSection[1].DebugInfo;
  v12 = v22;
  v13 = (struct CDisplaySet *)DebugInfo;
  v26 = (struct CDisplaySet *)DebugInfo;
  lpCriticalSection[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)v22;
  if ( v12 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v12);
    v12 = v22;
    v13 = v26;
  }
  v14 = g_pComposition;
  v15 = 1;
  if ( g_pComposition )
    v15 = *((_BYTE *)g_pComposition + 1345);
  v5 = v15 != 0 ? 3 : 0;
  if ( DebugInfo )
  {
    CDisplaySet::LogTelemetry(v13, lpCriticalSection[1].DebugInfo, v5);
    CDisplayManager::CombineNewAndOldDisplaySets(v16, v12, v13);
    v14 = g_pComposition;
  }
  if ( v14 )
  {
    v17 = *((_QWORD *)v14 + 47);
    if ( v17 )
      *(_BYTE *)(v17 + 20) = 1;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0qqq(
      (unsigned int)&Microsoft_Windows_Dwm_Core_Provider_Context,
      (unsigned int)&EVTDESC_SCHEDULE_DERIVEDISPLAYSET,
      1,
      v9,
      0);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v27);
LABEL_19:
  if ( a4 )
    *(_DWORD *)a4 = v5;
  *v28 = v12;
  ReleaseInterface<CDisplaySet const>(&v26);
  return (unsigned int)v20;
}
