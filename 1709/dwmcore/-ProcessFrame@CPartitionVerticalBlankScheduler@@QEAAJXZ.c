/*
 * XREFs of ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x180012360
 * Callers:
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x180014A50 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x180001680 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?UpdateFrameStatistics@CTelemetryFrameStatistics@@QEAAX_K00II_N@Z @ 0x180001DA8 (-UpdateFrameStatistics@CTelemetryFrameStatistics@@QEAAX_K00II_N@Z.c)
 *     _TlgKeywordOn @ 0x180004630 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180005610 (_TlgWrite.c)
 *     ?PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z @ 0x18000B0A8 (-PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800106C4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?ConvertTime@@YA_K_K00@Z @ 0x1800106E8 (-ConvertTime@@YA_K_K00@Z.c)
 *     ?FrameEndedCommon@CTelemetryFrames@@CAX_N@Z @ 0x180010770 (-FrameEndedCommon@CTelemetryFrames@@CAX_N@Z.c)
 *     ?DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAVCDXGIEnumeration@@PEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateComparison@@@Z @ 0x180010AF4 (-DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAVCDXGIEnumeration@@PEAPEAVCDisplaySet@@PEAW4En.c)
 *     ?GetCurrentDisplaySetInternal@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@@Z @ 0x180010D80 (-GetCurrentDisplaySetInternal@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@@Z.c)
 *     ?EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x180010EA8 (-EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 *     ?FrameStarted@CTelemetryFrames@@SAX_K@Z @ 0x180010FB4 (-FrameStarted@CTelemetryFrames@@SAX_K@Z.c)
 *     ?ScheduleCompositionPass@CPartitionVerticalBlankScheduler@@UEAAXKW4ScheduledCompositionPassReason@@@Z @ 0x180011520 (-ScheduleCompositionPass@CPartitionVerticalBlankScheduler@@UEAAXKW4ScheduledCompositionPassReaso.c)
 *     ?UpdateDwmTimingInfo@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x180011D6C (-UpdateDwmTimingInfo@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?PresentFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@I_N@Z @ 0x180014704 (-PresentFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@I_N@Z.c)
 *     ?WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z @ 0x180014D80 (-WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z.c)
 *     ?FlushAllDevices@CD3DDeviceManager@@QEAAXXZ @ 0x18001B08C (-FlushAllDevices@CD3DDeviceManager@@QEAAXXZ.c)
 *     ?UpdateMPOCaps@CRenderTargetManager@@QEAAJXZ @ 0x18001B594 (-UpdateMPOCaps@CRenderTargetManager@@QEAAJXZ.c)
 *     ?Render@CRenderTargetManager@@QEAAJPEA_N@Z @ 0x18001B620 (-Render@CRenderTargetManager@@QEAAJPEA_N@Z.c)
 *     ?SetPrimaryVsyncPresentWaitTarget@CRenderTargetManager@@QEBAJI@Z @ 0x18001BB30 (-SetPrimaryVsyncPresentWaitTarget@CRenderTargetManager@@QEBAJI@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001F0A0 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?PostRender@CCrossThreadComposition@@MEAAJ_N@Z @ 0x180029AA0 (-PostRender@CCrossThreadComposition@@MEAAJ_N@Z.c)
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z @ 0x180029EC0 (-PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180068870 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?GetKMTDriverUpdateStatus@CDXGIAdapterLimited@@QEAAJPEAH@Z @ 0x1800752D0 (-GetKMTDriverUpdateStatus@CDXGIAdapterLimited@@QEAAJPEAH@Z.c)
 *     ?Revert@CMmcssTask@@QEAAXXZ @ 0x180075A10 (-Revert@CMmcssTask@@QEAAXXZ.c)
 *     ?Apply@CMmcssTask@@QEAAJ_N@Z @ 0x180075D18 (-Apply@CMmcssTask@@QEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007950C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$00@@IEAAXI@Z @ 0x18007E70C (-ShrinkToSize@-$DynArrayImpl@$00@@IEAAXI@Z.c)
 *     ??1CDisplaySet@@AEAA@XZ @ 0x1800988F0 (--1CDisplaySet@@AEAA@XZ.c)
 *     ?Release@CDisplaySet@@QEBAKXZ @ 0x180098A94 (-Release@CDisplaySet@@QEBAKXZ.c)
 *     ?NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z @ 0x1800AAB4C (-NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z.c)
 *     ?ProcessPostPresent@CComposition@@QEAAJ_N@Z @ 0x1800AB6B0 (-ProcessPostPresent@CComposition@@QEAAJ_N@Z.c)
 *     ?UpdateMmcssPartners@CComposition@@QEAAJXZ @ 0x1800ABA7C (-UpdateMmcssPartners@CComposition@@QEAAJXZ.c)
 *     ?SendReportToE3@CEnergyReporter@@AEAAXXZ @ 0x1800B74BC (-SendReportToE3@CEnergyReporter@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ??1FRAME_TIME_INFO@@QEAA@XZ @ 0x18011D1D4 (--1FRAME_TIME_INFO@@QEAA@XZ.c)
 *     McTemplateU0 @ 0x180120DC8 (McTemplateU0.c)
 *     _anonymous_namespace_::FireFatFramesAlarm @ 0x1801249F4 (_anonymous_namespace_--FireFatFramesAlarm.c)
 *     McTemplateU0d @ 0x180126994 (McTemplateU0d.c)
 *     McTemplateU0qNR0 @ 0x180126A5C (McTemplateU0qNR0.c)
 *     McTemplateU0qqqq @ 0x180126AC8 (McTemplateU0qqqq.c)
 *     McTemplateU0t @ 0x180126BF8 (McTemplateU0t.c)
 *     McTemplateU0x @ 0x180126C58 (McTemplateU0x.c)
 *     McTemplateU0xqqq @ 0x180126CA8 (McTemplateU0xqqq.c)
 *     McTemplateU0xxxxx @ 0x180126F0C (McTemplateU0xxxxx.c)
 *     McTemplateU0qxqxxxqxxxxqxxxxxxxxxxqqqxqxxxx @ 0x18012A134 (McTemplateU0qxqxxxqxxxxqxxxxxxxxxxqqqxqxxxx.c)
 *     ?CurrentTime@CDebugFrameCounter@@IEAA_KXZ @ 0x18012FC6C (-CurrentTime@CDebugFrameCounter@@IEAA_KXZ.c)
 *     ?NotifyInvalidDisplaySet@CRenderTargetManager@@QEAAJXZ @ 0x180130BD0 (-NotifyInvalidDisplaySet@CRenderTargetManager@@QEAAJXZ.c)
 *     ?ReleaseResourcesForDisplayChange@CRenderTargetManager@@QEAAXXZ @ 0x180130E7C (-ReleaseResourcesForDisplayChange@CRenderTargetManager@@QEAAXXZ.c)
 *     ?RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z @ 0x18013A398 (-RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z.c)
 *     ?erase@?$vector@USuperWetPass@CWetInkManager@@V?$allocator@USuperWetPass@CWetInkManager@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@USuperWetPass@CWetInkManager@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@USuperWetPass@CWetInkManager@@@std@@@std@@@2@0@Z @ 0x18013AD18 (-erase@-$vector@USuperWetPass@CWetInkManager@@V-$allocator@USuperWetPass@CWetInkManager@@@std@@@.c)
 *     ?erase@?$vector@USuperWetPass@CWetInkManager@@V?$allocator@USuperWetPass@CWetInkManager@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@USuperWetPass@CWetInkManager@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@USuperWetPass@CWetInkManager@@@std@@@std@@@2@@Z @ 0x18013ADD4 (-erase@-$vector@USuperWetPass@CWetInkManager@@V-$allocator@USuperWetPass@CWetInkMan_ea_18013ADD4.c)
 *     ?Draw@CSuperWetInkRenderer@@QEAAJPEAVCD3DPhysicalSwapChainBuffer@@PEAUIDCompositionDirectInkSuperWetStrokePartner@@@Z @ 0x18015106C (-Draw@CSuperWetInkRenderer@@QEAAJPEAVCD3DPhysicalSwapChainBuffer@@PEAUIDCompositionDirectInkSupe.c)
 *     ?PerformDelayedSnapshot@CCachedVisualImage@@QEAAJXZ @ 0x180159560 (-PerformDelayedSnapshot@CCachedVisualImage@@QEAAJXZ.c)
 *     ?DebugInspectBitmap@@YAJPEAUID2D1Bitmap@@@Z @ 0x18018E58C (-DebugInspectBitmap@@YAJPEAUID2D1Bitmap@@@Z.c)
 *     ?DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z @ 0x18018E758 (-DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z.c)
 *     ?GetStackCaptureRootFailureAddress@@YAPEAXJ@Z @ 0x180194044 (-GetStackCaptureRootFailureAddress@@YAPEAXJ@Z.c)
 *     ?MilUnexpectedError@@YAXJPEBG@Z @ 0x1801944B0 (-MilUnexpectedError@@YAXJPEBG@Z.c)
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::ProcessFrame(CPartitionVerticalBlankScheduler *this)
{
  __int64 v1; // rdx
  unsigned int v2; // eax
  CPartitionVerticalBlankScheduler *v3; // rsi
  int v4; // edi
  bool v5; // r14
  __int64 v6; // rax
  unsigned int v7; // r8d
  int v8; // ecx
  unsigned int v9; // ecx
  volatile struct IUnknown *volatile v10; // rbx
  _QWORD *v11; // rcx
  unsigned __int64 v12; // rdi
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rax
  unsigned int v16; // r11d
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int64 v19; // rbx
  unsigned int v20; // r10d
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rax
  __int64 v23; // r14
  unsigned int v24; // ebx
  unsigned int v25; // edx
  char *v26; // rcx
  __int64 *v27; // r10
  int *v28; // r9
  int v29; // eax
  __int64 v30; // rax
  char v31; // al
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // r8
  __int64 v34; // rax
  char v35; // al
  unsigned __int64 v36; // r13
  __int64 v37; // rax
  bool v38; // zf
  char v39; // al
  CDisplaySet *v40; // r15
  CDXGIEnumeration *v41; // rbx
  int v42; // edi
  unsigned int v43; // ebx
  DWORD v44; // edi
  int v45; // eax
  const GUID *v46; // r8
  const GUID *v47; // r9
  CDXGIEnumeration *v48; // r14
  unsigned int v49; // ebx
  int KMTDriverUpdateStatus; // eax
  struct CDXGIEnumeration *v51; // r14
  CDisplaySet *v52; // rbx
  __int64 v53; // rbx
  bool v54; // r12
  bool v55; // al
  int v56; // eax
  const GUID *v57; // r8
  const GUID *v58; // r9
  int v59; // r12d
  _DWORD *v60; // rax
  unsigned int v61; // ebx
  unsigned int v62; // ecx
  unsigned int (__fastcall *v63)(CMILRefCountBase *__hidden); // rax
  CDisplaySet *v64; // r15
  __int64 v65; // r14
  __int64 v66; // rcx
  __int64 v67; // r14
  __int64 v68; // rcx
  CDisplayManager *v69; // rcx
  __int64 v70; // rbx
  int CurrentDisplaySetInternal; // eax
  volatile signed __int32 *v72; // r14
  __int64 v73; // rdx
  void *v74; // rbx
  int v75; // r12d
  __int64 v76; // r15
  int v77; // r14d
  unsigned int v78; // ebx
  __int64 v79; // rcx
  int v80; // eax
  bool v81; // bl
  __int64 (__fastcall *v82)(CCrossThreadComposition *__hidden, bool *); // rax
  int v83; // eax
  int v84; // r14d
  bool v85; // r12
  int v86; // ebx
  unsigned int v87; // edi
  int v88; // eax
  int v89; // eax
  int v90; // r14d
  unsigned int v91; // edi
  int v92; // eax
  int v93; // eax
  __int64 v94; // rax
  __int64 v95; // rax
  unsigned int v96; // eax
  __int64 (__fastcall *v97)(CCrossThreadComposition *__hidden, bool); // rax
  int v98; // eax
  struct CVisual *v99; // rdx
  __int64 v100; // r8
  int v101; // eax
  int v102; // eax
  int v103; // ebx
  __int64 v104; // r14
  __int64 v105; // r13
  unsigned int v106; // ebx
  __int64 v107; // rcx
  __int64 v108; // rax
  unsigned __int64 v109; // r12
  __int64 v110; // r14
  __int64 v111; // rbx
  int v112; // r15d
  unsigned __int64 v113; // rax
  int v114; // eax
  __int64 v115; // rax
  __int64 v116; // r13
  unsigned int v117; // eax
  __int64 v118; // rbx
  __int64 v119; // r15
  __int64 v120; // rax
  CConnection **v121; // r14
  int v122; // eax
  __int64 v123; // rax
  __int64 v124; // r8
  unsigned __int64 *v125; // r14
  __int64 v126; // r12
  unsigned __int64 *v127; // r15
  __int64 v128; // rdi
  bool v129; // r9
  unsigned __int64 v130; // rdi
  unsigned __int64 v131; // rbx
  unsigned __int64 v132; // r12
  int v133; // edi
  __int64 v134; // r8
  int v135; // eax
  int v136; // ecx
  __int64 v137; // rax
  int v138; // edx
  int FrameStart; // eax
  void *v140; // rcx
  __int64 v141; // rdx
  int v142; // eax
  unsigned int v143; // eax
  int v144; // eax
  void *v145; // rcx
  __int64 v146; // rax
  __int64 v147; // rcx
  unsigned __int64 v148; // rax
  _QWORD *v149; // r12
  unsigned __int64 QuadPart; // rbx
  struct ID3D11Texture2D *v151; // rax
  unsigned __int64 v152; // rcx
  __int64 v153; // r8
  unsigned __int64 v154; // rax
  unsigned __int64 v155; // rcx
  __int64 v156; // r8
  void *v157; // rax
  unsigned __int64 v158; // rcx
  __int64 v159; // r8
  struct ID2D1Bitmap *v160; // rax
  unsigned __int64 v161; // rcx
  __int64 v162; // r8
  __int64 v163; // r8
  __int64 v164; // rdx
  unsigned int j; // ebx
  __int64 v166; // rax
  BOOL v167; // ecx
  char v168; // al
  CEnergyReporter *v169; // rbx
  ULONGLONG TickCount64; // rax
  unsigned __int64 v171; // rcx
  __int64 v172; // rax
  __int64 v173; // rbx
  char v174; // r14
  unsigned __int64 v175; // rcx
  unsigned __int64 v176; // r15
  HANDLE CurrentThread; // rax
  BOOL v178; // eax
  int v179; // edx
  char v180; // cl
  __int64 result; // rax
  bool v182; // [rsp+110h] [rbp-4A8h] BYREF
  bool v183; // [rsp+111h] [rbp-4A7h] BYREF
  bool v184; // [rsp+112h] [rbp-4A6h]
  int v185; // [rsp+114h] [rbp-4A4h] BYREF
  char v186; // [rsp+118h] [rbp-4A0h]
  int v187; // [rsp+11Ch] [rbp-49Ch] BYREF
  CDisplaySet *v188; // [rsp+120h] [rbp-498h] BYREF
  int v189; // [rsp+128h] [rbp-490h]
  int v190; // [rsp+12Ch] [rbp-48Ch] BYREF
  struct ID2D1Bitmap *v191; // [rsp+130h] [rbp-488h] BYREF
  struct ID3D11Texture2D *v192; // [rsp+138h] [rbp-480h] BYREF
  unsigned __int64 v193; // [rsp+140h] [rbp-478h]
  void *lpMem; // [rsp+148h] [rbp-470h] BYREF
  unsigned __int64 CycleTime; // [rsp+150h] [rbp-468h] BYREF
  int AdapterPopulationUniqueness; // [rsp+158h] [rbp-460h] BYREF
  BOOL v197; // [rsp+15Ch] [rbp-45Ch]
  int i; // [rsp+160h] [rbp-458h]
  _QWORD v199[3]; // [rsp+170h] [rbp-448h] BYREF
  int v200; // [rsp+188h] [rbp-430h]
  char v201; // [rsp+18Ch] [rbp-42Ch]
  char v202; // [rsp+18Dh] [rbp-42Bh]
  void *v203[2]; // [rsp+190h] [rbp-428h] BYREF
  __int64 v204; // [rsp+1A0h] [rbp-418h]
  unsigned int v205; // [rsp+1A8h] [rbp-410h]
  CPartitionVerticalBlankScheduler *v206; // [rsp+1B0h] [rbp-408h]
  volatile struct IUnknown *volatile v207; // [rsp+1B8h] [rbp-400h] BYREF
  struct _RTL_CRITICAL_SECTION *v208; // [rsp+1C0h] [rbp-3F8h] BYREF
  _BYTE *v209; // [rsp+1C8h] [rbp-3F0h]
  _DWORD v210[3]; // [rsp+1D0h] [rbp-3E8h] BYREF
  __int64 v211; // [rsp+1DCh] [rbp-3DCh]
  __int64 v212; // [rsp+1E4h] [rbp-3D4h]
  int v213; // [rsp+1F0h] [rbp-3C8h] BYREF
  __int64 v214; // [rsp+1F4h] [rbp-3C4h]
  __int64 v215; // [rsp+1FCh] [rbp-3BCh]
  __int64 v216; // [rsp+204h] [rbp-3B4h]
  char v217[8]; // [rsp+210h] [rbp-3A8h] BYREF
  char v218[8]; // [rsp+218h] [rbp-3A0h] BYREF
  _EXCEPTION_RECORD pExceptionRecord; // [rsp+220h] [rbp-398h] BYREF
  struct _EXCEPTION_RECORD v220; // [rsp+2C0h] [rbp-2F8h] BYREF
  struct _EXCEPTION_RECORD v221; // [rsp+360h] [rbp-258h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+400h] [rbp-1B8h] BYREF
  int *v223; // [rsp+420h] [rbp-198h]
  __int64 v224; // [rsp+428h] [rbp-190h]
  GUID *v225; // [rsp+430h] [rbp-188h]
  __int64 v226; // [rsp+438h] [rbp-180h]
  int *p_AdapterPopulationUniqueness; // [rsp+440h] [rbp-178h]
  __int64 v228; // [rsp+448h] [rbp-170h]
  EVENT_DATA_DESCRIPTOR v229; // [rsp+450h] [rbp-168h] BYREF
  GUID *v230; // [rsp+470h] [rbp-148h]
  __int64 v231; // [rsp+478h] [rbp-140h]
  _BYTE v232[4]; // [rsp+480h] [rbp-138h] BYREF
  char v233; // [rsp+484h] [rbp-134h] BYREF

  v1 = *((unsigned int *)this + 6194);
  v2 = *((_DWORD *)this + 6195);
  v3 = this;
  v206 = this;
  v4 = 0;
  v197 = 0;
  v5 = (unsigned int)v1 <= v2;
  v189 = 0;
  v184 = (unsigned int)v1 <= v2;
  if ( (unsigned int)v1 > v2 )
  {
    v6 = *((_QWORD *)this + 2625);
    if ( !*(_BYTE *)(v6 + 1272) )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80u) != 0 )
        McTemplateU0t(this, v1, *(unsigned __int8 *)(v6 + 1297));
      if ( *((_BYTE *)v3 + 24824) )
      {
        if ( *((_DWORD *)v3 + 7240) == -1 )
          *((_QWORD *)v3 + 3620) = 0LL;
        *((_QWORD *)v3 + *((unsigned int *)v3 + 7241) + 3621) = CDebugFrameCounter::CurrentTime((CPartitionVerticalBlankScheduler *)((char *)v3 + 24800));
        v7 = *((_DWORD *)v3 + 7241) + 1;
        LODWORD(v1) = v7 / 0x3C;
        v7 %= 0x3Cu;
        v8 = *((_DWORD *)v3 + 7240);
        *((_DWORD *)v3 + 7241) = v7;
        if ( v8 == v7 )
        {
          v9 = v8 + 1;
          LODWORD(v1) = v9 / 0x3C;
          *((_DWORD *)v3 + 7240) = v9 % 0x3C;
        }
      }
      LODWORD(this) = CCommonRegistryData::m_parallelModePolicy;
      if ( CCommonRegistryData::m_parallelModePolicy == 2
        || (LODWORD(this) = CCommonRegistryData::m_parallelModePolicy - 1, CCommonRegistryData::m_parallelModePolicy == 1)
        || CCommonRegistryData::m_parallelModePolicy == 3 )
      {
        if ( *((_DWORD *)v3 + 6195) )
        {
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
            McTemplateU0x(
              &Microsoft_Windows_Dwm_Core_Provider_Context,
              &EVTDESC_SCHEDULE_GLITCH_RECOVERY_ATTEMPT,
              *(_QWORD *)(*((_QWORD *)v3 + 2625) + 88LL));
        }
        else
        {
          *((_DWORD *)v3 + 6195) = 1;
          v5 = 1;
          v184 = 1;
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
            McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_PARALLEL_MODE_Start);
        }
      }
    }
  }
  *(_BYTE *)(*((_QWORD *)v3 + 2625) + 1272LL) = 1;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McTemplateU0xqqq((_DWORD)this, v1, *((_QWORD *)v3 + 2625), v5, *((_DWORD *)v3 + 6194), *((_DWORD *)v3 + 6195));
  v10 = g_pDebugInspectSurface;
  for ( i = *((_DWORD *)v3 + 6194); g_pDebugInspectSurface; v10 = g_pDebugInspectSurface )
  {
    v207 = v10;
    if ( v10 )
      ((void (__fastcall *)(volatile struct IUnknown *volatile))v10->lpVtbl->AddRef)(v10);
    v192 = 0LL;
    v191 = 0LL;
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v192);
    if ( ((__int64 (__fastcall *)(volatile struct IUnknown *volatile, GUID *, struct ID3D11Texture2D **))v10->lpVtbl->QueryInterface)(
           v10,
           &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
           &v192) < 0 )
    {
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v191);
      if ( ((__int64 (__fastcall *)(volatile struct IUnknown *volatile, GUID *, struct ID2D1Bitmap **))v10->lpVtbl->QueryInterface)(
             v10,
             &GUID_a898a84c_3873_4588_b08b_ebbf978df041,
             &v191) >= 0 )
        DebugInspectBitmap(v191);
    }
    else
    {
      DebugInspectTexture(v192, 0);
    }
    g_pDebugInspectSurface = 0LL;
    __debugbreak();
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v191);
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v192);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v207);
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 8) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_PROCESS_FRAME_Start);
  CTelemetryFrames::FrameStarted(*(_QWORD *)(*((_QWORD *)v3 + 2625) + 240LL));
  if ( !v5 )
    goto LABEL_344;
  v11 = (_QWORD *)*((_QWORD *)v3 + 2625);
  v12 = v11[160];
  v11[10] = v11[11] + 1LL;
  **((_QWORD **)v3 + 2625) = *(_QWORD *)(*((_QWORD *)v3 + 2625) + 80LL);
  *(_QWORD *)(*((_QWORD *)v3 + 2625) + 1280LL) = *((_QWORD *)v3 + 11) + *(_QWORD *)(*((_QWORD *)v3 + 2625) + 232LL);
  if ( *((_DWORD *)v3 + 6194) || *((_BYTE *)v3 + 29500) )
  {
    *(_QWORD *)(*((_QWORD *)v3 + 2625) + 1280LL) += *((_QWORD *)v3 + 11);
    *(_BYTE *)(*((_QWORD *)v3 + 2625) + 1288LL) = 1;
    v13 = *((_QWORD *)v3 + 2625);
    if ( *(_BYTE *)(v13 + 632) )
    {
      v14 = *(_DWORD *)(v13 + 100) + 2;
      goto LABEL_37;
    }
  }
  else
  {
    v13 = *((_QWORD *)v3 + 2625);
    if ( *(_BYTE *)(v13 + 632) )
    {
      v14 = *(_DWORD *)(v13 + 100) + 1;
LABEL_37:
      *(_DWORD *)(v13 + 164) = v14;
    }
  }
  v15 = *((_QWORD *)v3 + 2625);
  if ( *(_BYTE *)(v15 + 632) )
  {
    v16 = 1;
    if ( *(_DWORD *)(v15 + 640) > 1u )
    {
      do
      {
        v17 = *((_QWORD *)v3 + 2625);
        v18 = v16;
        v19 = *(_QWORD *)(v17 + 8LL * v16 + 504);
        v20 = *(_DWORD *)(32LL * v16 + v17 + 664);
        v188 = (CDisplaySet *)v20;
        if ( v19 )
        {
          v21 = *(_QWORD *)(32 * (v16 + 21LL) + v17);
          v22 = *(_QWORD *)(v17 + 1280);
          if ( v22 > v21 )
          {
            v188 = (CDisplaySet *)((char *)v188 + (v22 - v21) / v19);
            v20 = (unsigned int)v188;
          }
        }
        if ( (v19 + (*(_QWORD *)(v17 + 504) >> 1)) / *(_QWORD *)(v17 + 504) < 2 )
          *(_DWORD *)(v17 + 4LL * v16 + 164) = v20;
        else
          *(_DWORD *)(v17 + 4LL * v16 + 164) = v20 + 1;
        ++v16;
        *(_DWORD *)(*((_QWORD *)v3 + 2625) + 4 * v18 + 100) = v20 + 1;
      }
      while ( v16 < *(_DWORD *)(*((_QWORD *)v3 + 2625) + 640LL) );
    }
  }
  v23 = *((_QWORD *)v3 + 2625);
  v24 = *(_DWORD *)(v23 + 96);
  memset_0(v232, 0, 0x100uLL);
  v25 = 0;
  if ( v24 )
  {
    v26 = &v233;
    v27 = (__int64 *)(v23 + 504);
    v28 = (int *)(v23 + 164);
    do
    {
      if ( v25 >= 0x10 )
        break;
      ++v25;
      *((_DWORD *)v26 - 1) = *(v28 - 16);
      v29 = *v28++;
      *(_DWORD *)v26 = v29;
      v30 = *v27++;
      *(_QWORD *)(v26 + 4) = v30;
      v26 += 16;
    }
    while ( v25 < v24 );
  }
  v31 = Microsoft_Windows_Dwm_CoreEnableBits;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    McTemplateU0qNR0(
      (unsigned int)&Microsoft_Windows_Dwm_Core_Provider_Context,
      (unsigned int)&EVTDESC_SCHEDULE_FRAME_VSYNCDEADLINES,
      v24,
      16,
      (__int64)v232);
    v31 = Microsoft_Windows_Dwm_CoreEnableBits;
  }
  v32 = *(_QWORD *)(*((_QWORD *)v3 + 2625) + 1280LL);
  v33 = *(_QWORD *)(*((_QWORD *)v3 + 2626) + 1280LL);
  if ( v32 < v33 )
  {
    if ( v32 >= v12 )
    {
      if ( (v31 & 0x10) != 0 )
        goto LABEL_60;
      goto LABEL_61;
    }
  }
  else if ( v32 >= v12 )
  {
    goto LABEL_64;
  }
  if ( (v31 & 0x10) != 0 )
  {
    v33 = v12;
LABEL_60:
    McTemplateU0x(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_TIMEADJUSTED_BETWEENFRAMES, v33 - v32);
  }
LABEL_61:
  if ( *(_QWORD *)(*((_QWORD *)v3 + 2626) + 1280LL) > v12 )
    v12 = *(_QWORD *)(*((_QWORD *)v3 + 2626) + 1280LL);
  *(_QWORD *)(*((_QWORD *)v3 + 2625) + 1280LL) = v12;
LABEL_64:
  CPartitionVerticalBlankScheduler::UpdateDwmTimingInfo(v3);
  v34 = *((_QWORD *)v3 + 2625);
  *(_OWORD *)v203 = 0LL;
  v204 = 0LL;
  v205 = 0;
  if ( *((_BYTE *)v3 + 21340) )
    *(_DWORD *)(v34 + 96) = 0;
  v199[0] = v34;
  v199[1] = (char *)v3 + 80;
  v199[2] = (char *)v3 + 21024;
  v201 = *((_BYTE *)v3 + 21340);
  v35 = *((_BYTE *)v3 + 21342);
  *((_BYTE *)v3 + 21342) = 0;
  v200 = 1;
  v202 = v35;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_RENDER_Start);
  v36 = *((_QWORD *)v3 + 9);
  v37 = *((_QWORD *)v3 + 2625) + 256LL;
  v193 = v36;
  v209 = (_BYTE *)v37;
  v38 = *(_DWORD *)(v36 + 344) == 1;
  *(_QWORD *)(v36 + 352) = v199;
  *(_DWORD *)(v36 + 1168) = 0;
  v39 = v201;
  if ( v38 )
    v39 = 1;
  v182 = 0;
  v201 = v39;
  v40 = 0LL;
  v183 = 0;
  v188 = 0LL;
  v185 = 0;
  v186 = 0;
  v187 = 0;
  EnterCriticalSection(&g_DisplayManager);
  v41 = qword_18026EEB0;
  if ( !qword_18026EEB0
    || !(*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)qword_18026EEB0 + 2) + 104LL))(*((_QWORD *)qword_18026EEB0
                                                                                              + 2))
    || (unsigned int)DrvQueryAdapterPopulationUniqueness() != *((_DWORD *)v41 + 14)
    || qword_18026EEB0 != v41 )
  {
LABEL_74:
    v42 = -2003304291;
    v43 = 0;
    v187 = -2003304291;
    while ( v42 == -2003304291 )
    {
      v44 = 10 * v43 * v43;
      if ( v44 )
      {
        LeaveCriticalSection(&g_DisplayManager);
        Sleep(v44);
        EnterCriticalSection(&g_DisplayManager);
      }
      v45 = CDisplayManager::EnsureDXGIEnumeration((CDisplayManager *)&g_DisplayManager, 0LL);
      ++v43;
      v187 = v45;
      v42 = v45;
      if ( v43 >= 0xA )
      {
        if ( v45 == -2003304291 )
        {
          AdapterPopulationUniqueness = DrvQueryAdapterPopulationUniqueness();
          if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
          {
            v224 = 4LL;
            v223 = &v187;
            v225 = &gDwmCoreTelemetryActivityId;
            p_AdapterPopulationUniqueness = &AdapterPopulationUniqueness;
            v226 = 16LL;
            v228 = 4LL;
            TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180214AD8, v46, v47, 5u, &pData);
          }
          v42 = -2003304442;
          v187 = -2003304442;
          goto LABEL_85;
        }
        break;
      }
    }
    if ( v42 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v42, 0x6Au);
      goto LABEL_93;
    }
LABEL_85:
    v48 = qword_18026EEB0;
    v49 = 0;
    v190 = 0;
    if ( !*((_DWORD *)qword_18026EEB0 + 22) )
      goto LABEL_94;
    do
    {
      KMTDriverUpdateStatus = CDXGIAdapterLimited::GetKMTDriverUpdateStatus(
                                *(CDXGIAdapterLimited **)(*((_QWORD *)v48 + 8) + 8LL * v49),
                                &v190);
      if ( KMTDriverUpdateStatus >= 0 )
      {
        if ( v190 )
          goto LABEL_74;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, KMTDriverUpdateStatus, 0xB8u);
      }
      ++v49;
    }
    while ( v49 < *((_DWORD *)v48 + 22) );
  }
LABEL_93:
  v42 = v187;
LABEL_94:
  v51 = qword_18026EEB0;
  if ( qword_18026EEB0 )
  {
    (**(void (__fastcall ***)(CDXGIEnumeration *))qword_18026EEB0)(qword_18026EEB0);
    v42 = v187;
  }
  LeaveCriticalSection(&g_DisplayManager);
  if ( v42 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v42, 0x82u);
  }
  else
  {
    v52 = qword_18026EEA8;
    if ( !qword_18026EEA8 )
      goto LABEL_111;
    if ( GdiEntry13() == *((_DWORD *)v52 + 1)
      && (unsigned int)DrvQueryPrivateDisplayChangeUniqueness() == *((_DWORD *)v52 + 2) )
    {
      LOBYTE(v40) = 1;
    }
    v38 = *((_DWORD *)v52 + 3) == dword_18026EECC;
    v53 = *((_QWORD *)v52 + 2);
    v54 = v38;
    v55 = v53
       && (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(v53 + 16) + 104LL))(*(_QWORD *)(v53 + 16))
       && (unsigned int)DrvQueryAdapterPopulationUniqueness() == *(_DWORD *)(v53 + 56)
       && qword_18026EEB0 == (CDXGIEnumeration *)v53;
    if ( (_BYTE)v40 && v54 && v55 )
    {
      v40 = v188;
    }
    else
    {
LABEL_111:
      v56 = CDisplayManager::DeriveCurrentDisplaySet(
              &g_DisplayManager,
              v51,
              &v188,
              (enum DisplayStateComparison::Enum *)&v185);
      v42 = v56;
      if ( v56 >= 0 )
      {
        dword_18026EEB8 = v56;
        v186 = 1;
        v208 = &g_DisplayManager;
        EnterCriticalSection(&g_DisplayManager);
        if ( qword_18026EEA8 )
          CDisplaySet::Release(qword_18026EEA8);
        v40 = v188;
        qword_18026EEA8 = v188;
        if ( v188 )
        {
          _InterlockedIncrement((volatile signed __int32 *)v188);
          v40 = v188;
        }
        CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v208);
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v56, 0x90u);
        if ( dword_18026EEB8 >= 0
          && hProvider > 5u
          && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
        {
          v231 = 16LL;
          v230 = &gDwmCoreTelemetryActivityId;
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180214AA4, v57, v58, 3u, &v229);
        }
        v40 = v188;
        dword_18026EEB8 = v42;
      }
    }
  }
  v59 = v185;
  v60 = &unk_1802102F0;
  v61 = 0;
  v62 = 0;
  while ( *v60 != v42 )
  {
    ++v62;
    ++v60;
    if ( v62 >= 9 )
    {
      if ( v42 < 0 && v42 != -2003304442 && v42 != -2003304307 )
        MilUnexpectedError(v42, L"Could not create display set.");
      goto LABEL_132;
    }
  }
  if ( v42 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v42, 0xC3u);
LABEL_132:
  if ( v40 )
    CDisplaySet::Release(v40);
  if ( v51 )
  {
    v63 = *(unsigned int (__fastcall **)(CMILRefCountBase *__hidden))(*(_QWORD *)v51 + 8LL);
    if ( v63 == CMILRefCountBase::Release )
      CMILRefCountBase::Release(v51);
    else
      v63(v51);
  }
  if ( v42 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v42, 0x259u);
  v64 = qword_18026EEA8;
  if ( qword_18026EEA8 && *((_DWORD *)qword_18026EEA8 + 18) )
  {
    while ( 1 )
    {
      v65 = *(_QWORD *)(*((_QWORD *)v64 + 6) + 8LL * v61);
      v66 = *(_QWORD *)(v65 + 40);
      if ( v66 )
      {
        if ( *(_BYTE *)(v65 + 308) != ((*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v66 + 24LL))(v66) != 0) )
          break;
      }
      if ( ++v61 >= *((_DWORD *)v64 + 18) )
        goto LABEL_148;
    }
    if ( !v185 )
      v59 = 2;
LABEL_148:
    v61 = 0;
  }
  if ( v42 >= 0 )
  {
    v67 = *(_QWORD *)(v36 + 72);
    v42 = 0;
    if ( *(_DWORD *)(v67 + 80) )
    {
      while ( 1 )
      {
        v68 = *(_QWORD *)(*(_QWORD *)(v67 + 56) + 8LL * v61);
        if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v68 + 272LL))(v68) )
          break;
        if ( ++v61 >= *(_DWORD *)(v67 + 80) )
          goto LABEL_168;
      }
      v70 = *(_QWORD *)(*(_QWORD *)(v67 + 56) + 8LL * v61);
      if ( v70 )
      {
        lpMem = 0LL;
        CurrentDisplaySetInternal = CDisplayManager::GetCurrentDisplaySetInternal(v69, (struct CDisplaySet **)&lpMem);
        v42 = CurrentDisplaySetInternal;
        if ( CurrentDisplaySetInternal < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, CurrentDisplaySetInternal, 0xD9u);
        v72 = (volatile signed __int32 *)lpMem;
        if ( v42 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v42, 0xD81u);
        }
        else
        {
          LOBYTE(v73) = (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)lpMem + 2) + 48LL) + 24LL))(*(_QWORD *)(*((_QWORD *)lpMem + 2) + 48LL))
                     && *(_DWORD *)(v36 + 260);
          if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v70 + 248LL))(v70, v73) )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v70 + 256LL))(v70);
        }
        if ( v72 && _InterlockedExchangeAdd(v72, 0xFFFFFFFF) == 1 )
        {
          v74 = lpMem;
          CDisplaySet::~CDisplaySet((CDisplaySet *)lpMem);
          WPF::ProcessHeapImpl::Free(v74);
        }
      }
    }
LABEL_168:
    if ( v42 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v42, 0x26Du);
  }
  v75 = v59 - 2;
  if ( v75 )
  {
    if ( v75 == 1 )
    {
      CRenderTargetManager::ReleaseResourcesForDisplayChange(*(CRenderTargetManager **)(v36 + 72));
      goto LABEL_186;
    }
  }
  else
  {
    v76 = *(_QWORD *)(v36 + 72);
    v77 = 0;
    v78 = 0;
    if ( *(_DWORD *)(v76 + 80) )
    {
      while ( 1 )
      {
        v79 = *(_QWORD *)(*(_QWORD *)(v76 + 56) + 8LL * v78);
        v80 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v79 + 240LL))(v79);
        v77 = v80;
        if ( v80 < 0 )
          break;
        if ( ++v78 >= *(_DWORD *)(v76 + 80) )
          goto LABEL_178;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v80, 0x36Du);
LABEL_178:
      if ( v77 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v77, 0x27Bu);
    }
    if ( !v42 || v42 >= 0 && v77 < 0 )
      v42 = v77;
  }
  if ( v186 )
    CRenderTargetManager::UpdateMPOCaps(*(CRenderTargetManager **)(v36 + 72));
LABEL_186:
  if ( v42 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180201D00, 2u, v42, 0x2C4u);
  v81 = v42 == -2003304442 || v42 == -2003304291;
  v82 = *(__int64 (__fastcall **)(CCrossThreadComposition *__hidden, bool *))(*(_QWORD *)v36 + 24LL);
  if ( v82 == CCrossThreadComposition::PreRender )
    v83 = CCrossThreadComposition::PreRender((CCrossThreadComposition *)v36, &v182);
  else
    v83 = v82((CCrossThreadComposition *)v36, &v182);
  v84 = v83;
  if ( v83 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180201D00, 2u, v83, 0x2D3u);
  if ( v84 != -2003304442 && v84 != -2003304291 && !v81 )
  {
    v85 = v182;
    v183 = 0;
    AcquireSRWLockShared((PSRWLOCK)(v36 + 552));
    v86 = 0;
    v87 = 0;
    if ( *(_DWORD *)(v36 + 672) )
    {
      while ( 1 )
      {
        v88 = CCachedVisualImage::PerformDelayedSnapshot(*(CCachedVisualImage **)(*(_QWORD *)(v36 + 648) + 8LL * v87));
        v86 = v88;
        if ( v88 < 0 )
          break;
        if ( ++v87 >= *(_DWORD *)(v36 + 672) )
          goto LABEL_205;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v88, 0xB03u);
    }
LABEL_205:
    *(_DWORD *)(v36 + 672) = 0;
    DynArrayImpl<0>::ShrinkToSize(v36 + 648, 8LL);
    if ( v86 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180201D00, 2u, v86, 0x3DBu);
    }
    else
    {
      v86 = v84;
      if ( v84 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180201D00, 2u, v84, 0x3DEu);
      }
      else if ( v85 )
      {
        if ( !v84 )
          v86 = 142213121;
      }
      else
      {
        v89 = CRenderTargetManager::Render(*(CRenderTargetManager **)(v36 + 72), &v183);
        v86 = v89;
        if ( v89 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180201D00, 2u, v89, 0x3E3u);
      }
    }
    ReleaseSRWLockShared((PSRWLOCK)(v36 + 552));
    v90 = *(_DWORD *)(v36 + 344);
    if ( v86 < 0 )
    {
      v91 = 1;
      if ( v90 != 2 )
        goto LABEL_225;
      v93 = CMmcssTask::Apply((CMmcssTask *)(v36 + 136), 0);
      if ( v93 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v93, 0xB5Fu);
    }
    else if ( v86 == 142213121 )
    {
      v91 = 2;
      if ( v90 == 2 )
        goto LABEL_225;
      CMmcssTask::Revert((CMmcssTask *)(v36 + 136));
    }
    else
    {
      v91 = 0;
      if ( v90 != 2 )
        goto LABEL_225;
      v92 = CMmcssTask::Apply((CMmcssTask *)(v36 + 136), 0);
      if ( v92 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v92, 0xB4Fu);
    }
    CComposition::UpdateMmcssPartners((CComposition *)v36);
LABEL_225:
    *(_DWORD *)(v36 + 344) = v91;
    if ( v91 != v90 )
    {
      v94 = *(_QWORD *)(v36 + 352);
      if ( v94 && v91 == 1 )
        *(_BYTE *)(v94 + 28) = 1;
      v210[0] = 5;
      v210[1] = 0;
      v210[2] = v90;
      v211 = v91;
      v212 = 0LL;
      CComposition::NotifyHelper((CComposition *)v36, (struct MIL_MESSAGE *)v210);
    }
    v95 = *(_QWORD *)(v36 + 352);
    if ( v95 && v91 == 2 && *(_DWORD *)(v36 + 464) )
      *(_BYTE *)(v95 + 28) = 1;
    v96 = CComposition::s_cRenderFailures;
    if ( v86 < 0 )
    {
      CComposition::s_cRenderFailures += 2;
      if ( v96 + 2 > 0xA )
      {
        memset_0(&pExceptionRecord, 0, sizeof(pExceptionRecord));
        pExceptionRecord.ExceptionCode = v86;
        pExceptionRecord.ExceptionAddress = GetStackCaptureRootFailureAddress(v86);
        RaiseFailFastException(&pExceptionRecord, 0LL, 0);
      }
    }
    else if ( CComposition::s_cRenderFailures )
    {
      --CComposition::s_cRenderFailures;
    }
    if ( v86 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180201D00, 2u, v86, 0x2EAu);
    v97 = *(__int64 (__fastcall **)(CCrossThreadComposition *__hidden, bool))(*(_QWORD *)v36 + 32LL);
    if ( v97 == CCrossThreadComposition::PostRender )
      v98 = CCrossThreadComposition::PostRender((CCrossThreadComposition *)v36, v182);
    else
      v98 = v97((CCrossThreadComposition *)v36, v182);
    v185 = v98;
    v4 = v98;
    if ( v98 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180201D00, 2u, v98, 0x2EEu);
    }
    else if ( v182 )
    {
      v4 = 142213121;
      v185 = 142213121;
    }
    if ( v183 )
      goto LABEL_249;
    goto LABEL_253;
  }
  v101 = CRenderTargetManager::NotifyInvalidDisplaySet(*(CRenderTargetManager **)(v36 + 72));
  v185 = v101;
  v4 = v101;
  if ( v101 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180201D00, 2u, v101, 0x2DFu);
LABEL_253:
  v102 = CComposition::ProcessPostPresent((CComposition *)v36, 1);
  v103 = v102;
  if ( v102 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180201D00, 2u, v102, 0x300u);
  if ( !v4 )
    goto LABEL_258;
  if ( v4 < 0 )
    goto LABEL_250;
  if ( v103 < 0 )
  {
LABEL_258:
    v4 = v103;
    v185 = v103;
  }
LABEL_249:
  if ( v4 < 0 )
  {
LABEL_250:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180201D00, 2u, v4, 0x383u);
    goto LABEL_284;
  }
  if ( CDebugVisualRenderer::s_fEnableDebug )
  {
    if ( !CDebugVisualRenderer::s_pVisual )
    {
      v104 = *(_QWORD *)(v36 + 72);
      v105 = 0LL;
      v106 = 0;
      if ( *(_DWORD *)(v104 + 80) )
      {
        while ( 1 )
        {
          v107 = *(_QWORD *)(*(_QWORD *)(v104 + 56) + 8LL * v106);
          if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v107 + 272LL))(v107) )
            break;
          if ( ++v106 >= *(_DWORD *)(v104 + 80) )
            goto LABEL_266;
        }
        v105 = *(_QWORD *)(*(_QWORD *)(v104 + 56) + 8LL * v106);
      }
LABEL_266:
      v38 = v105 == 0;
      v108 = v105 - 32;
      v36 = v193;
      if ( v38 )
        v108 = 80LL;
      CDebugVisualRenderer::s_pVisual = *(CVisual **)(*(_QWORD *)v108 + 24LL);
    }
    CDebugVisualRenderer::RenderVisual((struct CComposition *)v36, v99);
  }
  v109 = *(_QWORD *)(v36 + 360);
  v110 = *(_QWORD *)(v36 + 120);
  if ( !byte_180272A00 )
  {
    v111 = *(_QWORD *)(v110 + 8);
    v112 = 0;
    while ( v111 != *(_QWORD *)(v110 + 16) )
    {
      v113 = *(_QWORD *)(v111 + 16);
      if ( v113 <= v109 )
      {
        if ( v113 >= v109 )
        {
          v114 = CSuperWetInkRenderer::Draw(
                   *(CSuperWetInkRenderer **)v110,
                   *(struct CD3DPhysicalSwapChainBuffer **)(v111 + 8),
                   *(struct IDCompositionDirectInkSuperWetStrokePartner **)(v111 + 24));
          v112 = v114;
          if ( v114 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v114, 0xCCu);
            break;
          }
        }
        v111 = *(_QWORD *)std::vector<CWetInkManager::SuperWetPass>::erase(v110 + 8, v217, v111);
      }
      else
      {
        v111 += 32LL;
      }
    }
    if ( v112 < 0 )
    {
      v100 = *(_QWORD *)(v110 + 8);
      if ( (*(_QWORD *)(v110 + 16) - v100) >> 5 )
        std::vector<CWetInkManager::SuperWetPass>::erase(v110 + 8, v218);
    }
    v36 = v193;
  }
  *v209 = v183;
LABEL_284:
  *(_QWORD *)(v36 + 352) = 0LL;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x498u);
  }
  else
  {
    if ( v4 != 142213121 )
      v4 = 0;
    v185 = v4;
  }
  *((_BYTE *)v3 + 21340) |= v201;
  if ( v4 == 142213121 )
  {
    v4 = 0;
    v185 = 0;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_DXGI_STATUS_OCCLUDED);
  }
  if ( *((_BYTE *)v3 + 21340) )
    *((_BYTE *)v3 + 21341) = *(_DWORD *)(*((_QWORD *)v3 + 9) + 344LL) == 0;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x40Cu);
  }
  else
  {
    v115 = *((_QWORD *)v3 + 2625);
    if ( !*(_BYTE *)(v115 + 256) || *(_BYTE *)(v115 + 257) )
    {
      v116 = *((_QWORD *)v3 + 9);
      if ( !*(_QWORD *)(*(_QWORD *)(v116 + 80) + 376LL) )
      {
        v117 = *(_DWORD *)(v116 + 400);
        if ( v117 )
        {
          v118 = 0LL;
          v119 = v117;
          do
          {
            v120 = *(_QWORD *)(v116 + 376);
            v213 = 1;
            v121 = *(CConnection ***)(v118 + v120);
            v214 = 0LL;
            v215 = 0LL;
            v216 = 0LL;
            v122 = CChannelContext::PostMessageToChannel(v121, (const struct MIL_MESSAGE *)&v213, v100);
            if ( v122 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v122, 0x77u);
            CMILRefCountBase::Release((CMILRefCountBase *)v121);
            v118 += 8LL;
            --v119;
          }
          while ( v119 );
        }
        *(_DWORD *)(v116 + 400) = 0;
        DynArrayImpl<1>::ShrinkToSize(v116 + 376, 8LL);
      }
    }
    v123 = *((_QWORD *)v3 + 2625);
    if ( !*(_BYTE *)(v123 + 256) || (v124 = 1LL, *(_BYTE *)(v123 + 257)) )
      v124 = 0LL;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McTemplateU0d(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_RENDER_Stop, v124);
    v125 = (unsigned __int64 *)((char *)v3 + 29536);
    v126 = *((_QWORD *)v3 + 3692);
    v127 = (unsigned __int64 *)((char *)v3 + 29520);
    v128 = *((_QWORD *)v3 + 3690);
    if ( (v128 ^ (((unsigned __int64)v3 + 29536) | (((_QWORD)v3 + 29536) << 32))) != v126 )
    {
      memset_0(&v221, 0, sizeof(v221));
      v221.ExceptionCode = -2003304320;
      v221.NumberParameters = 4;
      v221.ExceptionInformation[0] = SHIDWORD(v128);
      v221.ExceptionInformation[1] = (unsigned int)v128;
      v221.ExceptionInformation[2] = (int)((v126 ^ ((unsigned __int64)v125 | (((_QWORD)v3 + 29536) << 32))) >> 32);
      v221.ExceptionInformation[3] = (unsigned int)v126 ^ (unsigned int)v125;
      RaiseFailFastException(&v221, 0LL, 0);
    }
    *((_QWORD *)v3 + 3691) = *v127;
    QueryPerformanceCounter((LARGE_INTEGER *)v3 + 3690);
    v130 = *v127;
    v131 = *((_QWORD *)v3 + 3691);
    if ( *v127 < v131 )
    {
      memset_0(&v220, 0, sizeof(v220));
      v220.ExceptionCode = -2003304293;
      v220.ExceptionInformation[0] = SHIDWORD(v130);
      v220.ExceptionInformation[1] = (unsigned int)v130;
      v220.ExceptionInformation[2] = SHIDWORD(v131);
      v220.ExceptionInformation[3] = (unsigned int)v131;
      v220.ExceptionInformation[4] = g_qpcFrequency.HighPart;
      v220.ExceptionInformation[5] = g_qpcFrequency.LowPart;
      v220.NumberParameters = 8;
      v220.ExceptionInformation[6] = (int)((1000 * (v131 - v130) / g_qpcFrequency.QuadPart) >> 32);
      v220.ExceptionInformation[7] = (unsigned int)(1000 * (v131 - v130) / g_qpcFrequency.QuadPart);
      RaiseFailFastException(&v220, 0LL, 0);
    }
    v132 = *v127;
    *v125 = *v127 ^ ((unsigned __int64)v125 | ((_QWORD)v125 << 32));
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    {
      v133 = ConvertTime(v132 - *((_QWORD *)v3 + 3689), g_qpcFrequency.QuadPart, 10000000LL);
      v135 = ConvertTime(v132, g_qpcFrequency.QuadPart, v134);
      McTemplateU0xxxxx(
        v136,
        (unsigned int)&EVTDESC_SCHEDULE_TIME,
        v135,
        v133,
        v132,
        *((_QWORD *)v3 + 3691),
        *((_QWORD *)v3 + 3688));
    }
    *(_QWORD *)(*((_QWORD *)v3 + 2625) + 248LL) = *v127;
    if ( !*((_BYTE *)v3 + 29500) )
      goto LABEL_324;
    v137 = *((_QWORD *)v3 + 2625);
    if ( !*(_BYTE *)(v137 + 256) )
      goto LABEL_324;
    if ( *(_BYTE *)(v137 + 257) )
      goto LABEL_324;
    v138 = *(_DWORD *)(v137 + 664);
    *(_BYTE *)(v137 + 1297) = 1;
    if ( CRenderTargetManager::SetPrimaryVsyncPresentWaitTarget(
           *(CRenderTargetManager **)(*((_QWORD *)v3 + 9) + 72LL),
           v138 + 1) >= 0 )
      goto LABEL_324;
    CD3DDeviceManager::FlushAllDevices((CD3DDeviceManager *)&g_D3DDeviceManager);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
      McTemplateU0(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_SCHEDULE_PARALLEL_MODE_WAITING_FOR_NEXT_VSYNC_Start);
    FrameStart = CPartitionVerticalBlankScheduler::WaitForNextFrameStart(v3, 1);
    v185 = FrameStart;
    v4 = FrameStart;
    if ( FrameStart >= 0 )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
        McTemplateU0(
          &Microsoft_Windows_Dwm_Core_Provider_Context,
          &EVTDESC_SCHEDULE_PARALLEL_MODE_WAITING_FOR_NEXT_VSYNC_Stop);
LABEL_324:
      v140 = v203[0];
      v141 = *((_QWORD *)v3 + 2625) + 1176LL;
      v203[0] = *(void **)v141;
      v142 = *(_DWORD *)(v141 + 20);
      *(_QWORD *)v141 = v140;
      LODWORD(v140) = HIDWORD(v204);
      HIDWORD(v204) = v142;
      v143 = *(_DWORD *)(v141 + 24);
      *(_DWORD *)(v141 + 20) = (_DWORD)v140;
      LODWORD(v140) = v205;
      v205 = v143;
      *(_DWORD *)(v141 + 24) = (_DWORD)v140;
      v144 = CPartitionVerticalBlankScheduler::PresentFrame(
               v3,
               *((struct CFrameInfo **)v3 + 2625),
               *((_DWORD *)v3 + 5246),
               v129);
      v185 = v144;
      v4 = v144;
      if ( v144 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v144, 0x43Du);
      goto LABEL_328;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, FrameStart, 0x430u);
  }
LABEL_328:
  v145 = *(void **)(*((_QWORD *)v3 + 7) + 152LL);
  if ( v145 )
    PulseEvent(v145);
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x447u);
    FRAME_TIME_INFO::~FRAME_TIME_INFO((FRAME_TIME_INFO *)v199);
    v167 = v197;
    v5 = v184;
    goto LABEL_347;
  }
  v146 = *((_QWORD *)v3 + 2625);
  if ( *(_BYTE *)(v146 + 256) && !*(_BYTE *)(v146 + 257) )
    CPartitionVerticalBlankScheduler::ScheduleCompositionPass((__int64)v3, 0, 2u);
  CPartitionVerticalBlankScheduler::UpdateDwmTimingInfo(v3);
  v147 = *(_QWORD *)(*((_QWORD *)v3 + 2626) + 232LL);
  if ( v147 )
    v148 = *(_QWORD *)(*((_QWORD *)v3 + 2625) + 232LL) - v147;
  else
    v148 = *((_QWORD *)v3 + 11);
  CycleTime = v148;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 1) != 0 )
  {
    v149 = (_QWORD *)*((_QWORD *)v3 + 2625);
    QuadPart = g_qpcFrequency.QuadPart;
    v151 = (struct ID3D11Texture2D *)ConvertTime(v149[30], g_qpcFrequency.QuadPart, 10000000LL);
    v152 = v149[31];
    v192 = v151;
    v154 = ConvertTime(v152, QuadPart, v153);
    v155 = v149[29];
    v193 = v154;
    v157 = (void *)ConvertTime(v155, QuadPart, v156);
    v158 = v149[160];
    lpMem = v157;
    v160 = (struct ID2D1Bitmap *)ConvertTime(v158, QuadPart, v159);
    v161 = *((_QWORD *)v3 + 11);
    v191 = v160;
    ConvertTime(v161, QuadPart, v162);
    ConvertTime(CycleTime, QuadPart, v163);
    v3 = v206;
    McTemplateU0qxqxxxqxxxxqxxxxxxxxxxqqqxqxxxx(
      *((_QWORD *)v206 + 2625),
      v193 - (_DWORD)v192,
      *((_DWORD *)v206 + 5246),
      **((_QWORD **)v206 + 2625),
      *(_DWORD *)(*((_QWORD *)v206 + 2625) + 16LL),
      (char)v191,
      *(_QWORD *)(*((_QWORD *)v206 + 2625) + 1280LL),
      *(_DWORD *)(*((_QWORD *)v206 + 2625) + 164LL));
    v4 = v185;
  }
  v164 = *((_QWORD *)v3 + 2625);
  CTelemetryFrameStatistics::UpdateFrameStatistics(
    (CPartitionVerticalBlankScheduler *)((char *)v3 + 24712),
    *(_QWORD *)(v164 + 240),
    *(_QWORD *)(v164 + 264),
    *(_QWORD *)(v164 + 504),
    *(_DWORD *)(v164 + 1160),
    *(_DWORD *)(v164 + 1164),
    *(_BYTE *)(v164 + 257));
  for ( j = 0; j < v205; ++j )
    WPF::ProcessHeapImpl::Free(*((void **)v203[0] + j));
  v205 = 0;
  DynArrayImpl<0>::ShrinkToSize(v203, 8LL);
  if ( v203[0] != v203[1] )
  {
    WPF::ProcessHeapImpl::Free(v203[0]);
    v203[0] = 0LL;
  }
  v5 = v184;
LABEL_344:
  v166 = *((_QWORD *)v3 + 2626);
  v167 = v5;
  if ( !*(_BYTE *)(v166 + 256) || (v38 = *(_BYTE *)(v166 + 257) == 0, v189 = 1, !v38) )
    v189 = 0;
LABEL_347:
  v168 = Microsoft_Windows_Dwm_CoreEnableBits;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    McTemplateU0qqqq(v167, (unsigned int)&EVTDESC_SCHEDULE_PROCESS_FRAME, v167, v189, i, *((_DWORD *)v3 + 6195));
    v168 = Microsoft_Windows_Dwm_CoreEnableBits;
  }
  if ( (v168 & 8) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_PROCESS_FRAME_Stop);
  v169 = qword_180272980;
  TickCount64 = GetTickCount64();
  v171 = TickCount64 - *(_QWORD *)v169;
  if ( v171 >= 0x3E8 )
  {
    *((_DWORD *)v169 + 2) = v171;
    *(_QWORD *)v169 = TickCount64;
    CEnergyReporter::SendReportToE3(v169);
  }
  if ( v5 )
  {
    v172 = *((_QWORD *)v3 + 2625);
    v173 = *(_QWORD *)(v172 + 264);
    v174 = *(_BYTE *)(v172 + 257);
    if ( *(_BYTE *)(v172 + 1288) )
      dword_18026ED20 |= 0x80u;
    if ( v174 )
    {
      v175 = 0LL;
      v176 = ::CycleTime;
      CycleTime = 0LL;
      if ( qword_18026EB98 )
      {
        CurrentThread = GetCurrentThread();
        v178 = QueryThreadCycleTime(CurrentThread, &CycleTime);
        v175 = CycleTime;
        if ( v178 )
          qword_18026ED48 += CycleTime - qword_18026EB98;
      }
      qword_18026EE60 = v173;
      qword_18026ED80 = v175 - v176;
      v179 = dword_18026ED44;
      if ( 1000000 * ((unsigned __int64)(v173 - qword_18026EB80) / g_qpcFrequency.QuadPart)
         + 1000000 * ((unsigned __int64)(v173 - qword_18026EB80) % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart > (unsigned int)dword_18026ED44 )
        v179 = 1000000 * ((unsigned __int64)(v173 - qword_18026EB80) / g_qpcFrequency.QuadPart)
             + 1000000
             * ((unsigned __int64)(v173 - qword_18026EB80) % g_qpcFrequency.QuadPart)
             / g_qpcFrequency.QuadPart;
      dword_18026ED44 = v179;
    }
    if ( dword_18026EB7C == 1 )
    {
      ++dword_18026ED38;
      dword_18026EB7C = 0;
      if ( ++dword_18026EB78 > CCommonRegistryData::m_telemetryFatFramesAlarmConsecutiveGlitchCountThreshold )
        anonymous_namespace_::FireFatFramesAlarm();
      v180 = v174;
    }
    else
    {
      dword_18026EB78 = 0;
      v180 = v174;
    }
  }
  else
  {
    dword_18026EB7C = 1;
    v180 = 0;
  }
  CTelemetryFrames::FrameEndedCommon(v180);
  result = (unsigned int)v4;
  *((_BYTE *)v3 + 29500) = 0;
  return result;
}
