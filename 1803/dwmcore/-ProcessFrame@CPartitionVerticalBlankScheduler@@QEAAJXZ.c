/*
 * XREFs of ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x18005BBB0
 * Callers:
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x18005D3B0 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 * Callees:
 *     ?DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAVCDXGIEnumeration@@PEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateComparison@@@Z @ 0x18001EDEC (-DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAVCDXGIEnumeration@@PEAPEAVCDisplaySet@@PEAW4En.c)
 *     ?EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x18001F0FC (-EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 *     ?ResetTokenThread@CSurfaceManager@@QEAAJXZ @ 0x18002030C (-ResetTokenThread@CSurfaceManager@@QEAAJXZ.c)
 *     ?PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z @ 0x180021138 (-PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z.c)
 *     ??$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z @ 0x180021438 (--$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z.c)
 *     ?EnumerateChangedProcessAttributions@CProcessAttributionManager@@AEAAXAEAVCProcessAttributionObserver@@PEAXP6AX1K_KW4ProcessAttributionFlags@@AEBUProcessAttributionResourceCounters@@@Z@Z @ 0x180021F30 (-EnumerateChangedProcessAttributions@CProcessAttributionManager@@AEAAXAEAVCProcessAttributionObs.c)
 *     ?ProcessRenderingStatus@CComposition@@QEAAXJ@Z @ 0x18002D650 (-ProcessRenderingStatus@CComposition@@QEAAXJ@Z.c)
 *     ?ProcessPostPresent@CComposition@@QEAAJ_N@Z @ 0x18002E2A8 (-ProcessPostPresent@CComposition@@QEAAJ_N@Z.c)
 *     ?Present@CComposition@@QEAAJPEAUFRAME_TIME_INFO@@@Z @ 0x18003444C (-Present@CComposition@@QEAAJPEAUFRAME_TIME_INFO@@@Z.c)
 *     ?HasPrimary@CDesktopRenderTarget@@UEAA_NXZ @ 0x180043670 (-HasPrimary@CDesktopRenderTarget@@UEAA_NXZ.c)
 *     ?NeedsStereoChange@CDesktopRenderTarget@@UEAA_N_N@Z @ 0x180044050 (-NeedsStereoChange@CDesktopRenderTarget@@UEAA_N_N@Z.c)
 *     ?PostRender@CCrossThreadComposition@@MEAAJ_N@Z @ 0x180047BF0 (-PostRender@CCrossThreadComposition@@MEAAJ_N@Z.c)
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z @ 0x180048000 (-PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180059D60 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180059E10 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?ScheduleCompositionPass@CPartitionVerticalBlankScheduler@@UEAAXKW4ScheduledCompositionPassReason@@@Z @ 0x18005A6A0 (-ScheduleCompositionPass@CPartitionVerticalBlankScheduler@@UEAAXKW4ScheduledCompositionPassReaso.c)
 *     ?UpdateDwmTimingInfo@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18005B204 (-UpdateDwmTimingInfo@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z @ 0x18005D88C (-WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?FrameRenderingStarted@CTelemetryFrames@@SAX_K@Z @ 0x18005EB8C (-FrameRenderingStarted@CTelemetryFrames@@SAX_K@Z.c)
 *     ?GetPrimaryDesktopRenderTargetNoRef@CRenderTargetManager@@QEBAPEAVIRenderTargetDesktop@@XZ @ 0x18005F020 (-GetPrimaryDesktopRenderTargetNoRef@CRenderTargetManager@@QEBAPEAVIRenderTargetDesktop@@XZ.c)
 *     ?UpdateMPOCaps@CRenderTargetManager@@QEAAJXZ @ 0x18005F4F8 (-UpdateMPOCaps@CRenderTargetManager@@QEAAJXZ.c)
 *     ?GetLastPresentCount@CRenderTargetManager@@QEAAJPEAI0@Z @ 0x18005F970 (-GetLastPresentCount@CRenderTargetManager@@QEAAJPEAI0@Z.c)
 *     ?IsOfType@CHwndRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18005FB40 (-IsOfType@CHwndRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?Render@CHwndRenderTarget@@UEAAJPEA_N@Z @ 0x180061DB0 (-Render@CHwndRenderTarget@@UEAAJPEA_N@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCOverlayContext@@$0A@@@QEAAJPEFBQEAVCOverlayContext@@I@Z @ 0x1800790DC (-AddMultipleAndSet@-$DynArray@PEAVCOverlayContext@@$0A@@@QEAAJPEFBQEAVCOverlayContext@@I@Z.c)
 *     ?ComputeOverlayConfiguration@COverlayContext@@SAJAEAV?$DynArray@PEAVCOverlayContext@@$0A@@@AEAV?$DynArray@UReservedPlaneInfo@COverlayContext@@$0A@@@@Z @ 0x180079180 (-ComputeOverlayConfiguration@COverlayContext@@SAJAEAV-$DynArray@PEAVCOverlayContext@@$0A@@@AEAV-.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180079700 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?FlushAllDevices@CD3DDeviceManager@@QEAAXXZ @ 0x180088CA0 (-FlushAllDevices@CD3DDeviceManager@@QEAAXXZ.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180089DE4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?Release@CDisplaySet@@QEBAKXZ @ 0x1800B6AE8 (-Release@CDisplaySet@@QEBAKXZ.c)
 *     ??1CDisplaySet@@AEAA@XZ @ 0x1800B708C (--1CDisplaySet@@AEAA@XZ.c)
 *     ?SendReportToE3@CEnergyReporter@@AEAAXXZ @ 0x1800C1668 (-SendReportToE3@CEnergyReporter@@AEAAXXZ.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800C5B90 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CreateD3DObjects@CD3DModuleLoaderInternal@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x1800CA5A8 (-CreateD3DObjects@CD3DModuleLoaderInternal@@AEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 *     ?GetKMTDriverUpdateStatus@CDXGIAdapterLimited@@QEAAJPEAH@Z @ 0x1800CB564 (-GetKMTDriverUpdateStatus@CDXGIAdapterLimited@@QEAAJPEAH@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$00@@IEAAXI@Z @ 0x1800CD160 (-ShrinkToSize@-$DynArrayImpl@$00@@IEAAXI@Z.c)
 *     ?SendUnpresentedFramesAlarmTelemetry@CTelemetryFrameStatistics@@AEAAX_K@Z @ 0x1800CFA14 (-SendUnpresentedFramesAlarmTelemetry@CTelemetryFrameStatistics@@AEAAX_K@Z.c)
 *     ?SendFrameStatisticsTelemetry@CTelemetryFrameStatistics@@AEAAX_K@Z @ 0x1800CFAE0 (-SendFrameStatisticsTelemetry@CTelemetryFrameStatistics@@AEAAX_K@Z.c)
 *     QpcToMilliseconds @ 0x1800CFCF0 (QpcToMilliseconds.c)
 *     ?ConvertTime@@YA_K_K00@Z @ 0x1800D1740 (-ConvertTime@@YA_K_K00@Z.c)
 *     _TlgKeywordOn @ 0x1800D1850 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800D1994 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?NeedsPresent@CFrameInfo@@QEBA_NXZ @ 0x18013FCB8 (-NeedsPresent@CFrameInfo@@QEBA_NXZ.c)
 *     ??1FRAME_TIME_INFO@@QEAA@XZ @ 0x18013FCD0 (--1FRAME_TIME_INFO@@QEAA@XZ.c)
 *     McTemplateU0 @ 0x180143900 (McTemplateU0.c)
 *     McTemplateU0qQR0qQR2qQR4qQR6qQR8 @ 0x180148198 (McTemplateU0qQR0qQR2qQR4qQR6qQR8.c)
 *     McTemplateU0qqqq @ 0x180148DD8 (McTemplateU0qqqq.c)
 *     McTemplateU0t @ 0x180148F08 (McTemplateU0t.c)
 *     McTemplateU0x @ 0x180148F68 (McTemplateU0x.c)
 *     McTemplateU0xqqq @ 0x180148FB8 (McTemplateU0xqqq.c)
 *     McTemplateU0xxxxq @ 0x180149108 (McTemplateU0xxxxq.c)
 *     McTemplateU0xxxxx @ 0x1801491B4 (McTemplateU0xxxxx.c)
 *     McTemplateU0qxqxxxqxxxxqxxxxxxxxxxqqqxqxxxx @ 0x18014BE70 (McTemplateU0qxqxxxqxxxxqxxxxxxxxxxqqqxqxxxx.c)
 *     McTemplateU0qN16 @ 0x180151380 (McTemplateU0qN16.c)
 *     McTemplateU0qNR0 @ 0x1801513F8 (McTemplateU0qNR0.c)
 *     ?CurrentTime@CDebugFrameCounter@@IEAA_KXZ @ 0x1801515FC (-CurrentTime@CDebugFrameCounter@@IEAA_KXZ.c)
 *     ?AddMultipleAndSet@?$DynArray@UReservedPlaneInfo@COverlayContext@@$0A@@@QEAAJPEFBUReservedPlaneInfo@COverlayContext@@I@Z @ 0x180152244 (-AddMultipleAndSet@-$DynArray@UReservedPlaneInfo@COverlayContext@@$0A@@@QEAAJPEFBUReservedPlaneI.c)
 *     ?ReleaseResourcesForDisplayChange@CRenderTargetManager@@QEAAXXZ @ 0x1801524C4 (-ReleaseResourcesForDisplayChange@CRenderTargetManager@@QEAAXXZ.c)
 *     ?SetPrimaryVsyncPresentWaitTarget@CRenderTargetManager@@QEBAJI@Z @ 0x180152664 (-SetPrimaryVsyncPresentWaitTarget@CRenderTargetManager@@QEBAJI@Z.c)
 *     ?GetReservedPlaneInfo@CPlaneCaptureRenderTargetEngine@@QEAAJPEAUReservedPlaneInfo@COverlayContext@@@Z @ 0x18015BEC0 (-GetReservedPlaneInfo@CPlaneCaptureRenderTargetEngine@@QEAAJPEAUReservedPlaneInfo@COverlayContex.c)
 *     ?RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z @ 0x18015D484 (-RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z.c)
 *     McTemplateU0d @ 0x180167AC0 (McTemplateU0d.c)
 *     ?PerformDelayedSnapshot@CCachedVisualImage@@QEAAJXZ @ 0x1801826F0 (-PerformDelayedSnapshot@CCachedVisualImage@@QEAAJXZ.c)
 *     ?SetExcludeSubtree@CVisualGroup@@QEAAX_N@Z @ 0x1801A98AC (-SetExcludeSubtree@CVisualGroup@@QEAAX_N@Z.c)
 *     ?DebugInspectBitmap@@YAJPEAUID2D1Bitmap@@@Z @ 0x1801C5B2C (-DebugInspectBitmap@@YAJPEAUID2D1Bitmap@@@Z.c)
 *     ?DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z @ 0x1801C6138 (-DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z.c)
 *     ?TriggerFailFastOnNextFailure@@YAX_N@Z @ 0x1801CD328 (-TriggerFailFastOnNextFailure@@YAX_N@Z.c)
 *     ?MilUnexpectedError@@YAXJPEBG@Z @ 0x1801CD680 (-MilUnexpectedError@@YAXJPEBG@Z.c)
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::ProcessFrame(CPartitionVerticalBlankScheduler *this, __int64 a2)
{
  int v2; // r12d
  CPartitionVerticalBlankScheduler *v3; // r15
  int v4; // ebx
  __int64 v5; // rcx
  int v6; // r14d
  volatile struct IUnknown *volatile v7; // rdi
  int v8; // esi
  _QWORD *v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rcx
  float v12; // xmm1_4
  float v13; // xmm3_4
  unsigned __int64 v14; // rcx
  float v15; // xmm2_4
  __int64 v16; // rax
  unsigned __int64 v17; // rcx
  float v18; // xmm2_4
  __int64 v19; // rax
  unsigned __int64 v20; // rcx
  float v21; // xmm2_4
  __int64 v22; // rax
  unsigned __int64 v23; // rcx
  float v24; // xmm2_4
  float v25; // xmm1_4
  __int64 v26; // rax
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rsi
  __int64 v29; // rcx
  int v30; // eax
  __int64 v31; // r8
  __int64 v32; // rbx
  unsigned int v33; // r9d
  unsigned int v34; // edi
  char *v35; // rcx
  unsigned int v36; // edx
  __int64 *v37; // r9
  int *v38; // rbx
  int v39; // eax
  __int64 v40; // rax
  char v41; // al
  unsigned __int64 v42; // rdx
  unsigned __int64 v43; // r8
  char v44; // al
  __int64 v45; // rcx
  char v46; // al
  __int64 v47; // rax
  CDisplaySet *v48; // r14
  CDXGIEnumeration *v49; // rbx
  int v50; // ebx
  struct CDXGIEnumeration *v51; // r13
  CDisplaySet *v52; // rdi
  bool v53; // si
  __int64 v54; // rdi
  bool v55; // al
  unsigned int v56; // ecx
  _DWORD *v57; // rax
  __int64 (__fastcall *v58)(CMILRefCountBase *); // rax
  CDisplaySet *v59; // rdi
  unsigned int v60; // esi
  __int64 v61; // r14
  __int64 v62; // rcx
  unsigned int v63; // r14d
  __int64 v64; // rdi
  CDesktopRenderTarget *v65; // rcx
  bool (__fastcall *v66)(CDesktopRenderTarget *); // rax
  char v67; // al
  CDesktopRenderTarget *v68; // r13
  CDisplaySet *v69; // rsi
  char v70; // r14
  CD3DModuleLoaderInternal *v71; // rcx
  CDXGIEnumeration *v72; // rdi
  struct CDXGIEnumeration *v73; // rdi
  __int64 (__fastcall *v74)(CMILRefCountBase *); // rax
  __int64 v75; // rdx
  bool (__fastcall *v76)(CDesktopRenderTarget *, char); // rax
  bool v77; // al
  RTL_SRWLOCK *v78; // rsi
  bool v79; // bl
  char v80; // r13
  __int64 (__fastcall *v81)(RTL_SRWLOCK *, bool *); // rax
  int v82; // eax
  int v83; // edi
  CComposition *v84; // r13
  bool v85; // si
  __int64 v86; // rcx
  int v87; // ebx
  unsigned int v88; // r14d
  LPVOID v89; // r8
  CDisplaySet *v90; // rsi
  unsigned int v91; // r14d
  unsigned int v92; // r13d
  __int64 v93; // rdi
  CPlaneCaptureRenderTargetEngine *v94; // rbx
  __int64 v95; // rsi
  __int64 (__fastcall *v96)(CPlaneCaptureRenderTargetEngine *, __int64); // rax
  char v97; // al
  int v98; // eax
  int v99; // eax
  unsigned int v100; // r14d
  __int64 v101; // rdi
  CVisualGroup *v102; // rcx
  CHwndRenderTarget *v103; // rcx
  __int64 (__fastcall *v104)(CHwndRenderTarget *__hidden, bool *); // rax
  int v105; // eax
  int v106; // esi
  CVisualGroup *v107; // rcx
  __int64 v108; // rcx
  __int64 v109; // r8
  __int64 (__fastcall *v110)(CCrossThreadComposition *, unsigned __int8, __int64); // rax
  int v111; // eax
  struct CVisual *v112; // rdx
  __int64 v113; // r8
  char v114; // si
  char v115; // di
  char v116; // al
  __int64 v117; // rax
  __int64 v118; // rax
  _BOOL8 v119; // r8
  unsigned __int64 *v120; // rdi
  unsigned __int64 *v121; // r14
  __int64 v122; // r13
  __int64 v123; // rsi
  __int64 v124; // rbx
  unsigned __int64 v125; // rsi
  unsigned __int64 v126; // r13
  void *v127; // rcx
  __int64 v128; // rdx
  int v129; // eax
  unsigned int v130; // eax
  __int64 v131; // r13
  char v132; // al
  char v133; // al
  CComposition *v134; // rcx
  int v135; // eax
  __int64 v136; // r8
  __int64 v137; // rdi
  CRenderTargetManager *v138; // rcx
  int LastPresentCount; // eax
  int v140; // edx
  int v141; // ecx
  int v142; // r9d
  int v143; // edi
  __int64 v144; // rdi
  unsigned int j; // edi
  void *v146; // rcx
  __int64 v147; // rax
  __int64 v148; // r9
  __int64 v149; // r14
  __int64 v150; // rcx
  CDisplaySet *v151; // rax
  CTelemetryFrameStatistics *v152; // r8
  __int64 v153; // r9
  int v154; // r10d
  __int64 v155; // r11
  unsigned __int64 v156; // rdx
  unsigned __int64 v157; // rdi
  double v158; // xmm1_8
  unsigned int k; // edi
  __int64 v160; // rax
  BOOL v161; // ecx
  char v162; // al
  CProcessAttributionReporter *v163; // r14
  CEnergyReporter *v164; // rdi
  ULONGLONG TickCount64; // rax
  unsigned __int64 v166; // rdx
  __int64 result; // rax
  _QWORD *Ptr; // r14
  unsigned int v169; // esi
  __int64 v170; // rcx
  int v171; // eax
  int v172; // edi
  int v173; // eax
  int v174; // edi
  __int64 v175; // rdi
  __int64 v176; // rax
  __int64 v177; // rax
  unsigned __int64 v178; // rcx
  __int64 v179; // rsi
  __int64 v180; // r14
  __int64 v181; // rax
  CChannelContext *v182; // r13
  int v183; // eax
  int v184; // eax
  unsigned int v185; // edi
  CDXGIEnumeration *v186; // rsi
  unsigned int v187; // edi
  int KMTDriverUpdateStatus; // eax
  DWORD v189; // ebx
  int v190; // eax
  __int64 v191; // rsi
  __int64 v192; // r14
  __int64 v193; // rax
  CChannelContext *v194; // r13
  int v195; // eax
  unsigned int v196; // r8d
  int v197; // ecx
  struct ID2D1Bitmap *v198; // rcx
  __int64 v199; // r11
  unsigned __int64 v200; // rbx
  __int64 v201; // rax
  __m128i v202; // xmm1
  __int128 v203; // xmm0
  unsigned int v204; // r10d
  unsigned __int64 v205; // rax
  unsigned __int64 v206; // xmm2_8
  int v207; // eax
  int v208; // eax
  int v209; // edi
  unsigned int v210; // esi
  __int64 v211; // r14
  __int64 v212; // rcx
  int v213; // eax
  int v214; // eax
  int v215; // eax
  unsigned int v216; // eax
  struct IRenderTargetDesktop *PrimaryDesktopRenderTargetNoRef; // rax
  __int64 v218; // rax
  unsigned __int64 v219; // rsi
  ULONG_PTR v220; // rax
  unsigned __int64 v221; // r13
  int v222; // edi
  unsigned __int64 v223; // r8
  int v224; // eax
  int v225; // ecx
  __m128i *v226; // rcx
  __m128i v227; // xmm1
  int FrameStart; // eax
  unsigned __int64 QuadPart; // rbx
  __int64 v230; // r14
  unsigned __int64 v231; // rdi
  unsigned __int64 v232; // r8
  unsigned __int64 v233; // rsi
  unsigned __int64 v234; // r8
  int v235; // eax
  int v236; // edx
  unsigned __int64 v237; // rbx
  CComposition *v238; // rax
  unsigned __int64 v239; // rcx
  unsigned __int64 v240; // r8
  struct ID2D1Bitmap *v241; // rax
  unsigned __int64 v242; // rcx
  unsigned __int64 v243; // r8
  struct ID3D11Texture2D *v244; // rax
  unsigned __int64 v245; // rcx
  unsigned __int64 v246; // r8
  unsigned __int64 v247; // rax
  unsigned __int64 v248; // rcx
  unsigned __int64 v249; // r8
  unsigned __int64 v250; // r8
  unsigned int cData; // [rsp+20h] [rbp-608h]
  int cDataa; // [rsp+20h] [rbp-608h]
  int v253; // [rsp+30h] [rbp-5F8h]
  bool v254; // [rsp+110h] [rbp-518h]
  bool v255; // [rsp+111h] [rbp-517h] BYREF
  char v256; // [rsp+112h] [rbp-516h]
  int v257; // [rsp+114h] [rbp-514h] BYREF
  bool v258; // [rsp+118h] [rbp-510h] BYREF
  char v259; // [rsp+119h] [rbp-50Fh]
  CDisplaySet *v260; // [rsp+120h] [rbp-508h] BYREF
  int v261; // [rsp+128h] [rbp-500h] BYREF
  char v262; // [rsp+12Ch] [rbp-4FCh]
  CComposition *v263; // [rsp+130h] [rbp-4F8h]
  struct ID2D1Bitmap *v264; // [rsp+138h] [rbp-4F0h] BYREF
  int v265; // [rsp+140h] [rbp-4E8h]
  int i; // [rsp+144h] [rbp-4E4h]
  CDisplaySet *v267; // [rsp+148h] [rbp-4E0h] BYREF
  struct ID3D11Texture2D *v268; // [rsp+150h] [rbp-4D8h] BYREF
  unsigned int v269; // [rsp+158h] [rbp-4D0h] BYREF
  int AdapterPopulationUniqueness; // [rsp+15Ch] [rbp-4CCh] BYREF
  int v271; // [rsp+160h] [rbp-4C8h] BYREF
  int D3DObjects; // [rsp+164h] [rbp-4C4h] BYREF
  unsigned __int64 v273; // [rsp+168h] [rbp-4C0h]
  _QWORD v274[2]; // [rsp+170h] [rbp-4B8h] BYREF
  int v275; // [rsp+180h] [rbp-4A8h]
  char v276; // [rsp+184h] [rbp-4A4h]
  char v277; // [rsp+185h] [rbp-4A3h]
  void *v278[2]; // [rsp+188h] [rbp-4A0h] BYREF
  __int64 v279; // [rsp+198h] [rbp-490h]
  unsigned int v280; // [rsp+1A0h] [rbp-488h]
  _QWORD v281[2]; // [rsp+1A8h] [rbp-480h] BYREF
  int v282; // [rsp+1B8h] [rbp-470h]
  char v283; // [rsp+1BCh] [rbp-46Ch]
  char v284; // [rsp+1BDh] [rbp-46Bh]
  void *v285[2]; // [rsp+1C0h] [rbp-468h] BYREF
  __int64 v286; // [rsp+1D0h] [rbp-458h]
  unsigned int v287; // [rsp+1D8h] [rbp-450h]
  LPVOID lpMem[2]; // [rsp+1E0h] [rbp-448h] BYREF
  __int64 v289; // [rsp+1F0h] [rbp-438h]
  int v290; // [rsp+1F8h] [rbp-430h]
  struct _RTL_CRITICAL_SECTION *v291; // [rsp+200h] [rbp-428h] BYREF
  __int64 v292; // [rsp+208h] [rbp-420h] BYREF
  CPartitionVerticalBlankScheduler *v293; // [rsp+210h] [rbp-418h]
  void *v294[2]; // [rsp+218h] [rbp-410h] BYREF
  __int64 v295; // [rsp+228h] [rbp-400h]
  int v296; // [rsp+230h] [rbp-3F8h]
  int v297; // [rsp+238h] [rbp-3F0h] BYREF
  __int64 v298; // [rsp+23Ch] [rbp-3ECh]
  __int64 v299; // [rsp+244h] [rbp-3E4h]
  __int64 v300; // [rsp+24Ch] [rbp-3DCh]
  int v301; // [rsp+258h] [rbp-3D0h] BYREF
  __int64 v302; // [rsp+25Ch] [rbp-3CCh]
  __int64 v303; // [rsp+264h] [rbp-3C4h]
  __int64 v304; // [rsp+26Ch] [rbp-3BCh]
  __int128 v305; // [rsp+278h] [rbp-3B0h]
  __m128i v306; // [rsp+288h] [rbp-3A0h]
  struct _EXCEPTION_RECORD v307; // [rsp+2A0h] [rbp-388h] BYREF
  struct _EXCEPTION_RECORD pExceptionRecord; // [rsp+340h] [rbp-2E8h] BYREF
  _BYTE v309[144]; // [rsp+3E0h] [rbp-248h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+470h] [rbp-1B8h] BYREF
  int *v311; // [rsp+490h] [rbp-198h]
  __int64 v312; // [rsp+498h] [rbp-190h]
  GUID *v313; // [rsp+4A0h] [rbp-188h]
  __int64 v314; // [rsp+4A8h] [rbp-180h]
  int *p_AdapterPopulationUniqueness; // [rsp+4B0h] [rbp-178h]
  __int64 v316; // [rsp+4B8h] [rbp-170h]
  EVENT_DATA_DESCRIPTOR v317; // [rsp+4C0h] [rbp-168h] BYREF
  GUID *v318; // [rsp+4E0h] [rbp-148h]
  __int64 v319; // [rsp+4E8h] [rbp-140h]
  _BYTE v320[4]; // [rsp+4F0h] [rbp-138h] BYREF
  char v321; // [rsp+4F4h] [rbp-134h] BYREF
  void *retaddr; // [rsp+628h] [rbp+0h]

  v2 = 0;
  v293 = this;
  v3 = this;
  v4 = 0;
  v5 = *((unsigned int *)this + 7638);
  v257 = 0;
  v6 = 1;
  v254 = (unsigned int)v5 <= *((_DWORD *)v3 + 7639);
  LOBYTE(a2) = v254;
  if ( (unsigned int)v5 > *((_DWORD *)v3 + 7639) )
  {
    v177 = *((_QWORD *)v3 + 3230);
    if ( !*(_BYTE *)(v177 + 1176) )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80u) != 0 )
      {
        McTemplateU0t(v5, a2, *(unsigned __int8 *)(v177 + 1201));
        LODWORD(a2) = v254;
      }
      if ( *((_BYTE *)v3 + 30600) )
      {
        if ( *((_DWORD *)v3 + 8684) == -1 )
          *((_QWORD *)v3 + 4342) = 0LL;
        *((_QWORD *)v3 + *((unsigned int *)v3 + 8685) + 4343) = CDebugFrameCounter::CurrentTime((CPartitionVerticalBlankScheduler *)((char *)v3 + 30576));
        v196 = (*((_DWORD *)v3 + 8685) + 1) % 0x3Cu;
        v197 = *((_DWORD *)v3 + 8684);
        *((_DWORD *)v3 + 8685) = v196;
        if ( v197 == v196 )
          *((_DWORD *)v3 + 8684) = (v197 + 1) % 0x3Cu;
        LODWORD(a2) = v254;
      }
      LODWORD(v5) = CCommonRegistryData::m_parallelModePolicy;
      if ( CCommonRegistryData::m_parallelModePolicy == 2
        || (LODWORD(v5) = CCommonRegistryData::m_parallelModePolicy - 1, CCommonRegistryData::m_parallelModePolicy == 1)
        || CCommonRegistryData::m_parallelModePolicy == 3 )
      {
        if ( *((_DWORD *)v3 + 7639) )
        {
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
          {
            McTemplateU0x(
              &Microsoft_Windows_Dwm_Core_Provider_Context,
              &EVTDESC_SCHEDULE_GLITCH_RECOVERY_ATTEMPT,
              *(_QWORD *)(*((_QWORD *)v3 + 3230) + 16LL));
            LODWORD(a2) = v254;
          }
        }
        else
        {
          LODWORD(a2) = 1;
          *((_DWORD *)v3 + 7639) = 1;
          v254 = 1;
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
          {
            McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_PARALLEL_MODE_Start);
            LODWORD(a2) = 1;
          }
        }
      }
    }
  }
  *(_BYTE *)(*((_QWORD *)v3 + 3230) + 1176LL) = 1;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McTemplateU0xqqq(
      v5,
      a2,
      *((_QWORD *)v3 + 3230),
      (unsigned __int8)a2,
      *((_DWORD *)v3 + 7638),
      *((_DWORD *)v3 + 7639));
  v7 = g_pDebugInspectSurface;
  v8 = *((_DWORD *)v3 + 7638);
  for ( i = v8; g_pDebugInspectSurface; v7 = g_pDebugInspectSurface )
  {
    v264 = 0LL;
    v268 = 0LL;
    if ( ((__int64 (__fastcall *)(volatile struct IUnknown *volatile, GUID *, struct ID3D11Texture2D **))v7->lpVtbl->QueryInterface)(
           v7,
           &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
           &v268) < 0 )
    {
      v198 = v264;
      v264 = 0LL;
      if ( v198 )
        (*(void (__fastcall **)(struct ID2D1Bitmap *))(*(_QWORD *)v198 + 16LL))(v198);
      if ( ((__int64 (__fastcall *)(volatile struct IUnknown *volatile, GUID *, struct ID2D1Bitmap **))v7->lpVtbl->QueryInterface)(
             v7,
             &GUID_a898a84c_3873_4588_b08b_ebbf978df041,
             &v264) >= 0 )
        DebugInspectBitmap(v264);
    }
    else
    {
      DebugInspectTexture(v268, 0);
    }
    g_pDebugInspectSurface = 0LL;
    __debugbreak();
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v264);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v268);
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 8) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_PROCESS_FRAME_Start);
  CTelemetryFrames::FrameRenderingStarted(*(_QWORD *)(*((_QWORD *)v3 + 3230) + 312LL));
  v9 = (_QWORD *)*((_QWORD *)v3 + 3230);
  v10 = v9[183];
  v11 = v9[39];
  qword_1802D68B0 = v11;
  qword_1802D68B8 = v10;
  byte_1802D68C0 = 0;
  v12 = (float)(int)v10;
  if ( v10 < 0 )
    v12 = v12 + 1.8446744e19;
  v13 = (float)(int)v11;
  if ( v11 < 0 )
    v13 = v13 + 1.8446744e19;
  v14 = 0LL;
  v15 = (float)(v12 * 0.22) + v13;
  if ( v15 >= 9.223372e18 )
  {
    v15 = v15 - 9.223372e18;
    if ( v15 < 9.223372e18 )
      v14 = 0x8000000000000000uLL;
  }
  v16 = v14 + (unsigned int)(int)v15;
  v17 = 0LL;
  qword_1802D68C8 = v16;
  v18 = (float)(v12 * 0.33000001) + v13;
  if ( v18 >= 9.223372e18 )
  {
    v18 = v18 - 9.223372e18;
    if ( v18 < 9.223372e18 )
      v17 = 0x8000000000000000uLL;
  }
  v19 = v17 + (unsigned int)(int)v18;
  v20 = 0LL;
  qword_1802D68D0 = v19;
  v21 = (float)(v12 * 0.55000001) + v13;
  if ( v21 >= 9.223372e18 )
  {
    v21 = v21 - 9.223372e18;
    if ( v21 < 9.223372e18 )
      v20 = 0x8000000000000000uLL;
  }
  v22 = v20 + (unsigned int)(int)v21;
  v23 = 0LL;
  qword_1802D68D8 = v22;
  v24 = (float)(v12 * 0.62) + v13;
  if ( v24 >= 9.223372e18 )
  {
    v24 = v24 - 9.223372e18;
    if ( v24 < 9.223372e18 )
      v23 = 0x8000000000000000uLL;
  }
  v25 = (float)(v12 * 0.68000001) + v13;
  v26 = v23 + (unsigned int)(int)v24;
  v27 = 0LL;
  qword_1802D68E0 = v26;
  if ( v25 >= 9.223372e18 )
  {
    v25 = v25 - 9.223372e18;
    if ( v25 < 9.223372e18 )
      v27 = 0x8000000000000000uLL;
  }
  qword_1802D68E8 = v27 + (unsigned int)(int)v25;
  if ( !v254 )
  {
LABEL_269:
    v160 = *((_QWORD *)v3 + 3231);
    v161 = v254;
    if ( !*(_BYTE *)(v160 + 1056) || *(_BYTE *)(v160 + 1057) )
      v6 = 0;
    v2 = v6;
    goto LABEL_273;
  }
  v28 = v9[148];
  v9[1] = v9[2] + 1LL;
  **((_QWORD **)v3 + 3230) = *(_QWORD *)(*((_QWORD *)v3 + 3230) + 8LL);
  *(_QWORD *)(*((_QWORD *)v3 + 3230) + 1184LL) = *(_QWORD *)(*((_QWORD *)v3 + 3230) + 304LL)
                                               + *(_QWORD *)(*((_QWORD *)v3 + 3230) + 1464LL);
  if ( *((_DWORD *)v3 + 7638) || *((_BYTE *)v3 + 35276) )
  {
    *(_QWORD *)(*((_QWORD *)v3 + 3230) + 1184LL) += *(_QWORD *)(*((_QWORD *)v3 + 3230) + 1464LL);
    *(_BYTE *)(*((_QWORD *)v3 + 3230) + 1192LL) = 1;
    v29 = *((_QWORD *)v3 + 3230);
    if ( !*(_BYTE *)(v29 + 1060) )
      goto LABEL_32;
    v30 = *(_DWORD *)(v29 + 108) + 2;
    goto LABEL_31;
  }
  v29 = *((_QWORD *)v3 + 3230);
  if ( *(_BYTE *)(v29 + 1060) )
  {
    v30 = *(_DWORD *)(v29 + 108) + 1;
LABEL_31:
    *(_DWORD *)(v29 + 172) = v30;
  }
LABEL_32:
  v31 = *((_QWORD *)v3 + 3230);
  v32 = v31;
  if ( *(_BYTE *)(v31 + 1060) )
  {
    v33 = 1;
    if ( *(_DWORD *)(v31 + 472) > 1u )
    {
      do
      {
        v199 = v33;
        v200 = *(_QWORD *)(v31 + 8LL * v33 + 1208);
        v201 = 32 * (v33 + 15LL);
        v202 = *(__m128i *)(v201 + v31 + 16);
        v203 = *(_OWORD *)(v201 + v31);
        v204 = _mm_cvtsi128_si32(v202);
        *(_OWORD *)lpMem = v203;
        v260 = (CDisplaySet *)v204;
        if ( v200 )
        {
          v205 = *(_QWORD *)(v31 + 1184);
          v206 = _mm_srli_si128(v202, 8).m128i_u64[0];
          v305 = v203;
          v306 = v202;
          if ( v205 > v206 )
          {
            v260 = (CDisplaySet *)((char *)v260 + (v205 - v206) / v200);
            v204 = (unsigned int)v260;
          }
        }
        if ( (v200 + (*(_QWORD *)(v31 + 1208) >> 1)) / *(_QWORD *)(v31 + 1208) < 2 )
          *(_DWORD *)(v31 + 4LL * v33 + 172) = v204;
        else
          *(_DWORD *)(v31 + 4LL * v33 + 172) = v204 + 1;
        ++v33;
        *(_DWORD *)(*((_QWORD *)v3 + 3230) + 4 * v199 + 108) = v204 + 1;
        v32 = *((_QWORD *)v3 + 3230);
        v31 = v32;
      }
      while ( v33 < *(_DWORD *)(v32 + 472) );
    }
  }
  v34 = *(_DWORD *)(v32 + 96);
  memset_0(v320, 0, 0x100uLL);
  v36 = 0;
  if ( v34 )
  {
    v37 = (__int64 *)(v32 + 1208);
    v38 = (int *)(v32 + 172);
    v35 = &v321;
    do
    {
      if ( v36 >= 0x10 )
        break;
      ++v36;
      *((_DWORD *)v35 - 1) = *(v38 - 16);
      v39 = *v38++;
      *(_DWORD *)v35 = v39;
      v40 = *v37++;
      *(_QWORD *)(v35 + 4) = v40;
      v35 += 16;
    }
    while ( v36 < v34 );
  }
  v41 = Microsoft_Windows_Dwm_CoreEnableBits;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    McTemplateU0qNR0((_DWORD)v35, (unsigned int)&EVTDESC_SCHEDULE_FRAME_VSYNCDEADLINES, v34, 16, (__int64)v320);
    v41 = Microsoft_Windows_Dwm_CoreEnableBits;
  }
  v42 = *(_QWORD *)(*((_QWORD *)v3 + 3230) + 1184LL);
  v43 = *(_QWORD *)(*((_QWORD *)v3 + 3231) + 1184LL);
  if ( v42 < v43 )
  {
    if ( v42 >= v28 )
    {
      if ( (v41 & 0x10) == 0 )
        goto LABEL_316;
LABEL_394:
      McTemplateU0x(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_SCHEDULE_TIMEADJUSTED_BETWEENFRAMES,
        v43 - v42);
      goto LABEL_316;
    }
  }
  else if ( v42 >= v28 )
  {
    goto LABEL_42;
  }
  if ( (v41 & 0x10) != 0 )
  {
    v43 = v28;
    goto LABEL_394;
  }
LABEL_316:
  v178 = *(_QWORD *)(*((_QWORD *)v3 + 3231) + 1184LL);
  if ( v178 <= v28 )
    v178 = v28;
  *(_QWORD *)(*((_QWORD *)v3 + 3230) + 1184LL) = v178;
LABEL_42:
  CPartitionVerticalBlankScheduler::UpdateDwmTimingInfo(v3);
  v44 = *((_BYTE *)v3 + 26180);
  v45 = *((_QWORD *)v3 + 3230);
  v279 = 0LL;
  v280 = 0;
  *(_OWORD *)v278 = 0LL;
  if ( v44 )
  {
    *(_DWORD *)(v45 + 96) = 0;
    v44 = *((_BYTE *)v3 + 26180);
  }
  v276 = v44;
  v46 = *((_BYTE *)v3 + 26182);
  v274[0] = v45;
  *((_BYTE *)v3 + 26182) = 0;
  v275 = 1;
  v274[1] = (char *)v3 + 25864;
  v277 = v46;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_RENDER_Start);
  v47 = *((_QWORD *)v3 + 9);
  v262 = *(_BYTE *)(*((_QWORD *)v3 + 3230) + 1056LL);
  v263 = (CComposition *)v47;
  *(_QWORD *)(v47 + 376) = v274;
  *(_DWORD *)(v47 + 1192) = 0;
  if ( *(_DWORD *)(v47 + 368) == 1 )
    v276 = 1;
  v255 = 0;
  v260 = 0LL;
  v48 = 0LL;
  v257 = 0;
  v256 = 0;
  v261 = 0;
  EnterCriticalSection(&g_DisplayManager);
  v49 = qword_1802D6430;
  if ( qword_1802D6430
    && (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)qword_1802D6430 + 2) + 104LL))(*((_QWORD *)qword_1802D6430
                                                                                             + 2))
    && (unsigned int)DrvQueryAdapterPopulationUniqueness() == *((_DWORD *)v49 + 14)
    && qword_1802D6430 == v49 )
  {
    v50 = v261;
  }
  else
  {
LABEL_348:
    v50 = -2003304291;
    v185 = 0;
    v261 = -2003304291;
    while ( v50 == -2003304291 )
    {
      v189 = 10 * v185 * v185;
      if ( v189 )
      {
        LeaveCriticalSection(&g_DisplayManager);
        Sleep(v189);
        EnterCriticalSection(&g_DisplayManager);
      }
      v190 = CDisplayManager::EnsureDXGIEnumeration(&g_DisplayManager, 0LL);
      ++v185;
      v261 = v190;
      v50 = v190;
      if ( v185 >= 0xA )
      {
        if ( v190 == -2003304291 )
        {
          AdapterPopulationUniqueness = DrvQueryAdapterPopulationUniqueness();
          if ( dword_1802D3FA0 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1802D3FA0, 0x400000000000uLL) )
          {
            v312 = 4LL;
            v311 = &v261;
            p_AdapterPopulationUniqueness = &AdapterPopulationUniqueness;
            v313 = &gDwmCoreTelemetryActivityId;
            v314 = 16LL;
            v316 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_1802D3FA0, &unk_1802A9A3F, 0LL, 0LL, 5u, &pData);
          }
          v50 = -2003304442;
          v261 = -2003304442;
          goto LABEL_351;
        }
        break;
      }
    }
    if ( v50 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v50, 0x6Au);
      goto LABEL_355;
    }
LABEL_351:
    v186 = qword_1802D6430;
    v187 = 0;
    v271 = 0;
    if ( !*((_DWORD *)qword_1802D6430 + 22) )
      goto LABEL_53;
    do
    {
      KMTDriverUpdateStatus = CDXGIAdapterLimited::GetKMTDriverUpdateStatus(
                                *(CDXGIAdapterLimited **)(*((_QWORD *)v186 + 8) + 8LL * v187),
                                &v271);
      if ( KMTDriverUpdateStatus < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, KMTDriverUpdateStatus, 0xB8u);
      }
      else if ( v271 )
      {
        goto LABEL_348;
      }
      ++v187;
    }
    while ( v187 < *((_DWORD *)v186 + 22) );
LABEL_355:
    v50 = v261;
  }
LABEL_53:
  v51 = qword_1802D6430;
  if ( qword_1802D6430 )
  {
    (**(void (__fastcall ***)(CDXGIEnumeration *))qword_1802D6430)(qword_1802D6430);
    v50 = v261;
  }
  LeaveCriticalSection(&g_DisplayManager);
  if ( v50 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v50, 0x82u);
  }
  else
  {
    v52 = qword_1802D6428;
    if ( !qword_1802D6428 )
      goto LABEL_339;
    if ( GdiEntry13() == *((_DWORD *)v52 + 1)
      && (unsigned int)DrvQueryPrivateDisplayChangeUniqueness() == *((_DWORD *)v52 + 2) )
    {
      LOBYTE(v48) = 1;
    }
    v53 = *((_DWORD *)v52 + 3) == dword_1802D644C;
    v54 = *((_QWORD *)v52 + 2);
    v55 = v54
       && (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(v54 + 16) + 104LL))(*(_QWORD *)(v54 + 16))
       && (unsigned int)DrvQueryAdapterPopulationUniqueness() == *(_DWORD *)(v54 + 56)
       && qword_1802D6430 == (CDXGIEnumeration *)v54;
    if ( (_BYTE)v48 && v53 && v55 )
    {
      v48 = v260;
    }
    else
    {
LABEL_339:
      v184 = CDisplayManager::DeriveCurrentDisplaySet(
               &g_DisplayManager,
               v51,
               &v260,
               (enum DisplayStateComparison::Enum *)&v257);
      v50 = v184;
      if ( v184 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v184, 0x90u);
        if ( dword_1802D6438 >= 0
          && dword_1802D3FA0 > 5u
          && TlgKeywordOn((TraceLoggingHProvider)&dword_1802D3FA0, 0x400000000000uLL) )
        {
          v319 = 16LL;
          v318 = &gDwmCoreTelemetryActivityId;
          TlgWrite((TraceLoggingHProvider)&dword_1802D3FA0, &unk_1802A9A9E, 0LL, 0LL, 3u, &v317);
        }
        v48 = v260;
        dword_1802D6438 = v50;
      }
      else
      {
        dword_1802D6438 = v184;
        v256 = 1;
        v291 = &g_DisplayManager;
        EnterCriticalSection(&g_DisplayManager);
        if ( qword_1802D6428 )
          CDisplaySet::Release(qword_1802D6428);
        v48 = v260;
        qword_1802D6428 = v260;
        if ( v260 )
        {
          _InterlockedIncrement((volatile signed __int32 *)v260);
          v48 = v260;
        }
        CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v291);
      }
    }
  }
  v56 = 0;
  v265 = v257;
  v57 = &unk_1802A5570;
  while ( *v57 != v50 )
  {
    ++v56;
    ++v57;
    if ( v56 >= 9 )
    {
      if ( v50 < 0 && v50 != -2003304442 && v50 != -2003304307 )
        MilUnexpectedError(v50, L"Could not create display set.");
      goto LABEL_73;
    }
  }
  if ( v50 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v50, 0xC3u);
LABEL_73:
  if ( v48 )
    CDisplaySet::Release(v48);
  if ( v51 )
  {
    v58 = *(__int64 (__fastcall **)(CMILRefCountBase *))(*(_QWORD *)v51 + 8LL);
    if ( v58 == CMILRefCountBase::Release )
      CMILRefCountBase::Release(v51);
    else
      v58(v51);
  }
  if ( v50 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v50, 0x257u);
  v59 = qword_1802D6428;
  if ( qword_1802D6428 )
  {
    v60 = 0;
    if ( *((_DWORD *)qword_1802D6428 + 18) )
    {
      while ( 1 )
      {
        v61 = *(_QWORD *)(*((_QWORD *)v59 + 6) + 8LL * v60);
        v62 = *(_QWORD *)(v61 + 40);
        if ( v62 )
        {
          if ( *(_BYTE *)(v61 + 328) != ((*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v62 + 24LL))(v62) != 0) )
            break;
        }
        if ( ++v60 >= *((_DWORD *)v59 + 18) )
          goto LABEL_85;
      }
      v207 = v265;
      if ( !v257 )
        v207 = 2;
      v265 = v207;
    }
  }
LABEL_85:
  if ( v50 >= 0 )
  {
    v50 = 0;
    v63 = 0;
    v64 = *((_QWORD *)v263 + 9);
    if ( !*(_DWORD *)(v64 + 80) )
      goto LABEL_115;
    while ( 1 )
    {
      v65 = *(CDesktopRenderTarget **)(*(_QWORD *)(v64 + 56) + 8LL * v63);
      v66 = *(bool (__fastcall **)(CDesktopRenderTarget *))(*(_QWORD *)v65 + 264LL);
      v67 = v66 == CDesktopRenderTarget::HasPrimary ? CDesktopRenderTarget::HasPrimary(v65) : ((__int64 (*)(void))v66)();
      if ( v67 )
        break;
      if ( ++v63 >= *(_DWORD *)(v64 + 80) )
        goto LABEL_115;
    }
    v68 = *(CDesktopRenderTarget **)(*(_QWORD *)(v64 + 56) + 8LL * v63);
    if ( !v68 )
      goto LABEL_115;
    v69 = 0LL;
    EnterCriticalSection(&g_DisplayManager);
    v70 = 0;
    EnterCriticalSection(&g_DisplayManager);
    v72 = qword_1802D6430;
    if ( !qword_1802D6430 )
      goto LABEL_420;
    if ( !(*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)qword_1802D6430 + 2) + 104LL))(*((_QWORD *)qword_1802D6430
                                                                                                + 2))
      || (unsigned int)DrvQueryAdapterPopulationUniqueness() != *((_DWORD *)v72 + 14)
      || qword_1802D6430 != v72 )
    {
      ReleaseInterface<CD3DSurface>((__int64 *)&qword_1802D6430);
      v70 = 1;
    }
    if ( !qword_1802D6430 )
    {
LABEL_420:
      D3DObjects = CD3DModuleLoaderInternal::CreateD3DObjects(v71, &qword_1802D6430);
      TranslateDXGIorD3DErrorInContext(D3DObjects, 4, &D3DObjects);
      v50 = D3DObjects;
      if ( D3DObjects < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802773D0, 1u, D3DObjects, 0x128u);
    }
    if ( v70 && qword_1802D6440 )
      CSurfaceManager::ResetTokenThread(qword_1802D6440);
    v73 = qword_1802D6430;
    if ( qword_1802D6430 )
      (**(void (__fastcall ***)(CDXGIEnumeration *))qword_1802D6430)(qword_1802D6430);
    LeaveCriticalSection(&g_DisplayManager);
    if ( v50 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v50, 0xEAu);
      goto LABEL_102;
    }
    if ( !qword_1802D6428 )
    {
      v267 = 0LL;
      LeaveCriticalSection(&g_DisplayManager);
      v208 = CDisplayManager::DeriveCurrentDisplaySet(&g_DisplayManager, v73, &v267, 0LL);
      v50 = v208;
      if ( v208 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v208, 0xF8u);
        EnterCriticalSection(&g_DisplayManager);
        goto LABEL_102;
      }
      EnterCriticalSection(&g_DisplayManager);
      if ( qword_1802D6428 )
      {
        if ( v267 )
          CDisplaySet::Release(v267);
      }
      else
      {
        qword_1802D6428 = v267;
        if ( v267 )
          _InterlockedIncrement((volatile signed __int32 *)v267);
      }
    }
    _InterlockedIncrement((volatile signed __int32 *)qword_1802D6428);
    v69 = qword_1802D6428;
LABEL_102:
    if ( v73 )
    {
      v74 = *(__int64 (__fastcall **)(CMILRefCountBase *))(*(_QWORD *)v73 + 8LL);
      if ( v74 == CMILRefCountBase::Release )
        CMILRefCountBase::Release(v73);
      else
        v74(v73);
    }
    LeaveCriticalSection(&g_DisplayManager);
    if ( v50 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v50, 0xD9u);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v50, 0xDB1u);
    }
    else
    {
      LOBYTE(v75) = (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)v69 + 2) + 48LL) + 24LL))(*(_QWORD *)(*((_QWORD *)v69 + 2) + 48LL))
                 && *((_DWORD *)v263 + 71);
      v76 = *(bool (__fastcall **)(CDesktopRenderTarget *, char))(*(_QWORD *)v68 + 248LL);
      if ( v76 == CDesktopRenderTarget::NeedsStereoChange )
        v77 = CDesktopRenderTarget::NeedsStereoChange(v68, v75);
      else
        v77 = v76(v68, v75);
      if ( v77 )
        (*(void (__fastcall **)(CDesktopRenderTarget *))(*(_QWORD *)v68 + 256LL))(v68);
    }
    if ( v69 && _InterlockedExchangeAdd((volatile signed __int32 *)v69, 0xFFFFFFFF) == 1 )
    {
      CDisplaySet::~CDisplaySet(v69);
      operator delete(v69);
    }
LABEL_115:
    if ( v50 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v50, 0x26Bu);
  }
  if ( v265 == 2 )
  {
    v209 = 0;
    v210 = 0;
    v211 = *((_QWORD *)v263 + 9);
    if ( *(_DWORD *)(v211 + 80) )
    {
      while ( 1 )
      {
        v212 = *(_QWORD *)(*(_QWORD *)(v211 + 56) + 8LL * v210);
        v213 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v212 + 240LL))(v212);
        v209 = v213;
        if ( v213 < 0 )
          break;
        if ( ++v210 >= *(_DWORD *)(v211 + 80) )
          goto LABEL_441;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v213, 0x302u);
LABEL_441:
      if ( v209 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v209, 0x279u);
    }
    if ( !v50 || v50 >= 0 && v209 < 0 )
      v50 = v209;
  }
  else if ( v265 == 3 )
  {
    v78 = (RTL_SRWLOCK *)v263;
    CRenderTargetManager::ReleaseResourcesForDisplayChange(*((CRenderTargetManager **)v263 + 9));
    goto LABEL_121;
  }
  v78 = (RTL_SRWLOCK *)v263;
  if ( v256 )
    CRenderTargetManager::UpdateMPOCaps(*((CRenderTargetManager **)v263 + 9));
LABEL_121:
  if ( v50 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180240FD0, 3u, v50, 0x2C2u);
  v79 = v50 == -2003304442 || v50 == -2003304291;
  if ( CComposition::s_cRenderFailures > 0xA )
  {
    v80 = 1;
    v259 = 1;
    TriggerFailFastOnNextFailure(1);
  }
  else
  {
    v80 = 0;
    v259 = 0;
  }
  v81 = (__int64 (__fastcall *)(RTL_SRWLOCK *, bool *))*((_QWORD *)v78->Ptr + 3);
  if ( v81 == CCrossThreadComposition::PreRender )
    v82 = CCrossThreadComposition::PreRender(v78, &v255);
  else
    v82 = v81(v78, &v255);
  v83 = v82;
  if ( v82 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180240FD0, 3u, v82, 0x2DCu);
  if ( v83 == -2003304442 || v83 == -2003304291 || v79 )
  {
    Ptr = v78[9].Ptr;
    v4 = 0;
    v257 = 0;
    v169 = 0;
    if ( *((_DWORD *)Ptr + 20) )
    {
      do
      {
        v170 = *(_QWORD *)(Ptr[7] + 8LL * v169);
        v171 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v170 + 168LL))(v170);
        v172 = v171;
        if ( v171 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v171, 0x98u);
        if ( !v4 || v4 >= 0 && v172 < 0 )
          v4 = v172;
        ++v169;
      }
      while ( v169 < *((_DWORD *)Ptr + 20) );
      v257 = v4;
    }
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180240FD0, 3u, v4, 0x2E8u);
      if ( !v80 )
        goto LABEL_290;
    }
    else if ( !v80 )
    {
LABEL_290:
      v84 = v263;
      v114 = 0;
      goto LABEL_291;
    }
    g_dwFailFastForThreadId = 0;
    goto LABEL_290;
  }
  v84 = v263;
  v85 = v255;
  v256 = 0;
  v86 = *(_QWORD *)(*((_QWORD *)v263 + 18) + 32LL);
  if ( v86 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v86 + 48LL))(v86);
  v87 = 0;
  v88 = 0;
  if ( *((_DWORD *)v84 + 174) )
  {
    while ( 1 )
    {
      v214 = CCachedVisualImage::PerformDelayedSnapshot(*(CCachedVisualImage **)(*((_QWORD *)v84 + 84) + 8LL * v88));
      v87 = v214;
      if ( v214 < 0 )
        break;
      if ( ++v88 >= *((_DWORD *)v84 + 174) )
        goto LABEL_138;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v214, 0xAF4u);
  }
LABEL_138:
  *((_DWORD *)v84 + 174) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)v84 + 672, 8LL);
  if ( v87 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180240F48, 2u, v87, 0x3DCu);
    goto LABEL_178;
  }
  v87 = v83;
  if ( v83 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180240F48, 2u, v83, 0x3DFu);
    goto LABEL_178;
  }
  if ( v85 )
  {
    if ( !v83 )
      v87 = 142213121;
    goto LABEL_178;
  }
  v90 = (CDisplaySet *)*((_QWORD *)v84 + 9);
  v260 = v90;
  v91 = 0;
  v256 = 0;
  *(_OWORD *)lpMem = 0LL;
  v92 = *((_DWORD *)v90 + 12);
  v289 = 0LL;
  v290 = 0;
  v295 = 0LL;
  v296 = 0;
  *(_OWORD *)v294 = 0LL;
  if ( !v92 )
  {
LABEL_150:
    v99 = COverlayContext::ComputeOverlayConfiguration(lpMem, v294);
    v87 = v99;
    if ( v99 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v99, 0x13Au);
    goto LABEL_152;
  }
  v93 = 0LL;
  while ( 1 )
  {
    v94 = *(CPlaneCaptureRenderTargetEngine **)(v93 + *((_QWORD *)v90 + 3));
    v95 = *(_QWORD *)v94;
    v96 = *(__int64 (__fastcall **)(CPlaneCaptureRenderTargetEngine *, __int64))(*(_QWORD *)v94 + 48LL);
    if ( (char *)v96 == (char *)CHwndRenderTarget::IsOfType )
    {
      v97 = CHwndRenderTarget::IsOfType(v94, 76LL);
    }
    else
    {
      v97 = v96(v94, 76LL);
      v95 = *(_QWORD *)v94;
    }
    if ( v97 )
      break;
    if ( (*(unsigned __int8 (__fastcall **)(CPlaneCaptureRenderTargetEngine *, __int64))(v95 + 48))(v94, 103LL) )
    {
      if ( CPlaneCaptureRenderTargetEngine::GetReservedPlaneInfo(v94, (struct COverlayContext::ReservedPlaneInfo *)v309) >= 0 )
      {
        v215 = DynArray<COverlayContext::ReservedPlaneInfo,0>::AddMultipleAndSet(v294, v309);
        v87 = v215;
        if ( v215 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v215, 0x134u);
          goto LABEL_458;
        }
      }
    }
LABEL_149:
    v90 = v260;
    ++v91;
    v93 += 8LL;
    if ( v91 >= v92 )
      goto LABEL_150;
  }
  if ( (*(unsigned __int8 (__fastcall **)(CPlaneCaptureRenderTargetEngine *))(v95 + 216))(v94) )
    goto LABEL_149;
  v292 = *((_QWORD *)v94 + 105);
  if ( !v292 )
    goto LABEL_149;
  v98 = DynArray<COverlayContext *,0>::AddMultipleAndSet(lpMem, &v292);
  v87 = v98;
  if ( v98 >= 0 )
    goto LABEL_149;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v98, 0x129u);
LABEL_458:
  v90 = v260;
LABEL_152:
  if ( v294[0] != v294[1] )
    operator delete(v294[0]);
  v89 = lpMem[0];
  if ( lpMem[0] != lpMem[1] && lpMem[0] )
    HeapFree(WPF::g_processHeap, 0, lpMem[0]);
  if ( v87 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180240F48, 2u, v87, 0xD7u);
  }
  else
  {
    v100 = 0;
    if ( *((_DWORD *)v90 + 12) )
    {
      do
      {
        v101 = *(_QWORD *)(*((_QWORD *)v90 + 3) + 8LL * v100);
        v258 = 0;
        v102 = *(CVisualGroup **)(v101 + 128);
        if ( v102 )
          CVisualGroup::SetExcludeSubtree(v102, 1);
        v103 = (CHwndRenderTarget *)(v101 + 64);
        v104 = *(__int64 (__fastcall **)(CHwndRenderTarget *__hidden, bool *))(*(_QWORD *)(v101 + 64) + 56LL);
        if ( v104 == CHwndRenderTarget::Render )
          v105 = CHwndRenderTarget::Render(v103, &v258);
        else
          v105 = v104(v103, &v258);
        v106 = v105;
        if ( v105 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180240F48, 2u, v105, 0xE0u);
        v107 = *(CVisualGroup **)(v101 + 128);
        if ( v107 )
          CVisualGroup::SetExcludeSubtree(v107, 0);
        if ( v106 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180240F48, 2u, v106, 0xE8u);
        }
        else if ( v258 )
        {
          v256 = 1;
        }
        if ( !v87 || v87 >= 0 && v106 < 0 )
          v87 = v106;
        v90 = v260;
        ++v100;
      }
      while ( v100 < *((_DWORD *)v260 + 12) );
    }
  }
  if ( !*((_DWORD *)v90 + 24) )
    *(_WORD *)((char *)v90 + 113) = 0;
  if ( v87 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180240F48, 2u, v87, 0x3E4u);
  v84 = v263;
LABEL_178:
  v108 = *(_QWORD *)(*((_QWORD *)v84 + 18) + 32LL);
  if ( v108 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v108 + 56LL))(v108);
  CComposition::ProcessRenderingStatus((struct _RTL_CRITICAL_SECTION *)v84, v87, (__int64)v89);
  if ( v87 < 0 )
  {
    if ( CComposition::s_cRenderFailures > 0xA )
      ModuleFailFastForHRESULT((unsigned int)v87, retaddr);
    v216 = CComposition::s_cRenderFailures + 2;
  }
  else
  {
    if ( !CComposition::s_cRenderFailures )
      goto LABEL_182;
    v216 = CComposition::s_cRenderFailures - 1;
  }
  CComposition::s_cRenderFailures = v216;
LABEL_182:
  if ( v87 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180240FD0, 3u, v87, 0x2F0u);
  if ( v259 )
    TriggerFailFastOnNextFailure(0);
  v110 = *(__int64 (__fastcall **)(CCrossThreadComposition *, unsigned __int8, __int64))(*(_QWORD *)v84 + 32LL);
  if ( v110 == CCrossThreadComposition::PostRender )
    v111 = CCrossThreadComposition::PostRender(v84, v255, v109);
  else
    v111 = ((__int64 (__fastcall *)(CComposition *, bool))v110)(v84, v255);
  v257 = v111;
  v4 = v111;
  if ( v111 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180240FD0, 3u, v111, 0x2F5u);
  }
  else if ( v255 )
  {
    v4 = 142213121;
    v257 = 142213121;
  }
  v114 = v256;
  if ( !v256 )
  {
LABEL_291:
    v173 = CComposition::ProcessPostPresent(v84, 1);
    v174 = v173;
    if ( v173 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180240FD0, 3u, v173, 0x307u);
    if ( v4 )
    {
      if ( v4 < 0 )
        goto LABEL_478;
      if ( v174 >= 0 )
        goto LABEL_192;
    }
    v4 = v174;
    v257 = v174;
  }
LABEL_192:
  if ( v4 < 0 )
  {
LABEL_478:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180240F48, 2u, v4, 0x38Au);
    v115 = v262;
    goto LABEL_195;
  }
  if ( CDebugVisualRenderer::s_fEnableDebug )
  {
    if ( !CDebugVisualRenderer::s_pVisual )
    {
      PrimaryDesktopRenderTargetNoRef = CRenderTargetManager::GetPrimaryDesktopRenderTargetNoRef(*((CRenderTargetManager **)v84
                                                                                                 + 9));
      if ( PrimaryDesktopRenderTargetNoRef )
        v218 = (__int64)PrimaryDesktopRenderTargetNoRef - 48;
      else
        v218 = 120LL;
      CDebugVisualRenderer::s_pVisual = *(CVisual **)(*(_QWORD *)v218 + 24LL);
    }
    CDebugVisualRenderer::RenderVisual(v84, v112);
  }
  v115 = v114;
LABEL_195:
  *((_QWORD *)v84 + 47) = 0LL;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x45Fu);
  }
  else if ( v4 != 142213121 )
  {
    v4 = 0;
    v257 = 0;
  }
  *(_BYTE *)(*((_QWORD *)v3 + 3230) + 1056LL) = v115;
  v116 = v276 | *((_BYTE *)v3 + 26180);
  *((_BYTE *)v3 + 26180) = v116;
  if ( v4 == 142213121 )
  {
    v4 = 0;
    v257 = 0;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    {
      McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_DXGI_STATUS_OCCLUDED);
      v116 = *((_BYTE *)v3 + 26180);
    }
  }
  if ( v116 )
    *((_BYTE *)v3 + 26181) = *(_DWORD *)(*((_QWORD *)v3 + 9) + 368LL) == 0;
  if ( v4 < 0 )
    goto LABEL_496;
  v117 = *((_QWORD *)v3 + 3230);
  if ( !*(_BYTE *)(v117 + 1056) || *(_BYTE *)(v117 + 1057) )
  {
    v175 = *((_QWORD *)v3 + 9);
    if ( !*(_QWORD *)(*(_QWORD *)(v175 + 80) + 304LL) )
    {
      if ( *(_DWORD *)(v175 + 424) )
      {
        v179 = 0LL;
        v180 = *(unsigned int *)(v175 + 424);
        do
        {
          v181 = *(_QWORD *)(v175 + 400);
          v297 = 1;
          v182 = *(CChannelContext **)(v179 + v181);
          v298 = 0LL;
          v299 = 0LL;
          v300 = 0LL;
          v183 = CChannelContext::PostMessageToChannel(v182, (const struct MIL_MESSAGE *)&v297, v113);
          if ( v183 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v183, 0x7Cu);
          CMILRefCountBase::Release(v182);
          v179 += 8LL;
          --v180;
        }
        while ( v180 );
        v4 = v257;
      }
      *(_DWORD *)(v175 + 424) = 0;
      DynArrayImpl<1>::ShrinkToSize(v175 + 400, 8LL);
    }
  }
  v118 = *((_QWORD *)v3 + 3230);
  v119 = *(_BYTE *)(v118 + 1056) && !*(_BYTE *)(v118 + 1057);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0d(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_RENDER_Stop, v119);
  if ( v4 < 0 )
  {
LABEL_496:
    cData = 989;
    goto LABEL_497;
  }
  v120 = (unsigned __int64 *)((char *)v3 + 35312);
  v121 = (unsigned __int64 *)((char *)v3 + 35296);
  v122 = *((_QWORD *)v3 + 4412);
  v123 = ((_QWORD)v3 + 35312) << 32;
  v124 = v123 | ((unsigned __int64)v3 + 35312);
  if ( (v122 ^ v124) != *((_QWORD *)v3 + 4414) )
  {
    memset_0(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    pExceptionRecord.ExceptionCode = -2003304320;
    v219 = *v120 ^ ((unsigned __int64)v120 | v123);
    pExceptionRecord.NumberParameters = 4;
    pExceptionRecord.ExceptionInformation[0] = SHIDWORD(v122);
    pExceptionRecord.ExceptionInformation[1] = (unsigned int)v122;
    pExceptionRecord.ExceptionInformation[2] = SHIDWORD(v219);
    pExceptionRecord.ExceptionInformation[3] = (unsigned int)v219;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
    v122 = *((_QWORD *)v3 + 4412);
  }
  *((_QWORD *)v3 + 4413) = v122;
  QueryPerformanceCounter((LARGE_INTEGER *)v3 + 4412);
  v125 = *v121;
  v126 = *((_QWORD *)v3 + 4413);
  if ( *v121 < v126 )
  {
    memset_0(&v307, 0, sizeof(v307));
    v307.ExceptionCode = -2003304293;
    v307.ExceptionInformation[0] = SHIDWORD(v125);
    v307.ExceptionInformation[1] = (unsigned int)v125;
    v307.ExceptionInformation[2] = SHIDWORD(v126);
    v220 = (unsigned int)v126;
    v221 = v126 - v125;
    v307.ExceptionInformation[3] = v220;
    v307.ExceptionInformation[4] = g_qpcFrequency.HighPart;
    v307.ExceptionInformation[5] = g_qpcFrequency.LowPart;
    v307.NumberParameters = 8;
    v307.ExceptionInformation[6] = (int)((1000 * v221 / g_qpcFrequency.QuadPart) >> 32);
    v307.ExceptionInformation[7] = (unsigned int)(1000 * v221 / g_qpcFrequency.QuadPart);
    RaiseFailFastException(&v307, 0LL, 0);
    v125 = *((_QWORD *)v3 + 4412);
  }
  *v120 = v125 ^ v124;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    v222 = ConvertTime(v125 - *((_QWORD *)v3 + 4411), g_qpcFrequency.QuadPart, 0x989680uLL);
    v224 = ConvertTime(v125, g_qpcFrequency.QuadPart, v223);
    McTemplateU0xxxxx(
      v225,
      (unsigned int)&EVTDESC_SCHEDULE_TIME,
      v224,
      v222,
      v125,
      *((_QWORD *)v3 + 4413),
      *((_QWORD *)v3 + 4410));
    v125 = *((_QWORD *)v3 + 4412);
  }
  *(_QWORD *)(*((_QWORD *)v3 + 3230) + 320LL) = v125;
  if ( !*((_BYTE *)v3 + 35276)
    || !CFrameInfo::NeedsPresent(*((CFrameInfo **)v3 + 3230))
    || (v227 = v226[31],
        v226[75].m128i_i8[1] = 1,
        CRenderTargetManager::SetPrimaryVsyncPresentWaitTarget(
          *(CRenderTargetManager **)(*((_QWORD *)v3 + 9) + 72LL),
          _mm_cvtsi128_si32(v227) + 1) >= 0) )
  {
LABEL_217:
    v127 = v278[0];
    v4 = 0;
    v128 = *((_QWORD *)v3 + 3230) + 1080LL;
    v257 = 0;
    v278[0] = *(void **)v128;
    v129 = *(_DWORD *)(v128 + 20);
    *(_QWORD *)v128 = v127;
    LODWORD(v127) = HIDWORD(v279);
    HIDWORD(v279) = v129;
    v130 = *(_DWORD *)(v128 + 24);
    *(_DWORD *)(v128 + 20) = (_DWORD)v127;
    LODWORD(v127) = v280;
    v280 = v130;
    *(_DWORD *)(v128 + 24) = (_DWORD)v127;
    v131 = *((_QWORD *)v3 + 3230);
    AdapterPopulationUniqueness = *((_DWORD *)v3 + 6456);
    if ( *(_BYTE *)(v131 + 1056) && !*(_BYTE *)(v131 + 1057) )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      {
        QuadPart = g_qpcFrequency.QuadPart;
        v230 = *(_QWORD *)(v131 + 8) - 1LL;
        v231 = ConvertTime(*(_QWORD *)(v131 + 1464), g_qpcFrequency.QuadPart, 0x989680uLL);
        v233 = ConvertTime(*(_QWORD *)(v131 + 1184), QuadPart, v232) - v231;
        v235 = ConvertTime(*((_QWORD *)v3 + 4412), QuadPart, v234);
        McTemplateU0xxxxq(*(_QWORD *)(v131 + 16), v236, v235, v233, *(_QWORD *)(v131 + 16), v230);
        v121 = (unsigned __int64 *)((char *)v3 + 35296);
      }
      v132 = *((_BYTE *)v3 + 26180);
      v286 = 0LL;
      v287 = 0;
      *(_OWORD *)v285 = 0LL;
      if ( v132 )
      {
        *(_DWORD *)(v131 + 96) = 0;
        v132 = *((_BYTE *)v3 + 26180);
      }
      v283 = v132;
      v133 = *((_BYTE *)v3 + 26182);
      v281[1] = (char *)v3 + 25864;
      v134 = (CComposition *)*((_QWORD *)v3 + 9);
      v281[0] = v131;
      v282 = 1;
      v284 = v133;
      v135 = CComposition::Present(v134, (struct FRAME_TIME_INFO *)v281);
      v257 = v135;
      v4 = v135;
      if ( v135 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v135, 0x2E5u);
      *((_BYTE *)v3 + 26180) |= v283;
      if ( v4 >= 0 )
      {
        *(_BYTE *)(v131 + 1057) = 1;
        ++*((_DWORD *)v3 + 7638);
        if ( *(_BYTE *)(v131 + 1057) )
        {
          v137 = *((_QWORD *)v3 + 9);
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
            McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_GETPRESENTCOUNT_Start);
          v138 = *(CRenderTargetManager **)(v137 + 72);
          v269 = 16;
          LastPresentCount = CRenderTargetManager::GetLastPresentCount(v138, &v269, (unsigned int *)(v131 + 32));
          v143 = LastPresentCount;
          if ( LastPresentCount < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18023A090, 1u, LastPresentCount, 0xC82u);
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18023A090, 1u, v143, 0x56u);
          }
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
            McTemplateU0qN16(v141, v140, v269, v142, v131 + 32);
        }
        *((_DWORD *)v3 + 6458) = AdapterPopulationUniqueness;
        *(_QWORD *)(v131 + 328) = *v121;
        v144 = *((_QWORD *)v3 + 9);
        if ( !*(_QWORD *)(*(_QWORD *)(v144 + 80) + 304LL) )
        {
          if ( *(_DWORD *)(v144 + 424) )
          {
            v191 = 0LL;
            v192 = *(unsigned int *)(v144 + 424);
            do
            {
              v193 = *(_QWORD *)(v144 + 400);
              v301 = 1;
              v194 = *(CChannelContext **)(v191 + v193);
              v302 = 0LL;
              v303 = 0LL;
              v304 = 0LL;
              v195 = CChannelContext::PostMessageToChannel(v194, (const struct MIL_MESSAGE *)&v301, v136);
              if ( v195 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v195, 0x7Cu);
              CMILRefCountBase::Release(v194);
              v191 += 8LL;
              --v192;
            }
            while ( v192 );
          }
          *(_DWORD *)(v144 + 424) = 0;
          DynArrayImpl<1>::ShrinkToSize(v144 + 400, 8LL);
        }
        ++*((_QWORD *)v3 + 4410);
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
          McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_PRESENT_Stop);
      }
      for ( j = 0; j < v287; ++j )
        operator delete(*((void **)v285[0] + j));
      v287 = 0;
      DynArrayImpl<0>::ShrinkToSize(v285, 8LL);
      if ( v285[0] != v285[1] )
        operator delete(v285[0]);
    }
    if ( v4 >= 0 )
      goto LABEL_242;
    cData = 1038;
LABEL_497:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, cData);
    goto LABEL_242;
  }
  CD3DDeviceManager::FlushAllDevices((CD3DDeviceManager *)&g_D3DDeviceManager);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McTemplateU0(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SCHEDULE_PARALLEL_MODE_WAITING_FOR_NEXT_VSYNC_Start);
  FrameStart = CPartitionVerticalBlankScheduler::WaitForNextFrameStart(v3, 1);
  v257 = FrameStart;
  v4 = FrameStart;
  if ( FrameStart >= 0 )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
      McTemplateU0(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_SCHEDULE_PARALLEL_MODE_WAITING_FOR_NEXT_VSYNC_Stop);
    goto LABEL_217;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, FrameStart, 0x401u);
LABEL_242:
  v146 = *(void **)(*((_QWORD *)v3 + 7) + 152LL);
  if ( v146 )
    PulseEvent(v146);
  if ( v4 >= 0 )
  {
    v147 = *((_QWORD *)v3 + 3230);
    if ( *(_BYTE *)(v147 + 1056) && !*(_BYTE *)(v147 + 1057) )
      CPartitionVerticalBlankScheduler::ScheduleCompositionPass((__int64)v3, 0, 2u);
    CPartitionVerticalBlankScheduler::UpdateDwmTimingInfo(v3);
    v148 = *((_QWORD *)v3 + 3231);
    v149 = *((_QWORD *)v3 + 3230);
    v267 = (CDisplaySet *)v149;
    v150 = *(_QWORD *)(v148 + 304);
    if ( v150 )
      v151 = (CDisplaySet *)(*(_QWORD *)(v149 + 304) - v150);
    else
      v151 = *(CDisplaySet **)(v149 + 1464);
    v260 = v151;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 1) != 0 )
    {
      v237 = g_qpcFrequency.QuadPart;
      v238 = (CComposition *)ConvertTime(*(_QWORD *)(v149 + 312), g_qpcFrequency.QuadPart, 0x989680uLL);
      v239 = *(_QWORD *)(v149 + 320);
      v263 = v238;
      v241 = (struct ID2D1Bitmap *)ConvertTime(v239, v237, v240);
      v242 = *(_QWORD *)(v149 + 304);
      v264 = v241;
      v244 = (struct ID3D11Texture2D *)ConvertTime(v242, v237, v243);
      v245 = *(_QWORD *)(v149 + 1184);
      v268 = v244;
      v247 = ConvertTime(v245, v237, v246);
      v248 = *(_QWORD *)(v149 + 1464);
      v273 = v247;
      ConvertTime(v248, v237, v249);
      ConvertTime((unsigned __int64)v260, v237, v250);
      v3 = v293;
      McTemplateU0qxqxxxqxxxxqxxxxxxxxxxqqqxqxxxx(
        (_DWORD)v267,
        (_DWORD)v264 - (_DWORD)v263,
        *((_DWORD *)v293 + 6456),
        *(_QWORD *)v267,
        *((_DWORD *)v267 + 8),
        v273,
        *((_QWORD *)v267 + 148),
        *((_DWORD *)v267 + 43));
      v149 = *((_QWORD *)v3 + 3230);
      v4 = v257;
    }
    v152 = (CPartitionVerticalBlankScheduler *)((char *)v3 + 30488);
    v153 = *(unsigned int *)(v149 + 104);
    v154 = *(_DWORD *)(v149 + 100);
    v155 = *(_QWORD *)(v149 + 1208);
    v156 = *(_QWORD *)(v149 + 328);
    v157 = *(_QWORD *)(v149 + 312);
    if ( *(_BYTE *)(v149 + 1057) )
    {
      ++*((_DWORD *)v3 + 7630);
      *((_DWORD *)v3 + 7628) = 0;
      *((_QWORD *)v3 + 3817) += v156 - v157;
      if ( v156 - v157 > *((_QWORD *)v3 + 3818) )
        *((_QWORD *)v3 + 3818) = v156 - v157;
      if ( v156 - *((_QWORD *)v3 + 3813) > 4 * v155 )
        ++*((_DWORD *)v3 + 7631);
      *((_QWORD *)v3 + 3813) = v156;
      if ( v154 )
        ++*((_DWORD *)v3 + 7632);
      if ( (_DWORD)v153 )
        ++*((_DWORD *)v3 + 7633);
      v158 = (double)((int)v156 - *(_DWORD *)v152);
      if ( (__int64)(v156 - *(_QWORD *)v152) < 0 )
        v158 = v158 + 1.844674407370955e19;
      if ( v158 / ((double)(int)g_qpcFrequency.LowPart / 1000.0) >= 60000.0 )
        CTelemetryFrameStatistics::SendFrameStatisticsTelemetry(
          (CPartitionVerticalBlankScheduler *)((char *)v3 + 30488),
          v156);
    }
    else if ( ++*((_DWORD *)v3 + 7628) > 0x3Cu )
    {
      v176 = *((_QWORD *)v3 + 3812);
      if ( !v176 || QpcToMilliseconds(v157 - v176, v156, v152, v153) > 600000.0 )
        CTelemetryFrameStatistics::SendUnpresentedFramesAlarmTelemetry(v152, v157);
    }
    for ( k = 0; k < v280; ++k )
      operator delete(*((void **)v278[0] + k));
    v280 = 0;
    DynArrayImpl<0>::ShrinkToSize(v278, 8LL);
    if ( v278[0] != v278[1] )
    {
      operator delete(v278[0]);
      v278[0] = 0LL;
    }
    LOBYTE(v8) = i;
    v6 = 1;
    goto LABEL_269;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x418u);
  FRAME_TIME_INFO::~FRAME_TIME_INFO((FRAME_TIME_INFO *)v274);
  LOBYTE(v8) = i;
  v161 = 0;
LABEL_273:
  v162 = Microsoft_Windows_Dwm_CoreEnableBits;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    McTemplateU0qqqq(v161, (unsigned int)&EVTDESC_SCHEDULE_PROCESS_FRAME, v161, v2, v8, *((_DWORD *)v3 + 7639));
    v162 = Microsoft_Windows_Dwm_CoreEnableBits;
  }
  if ( (v162 & 8) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_PROCESS_FRAME_Stop);
  v163 = qword_1802D6158;
  CProcessAttributionManager::EnumerateChangedProcessAttributions(
    *(void ****)(*((_QWORD *)qword_1802D6158 + 15) + 8LL),
    *((struct CProcessAttributionObserver **)qword_1802D6158 + 15),
    qword_1802D6158,
    (void (__high *)(void *, unsigned int, unsigned __int64, enum ProcessAttributionFlags, const struct ProcessAttributionResourceCounters *))lambda_365183fea5c3529ee8e4714511b90111_::_lambda_invoker_cdecl_);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10000) != 0 )
  {
    v253 = (__int64)(*((_QWORD *)v163 + 7) - *((_QWORD *)v163 + 6)) >> 2;
    cDataa = (__int64)(*((_QWORD *)v163 + 4) - *((_QWORD *)v163 + 3)) >> 2;
    McTemplateU0qQR0qQR2qQR4qQR6qQR8(
      cDataa,
      v253,
      (__int64)(*((_QWORD *)v163 + 1) - *(_QWORD *)v163) >> 2,
      *(_QWORD *)v163,
      cDataa,
      *((_QWORD *)v163 + 3),
      v253,
      *((_QWORD *)v163 + 6),
      (__int64)(*((_QWORD *)v163 + 10) - *((_QWORD *)v163 + 9)) >> 2,
      *((_QWORD *)v163 + 9),
      (__int64)(*((_QWORD *)v163 + 13) - *((_QWORD *)v163 + 12)) >> 2,
      *((_QWORD *)v163 + 12));
    v4 = v257;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10000) != 0 )
    {
      *((_QWORD *)v163 + 1) = *(_QWORD *)v163;
      *((_QWORD *)v163 + 4) = *((_QWORD *)v163 + 3);
      *((_QWORD *)v163 + 7) = *((_QWORD *)v163 + 6);
      *((_QWORD *)v163 + 10) = *((_QWORD *)v163 + 9);
      *((_QWORD *)v163 + 13) = *((_QWORD *)v163 + 12);
    }
  }
  v164 = qword_1802D6150;
  TickCount64 = GetTickCount64();
  v166 = TickCount64 - *(_QWORD *)v164;
  if ( v166 >= 0x3E8 )
  {
    *(_QWORD *)v164 = TickCount64;
    *((_DWORD *)v164 + 2) = v166;
    CEnergyReporter::SendReportToE3(v164);
  }
  result = (unsigned int)v4;
  *((_BYTE *)v3 + 35276) = 0;
  return result;
}
