/*
 * XREFs of ?DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAVCDXGIEnumeration@@PEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateComparison@@_N@Z @ 0x18007EDA4
 * Callers:
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_N0@Z @ 0x180035420 (-PreRender@CCrossThreadComposition@@MEAAJPEA_N0@Z.c)
 *     ?CheckStereoState@CComposition@@QEAAJXZ @ 0x18005B7C0 (-CheckStereoState@CComposition@@QEAAJXZ.c)
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x180067C20 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 *     ?CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x18006ACB0 (-CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 *     ?GetCurrentDisplaySetInternal@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@@Z @ 0x18007F03C (-GetCurrentDisplaySetInternal@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@@Z.c)
 *     ?UpdateRenderTargetState@CDrawingContext@@AEAAJXZ @ 0x1800A1F10 (-UpdateRenderTargetState@CDrawingContext@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateNewDisplaySet@CDisplayManager@@AEAAJPEBVCDXGIEnumeration@@KKKPEA_NPEAPEAVCDisplaySet@@@Z @ 0x18007EBF0 (-CreateNewDisplaySet@CDisplayManager@@AEAAJPEBVCDXGIEnumeration@@KKKPEA_NPEAPEAVCDisplaySet@@@Z.c)
 *     ?CombineNewAndOldDisplaySets@CDisplayManager@@AEAAJPEAVCDisplaySet@@0@Z @ 0x18007EF9C (-CombineNewAndOldDisplaySets@CDisplayManager@@AEAAJPEAVCDisplaySet@@0@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x18007F27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?LogTelemetry@CDisplaySet@@SAXPEAV1@0W4Enum@DisplayStateComparison@@@Z @ 0x1800B4F90 (-LogTelemetry@CDisplaySet@@SAXPEAV1@0W4Enum@DisplayStateComparison@@@Z.c)
 *     ??$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z @ 0x1800B7154 (--$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z.c)
 *     ?IsRenderTargetEquivalentTo@CDisplay@@QEBA_NPEBV1@@Z @ 0x1800B8148 (-IsRenderTargetEquivalentTo@CDisplay@@QEBA_NPEBV1@@Z.c)
 *     ?IsEquivalentTo@?$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800B832C (-IsEquivalentTo@-$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     _TlgKeywordOn @ 0x1800BB2F8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800BD9E0 (_TlgWrite.c)
 *     ??$ReplaceInterface@VCDisplaySet@@V1@@@YAXAEAPEAVCDisplaySet@@PEAV0@@Z @ 0x1800CB010 (--$ReplaceInterface@VCDisplaySet@@V1@@@YAXAEAPEAVCDisplaySet@@PEAV0@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     Template_qqq @ 0x18013FBE8 (Template_qqq.c)
 *     ?IsEquivalentTo@CDisplay@@AEBA_NPEBV1@_N@Z @ 0x180187D50 (-IsEquivalentTo@CDisplay@@AEBA_NPEBV1@_N@Z.c)
 */

__int64 __fastcall CDisplayManager::DeriveCurrentDisplaySet(
        LPCRITICAL_SECTION lpCriticalSection,
        struct CDXGIEnumeration *a2,
        struct CDisplaySet **a3,
        enum DisplayStateComparison::Enum *a4,
        bool a5)
{
  _DWORD *v5; // rsi
  unsigned int v6; // edi
  enum DisplayStateComparison::Enum *v7; // r13
  int v10; // r12d
  int v11; // ecx
  char v12; // bl
  CDisplayManager *v13; // rcx
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rdi
  struct CDisplaySet *v15; // rbx
  struct CCrossThreadComposition *v16; // rax
  char v17; // cl
  unsigned int v18; // esi
  const GUID *v20; // r8
  const GUID *v21; // r9
  bool v22; // r8
  unsigned int Blink; // r14d
  __int64 v24; // rsi
  __int64 v25; // rcx
  __int64 v26; // rdx
  const struct CDisplay *v27; // r13
  const GUID *v28; // r8
  const GUID *v29; // r9
  bool v30; // [rsp+40h] [rbp-C0h] BYREF
  int v31; // [rsp+44h] [rbp-BCh] BYREF
  struct CDisplaySet *v32; // [rsp+48h] [rbp-B8h] BYREF
  CDisplayManager *v33; // [rsp+50h] [rbp-B0h] BYREF
  ULONG v34; // [rsp+58h] [rbp-A8h] BYREF
  int v35; // [rsp+5Ch] [rbp-A4h] BYREF
  int v36; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v37; // [rsp+64h] [rbp-9Ch]
  enum DisplayStateComparison::Enum *v38; // [rsp+68h] [rbp-98h]
  struct _RTL_CRITICAL_SECTION_DEBUG *v39; // [rsp+70h] [rbp-90h] BYREF
  CDisplay *v40; // [rsp+78h] [rbp-88h]
  LPCRITICAL_SECTION v41; // [rsp+80h] [rbp-80h] BYREF
  struct CDisplaySet **v42; // [rsp+88h] [rbp-78h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+90h] [rbp-70h] BYREF
  int *v44; // [rsp+B0h] [rbp-50h]
  __int64 v45; // [rsp+B8h] [rbp-48h]
  GUID *v46; // [rsp+C0h] [rbp-40h]
  __int64 v47; // [rsp+C8h] [rbp-38h]
  CDisplayManager **v48; // [rsp+D0h] [rbp-30h]
  __int64 v49; // [rsp+D8h] [rbp-28h]
  _DWORD *v50; // [rsp+E0h] [rbp-20h]
  __int64 v51; // [rsp+E8h] [rbp-18h]
  char *v52; // [rsp+F0h] [rbp-10h]
  __int64 v53; // [rsp+F8h] [rbp-8h]
  ULONG *v54; // [rsp+100h] [rbp+0h]
  __int64 v55; // [rsp+108h] [rbp+8h]
  int *v56; // [rsp+110h] [rbp+10h]
  __int64 v57; // [rsp+118h] [rbp+18h]
  int *v58; // [rsp+120h] [rbp+20h]
  __int64 v59; // [rsp+128h] [rbp+28h]
  EVENT_DATA_DESCRIPTOR v60; // [rsp+140h] [rbp+40h] BYREF
  GUID *v61; // [rsp+160h] [rbp+60h]
  int v62; // [rsp+168h] [rbp+68h]
  int v63; // [rsp+16Ch] [rbp+6Ch]

  v38 = a4;
  v31 = 0;
  v5 = (_DWORD *)&lpCriticalSection[1].SpinCount + 1;
  v32 = 0LL;
  v6 = 0;
  v39 = 0LL;
  v7 = a4;
  v30 = 0;
  v37 = 0;
  v42 = a3;
LABEL_2:
  v10 = 0;
  while ( 1 )
  {
    LODWORD(v33) = *v5;
    HIDWORD(v33) = GdiEntry13();
    v35 = DrvQueryPrivateDisplayChangeUniqueness();
    v31 = CDisplayManager::CreateNewDisplaySet(
            (CDisplayManager *)(unsigned int)v33,
            a2,
            SHIDWORD(v33),
            v35,
            (unsigned int)v33,
            &v30,
            &v32);
    v34 = GdiEntry13();
    v36 = DrvQueryPrivateDisplayChangeUniqueness();
    if ( v31 == -2003304442 || v33 != (CDisplayManager *)__PAIR64__(v34, *v5) )
    {
      if ( dword_18023D720 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_18023D720, 0x400000000000uLL) )
      {
        v45 = 4LL;
        v44 = &v31;
        v46 = &gDwmCoreTelemetryActivityId;
        v48 = &v33;
        v52 = (char *)&v33 + 4;
        v54 = &v34;
        v56 = &v35;
        v58 = &v36;
        v47 = 16LL;
        v49 = 4LL;
        v50 = v5;
        v51 = 4LL;
        v53 = 4LL;
        v55 = 4LL;
        v57 = 4LL;
        v59 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_18023D720, &unk_1801F803C, v20, v21, 0xAu, &pData);
      }
      ReleaseInterface<CDisplaySet const>(&v32);
      v12 = v30;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) == 0 )
        goto LABEL_34;
LABEL_28:
      Template_qqq(v11, (unsigned int)&EVTDESC_SCHEDULE_DERIVEDISPLAYSET, 0, v10, v30);
      goto LABEL_34;
    }
    v12 = v30;
    if ( !v30 )
      break;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      goto LABEL_28;
LABEL_34:
    if ( (unsigned int)++v10 >= 0xA )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        Template_qqq(v11, (unsigned int)&EVTDESC_SCHEDULE_DERIVEDISPLAYSET, 0, v10, v12);
      if ( !v12 )
      {
        if ( dword_18023D720 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_18023D720, 0x400000000000uLL) )
        {
          v63 = 0;
          v61 = &gDwmCoreTelemetryActivityId;
          v62 = 16;
          TlgWrite((TraceLoggingHProvider)&dword_18023D720, &unk_1801F8001, v28, v29, 3u, &v60);
        }
        v31 = -2003304442;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003304442, 0x236u);
        goto LABEL_54;
      }
      goto LABEL_2;
    }
  }
  if ( v31 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v31, 0x1D8u);
LABEL_54:
    v15 = v32;
    goto LABEL_23;
  }
  v41 = lpCriticalSection;
  EnterCriticalSection(lpCriticalSection);
  DebugInfo = lpCriticalSection[1].DebugInfo;
  v15 = v32;
  if ( DebugInfo
    && DebugInfo->ProcessLocksList.Flink == (struct _LIST_ENTRY *)*((_QWORD *)v32 + 2)
    && (unsigned __int8)TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsEquivalentTo(
                          &DebugInfo->ProcessLocksList.Blink,
                          (char *)v32 + 24)
    && (Blink = (unsigned int)DebugInfo[1].ProcessLocksList.Blink, Blink == *((_DWORD *)v15 + 18)) )
  {
    v24 = 0LL;
    if ( Blink )
    {
      v25 = *((_QWORD *)v15 + 6);
      v26 = *(_QWORD *)&DebugInfo[1].Type;
      while ( 1 )
      {
        v27 = *(const struct CDisplay **)(v25 + 8 * v24);
        v40 = *(CDisplay **)(v26 + 8 * v24);
        if ( !CDisplay::IsEquivalentTo(v40, v27, v22) || !CDisplay::IsRenderTargetEquivalentTo(v40, v27) )
          break;
        v25 = *((_QWORD *)v15 + 6);
        v24 = (unsigned int)(v24 + 1);
        v26 = *(_QWORD *)&DebugInfo[1].Type;
        if ( (unsigned int)v24 >= Blink )
        {
          v7 = v38;
          goto LABEL_47;
        }
      }
      v7 = v38;
      goto LABEL_9;
    }
LABEL_47:
    *(_DWORD *)(&DebugInfo->CreatorBackTraceIndex + 1) = *((_DWORD *)v15 + 1);
    LODWORD(DebugInfo->CriticalSection) = *((_DWORD *)v15 + 2);
    HIDWORD(DebugInfo->CriticalSection) = *((_DWORD *)v15 + 3);
    ReplaceInterface<CDisplaySet,CDisplaySet>(&v32, lpCriticalSection[1].DebugInfo);
    v15 = v32;
    v6 = v37;
  }
  else
  {
LABEL_9:
    v39 = DebugInfo;
    lpCriticalSection[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)v15;
    if ( v15 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v15);
      v15 = v32;
      DebugInfo = v39;
    }
    v16 = g_pComposition;
    v17 = 1;
    if ( g_pComposition )
      v17 = *((_BYTE *)g_pComposition + 1361);
    LOBYTE(v13) = -v17;
    v18 = (_BYTE)v13 != 0 ? 3 : 0;
    if ( DebugInfo )
    {
      CDisplaySet::LogTelemetry(DebugInfo, lpCriticalSection[1].DebugInfo, v18);
      if ( a5 )
        CDisplayManager::CombineNewAndOldDisplaySets(v13, v15, (struct CDisplaySet *)DebugInfo);
      v16 = g_pComposition;
    }
    v6 = v18;
    if ( v16 )
    {
      v13 = (CDisplayManager *)*((_QWORD *)v16 + 49);
      if ( v13 )
        *((_BYTE *)v13 + 28) = 1;
    }
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    Template_qqq((_DWORD)v13, (unsigned int)&EVTDESC_SCHEDULE_DERIVEDISPLAYSET, 1, v10, 0);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v41);
LABEL_23:
  if ( v7 )
    *(_DWORD *)v7 = v6;
  *v42 = v15;
  ReleaseInterface<CDisplaySet const>(&v39);
  return (unsigned int)v31;
}
