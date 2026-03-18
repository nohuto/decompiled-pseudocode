/*
 * XREFs of ?PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z @ 0x180048000
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x18005BBB0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 * Callees:
 *     ?DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAVCDXGIEnumeration@@PEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateComparison@@@Z @ 0x18001EDEC (-DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAVCDXGIEnumeration@@PEAPEAVCDisplaySet@@PEAW4En.c)
 *     ?EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x18001F0FC (-EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 *     ?ProcessLegacyTokens@CSurfaceManager@@QEAAJ_K@Z @ 0x1800200D8 (-ProcessLegacyTokens@CSurfaceManager@@QEAAJ_K@Z.c)
 *     ?ProcessRenderingStatus@CComposition@@QEAAXJ@Z @ 0x18002D650 (-ProcessRenderingStatus@CComposition@@QEAAXJ@Z.c)
 *     ?ProcessPartitionCommand@CComposition@@QEAAJPEBUUCE_RDP_HEADER@@PEAI@Z @ 0x180034520 (-ProcessPartitionCommand@CComposition@@QEAAJPEBUUCE_RDP_HEADER@@PEAI@Z.c)
 *     ?UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z @ 0x18003A130 (-UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z.c)
 *     ?UpdateAnimateValues@CAnimation@@UEAAXXZ @ 0x18003FCC0 (-UpdateAnimateValues@CAnimation@@UEAAXXZ.c)
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180041320 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?EnsureImpl@Dwm3DRECompositorThunk@@AEAAXXZ @ 0x1800424C0 (-EnsureImpl@Dwm3DRECompositorThunk@@AEAAXXZ.c)
 *     ?EnsureRenderTargets@CDesktopRenderTarget@@UEAAJPEA_N@Z @ 0x1800445F0 (-EnsureRenderTargets@CDesktopRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?wil_details_MapReportingKind@@YA?AW4wil_details_ServiceReportingKind@@W4wil_ReportingKind@@H@Z @ 0x18004606C (-wil_details_MapReportingKind@@YA-AW4wil_details_ServiceReportingKind@@W4wil_ReportingKind@@H@Z.c)
 *     ?__private_IsVariantEqual@?$Feature@U__WilFeatureTraits_Feature_DwmHintingPpm@@@wil@@SA_NW4Variant_DwmHintingPpm@@W4VariantReportingKind@2@_N@Z @ 0x180052D60 (-__private_IsVariantEqual@-$Feature@U__WilFeatureTraits_Feature_DwmHintingPpm@@@wil@@SA_NW4Varia.c)
 *     ?RecordFeatureUsageCallback@details@wil@@YAXIPEATwil_details_FeaturePropertyCache@@PEAUwil_details_RecordUsageResult@@@Z @ 0x180055170 (-RecordFeatureUsageCallback@details@wil@@YAXIPEATwil_details_FeaturePropertyCache@@PEAUwil_detai.c)
 *     ?wil_details_RecordUsageInPropertyCache@@YA?AUwil_details_RecordUsageResult@@PEATwil_details_FeaturePropertyCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x180055480 (-wil_details_RecordUsageInPropertyCache@@YA-AUwil_details_RecordUsageResult@@PEATwil_details_Fea.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180059D60 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180059E10 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?PreRender@CRenderTargetManager@@QEAAJXZ @ 0x18005F194 (-PreRender@CRenderTargetManager@@QEAAJXZ.c)
 *     ?RemoveRenderTarget@CRenderTargetManager@@QEAA_NPEAVCRenderTarget@@@Z @ 0x18005F3A8 (-RemoveRenderTarget@CRenderTargetManager@@QEAA_NPEAVCRenderTarget@@@Z.c)
 *     ?IsOfType@CHwndRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18005FB40 (-IsOfType@CHwndRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?CheckOcclusionState@CHwndRenderTarget@@UEAAJXZ @ 0x180060830 (-CheckOcclusionState@CHwndRenderTarget@@UEAAJXZ.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?ProcessSurfaceUpdateInternal@CCompositionSurfaceInfo@@AEAAJAEBUCSM_SURFACE_UPDATE@@@Z @ 0x180080F84 (-ProcessSurfaceUpdateInternal@CCompositionSurfaceInfo@@AEAAJAEBUCSM_SURFACE_UPDATE@@@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x180084360 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?FlushAllDevices@CD3DDeviceManager@@QEAAXXZ @ 0x180088CA0 (-FlushAllDevices@CD3DDeviceManager@@QEAAXXZ.c)
 *     ??8@YA_NAEBU_LUID@@0@Z @ 0x180089DD0 (--8@YA_NAEBU_LUID@@0@Z.c)
 *     ?Release@CDisplaySet@@QEBAKXZ @ 0x1800B6AE8 (-Release@CDisplaySet@@QEBAKXZ.c)
 *     ??1CDisplaySet@@AEAA@XZ @ 0x1800B708C (--1CDisplaySet@@AEAA@XZ.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_DwmHintingPpm@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800BA370 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_DwmHintingPpm@@@wil@@CA-AW4w.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_StereoscopicUwp@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800BA428 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_StereoscopicUwp@@@wil@@CA-AW.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_DwmHintingPpm@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800BAD1C (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_DwmHintingPpm@@@wil@@CAX_NW4Reportin.c)
 *     ?OnCapabilitiesChanged@CCompositionCapabilities@@QEAAXXZ @ 0x1800C6B20 (-OnCapabilitiesChanged@CCompositionCapabilities@@QEAAXXZ.c)
 *     _TlgKeywordOn @ 0x1800D1850 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800D1994 (_TlgWrite.c)
 *     ?DestroyDelayedResources@CD3DResourceManager@@AEAAIXZ @ 0x1800D7758 (-DestroyDelayedResources@CD3DResourceManager@@AEAAIXZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x1800DB248 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800DB2A8 (_Init_thread_header.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?GetSurfaceUpdates@CCompositionSurfaceManager@@QEAAJ_KPEAIPEAH@Z @ 0x18013FBBC (-GetSurfaceUpdates@CCompositionSurfaceManager@@QEAAJ_KPEAIPEAH@Z.c)
 *     McTemplateU0 @ 0x180143900 (McTemplateU0.c)
 *     McTemplateU0qq @ 0x180147E0C (McTemplateU0qq.c)
 *     McTemplateU0qqq @ 0x180147E74 (McTemplateU0qqq.c)
 *     McTemplateU0x @ 0x180148F68 (McTemplateU0x.c)
 *     HintPpm @ 0x180149458 (HintPpm.c)
 *     McTemplateU0dtxxxx @ 0x1801496B8 (McTemplateU0dtxxxx.c)
 *     ?SetTargetOcclusion@CIndirectSwapchainRenderTarget@@QEAAJPEAVCRenderTarget@@_N@Z @ 0x180159F04 (-SetTargetOcclusion@CIndirectSwapchainRenderTarget@@QEAAJPEAVCRenderTarget@@_N@Z.c)
 *     McTemplateU0d @ 0x180167AC0 (McTemplateU0d.c)
 *     McTemplateU0nxxxqqxqqqqqqqqx @ 0x1801AD228 (McTemplateU0nxxxqqxqqqqqqqqx.c)
 *     ?PreRender@CSpatialVisualContent@@QEAAJXZ @ 0x1801C218C (-PreRender@CSpatialVisualContent@@QEAAJXZ.c)
 *     ?UpdateActiveManipulations@InteractionSourceManager@@AEAAXXZ @ 0x1801CAADC (-UpdateActiveManipulations@InteractionSourceManager@@AEAAXXZ.c)
 *     ?ClearProtectedResources@CD3DDeviceLevel1@@QEAA_NXZ @ 0x1801DEFF8 (-ClearProtectedResources@CD3DDeviceLevel1@@QEAA_NXZ.c)
 *     CHolographicInteropTaskQueue::ProcessPendingMessages__lambda_1af5a33988fbdcb1a8e6d38412aed786___ @ 0x1801F79C8 (CHolographicInteropTaskQueue--ProcessPendingMessages__lambda_1af5a33988fbdcb1a8e6d38412aed786___.c)
 */

__int64 __fastcall CCrossThreadComposition::PreRender(RTL_SRWLOCK *this, bool *a2)
{
  RTL_SRWLOCK *v2; // rsi
  bool *v3; // r13
  _BYTE *Ptr; // rdx
  PVOID v5; // rcx
  unsigned int v6; // edi
  _DWORD *v7; // rdx
  LARGE_INTEGER v8; // r8
  _QWORD *v9; // rcx
  __int64 v10; // rax
  int v11; // r12d
  _QWORD *v12; // rcx
  int v13; // eax
  unsigned __int64 v14; // r14
  PVOID v15; // rax
  unsigned __int64 v16; // rcx
  bool v17; // zf
  _QWORD *v18; // rcx
  unsigned int v19; // ebx
  int ConnectionBatch; // eax
  struct UCE_RDP_HEADER *v21; // rax
  unsigned int v22; // ebx
  __int64 v23; // rdi
  int v24; // eax
  int v25; // eax
  int v26; // ebx
  _QWORD *v27; // rbx
  unsigned int v28; // ebx
  unsigned __int64 v29; // rcx
  HANDLE CurrentThread; // rax
  BOOL v31; // eax
  __int64 v32; // rax
  __int64 v33; // rcx
  struct wil_details_RecordUsageResult *v34; // r9
  __int64 v35; // rcx
  __int64 v36; // rax
  unsigned int *v37; // r8
  struct wil_details_RecordUsageResult *v38; // r9
  _QWORD **v39; // rcx
  int v40; // eax
  unsigned int v41; // r13d
  char *v42; // rdi
  unsigned int v43; // r15d
  int FrameSurfaceUpdates; // eax
  void *v45; // rcx
  unsigned int v46; // ebx
  struct _RTL_GENERIC_TABLE *v47; // r14
  _QWORD *v48; // rax
  __int64 v49; // rax
  int v50; // edi
  __int64 (__fastcall ***v51)(CBitmapRealization *__hidden, const struct _GUID *, void **); // r9
  __int64 (__fastcall *v52)(CBitmapRealization *__hidden, const struct _GUID *, void **); // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 (__fastcall *v55)(CBitmapRealization *__hidden, const struct _GUID *, void **); // r10
  __int64 v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // rcx
  __int64 v59; // rax
  int v60; // ebx
  __int64 (__fastcall ***v61)(CBitmapRealization *__hidden, const struct _GUID *, void **); // rcx
  unsigned __int64 v62; // rcx
  HANDLE v63; // rax
  BOOL v64; // eax
  __int64 v65; // rax
  __int64 v66; // rcx
  struct wil_details_RecordUsageResult *v67; // r9
  __int64 v68; // r8
  _QWORD *v69; // r14
  char v70; // di
  __int64 v71; // rax
  CDesktopRenderTarget *v72; // rcx
  __int64 (__fastcall *v73)(CDesktopRenderTarget *, bool *); // rax
  int v74; // eax
  __int64 v75; // rcx
  _DWORD *v76; // rbx
  int v77; // edi
  struct CRenderTarget *v78; // r14
  char v79; // r15
  unsigned int v80; // edi
  struct CRenderTarget *v81; // r14
  CHwndRenderTarget *v82; // rcx
  __int64 (__fastcall *v83)(CHwndRenderTarget *__hidden); // rax
  int v84; // eax
  bool v85; // r13
  char v86; // cl
  __int64 (__fastcall *v87)(struct CRenderTarget *, __int64); // rax
  char v88; // al
  unsigned int v89; // r12d
  int v90; // edi
  int v91; // r14d
  int v92; // r15d
  CDisplaySet *v93; // r13
  int v94; // eax
  int v95; // r12d
  struct CDXGIEnumeration *v96; // rbx
  unsigned int (__fastcall *v97)(CMILRefCountBase *__hidden); // rax
  __int64 v98; // rdx
  __m128i v99; // xmm3
  __int64 v100; // rdx
  __int64 v101; // r8
  int v102; // r9d
  int v103; // r10d
  unsigned int v104; // ebx
  unsigned int v105; // r12d
  __int64 v106; // r8
  bool v107; // r15
  __int64 v108; // rdi
  __int64 v109; // r14
  unsigned int v110; // r10d
  char v111; // r14
  Dwm3DRECompositorThunk *v112; // rcx
  bool *v113; // r15
  _QWORD *v114; // rbx
  __int64 v115; // rcx
  CSpatialVisualContent ***v116; // rax
  CSpatialVisualContent **v117; // rbx
  CSpatialVisualContent **v118; // rdi
  _QWORD *v119; // rcx
  __int64 v120; // rbx
  unsigned __int64 v121; // rcx
  HANDLE v122; // rax
  BOOL v123; // eax
  int v124; // edi
  unsigned int v125; // eax
  unsigned __int64 v126; // rbx
  __int64 v127; // rax
  __int64 v128; // rcx
  struct wil_details_RecordUsageResult *v129; // r9
  int v130; // eax
  char *v131; // rbx
  char *v132; // rbx
  __int64 v133; // r14
  char *v134; // rcx
  __int64 v135; // rax
  PSLIST_ENTRY v136; // rdi
  PSLIST_ENTRY j; // rbx
  __int64 v139; // r14
  _QWORD *v140; // rax
  CCompositionSurfaceInfo *v141; // r15
  int updated; // eax
  int v143; // eax
  CAnimation *v144; // rcx
  void (*v145)(void); // rax
  __int64 v146; // rcx
  __int64 v147; // rcx
  void *v148; // rcx
  __int64 v149; // rax
  PSLIST_ENTRY v150; // rbx
  unsigned int i; // ebx
  unsigned int v152; // edx
  unsigned int v153; // ebx
  __int64 v154; // rdi
  __int64 v155; // rax
  LARGE_INTEGER v156; // rbx
  int v157; // edx
  char LowPart; // al
  int v159; // r9d
  int v160; // eax
  int v161; // eax
  int v162; // eax
  LARGE_INTEGER v163; // rbx
  int v164; // edx
  char v165; // al
  int v166; // ecx
  int v167; // r9d
  int v168; // eax
  int v169; // eax
  unsigned int v170; // r9d
  int v171; // r10d
  __int64 v172; // r11
  int v173; // eax
  unsigned int v174; // ebx
  int v175; // eax
  int v176; // eax
  LARGE_INTEGER v177; // rbx
  int v178; // edx
  int v179; // ecx
  char v180; // al
  int cData; // [rsp+20h] [rbp-100h]
  unsigned int cDataa; // [rsp+20h] [rbp-100h]
  unsigned int cDatab; // [rsp+20h] [rbp-100h]
  int v184; // [rsp+30h] [rbp-F0h]
  int v185; // [rsp+60h] [rbp-C0h]
  int v186; // [rsp+80h] [rbp-A0h]
  bool v187; // [rsp+A0h] [rbp-80h] BYREF
  char v188; // [rsp+A1h] [rbp-7Fh]
  int SurfaceUpdates; // [rsp+A8h] [rbp-78h] BYREF
  int v190; // [rsp+B0h] [rbp-70h] BYREF
  __int64 (__fastcall ***v191)(CBitmapRealization *__hidden, const struct _GUID *, void **); // [rsp+B8h] [rbp-68h] BYREF
  int v192; // [rsp+C0h] [rbp-60h] BYREF
  unsigned int v193; // [rsp+C4h] [rbp-5Ch] BYREF
  int v194; // [rsp+C8h] [rbp-58h] BYREF
  unsigned __int64 v195; // [rsp+D0h] [rbp-50h] BYREF
  bool *v196; // [rsp+D8h] [rbp-48h]
  int v197; // [rsp+E0h] [rbp-40h]
  __int16 v198; // [rsp+E4h] [rbp-3Ch]
  int v199; // [rsp+E8h] [rbp-38h]
  __int16 v200; // [rsp+ECh] [rbp-34h]
  int v201; // [rsp+F0h] [rbp-30h]
  __int16 v202; // [rsp+F4h] [rbp-2Ch]
  int v203; // [rsp+F8h] [rbp-28h]
  __int16 v204; // [rsp+FCh] [rbp-24h]
  unsigned int v205; // [rsp+100h] [rbp-20h] BYREF
  int v206; // [rsp+108h] [rbp-18h] BYREF
  int v207; // [rsp+110h] [rbp-10h] BYREF
  struct CDXGIEnumeration *v208; // [rsp+118h] [rbp-8h] BYREF
  LARGE_INTEGER v209; // [rsp+120h] [rbp+0h] BYREF
  int v210; // [rsp+128h] [rbp+8h] BYREF
  int v211; // [rsp+130h] [rbp+10h] BYREF
  int v212; // [rsp+138h] [rbp+18h] BYREF
  __int16 v213; // [rsp+13Ch] [rbp+1Ch]
  int v214; // [rsp+140h] [rbp+20h] BYREF
  __int16 v215; // [rsp+144h] [rbp+24h]
  int v216; // [rsp+148h] [rbp+28h] BYREF
  __int16 v217; // [rsp+14Ch] [rbp+2Ch]
  int v218; // [rsp+150h] [rbp+30h] BYREF
  __int16 v219; // [rsp+154h] [rbp+34h]
  struct UCE_RDP_HEADER *v220; // [rsp+158h] [rbp+38h] BYREF
  unsigned __int64 CycleTime; // [rsp+160h] [rbp+40h] BYREF
  unsigned __int64 v222; // [rsp+168h] [rbp+48h] BYREF
  CDisplaySet *v223; // [rsp+170h] [rbp+50h] BYREF
  unsigned __int64 v224; // [rsp+178h] [rbp+58h] BYREF
  LARGE_INTEGER v225; // [rsp+180h] [rbp+60h] BYREF
  PVOID RestartKey; // [rsp+188h] [rbp+68h] BYREF
  LARGE_INTEGER v227; // [rsp+190h] [rbp+70h] BYREF
  RTL_SRWLOCK *v228; // [rsp+198h] [rbp+78h]
  unsigned __int64 v229; // [rsp+1A0h] [rbp+80h] BYREF
  unsigned __int64 v230; // [rsp+1A8h] [rbp+88h] BYREF
  __int64 v231; // [rsp+1B0h] [rbp+90h] BYREF
  PVOID v232; // [rsp+1B8h] [rbp+98h] BYREF
  _QWORD Buffer[6]; // [rsp+1C0h] [rbp+A0h] BYREF
  char v234[24]; // [rsp+1F0h] [rbp+D0h] BYREF
  char v235[24]; // [rsp+208h] [rbp+E8h] BYREF
  char v236[24]; // [rsp+220h] [rbp+100h] BYREF
  char v237[24]; // [rsp+238h] [rbp+118h] BYREF
  __int64 v238; // [rsp+250h] [rbp+130h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+258h] [rbp+138h] BYREF
  int v240; // [rsp+260h] [rbp+140h]
  __int64 v241; // [rsp+264h] [rbp+144h]
  __int128 v242; // [rsp+26Ch] [rbp+14Ch]
  _QWORD v243[2]; // [rsp+280h] [rbp+160h] BYREF
  int v244; // [rsp+290h] [rbp+170h]
  int v245; // [rsp+294h] [rbp+174h]
  _QWORD v246[2]; // [rsp+298h] [rbp+178h] BYREF
  int v247; // [rsp+2A8h] [rbp+188h]
  int v248; // [rsp+2ACh] [rbp+18Ch]
  _QWORD v249[2]; // [rsp+2B0h] [rbp+190h] BYREF
  int v250; // [rsp+2C0h] [rbp+1A0h]
  int v251; // [rsp+2C4h] [rbp+1A4h]
  _QWORD v252[2]; // [rsp+2C8h] [rbp+1A8h] BYREF
  int v253; // [rsp+2D8h] [rbp+1B8h]
  int v254; // [rsp+2DCh] [rbp+1BCh]
  __int128 v255; // [rsp+2E0h] [rbp+1C0h] BYREF
  __int64 v256; // [rsp+2F0h] [rbp+1D0h]
  __int128 v257; // [rsp+2F8h] [rbp+1D8h] BYREF
  __int64 v258; // [rsp+308h] [rbp+1E8h]
  __int128 v259; // [rsp+310h] [rbp+1F0h] BYREF
  __int64 v260; // [rsp+320h] [rbp+200h]
  __int128 v261; // [rsp+328h] [rbp+208h] BYREF
  __int64 v262; // [rsp+338h] [rbp+218h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+340h] [rbp+220h] BYREF
  GUID *v264; // [rsp+360h] [rbp+240h]
  __int64 v265; // [rsp+368h] [rbp+248h]
  void *retaddr; // [rsp+3B8h] [rbp+298h]

  v2 = this;
  v228 = this;
  v196 = a2;
  v3 = a2;
  *a2 = 0;
  AcquireSRWLockExclusive(this + 72);
  LODWORD(v2[73].Ptr) = GetCurrentThreadId();
  memset_0(&v238, 0, 0x30uLL);
  if ( dword_1802D6B90 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1802D6B90);
    if ( dword_1802D6B90 == -1 )
    {
      qword_1802D6B98 = g_qpcFrequency.QuadPart * LODWORD(v2[169].Ptr);
      Init_thread_footer(&dword_1802D6B90);
    }
  }
  Ptr = v2[170].Ptr;
  v5 = v2[45].Ptr;
  if ( !Ptr )
  {
    v2[170].Ptr = v5;
    Ptr = v5;
  }
  v6 = 0;
  if ( (_BYTE *)v5 - Ptr >= (unsigned __int64)qword_1802D6B98 )
  {
    v152 = qword_1802D67F0;
    v153 = 0;
    if ( (_DWORD)qword_1802D67F0 )
    {
      do
      {
        v154 = *(_QWORD *)(qword_1802D67A0 + 24LL * v153);
        if ( !*(_BYTE *)(v154 + 1049) )
        {
          CD3DResourceManager::DestroyDelayedResources((CD3DResourceManager *)(v154 + 896));
          *(_BYTE *)(v154 + 1049) = 1;
          v152 = qword_1802D67F0;
        }
        ++v153;
      }
      while ( v153 < v152 );
      v5 = v2[45].Ptr;
      v6 = 0;
    }
    v2[170].Ptr = v5;
  }
  v7 = v2[47].Ptr;
  if ( v7 )
  {
    v2[45].Ptr = *(PVOID *)(*(_QWORD *)v7 + 312LL);
    v238 = *(_QWORD *)(*(_QWORD *)v7 + 304LL);
    v8 = *(LARGE_INTEGER *)(*(_QWORD *)v7 + 1184LL);
    PerformanceCount = v8;
    v240 = v7[4] + *(_DWORD *)(*(_QWORD *)v7 + 108LL);
    v241 = *(_QWORD *)(*(_QWORD *)v7 + 1336LL);
  }
  else
  {
    QueryPerformanceCounter(&PerformanceCount);
    v8 = PerformanceCount;
    v238 = 0LL;
    v240 = 0;
    v241 = 0x10000003CLL;
  }
  v9 = v2[64].Ptr;
  v10 = v241;
  v11 = 0;
  v2[62].Ptr = (PVOID)v8;
  v9[519] = v10;
  v12 = v2[68].Ptr;
  v242 = *(_OWORD *)&v2[172].Ptr;
  v13 = NtDCompositionBeginFrame(*v12, &v238, &v224);
  if ( v13 < 0 )
  {
    v11 = v13 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13 | 0x10000000, 0x87u);
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x10Au);
  }
  if ( LOBYTE(v2[174].Ptr) )
  {
    for ( i = 0; i < LODWORD(v2[138].Ptr); ++i )
      CCompositionCapabilities::OnCapabilitiesChanged(*((CCompositionCapabilities **)v2[135].Ptr + i));
    LOBYTE(v2[174].Ptr) = 0;
  }
  v14 = v224;
  v15 = v2[47].Ptr;
  v16 = v224;
  v195 = v224;
  if ( v15 )
  {
    *(_QWORD *)(*(_QWORD *)v15 + 24LL) = v224;
    v14 = v224;
    v195 = v224;
  }
  v17 = DWORD2(v242) == 0;
  v2[48].Ptr = (PVOID)v16;
  if ( !v17 )
    dword_1802D6260 |= 0x40u;
  if ( v11 < 0 )
  {
    cDataa = 341;
    goto LABEL_274;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0x(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSQUEUEEVENT_Start, v2);
  v18 = v2[68].Ptr;
  v229 = v14;
  v207 = 0;
  v11 = 0;
  v19 = 0;
  ConnectionBatch = NtDCompositionGetConnectionBatch(*v18, &v229, &v220, &v207);
  if ( ConnectionBatch < 0 )
  {
    v11 = ConnectionBatch | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ConnectionBatch | 0x10000000, 0xC0u);
  }
  else
  {
    if ( v207 )
    {
      wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::ReportUsageToService();
      LOBYTE(v146) = 2;
      if ( (unsigned __int8)wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::__private_IsVariantEqual(v146) )
        HintPpm(1LL);
    }
    v21 = v220;
    if ( v220 )
    {
      while ( 1 )
      {
        v205 = 0;
        v143 = CComposition::ProcessPartitionCommand((CComposition *)v2, v21, &v205);
        v11 = v143;
        if ( v143 < 0 )
          break;
        v19 += v205;
        v21 = (struct UCE_RDP_HEADER *)*((_QWORD *)v220 + 1);
        v220 = v21;
        if ( !v21 )
          goto LABEL_19;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v143, 0xCAu);
    }
    else
    {
LABEL_19:
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        McTemplateU0d(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_NUMBER_OF_COMMANDS_PROCESSED, v19);
    }
  }
  if ( v11 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x26Au);
  v22 = 0;
  if ( LODWORD(v2[44].Ptr) )
  {
    do
    {
      v23 = *((_QWORD *)v2[41].Ptr + v22);
      if ( v23 )
      {
        v24 = *(_DWORD *)(v23 + 80);
        if ( v24 )
        {
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x1000) != 0 )
          {
            McTemplateU0qqq(
              (unsigned int)&Microsoft_Windows_Dwm_Core_Provider_Context,
              (unsigned int)&CHANNELBATCHES_PROCESSED,
              *(_DWORD *)(v23 + 16),
              *(_DWORD *)(v23 + 20),
              *(_DWORD *)(v23 + 80));
            v24 = *(_DWORD *)(v23 + 80);
          }
          dword_1802D62E8 += v24;
          ++*(_DWORD *)(*(_QWORD *)(v23 + 40) + 36LL);
          *(_DWORD *)(v23 + 80) = 0;
        }
      }
      ++v22;
    }
    while ( v22 < LODWORD(v2[44].Ptr) );
    v3 = v196;
    v6 = 0;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0x(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSQUEUEEVENT_Stop, v2);
  v25 = (*(__int64 (__fastcall **)(PVOID, __int64))(*(_QWORD *)v2[171].Ptr + 24LL))(v2[171].Ptr, 3LL);
  v26 = v25;
  if ( v25 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0x277u);
  if ( !v11 )
    goto LABEL_33;
  if ( v11 < 0 )
    goto LABEL_399;
  if ( v26 < 0 )
LABEL_33:
    v11 = v26;
  if ( v11 < 0 )
  {
LABEL_399:
    cDataa = 344;
    goto LABEL_274;
  }
  v27 = v2[30].Ptr;
  if ( *((_DWORD *)v27 + 74) )
  {
    do
    {
      v155 = v27[34];
      if ( *(_BYTE *)(*(_QWORD *)(v155 + 8LL * v6) + 472LL) )
        InteractionSourceManager::UpdateActiveManipulations((InteractionSourceManager *)(*(_QWORD *)(v155 + 8LL * v6)
                                                                                       + 352LL));
      ++v6;
    }
    while ( v6 < *((_DWORD *)v27 + 74) );
  }
  v28 = 0;
  v29 = 0LL;
  CycleTime = 0LL;
  if ( ::CycleTime )
  {
    CurrentThread = GetCurrentThread();
    v31 = QueryThreadCycleTime(CurrentThread, &CycleTime);
    v29 = CycleTime;
    if ( v31 )
      qword_1802D62A0 += CycleTime - ::CycleTime;
  }
  ::CycleTime = v29;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetCachedFeatureEnabledState(v29);
  LOBYTE(v198) = 3;
  v197 = 0;
  v212 = 0;
  v213 = v198;
  v210 = 3;
  v32 = wil_details_RecordUsageInPropertyCache(
          v234,
          &`wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetFeaturePropertyCache'::`2'::data,
          2LL);
  v255 = *(_OWORD *)v32;
  v256 = *(_QWORD *)(v32 + 16);
  if ( g_wil_details_recordFeatureUsage )
  {
    if ( (char *)g_wil_details_recordFeatureUsage == (char *)wil::details::RecordFeatureUsageCallback )
      wil::details::RecordFeatureUsageCallback(
        (wil::details *)0xC36614,
        (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetFeaturePropertyCache'::`2'::data,
        (union wil_details_FeaturePropertyCache *)&v255,
        v34);
    else
      g_wil_details_recordFeatureUsage(
        0xC36614u,
        (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetFeaturePropertyCache'::`2'::data,
        (struct wil_details_RecordUsageResult *)&v255);
    v33 = `wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetFeaturePropertyCache'::`2'::data;
    if ( (`wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0x20 )
    {
      v244 = 0;
      v245 = (`wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetFeaturePropertyCache'::`2'::data >> 2) & 1;
      v243[0] = 0LL;
      v243[1] = 2LL;
      ((void (__fastcall *)(__int64, _QWORD, _QWORD *))g_wil_details_recordFeatureUsage)(12805652LL, 0LL, v243);
    }
  }
  if ( !(_DWORD)v256 && g_wil_details_pfnFeatureLoggingHook )
    g_wil_details_pfnFeatureLoggingHook(
      0xC36614u,
      (const struct FEATURE_LOGGED_TRAITS *)&v212,
      0LL,
      1,
      (const enum wil_ReportingKind *)&v210,
      0LL,
      0,
      1uLL);
  LOBYTE(v33) = 3;
  if ( (unsigned __int8)wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::__private_IsVariantEqual(v33)
    && !byte_1802D68C0 )
  {
    v156.QuadPart = qword_1802D68C8;
    QueryPerformanceCounter(&v225);
    LowPart = v225.LowPart;
    if ( v156.QuadPart < (unsigned __int64)v225.QuadPart )
    {
      HintPpm(2LL);
      LowPart = v225.LowPart;
      v159 = 1;
      byte_1802D68C0 = 1;
    }
    else
    {
      v35 = 0LL;
      v159 = 0;
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0dtxxxx(v35, v157, 0, v159, qword_1802D68B8, qword_1802D68B0, v156.QuadPart, LowPart);
    v28 = 0;
  }
  if ( (`wil::Feature<__WilFeatureTraits_Feature_StereoscopicUwp>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_StereoscopicUwp>::GetCachedFeatureEnabledState(v35);
  v199 = 0;
  v214 = 0;
  LOBYTE(v200) = 0;
  v215 = v200;
  v211 = 3;
  v36 = wil_details_RecordUsageInPropertyCache(
          v235,
          &`wil::Feature<__WilFeatureTraits_Feature_StereoscopicUwp>::GetFeaturePropertyCache'::`2'::data,
          6LL);
  v257 = *(_OWORD *)v36;
  v258 = *(_QWORD *)(v36 + 16);
  if ( g_wil_details_recordFeatureUsage )
  {
    if ( (char *)g_wil_details_recordFeatureUsage == (char *)wil::details::RecordFeatureUsageCallback )
      wil::details::RecordFeatureUsageCallback(
        (wil::details *)0xCB67FA,
        (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_StereoscopicUwp>::GetFeaturePropertyCache'::`2'::data,
        (union wil_details_FeaturePropertyCache *)&v257,
        v38);
    else
      g_wil_details_recordFeatureUsage(
        0xCB67FAu,
        (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_StereoscopicUwp>::GetFeaturePropertyCache'::`2'::data,
        (struct wil_details_RecordUsageResult *)&v257);
    if ( (`wil::Feature<__WilFeatureTraits_Feature_StereoscopicUwp>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0x20 )
    {
      v247 = 0;
      v248 = (`wil::Feature<__WilFeatureTraits_Feature_StereoscopicUwp>::GetFeaturePropertyCache'::`2'::data >> 2) & 1;
      v246[0] = 0LL;
      v246[1] = 6LL;
      ((void (__fastcall *)(__int64, _QWORD, _QWORD *))g_wil_details_recordFeatureUsage)(13330426LL, 0LL, v246);
    }
  }
  if ( !(_DWORD)v258 && g_wil_details_pfnFeatureLoggingHook )
    g_wil_details_pfnFeatureLoggingHook(
      0xCB67FAu,
      (const struct FEATURE_LOGGED_TRAITS *)&v214,
      0LL,
      0,
      (const enum wil_ReportingKind *)&v211,
      0LL,
      0,
      1uLL);
  v39 = (_QWORD **)v2[70].Ptr;
  if ( v39 )
  {
    v160 = (*(__int64 (__fastcall **)(_QWORD *))(*v39[3] + 48LL))(v39[3]);
    v11 = v160;
    if ( v160 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180240F48, 2u, v160, 0x16Bu);
      goto LABEL_218;
    }
  }
  v11 = 0;
  if ( !v14 )
    goto LABEL_103;
  if ( BYTE1(v2[40].Ptr) )
  {
    CD3DDeviceManager::FlushAllDevices((CD3DDeviceManager *)&g_D3DDeviceManager);
    BYTE1(v2[40].Ptr) = 0;
  }
  v40 = CSurfaceManager::ProcessLegacyTokens((CSurfaceManager *)v2[10].Ptr, v14, v37);
  v11 = v40;
  if ( v40 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v40, 0x249u);
    goto LABEL_103;
  }
  v41 = 0;
  v42 = (char *)v2[10].Ptr;
  v43 = 0;
  v193 = 0;
  v194 = 0;
  v192 = 0;
  v190 = 0;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSSURFACEUPDATES_Start);
  v230 = v14;
  SurfaceUpdates = 0;
  v11 = 0;
  FrameSurfaceUpdates = NtDCompositionGetFrameSurfaceUpdates(&v230, &v193, &v194);
  if ( FrameSurfaceUpdates < 0 )
  {
    v11 = FrameSurfaceUpdates | 0x10000000;
    SurfaceUpdates = FrameSurfaceUpdates | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180276988, 3u, FrameSurfaceUpdates | 0x10000000, 0x7Eu);
  }
  if ( v11 >= 0 )
  {
    do
    {
      v46 = 0;
      if ( v193 )
      {
        do
        {
          Buffer[1] = 0LL;
          v139 = *((_QWORD *)v42 + 65) + 200LL * v46;
          Buffer[0] = *(_QWORD *)(v139 + 4);
          v140 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)(v42 + 24), Buffer);
          if ( v140 )
          {
            v141 = (CCompositionSurfaceInfo *)v140[1];
            if ( v141 )
            {
              if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
                McTemplateU0nxxxqqxqqqqqqqqx(
                  *((_DWORD *)v141 + 19) >= 2,
                  *(_DWORD *)(v139 + 28),
                  (*(_DWORD *)(v139 + 188) >> 2) & 1,
                  v139 + 4,
                  *(_QWORD *)(v139 + 16),
                  *(_DWORD *)(v139 + 28),
                  v184,
                  (*(_DWORD *)(v139 + 188) & 0x10) != 0,
                  *(_DWORD *)(v139 + 72),
                  *(_QWORD *)(v139 + 80),
                  (*(_DWORD *)(v139 + 188) & 4) != 0,
                  (*(_DWORD *)(v139 + 188) & 8) != 0,
                  v185,
                  *(_DWORD *)(v139 + 112),
                  *((_DWORD *)v141 + 19) >= 2,
                  *(_DWORD *)(v139 + 108),
                  v186,
                  *(_DWORD *)(v139 + 24));
              updated = CCompositionSurfaceInfo::ProcessSurfaceUpdateInternal(
                          v141,
                          (const struct CSM_SURFACE_UPDATE *)v139);
              if ( updated < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0xCFu);
              v43 = ++v190;
            }
            else
            {
              v43 = v190;
            }
          }
          v45 = *(void **)(v139 + 32);
          if ( (unsigned __int64)v45 >= 2 )
            DeleteObject(v45);
          ++v46;
        }
        while ( v46 < v193 );
        v14 = v195;
        v11 = SurfaceUpdates;
        v41 = v192;
      }
      if ( !v194 )
        break;
      v192 = ++v41;
      SurfaceUpdates = CCompositionSurfaceManager::GetSurfaceUpdates(
                         (CCompositionSurfaceManager *)v45,
                         v14,
                         &v193,
                         &v194);
      v11 = SurfaceUpdates;
    }
    while ( SurfaceUpdates >= 0 );
    v2 = v228;
    v28 = 0;
  }
  v47 = (struct _RTL_GENERIC_TABLE *)(v42 + 24);
  RestartKey = 0LL;
  v48 = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)(v42 + 24), &RestartKey);
  if ( !v48 )
    goto LABEL_98;
  while ( 1 )
  {
    v49 = v48[1];
    v50 = 0;
    v191 = 0LL;
    v51 = *(__int64 (__fastcall ****)(CBitmapRealization *__hidden, const struct _GUID *, void **))(v49 + 120);
    if ( v51 )
      break;
LABEL_96:
    v48 = RtlEnumerateGenericTableWithoutSplaying(v47, &RestartKey);
    if ( !v48 )
      goto LABEL_97;
  }
  v52 = **v51;
  if ( v52 == CBitmapRealization::QueryInterface )
  {
    v53 = *(_QWORD *)GUID_302508ed_c63d_40f8_af07_af5881d2df95.Data4;
    v54 = *(_QWORD *)&GUID_302508ed_c63d_40f8_af07_af5881d2df95.Data1
        - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *(_QWORD *)&GUID_302508ed_c63d_40f8_af07_af5881d2df95.Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v54 = *(_QWORD *)GUID_302508ed_c63d_40f8_af07_af5881d2df95.Data4
          - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( v54 )
    {
      v55 = (*v51)[4];
      if ( v55 == CBitmapRealization::HrFindInterface )
      {
        v56 = *(_QWORD *)&GUID_302508ed_c63d_40f8_af07_af5881d2df95.Data1
            - *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1;
        if ( *(_QWORD *)&GUID_302508ed_c63d_40f8_af07_af5881d2df95.Data1 == *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1 )
          v56 = *(_QWORD *)GUID_302508ed_c63d_40f8_af07_af5881d2df95.Data4
              - *(_QWORD *)GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data4;
        if ( v56 )
        {
          v57 = *(_QWORD *)&GUID_302508ed_c63d_40f8_af07_af5881d2df95.Data1
              - *(_QWORD *)&GUID_db178a3c_d733_4570_9513_5392d717955f.Data1;
          if ( *(_QWORD *)&GUID_302508ed_c63d_40f8_af07_af5881d2df95.Data1 == *(_QWORD *)&GUID_db178a3c_d733_4570_9513_5392d717955f.Data1 )
            v57 = *(_QWORD *)GUID_302508ed_c63d_40f8_af07_af5881d2df95.Data4
                - *(_QWORD *)GUID_db178a3c_d733_4570_9513_5392d717955f.Data4;
          if ( v57 )
          {
            v58 = *(_QWORD *)&GUID_302508ed_c63d_40f8_af07_af5881d2df95.Data1
                - *(_QWORD *)&GUID_475af409_d8b1_4ca5_8177_4562f6260b68.Data1;
            if ( *(_QWORD *)&GUID_302508ed_c63d_40f8_af07_af5881d2df95.Data1 == *(_QWORD *)&GUID_475af409_d8b1_4ca5_8177_4562f6260b68.Data1 )
              v58 = *(_QWORD *)GUID_302508ed_c63d_40f8_af07_af5881d2df95.Data4
                  - *(_QWORD *)GUID_475af409_d8b1_4ca5_8177_4562f6260b68.Data4;
            if ( v58 )
            {
              v59 = *(_QWORD *)&GUID_302508ed_c63d_40f8_af07_af5881d2df95.Data1
                  - *(_QWORD *)&GUID_c5a4a15d_a7cd_44bc_8a15_7199ecad6671.Data1;
              if ( *(_QWORD *)&GUID_302508ed_c63d_40f8_af07_af5881d2df95.Data1 == *(_QWORD *)&GUID_c5a4a15d_a7cd_44bc_8a15_7199ecad6671.Data1 )
                v59 = *(_QWORD *)GUID_302508ed_c63d_40f8_af07_af5881d2df95.Data4
                    - *(_QWORD *)GUID_c5a4a15d_a7cd_44bc_8a15_7199ecad6671.Data4;
              if ( v59 )
              {
                v60 = -2147467263;
                v51 = 0LL;
              }
              else
              {
                v60 = 0;
                v51 += 2;
              }
              v191 = v51;
            }
            else
            {
              v51 += 11;
              v60 = 0;
              v191 = v51;
            }
          }
          else
          {
            v51 += 18;
            v60 = 0;
            v191 = v51;
          }
        }
        else
        {
          v60 = 0;
          v51 += 18;
          v191 = v51;
        }
      }
      else
      {
        v161 = v55((CBitmapRealization *)v51, &GUID_302508ed_c63d_40f8_af07_af5881d2df95, (void **)&v191);
        v51 = v191;
        v60 = v161;
      }
      if ( v60 < 0 )
      {
        v61 = 0LL;
        v191 = 0LL;
        goto LABEL_92;
      }
    }
    else
    {
      v191 = v51;
      v60 = 0;
    }
    ((void (__fastcall *)(__int64 (__fastcall ***)(CBitmapRealization *__hidden, const struct _GUID *, void **)))(*v51)[1])(v51);
  }
  else
  {
    v60 = v52((CBitmapRealization *)v51, &GUID_302508ed_c63d_40f8_af07_af5881d2df95, (void **)&v191);
  }
  v61 = v191;
LABEL_92:
  if ( v60 >= 0 )
  {
    v162 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(CBitmapRealization *__hidden, const struct _GUID *, void **), _QWORD))(*v61)[7])(
             v61,
             0LL);
    v50 = v162;
    if ( v162 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v162, 0xCFu);
    v61 = v191;
  }
  if ( v61 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(CBitmapRealization *__hidden, const struct _GUID *, void **), __int64))(*v61)[2])(
      v61,
      v53);
  if ( v50 >= 0 )
    goto LABEL_96;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v50, 0xBDu);
LABEL_97:
  v28 = 0;
LABEL_98:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0qq(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSSURFACEUPDATES_Stop,
      v43,
      v41);
  dword_1802D62EC += v43;
  if ( v11 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x24Eu);
  v3 = v196;
LABEL_103:
  if ( v11 < 0 )
  {
    cDataa = 367;
    goto LABEL_274;
  }
  v62 = 0LL;
  v222 = 0LL;
  if ( ::CycleTime )
  {
    v63 = GetCurrentThread();
    v64 = QueryThreadCycleTime(v63, &v222);
    v62 = v222;
    if ( v64 )
      qword_1802D62A8 += v222 - ::CycleTime;
  }
  ::CycleTime = v62;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetCachedFeatureEnabledState(v62);
  v201 = 0;
  v216 = 0;
  LOBYTE(v202) = 3;
  v217 = v202;
  v206 = 3;
  cData = 1;
  v65 = wil_details_RecordUsageInPropertyCache(
          v236,
          &`wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetFeaturePropertyCache'::`2'::data,
          2LL);
  v259 = *(_OWORD *)v65;
  v260 = *(_QWORD *)(v65 + 16);
  if ( g_wil_details_recordFeatureUsage )
  {
    if ( (char *)g_wil_details_recordFeatureUsage == (char *)wil::details::RecordFeatureUsageCallback )
      wil::details::RecordFeatureUsageCallback(
        (wil::details *)0xC36614,
        (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetFeaturePropertyCache'::`2'::data,
        (union wil_details_FeaturePropertyCache *)&v259,
        v67);
    else
      g_wil_details_recordFeatureUsage(
        0xC36614u,
        (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetFeaturePropertyCache'::`2'::data,
        (struct wil_details_RecordUsageResult *)&v259);
    v66 = `wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetFeaturePropertyCache'::`2'::data;
    if ( (`wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0x20 )
    {
      v253 = 0;
      v254 = (`wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetFeaturePropertyCache'::`2'::data >> 2) & 1;
      v252[0] = 0LL;
      v252[1] = 2LL;
      ((void (__fastcall *)(__int64, _QWORD, _QWORD *))g_wil_details_recordFeatureUsage)(12805652LL, 0LL, v252);
    }
  }
  if ( !(_DWORD)v260 && g_wil_details_pfnFeatureLoggingHook )
    g_wil_details_pfnFeatureLoggingHook(
      0xC36614u,
      (const struct FEATURE_LOGGED_TRAITS *)&v216,
      0LL,
      1,
      (const enum wil_ReportingKind *)&v206,
      0LL,
      0,
      1uLL);
  LOBYTE(v66) = 3;
  if ( (unsigned __int8)wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::__private_IsVariantEqual(v66)
    && !byte_1802D68C0 )
  {
    v163.QuadPart = qword_1802D68D0;
    QueryPerformanceCounter(&v227);
    v165 = v227.LowPart;
    if ( v163.QuadPart < (unsigned __int64)v227.QuadPart )
    {
      HintPpm(2LL);
      v165 = v227.LowPart;
      v167 = 1;
      byte_1802D68C0 = 1;
    }
    else
    {
      v166 = 0;
      v167 = 0;
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0dtxxxx(v166, v164, 1, v167, qword_1802D68B8, qword_1802D68B0, v163.QuadPart, v165);
    v28 = 0;
  }
  v69 = v2[9].Ptr;
  v70 = 0;
  v11 = 0;
  if ( *((_DWORD *)v69 + 20) )
  {
    do
    {
      v71 = v69[7];
      v187 = 0;
      v72 = *(CDesktopRenderTarget **)(v71 + 8LL * v28);
      v73 = *(__int64 (__fastcall **)(CDesktopRenderTarget *, bool *))(*(_QWORD *)v72 + 152LL);
      if ( v73 == CDesktopRenderTarget::EnsureRenderTargets )
        v74 = CDesktopRenderTarget::EnsureRenderTargets(v72, &v187);
      else
        v74 = v73(v72, &v187);
      v11 = v74;
      if ( v74 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180277AC0, 2u, v74, 0x2B5u);
        goto LABEL_122;
      }
      v70 |= v187;
      ++v28;
    }
    while ( v28 < *((_DWORD *)v69 + 20) );
    if ( v70 && !(unsigned int)DWMCommitInputSystemOutputConfig(v75) )
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
  }
LABEL_122:
  v190 = v11;
  if ( v11 < 0 )
  {
    cDataa = 373;
    goto LABEL_274;
  }
  *v3 = 0;
  v76 = v2[9].Ptr;
  v77 = v76[12];
  if ( v77 )
  {
    do
    {
      v78 = *(struct CRenderTarget **)(*((_QWORD *)v76 + 3) + 8LL * (unsigned int)--v77);
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *))(*((_QWORD *)v78 + 8) + 32LL))((_QWORD *)v78 + 8) )
        CRenderTargetManager::RemoveRenderTarget((CRenderTargetManager *)v76, v78);
    }
    while ( v77 );
    v76 = v2[9].Ptr;
  }
  v79 = 1;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_MILEVENT_MEDIA_UCE_CHECKDEVICESTATE_Start);
  v80 = 0;
  if ( v76[12] )
  {
    do
    {
      v81 = *(struct CRenderTarget **)(*((_QWORD *)v76 + 3) + 8LL * v80);
      v82 = (struct CRenderTarget *)((char *)v81 + 64);
      v83 = *(__int64 (__fastcall **)(CHwndRenderTarget *__hidden))(*((_QWORD *)v81 + 8) + 48LL);
      if ( v83 == CHwndRenderTarget::CheckOcclusionState )
        v84 = CHwndRenderTarget::CheckOcclusionState(v82);
      else
        v84 = v83(v82);
      v11 = v84;
      if ( v84 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180240F48, 2u, v84, 0x52Au);
        goto LABEL_145;
      }
      v85 = v84 == 142213121;
      v86 = 0;
      if ( v84 == 142213121 )
        v86 = v79;
      v79 = v86;
      v87 = *(__int64 (__fastcall **)(struct CRenderTarget *, __int64))(*(_QWORD *)v81 + 48LL);
      if ( (char *)v87 == (char *)CHwndRenderTarget::IsOfType )
        v88 = CHwndRenderTarget::IsOfType(v81, 76LL);
      else
        v88 = v87(v81, 76LL);
      if ( v88 )
      {
        v89 = v76[24];
        SurfaceUpdates = 0;
        if ( v89 < v76[12] )
        {
          while ( 1 )
          {
            v149 = *((_QWORD *)v76 + 3);
            v209.QuadPart = 8LL * v89;
            if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v209.QuadPart + v149) + 48LL))(
                   *(_QWORD *)(v209.QuadPart + v149),
                   79LL) )
            {
              v168 = CIndirectSwapchainRenderTarget::SetTargetOcclusion(
                       *(CIndirectSwapchainRenderTarget **)(v209.QuadPart + *((_QWORD *)v76 + 3)),
                       v81,
                       v85);
              SurfaceUpdates = v168;
              if ( v168 < 0 )
                break;
            }
            if ( ++v89 >= v76[12] )
              goto LABEL_140;
          }
          v11 = v168;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v168, 0x34Au);
        }
        else
        {
LABEL_140:
          v11 = SurfaceUpdates;
        }
        if ( v11 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180240F48, 2u, v11, 0x525u);
          goto LABEL_145;
        }
      }
      ++v80;
    }
    while ( v80 < v76[12] );
    if ( v79 )
      goto LABEL_268;
LABEL_144:
    v11 = 0;
  }
  else
  {
LABEL_268:
    if ( *((_BYTE *)v76 + 113) )
      goto LABEL_144;
    v11 = 142213121;
  }
LABEL_145:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_MILEVENT_MEDIA_UCE_CHECKDEVICESTATE_Stop);
  if ( v11 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18023A090, 1u, v11, 0xD37u);
  CComposition::ProcessRenderingStatus((struct _RTL_CRITICAL_SECTION *)v2, v11, v68);
  if ( v11 == 142213121 )
  {
    *v196 = 1;
    goto LABEL_152;
  }
  if ( v11 == -2003304307
    && dword_1802D3FA0 > 5u
    && TlgKeywordOn((TraceLoggingHProvider)&dword_1802D3FA0, 0x400000000000uLL) )
  {
    v265 = 16LL;
    v264 = &gDwmCoreTelemetryActivityId;
    TlgWrite((TraceLoggingHProvider)&dword_1802D3FA0, &unk_1802A57D4, 0LL, 0LL, 3u, &pData);
  }
  v190 = v11;
  if ( v11 < 0 )
  {
    cDataa = 377;
LABEL_274:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180240F48, 2u, v11, cDataa);
    goto LABEL_218;
  }
LABEL_152:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0d(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_CLEAR_D2D_CACHES_Start, 2000LL);
  v188 = 1;
  v90 = 1366;
  v208 = 0LL;
  v91 = 768;
  v92 = 4;
  v93 = 0LL;
  EnterCriticalSection(&g_DisplayManager);
  v94 = CDisplayManager::EnsureDXGIEnumeration(&g_DisplayManager, &v208);
  v95 = v94;
  if ( v94 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v94, 0xEAu);
    goto LABEL_157;
  }
  if ( qword_1802D6428 )
    goto LABEL_156;
  v223 = 0LL;
  LeaveCriticalSection(&g_DisplayManager);
  v96 = v208;
  v169 = CDisplayManager::DeriveCurrentDisplaySet(&g_DisplayManager, v208, &v223, 0LL);
  v95 = v169;
  if ( v169 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v169, 0xF8u);
    EnterCriticalSection(&g_DisplayManager);
  }
  else
  {
    EnterCriticalSection(&g_DisplayManager);
    if ( qword_1802D6428 )
    {
      if ( v223 )
        CDisplaySet::Release(v223);
    }
    else
    {
      qword_1802D6428 = v223;
      if ( v223 )
        _InterlockedIncrement((volatile signed __int32 *)v223);
    }
LABEL_156:
    _InterlockedIncrement((volatile signed __int32 *)qword_1802D6428);
    v93 = qword_1802D6428;
LABEL_157:
    v96 = v208;
  }
  if ( v96 )
  {
    v97 = *(unsigned int (__fastcall **)(CMILRefCountBase *__hidden))(*(_QWORD *)v96 + 8LL);
    if ( v97 == CMILRefCountBase::Release )
      CMILRefCountBase::Release(v96);
    else
      v97(v96);
  }
  LeaveCriticalSection(&g_DisplayManager);
  if ( v95 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v95, 0xD9u);
  if ( v93 )
  {
    v90 = 0;
    v91 = 0;
    v92 = 0;
    if ( *((_DWORD *)v93 + 18) )
    {
      v98 = *((_QWORD *)v93 + 6);
      do
      {
        v99 = *(__m128i *)(*(_QWORD *)v98 + 280LL);
        v103 = GetPixelFormatSize(*(enum DXGI_FORMAT *)(*(_QWORD *)v98 + 296LL)) >> 3;
        if ( v102 * v103 * _mm_cvtsi128_si32(v99) > (unsigned int)(v90 * v91 * v92) )
        {
          v90 = _mm_cvtsi128_si32(v99);
          v91 = v102;
          v92 = v103;
        }
        v98 = v100 + 8;
      }
      while ( v101 != 1 );
    }
  }
  v104 = 0;
  v105 = v92 * ((v90 + 255) & 0xFFFFFF00) * ((v91 + 255) & 0xFFFFFF00)
       + ((v92 * ((v90 + 255) & 0xFFFFFF00) * ((v91 + 255) & 0xFFFFFF00)) >> 2);
  if ( (_DWORD)qword_1802D67F0 )
  {
    do
    {
      v106 = qword_1802D67A0;
      v107 = 0;
      v108 = *(_QWORD *)(qword_1802D67A0 + 24LL * v104);
      v109 = 24LL * v104;
      if ( !CD3DDeviceManager::s_bHwProtectionTempDisabled && !CD3DDeviceManager::s_bHwProtectionTeardown )
      {
        v110 = 0;
        v231 = *(_QWORD *)(qword_1802D67A0 + 24LL * v104 + 8);
        if ( dword_1802D6788 )
        {
          while ( !(unsigned __int8)operator==(qword_1802D6770 + 12LL * v110, &v231) )
          {
            v110 = v171 + 1;
            if ( v110 >= v170 )
              goto LABEL_173;
          }
          v107 = *(_DWORD *)(qword_1802D6770 + 12 * v172 + 8) != 0;
        }
      }
LABEL_173:
      if ( *(_BYTE *)(v106 + v109 + 16) && !v107 )
        CD3DDeviceLevel1::ClearProtectedResources((CD3DDeviceLevel1 *)v108);
      v17 = *(_QWORD *)(v108 + 160) == 0LL;
      v192 = 1;
      if ( !v17 )
      {
        (*(void (__fastcall **)(_QWORD, __int64, _QWORD, int *, int))(**(_QWORD **)(v108 + 168) + 40LL))(
          *(_QWORD *)(v108 + 168),
          2000LL,
          v105,
          &v192,
          cData);
        if ( v192 != 1 )
          v188 = 0;
      }
      ++v104;
      *(_BYTE *)(v109 + qword_1802D67A0 + 16) = v107;
    }
    while ( v104 < (unsigned int)qword_1802D67F0 );
    v2 = v228;
  }
  if ( v93 && _InterlockedExchangeAdd((volatile signed __int32 *)v93, 0xFFFFFFFF) == 1 )
  {
    CDisplaySet::~CDisplaySet(v93);
    operator delete(v93);
  }
  v111 = v188;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0d(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_CLEAR_D2D_CACHES_Stop, v188 != 0);
  v112 = (Dwm3DRECompositorThunk *)v2[70].Ptr;
  v113 = v196;
  if ( v112 )
  {
    v173 = (*(__int64 (__fastcall **)(_QWORD *, PVOID, bool))(**((_QWORD **)v112 + 3) + 64LL))(
             *((_QWORD **)v112 + 3),
             v2[62].Ptr,
             *v196);
    v190 = v173;
    v174 = v173;
    if ( v173 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180240F48, 2u, v173, 0x190u);
    TranslateDXGIorD3DErrorInContext(v174, 0LL, &v190);
    v11 = v190;
    if ( v190 < 0 )
    {
      cDatab = 407;
      goto LABEL_394;
    }
  }
  v114 = v2[18].Ptr;
  v11 = 0;
  Dwm3DRECompositorThunk::EnsureImpl(v112);
  v115 = v114[4];
  if ( v115 )
  {
    v175 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v115 + 40LL))(v115);
    v11 = v175;
    if ( v175 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v175, 0x44u);
  }
  if ( v11 < 0 )
  {
    cDatab = 410;
    goto LABEL_394;
  }
  v116 = (CSpatialVisualContent ***)v2[19].Ptr;
  v117 = *v116;
  v118 = v116[1];
  if ( *v116 == v118 )
  {
LABEL_188:
    v11 = 0;
  }
  else
  {
    while ( 1 )
    {
      v176 = CSpatialVisualContent::PreRender(*v117);
      v11 = v176;
      if ( v176 < 0 )
        break;
      if ( ++v117 == v118 )
        goto LABEL_188;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v176, 0x1Au);
  }
  if ( v11 < 0 )
  {
    cDatab = 411;
LABEL_394:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180240F48, 2u, v11, cDatab);
    goto LABEL_217;
  }
  v119 = v2[16].Ptr;
  if ( v119 && v119[4] )
  {
    v232 = v2[16].Ptr;
    CHolographicInteropTaskQueue::ProcessPendingMessages__lambda_1af5a33988fbdcb1a8e6d38412aed786___(v119[6], &v232);
  }
  if ( *v113 )
  {
    dword_1802D6260 |= 0x200u;
  }
  else
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_MILEVENT_UCE_PROCESSANIMATERESOURCES_Start);
    LODWORD(v120) = v2[83].Ptr;
    while ( (_DWORD)v120 )
    {
      v120 = (unsigned int)(v120 - 1);
      v144 = (CAnimation *)*((_QWORD *)v2[80].Ptr + v120);
      v145 = **(void (***)(void))v144;
      if ( (char *)v145 == (char *)CAnimation::UpdateAnimateValues )
        CAnimation::UpdateAnimateValues(v144);
      else
        v145();
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    {
      McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_MILEVENT_UCE_PROCESSANIMATERESOURCES_Stop);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_PROCESS_EXPRESSIONS_Start);
    }
    CExpressionManager::UpdateExpressions((CExpressionManager *)v2[30].Ptr, (__int64)v2[62].Ptr, (__int64)v2[48].Ptr);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_PROCESS_EXPRESSIONS_Stop);
    v121 = 0LL;
    v195 = 0LL;
    if ( ::CycleTime )
    {
      v122 = GetCurrentThread();
      v123 = QueryThreadCycleTime(v122, &v195);
      v121 = v195;
      if ( v123 )
        qword_1802D62B0 += v195 - ::CycleTime;
    }
    ::CycleTime = v121;
    if ( (`wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
      wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetCachedFeatureEnabledState(v121);
    v124 = 1;
    v203 = 0;
    v218 = 0;
    LOBYTE(v204) = 3;
    v219 = v204;
    SurfaceUpdates = 3;
    v125 = wil_details_MapReportingKind(3, 1);
    v126 = (int)v125;
    v127 = wil_details_RecordUsageInPropertyCache(
             v237,
             &`wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetFeaturePropertyCache'::`2'::data,
             v125);
    v261 = *(_OWORD *)v127;
    v262 = *(_QWORD *)(v127 + 16);
    if ( g_wil_details_recordFeatureUsage )
    {
      if ( (char *)g_wil_details_recordFeatureUsage == (char *)wil::details::RecordFeatureUsageCallback )
        wil::details::RecordFeatureUsageCallback(
          (wil::details *)0xC36614,
          (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetFeaturePropertyCache'::`2'::data,
          (union wil_details_FeaturePropertyCache *)&v261,
          v129);
      else
        g_wil_details_recordFeatureUsage(
          0xC36614u,
          (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetFeaturePropertyCache'::`2'::data,
          (struct wil_details_RecordUsageResult *)&v261);
      v128 = `wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetFeaturePropertyCache'::`2'::data;
      if ( (`wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0x20 )
      {
        v250 = 0;
        v251 = (`wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetFeaturePropertyCache'::`2'::data >> 2) & 1;
        v249[0] = 0LL;
        v249[1] = (unsigned int)v126;
        ((void (__fastcall *)(__int64, _QWORD, _QWORD *))g_wil_details_recordFeatureUsage)(12805652LL, 0LL, v249);
      }
    }
    if ( !(_DWORD)v262 && g_wil_details_pfnFeatureLoggingHook )
      g_wil_details_pfnFeatureLoggingHook(
        0xC36614u,
        (const struct FEATURE_LOGGED_TRAITS *)&v218,
        0LL,
        1,
        (const enum wil_ReportingKind *)&SurfaceUpdates,
        0LL,
        0,
        1uLL);
    if ( g_wil_details_queueBackgroundSRUMUsageReporting && (!(_DWORD)v126 || (int)v126 >= 100 && v126 < 0x96) )
      g_wil_details_queueBackgroundSRUMUsageReporting(0xC36614u, v126, 1u);
    LOBYTE(v128) = 3;
    if ( (unsigned __int8)wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::__private_IsVariantEqual(v128)
      && !byte_1802D68C0 )
    {
      v177.QuadPart = qword_1802D68D8;
      QueryPerformanceCounter(&v209);
      v180 = v209.LowPart;
      if ( v177.QuadPart < (unsigned __int64)v209.QuadPart )
      {
        HintPpm(2LL);
        v180 = v209.LowPart;
        byte_1802D68C0 = 1;
      }
      else
      {
        v124 = 0;
      }
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        McTemplateU0dtxxxx(v179, v178, 2, v124, qword_1802D68B8, qword_1802D68B0, v177.QuadPart, v180);
    }
    v130 = CRenderTargetManager::PreRender((CRenderTargetManager *)v2[9].Ptr);
    v11 = v130;
    if ( v130 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180240F48, 2u, v130, 0x1B3u);
  }
LABEL_217:
  if ( !v111 && !*v113 )
    (*(void (__fastcall **)(PVOID, __int64, __int64))(*(_QWORD *)v2[69].Ptr + 104LL))(v2[69].Ptr, 2000LL, 4LL);
LABEL_218:
  v131 = (char *)v2[13].Ptr;
  if ( v131 )
  {
    v132 = v131 + 200;
    while ( 1 )
    {
      v133 = 0LL;
      EnterCriticalSection((LPCRITICAL_SECTION)(v132 + 24));
      v134 = *(char **)v132;
      if ( *(char **)(*(_QWORD *)v132 + 8LL) != v132
        || (v135 = *(_QWORD *)v134, *(char **)(*(_QWORD *)v134 + 8LL) != v134) )
      {
        __fastfail(3u);
      }
      *(_QWORD *)v132 = v135;
      *(_QWORD *)(v135 + 8) = v132;
      if ( v134 != v132 )
      {
        v133 = *((_QWORD *)v134 + 2);
        operator delete(v134, 0x18uLL);
        --*((_DWORD *)v132 + 4);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(v132 + 24));
      if ( !v133 )
        break;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v133 + 16LL))(v133);
    }
  }
  v136 = InterlockedFlushSList((PSLIST_HEADER)&v2[166]);
  for ( j = v136; j; j = j->Next )
  {
    if ( BYTE4(v2[168].Ptr) )
      LODWORD(j[2].Next->Next) = -2147467260;
    else
      LODWORD(j[2].Next->Next) = CVisualTree::PreCompute((struct CVisualTree *)j[1].Next, 0LL);
  }
  LODWORD(v2[73].Ptr) = 0;
  ReleaseSRWLockExclusive(v2 + 72);
  if ( BYTE2(v2[168].Ptr) )
  {
    v147 = *((_QWORD *)v2[12].Ptr + 30);
    if ( v147 )
    {
      v148 = *(void **)(v147 + 120);
      if ( v148 != (void *)-1LL )
        SetEvent(v148);
    }
    BYTE2(v2[168].Ptr) = 0;
  }
  while ( v136 )
  {
    v150 = v136;
    SetEvent(*((HANDLE *)&v136[1].Next + 1));
    v136 = v136->Next;
    operator delete(v150, 0x30uLL);
  }
  if ( dword_1802D66F0 )
    SetEvent(qword_1802D6988);
  return (unsigned int)v11;
}
