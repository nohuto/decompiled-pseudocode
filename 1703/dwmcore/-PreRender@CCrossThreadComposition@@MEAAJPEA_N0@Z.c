/*
 * XREFs of ?PreRender@CCrossThreadComposition@@MEAAJPEA_N0@Z @ 0x180035420
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x1800666B0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 * Callees:
 *     ?TryReleaseNonResidentVideoMemoryResources@CD3DDeviceLevel1@@QEAAXXZ @ 0x180017D58 (-TryReleaseNonResidentVideoMemoryResources@CD3DDeviceLevel1@@QEAAXXZ.c)
 *     ?AddUnclaimedToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x18002418C (-AddUnclaimedToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?GetLegacyTokens@CLegacySurfaceManager@@QEAAJ_KPEAIPEAH@Z @ 0x180024268 (-GetLegacyTokens@CLegacySurfaceManager@@QEAAJ_KPEAIPEAH@Z.c)
 *     ?RemoveAt@?$DynArray@VUnclaimedToken@CLegacySurfaceManager@@$0A@@@QEAAJI@Z @ 0x180024360 (-RemoveAt@-$DynArray@VUnclaimedToken@CLegacySurfaceManager@@$0A@@@QEAAJI@Z.c)
 *     ?UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z @ 0x18002CE40 (-UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z.c)
 *     ?FlushAllDevices@CD3DDeviceManager@@QEAAXXZ @ 0x1800426C0 (-FlushAllDevices@CD3DDeviceManager@@QEAAXXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?CheckStereoState@CComposition@@QEAAJXZ @ 0x18005B7C0 (-CheckStereoState@CComposition@@QEAAJXZ.c)
 *     ?NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z @ 0x18005BB24 (-NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z.c)
 *     ?PerformQueuedSnapshots@CComposition@@QEAAJXZ @ 0x18005BC84 (-PerformQueuedSnapshots@CComposition@@QEAAJXZ.c)
 *     ?GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z @ 0x18005BF68 (-GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z.c)
 *     ?CloseChannel@CComposition@@IEAAJI@Z @ 0x18005BFB0 (-CloseChannel@CComposition@@IEAAJI@Z.c)
 *     ?OpenChannel@CComposition@@IEAAJIK_K@Z @ 0x18005C0BC (-OpenChannel@CComposition@@IEAAJIK_K@Z.c)
 *     ?UpdateMmcssPartners@CComposition@@QEAAJXZ @ 0x18005CCA8 (-UpdateMmcssPartners@CComposition@@QEAAJXZ.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PreRender@CDesktopRenderTarget@@UEAAJXZ @ 0x180069700 (-PreRender@CDesktopRenderTarget@@UEAAJXZ.c)
 *     ?EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ @ 0x18006A0B0 (-EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ.c)
 *     ?UpdateMPOCaps@CRenderTargetManager@@QEAAJXZ @ 0x18006B768 (-UpdateMPOCaps@CRenderTargetManager@@QEAAJXZ.c)
 *     ?IsOfType@CHwndRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18006BEC0 (-IsOfType@CHwndRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?CheckDeviceState@CHwndRenderTarget@@UEAAJXZ @ 0x18006CA20 (-CheckDeviceState@CHwndRenderTarget@@UEAAJXZ.c)
 *     ?ProcessSurfaceUpdateInternal@CCompositionSurfaceInfo@@AEAAJAEBUCSM_SURFACE_UPDATE@@@Z @ 0x180076E90 (-ProcessSurfaceUpdateInternal@CCompositionSurfaceInfo@@AEAAJAEBUCSM_SURFACE_UPDATE@@@Z.c)
 *     ?DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAVCDXGIEnumeration@@PEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateComparison@@_N@Z @ 0x18007EDA4 (-DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAVCDXGIEnumeration@@PEAPEAVCDisplaySet@@PEAW4En.c)
 *     ?EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x18007F134 (-EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x18007F27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?GetWrittenSize@CDataStreamBlock@@UEAAAEAIXZ @ 0x180083850 (-GetWrittenSize@CDataStreamBlock@@UEAAAEAIXZ.c)
 *     ?GetData@CDataStreamBlock@@UEAAPEBXXZ @ 0x180083870 (-GetData@CDataStreamBlock@@UEAAPEBXXZ.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18008F260 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18008F590 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?ReleaseCaptureBitsResponse@CLegacySurfaceManager@@QEAA_NXZ @ 0x1800B0300 (-ReleaseCaptureBitsResponse@CLegacySurfaceManager@@QEAA_NXZ.c)
 *     ?ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z @ 0x1800B0364 (-ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z.c)
 *     ?FlushVistaBltPresentHistory@CLegacySurfaceManager@@QEAAXXZ @ 0x1800B049C (-FlushVistaBltPresentHistory@CLegacySurfaceManager@@QEAAXXZ.c)
 *     ?GetKMTDriverUpdateStatus@CDXGIAdapterLimited@@QEAAJPEAH@Z @ 0x1800B53D0 (-GetKMTDriverUpdateStatus@CDXGIAdapterLimited@@QEAAJPEAH@Z.c)
 *     ?Revert@CMmcssTask@@QEAAXXZ @ 0x1800B6528 (-Revert@CMmcssTask@@QEAAXXZ.c)
 *     ?Apply@CMmcssTask@@QEAAJ_N@Z @ 0x1800B6880 (-Apply@CMmcssTask@@QEAAJ_N@Z.c)
 *     ?Release@CDisplaySet@@QEBAXXZ @ 0x1800B7768 (-Release@CDisplaySet@@QEBAXXZ.c)
 *     _TlgKeywordOn @ 0x1800BB2F8 (_TlgKeywordOn.c)
 *     ?UpdateAnimateValues@CAnimation@@UEAA_NXZ @ 0x1800BC890 (-UpdateAnimateValues@CAnimation@@UEAA_NXZ.c)
 *     _TlgWrite @ 0x1800BD9E0 (_TlgWrite.c)
 *     ??$ReplaceInterface@VCDisplaySet@@V1@@@YAXAEAPEAVCDisplaySet@@PEAV0@@Z @ 0x1800CB010 (--$ReplaceInterface@VCDisplaySet@@V1@@@YAXAEAPEAVCDisplaySet@@PEAV0@@Z.c)
 *     TemplateEventDescriptor @ 0x1800D2908 (TemplateEventDescriptor.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?GetSurfaceUpdates@CCompositionSurfaceManager@@QEAAJ_KPEAIPEAH@Z @ 0x180133B30 (-GetSurfaceUpdates@CCompositionSurfaceManager@@QEAAJ_KPEAIPEAH@Z.c)
 *     Template_qq @ 0x18013BC88 (Template_qq.c)
 *     Template_x @ 0x18013BE18 (Template_x.c)
 *     ?ReleaseResourcesForDisplayChange@CRenderTargetManager@@QEAAXXZ @ 0x180144E74 (-ReleaseResourcesForDisplayChange@CRenderTargetManager@@QEAAXXZ.c)
 *     Template_xxx @ 0x1801459E8 (Template_xxx.c)
 *     ?SetTargetOcclusion@CIndirectSwapchainRenderTarget@@QEAAJPEAVCRenderTarget@@_N@Z @ 0x1801491B8 (-SetTargetOcclusion@CIndirectSwapchainRenderTarget@@QEAAJPEAVCRenderTarget@@_N@Z.c)
 *     Template_nxxxqqxqqqqqqqqx @ 0x180175E60 (Template_nxxxqqxqqqqqqqqx.c)
 *     ?MilUnexpectedErrorWithAsimovEvent@@YAXJPEBG@Z @ 0x180185D20 (-MilUnexpectedErrorWithAsimovEvent@@YAXJPEBG@Z.c)
 *     CHolographicInteropTaskQueue::ProcessPendingMessages__lambda_1af5a33988fbdcb1a8e6d38412aed786___ @ 0x1801A5954 (CHolographicInteropTaskQueue--ProcessPendingMessages__lambda_1af5a33988fbdcb1a8e6d38412aed786___.c)
 *     ?PreCompute@CHolographicInteropTarget@@AEAAJXZ @ 0x1801A69E8 (-PreCompute@CHolographicInteropTarget@@AEAAJXZ.c)
 */

__int64 __fastcall CCrossThreadComposition::PreRender(RTL_SRWLOCK *this, bool *a2, bool *a3)
{
  RTL_SRWLOCK *v3; // r14
  RTL_SRWLOCK *v4; // rsi
  unsigned __int64 v5; // rcx
  bool v6; // r15
  LARGE_INTEGER **Ptr; // rdx
  LARGE_INTEGER v8; // r8
  _QWORD *v9; // rcx
  __int64 v10; // rax
  int v11; // edi
  _QWORD *v12; // rcx
  int v13; // eax
  PVOID v14; // rax
  void *v15; // rdx
  CDisplaySet *v16; // r14
  char v17; // r13
  CDXGIEnumeration *v18; // rbx
  int v19; // edi
  struct CDXGIEnumeration *v20; // r12
  CDisplaySet *v21; // rbx
  bool v22; // di
  __int64 v23; // rbx
  __int64 v24; // rcx
  bool v25; // al
  int v26; // r15d
  _DWORD *v27; // rax
  __int64 v28; // rcx
  unsigned int (__fastcall *v29)(CMILRefCountBase *__hidden); // rax
  CDisplaySet *v30; // rbx
  __int64 v31; // rdi
  __int64 v32; // r14
  int v33; // eax
  int v34; // r15d
  _QWORD *v35; // rcx
  unsigned __int64 v36; // r15
  int v37; // edi
  int ConnectionBatch; // eax
  __int64 v39; // rcx
  __int64 v40; // rbx
  unsigned int v41; // ebx
  _DWORD *v42; // rdi
  int v43; // eax
  int v44; // ebx
  unsigned __int64 v45; // rcx
  unsigned int v46; // r12d
  char *v47; // rbx
  unsigned int v48; // r13d
  int v49; // edi
  int FrameLegacyTokens; // eax
  CLegacySurfaceManager *v51; // rcx
  unsigned int v52; // r15d
  __int64 v53; // rdi
  char v54; // al
  char *v55; // rdi
  unsigned int v56; // r13d
  unsigned int v57; // r12d
  int v58; // ebx
  int FrameSurfaceUpdates; // eax
  void *v60; // rcx
  unsigned int v61; // ebx
  struct _RTL_GENERIC_TABLE *v62; // r14
  _QWORD *v63; // rax
  __int64 v64; // rax
  __int64 (__fastcall *v65)(CBitmapRealization *__hidden, const struct _GUID *, void **); // r8
  int v66; // edi
  __int64 (__fastcall ***v67)(CBitmapRealization *__hidden, const struct _GUID *, void **); // r9
  __int64 (__fastcall *v68)(CBitmapRealization *__hidden, const struct _GUID *, void **); // rax
  __int64 v69; // rdx
  __int64 v70; // rax
  __int64 (__fastcall *v71)(CBitmapRealization *__hidden, const struct _GUID *, void **); // rax
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rcx
  int v75; // ebx
  __int64 (__fastcall ***v76)(CBitmapRealization *__hidden, const struct _GUID *, void **); // rcx
  _QWORD *v77; // rdi
  unsigned int v78; // ebx
  CDesktopRenderTarget *v79; // rcx
  __int64 (__fastcall *v80)(CDesktopRenderTarget *__hidden); // rax
  int v81; // eax
  _BYTE *v82; // rdi
  char v83; // r13
  unsigned int v84; // r14d
  struct CRenderTarget **v85; // r15
  struct CRenderTarget *v86; // rcx
  __int64 (__fastcall *v87)(struct CRenderTarget *, __int64); // rax
  char v88; // al
  CHwndRenderTarget *v89; // rcx
  __int64 (*v90)(void); // rax
  int v91; // eax
  int v92; // ebx
  char v93; // cl
  struct CRenderTarget *v94; // rcx
  __int64 (__fastcall *v95)(struct CRenderTarget *, __int64); // rax
  struct CRenderTarget *v97; // r12
  unsigned int v98; // r15d
  unsigned int v99; // r15d
  int v100; // r14d
  unsigned int v101; // edi
  _BYTE *v102; // rax
  bool *v103; // r14
  _QWORD **v104; // rcx
  _QWORD *v105; // rcx
  __int64 v106; // rbx
  int v107; // edi
  __int64 v108; // rcx
  _QWORD *v109; // rbx
  unsigned int v110; // edi
  CDesktopRenderTarget *v111; // rcx
  __int64 (__fastcall *v112)(CDesktopRenderTarget *__hidden); // rax
  int v113; // eax
  unsigned int v114; // edi
  CHolographicInteropTarget *v115; // r14
  __int64 (__fastcall *v116)(CHolographicInteropTarget *, __int64); // rax
  char *v118; // rbx
  char *v119; // rbx
  __int64 v120; // rsi
  __int64 *v121; // rcx
  __int64 v122; // rax
  CAnimation *v124; // rcx
  __int64 (*v125)(void); // rax
  char v126; // al
  unsigned int v127; // eax
  volatile signed __int32 *v128; // r15
  __int64 **v129; // rbx
  __int64 *v130; // rax
  __int64 ***v131; // rcx
  __int64 *v132; // rax
  __int64 *v133; // rdi
  CDataStreamBlock *v134; // rdi
  unsigned int *(__fastcall *v135)(CDataStreamBlock *__hidden); // rax
  unsigned int *WrittenSize; // rax
  unsigned int *v137; // r14
  const void *(__fastcall *v138)(CDataStreamBlock *__hidden); // rax
  const void *Data; // rax
  __int64 v140; // rdi
  __int64 **v141; // rax
  __int64 *v142; // rax
  __int64 v143; // rcx
  __int64 *v144; // r8
  int v145; // esi
  __int64 v146; // r14
  _QWORD *v147; // rax
  CCompositionSurfaceInfo *v148; // r15
  int updated; // eax
  unsigned int v150; // edx
  int AttachedChannel; // eax
  struct CChannelContext *v152; // rdi
  int v153; // eax
  int v154; // eax
  int v155; // eax
  __int64 v156; // rax
  int v157; // eax
  int v158; // eax
  _BYTE *v159; // rax
  int v160; // ecx
  unsigned int v161; // ebx
  unsigned int v162; // ebx
  CDXGIEnumeration *v163; // rdi
  int KMTDriverUpdateStatus; // eax
  int v165; // eax
  int v166; // eax
  unsigned int i; // ebx
  int v168; // eax
  int LegacyTokens; // eax
  unsigned int v170; // edi
  __int64 *v171; // rdx
  __int64 v172; // rax
  bool v173; // r15
  const GUID *v174; // r8
  const GUID *v175; // r9
  const GUID *v176; // r8
  const GUID *v177; // r9
  _QWORD *v178; // r14
  int v179; // ebx
  unsigned int v180; // edi
  __int64 v181; // rcx
  int v182; // eax
  int v183; // r9d
  int v184; // eax
  bool v185; // r13
  int v186; // eax
  int v187; // eax
  int v188; // eax
  const GUID *v189; // r8
  const GUID *v190; // r9
  int v191; // eax
  unsigned int v192; // ebx
  __int64 v193; // rcx
  unsigned int cDataa; // [rsp+20h] [rbp-2A8h]
  unsigned int cData; // [rsp+20h] [rbp-2A8h]
  unsigned int cDatac; // [rsp+20h] [rbp-2A8h]
  unsigned int cDatab; // [rsp+20h] [rbp-2A8h]
  unsigned int cDatad; // [rsp+20h] [rbp-2A8h]
  int v199; // [rsp+30h] [rbp-298h]
  int v200; // [rsp+60h] [rbp-268h]
  int v201; // [rsp+80h] [rbp-248h]
  int SurfaceUpdates; // [rsp+A0h] [rbp-228h]
  bool v203; // [rsp+A4h] [rbp-224h] BYREF
  bool v204; // [rsp+A5h] [rbp-223h] BYREF
  int v205; // [rsp+A8h] [rbp-220h] BYREF
  int v206; // [rsp+ACh] [rbp-21Ch] BYREF
  unsigned __int64 v207; // [rsp+B0h] [rbp-218h]
  __int64 (__fastcall ***v208)(CBitmapRealization *__hidden, const struct _GUID *, void **); // [rsp+B8h] [rbp-210h] BYREF
  unsigned int v209; // [rsp+C0h] [rbp-208h] BYREF
  unsigned int v210; // [rsp+C4h] [rbp-204h] BYREF
  unsigned int v211; // [rsp+C8h] [rbp-200h] BYREF
  int v212; // [rsp+CCh] [rbp-1FCh] BYREF
  int v213; // [rsp+D0h] [rbp-1F8h] BYREF
  int v214; // [rsp+D4h] [rbp-1F4h] BYREF
  __int64 v215; // [rsp+D8h] [rbp-1F0h] BYREF
  bool *v216; // [rsp+E0h] [rbp-1E8h]
  unsigned __int64 v217; // [rsp+E8h] [rbp-1E0h] BYREF
  int v218; // [rsp+F0h] [rbp-1D8h] BYREF
  CDisplaySet *v219; // [rsp+F8h] [rbp-1D0h] BYREF
  int AdapterPopulationUniqueness; // [rsp+100h] [rbp-1C8h] BYREF
  void *lpMem; // [rsp+108h] [rbp-1C0h] BYREF
  RTL_SRWLOCK *v222; // [rsp+110h] [rbp-1B8h]
  struct CChannelContext *v223; // [rsp+118h] [rbp-1B0h] BYREF
  PVOID RestartKey; // [rsp+120h] [rbp-1A8h] BYREF
  bool *v225; // [rsp+128h] [rbp-1A0h]
  struct _RTL_CRITICAL_SECTION *v226; // [rsp+130h] [rbp-198h] BYREF
  unsigned __int64 v227; // [rsp+138h] [rbp-190h] BYREF
  unsigned __int64 v228; // [rsp+140h] [rbp-188h] BYREF
  PVOID v229; // [rsp+148h] [rbp-180h] BYREF
  _DWORD v230[3]; // [rsp+150h] [rbp-178h] BYREF
  __int64 v231; // [rsp+15Ch] [rbp-16Ch]
  __int64 v232; // [rsp+164h] [rbp-164h]
  _QWORD Buffer[2]; // [rsp+170h] [rbp-158h] BYREF
  LARGE_INTEGER v234; // [rsp+180h] [rbp-148h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+188h] [rbp-140h] BYREF
  int v236; // [rsp+190h] [rbp-138h]
  __int64 v237; // [rsp+194h] [rbp-134h]
  __int128 v238; // [rsp+19Ch] [rbp-12Ch]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+1B0h] [rbp-118h] BYREF
  int *v240; // [rsp+1D0h] [rbp-F8h]
  __int64 v241; // [rsp+1D8h] [rbp-F0h]
  GUID *v242; // [rsp+1E0h] [rbp-E8h]
  __int64 v243; // [rsp+1E8h] [rbp-E0h]
  int *p_AdapterPopulationUniqueness; // [rsp+1F0h] [rbp-D8h]
  __int64 v245; // [rsp+1F8h] [rbp-D0h]
  EVENT_DATA_DESCRIPTOR v246; // [rsp+210h] [rbp-B8h] BYREF
  GUID *v247; // [rsp+230h] [rbp-98h]
  __int64 v248; // [rsp+238h] [rbp-90h]
  EVENT_DATA_DESCRIPTOR v249; // [rsp+248h] [rbp-80h] BYREF
  GUID *v250; // [rsp+268h] [rbp-60h]
  __int64 v251; // [rsp+270h] [rbp-58h]

  v3 = this + 73;
  v222 = this;
  v4 = this;
  *a2 = 0;
  v225 = a3;
  v216 = a2;
  *a3 = 0;
  AcquireSRWLockExclusive(this + 73);
  LODWORD(v3[1].Ptr) = GetCurrentThreadId();
  memset_0(&v234, 0, 0x30uLL);
  if ( (dword_1802412A0 & 1) != 0 )
  {
    v5 = qword_1802412A8;
  }
  else
  {
    v5 = 900 * g_qpcFrequency.QuadPart;
    dword_1802412A0 |= 1u;
    qword_1802412A8 = 900 * g_qpcFrequency.QuadPart;
  }
  if ( !v4[171].Ptr )
    v4[171].Ptr = v4[47].Ptr;
  v6 = 0;
  if ( (char *)v4[47].Ptr - (char *)v4[171].Ptr >= v5 )
  {
    for ( i = 0; i < (unsigned int)qword_18023E900; ++i )
      CD3DDeviceLevel1::TryReleaseNonResidentVideoMemoryResources(*(CD3DDeviceLevel1 **)(qword_18023E890 + 40LL * i));
    v4[171].Ptr = v4[47].Ptr;
  }
  Ptr = (LARGE_INTEGER **)v4[49].Ptr;
  if ( Ptr )
  {
    v4[47].Ptr = (PVOID)(*Ptr)[31];
    v234 = (*Ptr)[29];
    v8 = (*Ptr)[162];
    PerformanceCount = v8;
    v236 = *((_DWORD *)Ptr + 6) + (*Ptr)[12].HighPart;
    v237 = *(LONGLONG *)((char *)&Ptr[1][4].QuadPart + 4);
  }
  else
  {
    QueryPerformanceCounter(&PerformanceCount);
    v8 = PerformanceCount;
    v234.QuadPart = 0LL;
    v236 = 0;
    v237 = 0x10000003CLL;
  }
  v9 = v4[67].Ptr;
  v10 = v237;
  v11 = 0;
  v4[65].Ptr = (PVOID)v8;
  SurfaceUpdates = 0;
  v9[519] = v10;
  v12 = v4[69].Ptr;
  v238 = *(_OWORD *)&v4[173].Ptr;
  v13 = NtDCompositionBeginFrame(*v12, &v234, &v217);
  if ( v13 < 0 )
  {
    v11 = v13 | 0x10000000;
    SurfaceUpdates = v13 | 0x10000000;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13 | 0x10000000, 0x87u);
    if ( v11 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x103u);
  }
  v14 = v4[49].Ptr;
  v15 = (void *)v217;
  v207 = v217;
  if ( v14 )
  {
    *(_QWORD *)(*(_QWORD *)v14 + 8LL) = v217;
    v207 = v217;
  }
  v4[50].Ptr = v15;
  v214 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801E9F58, 2u, v11, 0x134u);
    goto LABEL_198;
  }
  if ( !LODWORD(v4[153].Ptr) )
    v6 = 1;
  v16 = 0LL;
  v219 = 0LL;
  v205 = 0;
  v17 = 0;
  v206 = 0;
  EnterCriticalSection(&g_DisplayManager);
  v18 = qword_18023E530;
  if ( qword_18023E530
    && (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)qword_18023E530 + 2) + 104LL))(*((_QWORD *)qword_18023E530
                                                                                             + 2))
    && (unsigned int)((__int64 (*)(void))DrvQueryAdapterPopulationUniqueness)() == *((_DWORD *)v18 + 14)
    && qword_18023E530 == v18 )
  {
LABEL_18:
    v19 = v206;
    SurfaceUpdates = v206;
    goto LABEL_19;
  }
LABEL_313:
  v160 = -2003304291;
  v161 = 0;
  SurfaceUpdates = -2003304291;
  v206 = -2003304291;
  while ( v160 == -2003304291 )
  {
    if ( 10 * v161 * v161 )
    {
      LeaveCriticalSection(&g_DisplayManager);
      Sleep(10 * v161 * v161);
      EnterCriticalSection(&g_DisplayManager);
    }
    v165 = CDisplayManager::EnsureDXGIEnumeration(&g_DisplayManager, 0LL);
    ++v161;
    SurfaceUpdates = v165;
    v206 = v165;
    v160 = v165;
    if ( v161 >= 0xA )
    {
      if ( v165 == -2003304291 )
      {
        AdapterPopulationUniqueness = DrvQueryAdapterPopulationUniqueness(2291663005LL);
        if ( dword_18023D720 <= 5u )
        {
          v162 = 0;
        }
        else
        {
          v162 = 0;
          if ( TlgKeywordOn((TraceLoggingHProvider)&dword_18023D720, 0x400000000000uLL) )
          {
            v241 = 4LL;
            v240 = &v206;
            v242 = &gDwmCoreTelemetryActivityId;
            p_AdapterPopulationUniqueness = &AdapterPopulationUniqueness;
            v243 = 16LL;
            v245 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_18023D720, &unk_1801F8166, v174, v175, 5u, &pData);
          }
        }
        SurfaceUpdates = -2003304442;
        v206 = -2003304442;
        goto LABEL_317;
      }
      break;
    }
  }
  if ( v160 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v160, 0x6Au);
    v19 = v206;
    SurfaceUpdates = v206;
    goto LABEL_19;
  }
  v162 = 0;
LABEL_317:
  v163 = qword_18023E530;
  v218 = 0;
  if ( *((_DWORD *)qword_18023E530 + 22) )
  {
    do
    {
      KMTDriverUpdateStatus = CDXGIAdapterLimited::GetKMTDriverUpdateStatus(
                                *(CDXGIAdapterLimited **)(*((_QWORD *)v163 + 8) + 8LL * v162),
                                &v218);
      if ( KMTDriverUpdateStatus < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, KMTDriverUpdateStatus, 0xB8u);
      }
      else if ( v218 )
      {
        goto LABEL_313;
      }
      ++v162;
    }
    while ( v162 < *((_DWORD *)v163 + 22) );
    goto LABEL_18;
  }
  v19 = SurfaceUpdates;
LABEL_19:
  v20 = qword_18023E530;
  if ( qword_18023E530 )
  {
    (**(void (__fastcall ***)(CDXGIEnumeration *))qword_18023E530)(qword_18023E530);
    v19 = v206;
    SurfaceUpdates = v206;
  }
  LeaveCriticalSection(&g_DisplayManager);
  if ( v19 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x84u);
    goto LABEL_35;
  }
  v21 = qword_18023E528;
  if ( !qword_18023E528 )
  {
LABEL_307:
    v158 = CDisplayManager::DeriveCurrentDisplaySet(
             &g_DisplayManager,
             v20,
             &v219,
             (enum DisplayStateComparison::Enum *)&v205,
             v6);
    SurfaceUpdates = v158;
    v19 = v158;
    if ( v158 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v158, 0x93u);
      if ( dword_18023E538 >= 0
        && dword_18023D720 > 5u
        && TlgKeywordOn((TraceLoggingHProvider)&dword_18023D720, 0x400000000000uLL) )
      {
        v248 = 16LL;
        v247 = &gDwmCoreTelemetryActivityId;
        TlgWrite((TraceLoggingHProvider)&dword_18023D720, &unk_1801F8132, v176, v177, 3u, &v246);
      }
      v16 = v219;
      dword_18023E538 = v19;
    }
    else
    {
      dword_18023E538 = v158;
      v17 = 1;
      v226 = &g_DisplayManager;
      EnterCriticalSection(&g_DisplayManager);
      v16 = v219;
      ReplaceInterface<CDisplaySet,CDisplaySet>(&qword_18023E528, v219);
      CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v226);
    }
    goto LABEL_35;
  }
  if ( GdiEntry13() == *((_DWORD *)v21 + 1)
    && (unsigned int)DrvQueryPrivateDisplayChangeUniqueness() == *((_DWORD *)v21 + 2) )
  {
    LOBYTE(v16) = 1;
  }
  v22 = *((_DWORD *)v21 + 3) == dword_18023E54C;
  v23 = *((_QWORD *)v21 + 2);
  v25 = v23
     && (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(v23 + 16) + 104LL))(*(_QWORD *)(v23 + 16))
     && (unsigned int)DrvQueryAdapterPopulationUniqueness(v24) == *(_DWORD *)(v23 + 56)
     && qword_18023E530 == (CDXGIEnumeration *)v23;
  if ( !(_BYTE)v16 || !v22 || !v25 )
  {
    v207 = v217;
    goto LABEL_307;
  }
  v16 = v219;
  v19 = SurfaceUpdates;
  v207 = v217;
LABEL_35:
  v26 = v205;
  v27 = &unk_1801F3FF0;
  v28 = 0LL;
  while ( *v27 != v19 )
  {
    v28 = (unsigned int)(v28 + 1);
    ++v27;
    if ( (unsigned int)v28 >= 9 )
    {
      if ( v19 < 0 && v19 != -2003304316 && v19 != -2003304442 && v19 != -2003304307 )
        MilUnexpectedErrorWithAsimovEvent(v19, L"Could not create display set.");
      goto LABEL_39;
    }
  }
  if ( v19 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0xC6u);
LABEL_39:
  if ( v16 )
    CDisplaySet::Release(v16);
  if ( v20 )
  {
    v29 = *(unsigned int (__fastcall **)(CMILRefCountBase *__hidden))(*(_QWORD *)v20 + 8LL);
    if ( v29 == CMILRefCountBase::Release )
      CMILRefCountBase::Release(v20);
    else
      v29(v20);
  }
  if ( v19 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x265u);
  v30 = qword_18023E528;
  if ( qword_18023E528 )
  {
    v31 = 0LL;
    if ( *((_DWORD *)qword_18023E528 + 18) )
    {
      while ( 1 )
      {
        v32 = *(_QWORD *)(*((_QWORD *)v30 + 6) + 8 * v31);
        v28 = *(_QWORD *)(v32 + 40);
        if ( v28 )
        {
          v28 = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v28 + 24LL))(v28) != 0;
          if ( *(unsigned __int8 *)(v32 + 298) != (_DWORD)v28 )
            break;
        }
        v31 = (unsigned int)(v31 + 1);
        if ( (unsigned int)v31 >= *((_DWORD *)v30 + 18) )
          goto LABEL_51;
      }
      if ( !v205 )
        v26 = 2;
    }
LABEL_51:
    v19 = SurfaceUpdates;
  }
  if ( v19 >= 0 )
  {
    v33 = CComposition::CheckStereoState((CComposition *)v4);
    SurfaceUpdates = v33;
    v19 = v33;
    if ( v33 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v33, 0x279u);
  }
  v34 = v26 - 2;
  if ( !v34 )
  {
    v178 = v4[4].Ptr;
    v179 = 0;
    v180 = 0;
    if ( *((_DWORD *)v178 + 20) )
    {
      while ( 1 )
      {
        v181 = *(_QWORD *)(v178[7] + 8LL * v180);
        v182 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v181 + 232LL))(v181);
        v179 = v182;
        if ( v182 < 0 )
          break;
        if ( ++v180 >= *((_DWORD *)v178 + 20) )
          goto LABEL_397;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v182, 0x3DBu);
LABEL_397:
      if ( v179 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v179, 0x287u);
    }
    v19 = SurfaceUpdates;
    if ( !SurfaceUpdates || SurfaceUpdates >= 0 && v179 < 0 )
    {
      v19 = v179;
      SurfaceUpdates = v179;
    }
    goto LABEL_57;
  }
  if ( v34 != 1 )
  {
LABEL_57:
    if ( v17 )
      CRenderTargetManager::UpdateMPOCaps((CRenderTargetManager *)v4[4].Ptr);
    goto LABEL_59;
  }
  CRenderTargetManager::ReleaseResourcesForDisplayChange((CRenderTargetManager *)v4[4].Ptr);
LABEL_59:
  if ( v19 < 0 )
  {
    if ( v19 != -2003304316 && v19 != -2003304442 && v19 != -2003304307 )
    {
      cDataa = 325;
      goto LABEL_409;
    }
    *v225 = 1;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_x(v28, &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSQUEUEEVENT_Start, v4);
  v35 = v4[69].Ptr;
  v36 = v207;
  lpMem = (void *)v207;
  v37 = 0;
  SurfaceUpdates = 0;
  ConnectionBatch = NtDCompositionGetConnectionBatch(*v35, &lpMem, &v215);
  if ( ConnectionBatch < 0 )
  {
    v37 = ConnectionBatch | 0x10000000;
    SurfaceUpdates = ConnectionBatch | 0x10000000;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, ConnectionBatch | 0x10000000, 0xBDu);
    goto LABEL_64;
  }
  v40 = v215;
  if ( !v215 )
    goto LABEL_64;
  while ( 1 )
  {
    v37 = 0;
    SurfaceUpdates = 0;
    if ( *(_DWORD *)v40 == 8 )
    {
      v127 = *(_DWORD *)(v40 + 16);
      SurfaceUpdates = 0;
      if ( v127 >= 0x10000
        || v127 >= LODWORD(v4[46].Ptr)
        || (v128 = (volatile signed __int32 *)*((_QWORD *)v4[43].Ptr + v127)) == 0LL )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0xB04u);
        v37 = -2147024809;
        SurfaceUpdates = -2147024809;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x1CEu);
        goto LABEL_247;
      }
      _InterlockedIncrement(v128 + 2);
      v129 = *(__int64 ***)(v40 + 24);
      v130 = v129[2];
      if ( v130 )
      {
        v131 = (__int64 ***)v129[1];
        v132 = v130 + 1;
        if ( *v131 != v129 )
          __fastfail(3u);
        *v132 = (__int64)v129;
        v132[1] = (__int64)v131;
        *v131 = (__int64 **)v132;
        v129[1] = v132;
        v129[2] = 0LL;
      }
      v133 = *v129;
      if ( *v129 == (__int64 *)v129 )
      {
LABEL_237:
        v37 = SurfaceUpdates;
        goto LABEL_238;
      }
      if ( v133 )
        v134 = (CDataStreamBlock *)(v133 - 1);
      else
        v134 = 0LL;
      while ( 1 )
      {
        v135 = *(unsigned int *(__fastcall **)(CDataStreamBlock *__hidden))(*(_QWORD *)v134 + 8LL);
        if ( v135 == CDataStreamBlock::GetWrittenSize )
          WrittenSize = CDataStreamBlock::GetWrittenSize(v134);
        else
          WrittenSize = v135(v134);
        v137 = WrittenSize;
        v138 = *(const void *(__fastcall **)(CDataStreamBlock *__hidden))(*(_QWORD *)v134 + 16LL);
        if ( v138 == CDataStreamBlock::GetData )
          Data = CDataStreamBlock::GetData(v134);
        else
          Data = v138(v134);
        SurfaceUpdates = CComposition::ProcessCommandBatch(
                           (CComposition *)v4,
                           Data,
                           *v137,
                           (struct CChannelContext *)v128);
        if ( SurfaceUpdates < 0 )
        {
          v37 = SurfaceUpdates;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, SurfaceUpdates, 0x1D9u);
LABEL_238:
          while ( 1 )
          {
            v142 = *v129;
            if ( *v129 == (__int64 *)v129 )
              break;
            v143 = *v142;
            if ( (__int64 **)v142[1] != v129 || *(__int64 **)(v143 + 8) != v142 )
              __fastfail(3u);
            *v129 = (__int64 *)v143;
            *(_QWORD *)(v143 + 8) = v129;
            if ( v142 != (__int64 *)8 )
              HeapFree(WPF::g_processHeap, 0, v142 - 1);
          }
          v144 = v129[2];
          if ( v144 )
            HeapFree(WPF::g_processHeap, 0, v144);
          HeapFree(WPF::g_processHeap, 0, v129);
          if ( _InterlockedExchangeAdd(v128 + 2, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v128 + 16LL))(v128, 1LL);
LABEL_247:
          if ( v37 >= 0 )
          {
LABEL_248:
            v40 = v215;
            goto LABEL_249;
          }
          cData = 407;
LABEL_422:
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v37, cData);
          goto LABEL_248;
        }
        v140 = *((_QWORD *)v134 + 1);
        if ( !v140 )
          break;
        v134 = (CDataStreamBlock *)(v140 - 8);
        if ( !v134 )
          goto LABEL_418;
        v141 = (__int64 **)((char *)v134 + 8);
LABEL_236:
        if ( v141 == v129 )
          goto LABEL_237;
      }
      v134 = 0LL;
LABEL_418:
      v141 = 0LL;
      goto LABEL_236;
    }
    if ( *(_DWORD *)v40 == 5 )
    {
      v154 = CComposition::OpenChannel(
               (CComposition *)v4,
               *(_DWORD *)(v40 + 16),
               *(_DWORD *)(v40 + 20),
               *(_QWORD *)(v40 + 24));
      SurfaceUpdates = v154;
      v37 = v154;
      if ( v154 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v154, 0x18Fu);
      goto LABEL_248;
    }
    v39 = (unsigned int)(*(_DWORD *)v40 - 6);
    if ( *(_DWORD *)v40 == 6 )
    {
      v155 = CComposition::CloseChannel((CComposition *)v4, *(_DWORD *)(v40 + 16));
      SurfaceUpdates = v155;
      v37 = v155;
      if ( v155 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v155, 0x19Bu);
      goto LABEL_248;
    }
    if ( *(_DWORD *)v40 == 7 )
    {
      v150 = *(_DWORD *)(v40 + 16);
      v223 = 0LL;
      AttachedChannel = CComposition::GetAttachedChannel((CComposition *)v4, v150, &v223);
      v152 = v223;
      SurfaceUpdates = AttachedChannel;
      if ( AttachedChannel < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, AttachedChannel, 0x1B3u);
      }
      else
      {
        v153 = CComposition::ProcessCommandBatch(
                 (CComposition *)v4,
                 *(const void **)(v40 + 24),
                 *(_DWORD *)(v40 + 32),
                 v223);
        SurfaceUpdates = v153;
        if ( v153 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v153, 0x1B6u);
      }
      if ( v152 )
        CMILRefCountBase::Release(v152);
      v37 = SurfaceUpdates;
      if ( SurfaceUpdates >= 0 )
        goto LABEL_248;
      cData = 403;
      goto LABEL_422;
    }
LABEL_249:
    if ( v37 < 0 )
      break;
    v40 = *(_QWORD *)(v40 + 8);
    v215 = v40;
    if ( !v40 )
      goto LABEL_251;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v37, 0xC1u);
LABEL_251:
  v36 = v217;
  v207 = v217;
LABEL_64:
  if ( v37 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v37, 0x249u);
  v41 = 0;
  if ( LODWORD(v4[46].Ptr) )
  {
    do
    {
      v39 = v41;
      v42 = (_DWORD *)*((_QWORD *)v4[43].Ptr + v41);
      if ( v42 && v42[18] )
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x1000) != 0 )
          Template_xxx(v41, (unsigned int)&CHANNELBATCHES_PROCESSED, v42[4], v42[5], v42[18]);
        v42[18] = 0;
      }
      ++v41;
    }
    while ( v41 < LODWORD(v4[46].Ptr) );
    v37 = SurfaceUpdates;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_x(v39, &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSQUEUEEVENT_Stop, v4);
  v43 = (*(__int64 (__fastcall **)(PVOID, __int64))(*(_QWORD *)v4[172].Ptr + 24LL))(v4[172].Ptr, 3LL);
  v44 = v43;
  if ( v43 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v43, 0x256u);
  if ( !v37 )
  {
LABEL_76:
    v37 = v44;
    SurfaceUpdates = v44;
    goto LABEL_77;
  }
  if ( v37 < 0 )
    goto LABEL_484;
  if ( v44 < 0 )
    goto LABEL_76;
LABEL_77:
  if ( v37 < 0 )
  {
LABEL_484:
    MilInstrumentationCheckHR(0x14u, &dword_1801E9F58, 2u, v37, 0x14Cu);
    goto LABEL_197;
  }
  v45 = (unsigned __int64)v4[71].Ptr;
  if ( v45 )
  {
    v184 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v45 + 24) + 48LL))(*(_QWORD *)(v45 + 24));
    SurfaceUpdates = v184;
    if ( v184 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_1801E9F58, 2u, v184, 0x153u);
      goto LABEL_197;
    }
  }
  SurfaceUpdates = 0;
  v19 = 0;
  if ( v36 )
  {
    if ( BYTE4(v4[42].Ptr) )
    {
      CD3DDeviceManager::FlushAllDevices((CD3DDeviceManager *)&g_D3DDeviceManager);
      BYTE4(v4[42].Ptr) = 0;
    }
    v46 = 0;
    v47 = (char *)v4[5].Ptr;
    v48 = 0;
    v209 = 0;
    v212 = 0;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      TemplateEventDescriptor(v45, &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSPRESENTHISTORY_Start);
    if ( *((_QWORD *)v47 + 47) )
    {
      if ( ++*((_DWORD *)v47 + 96) > 8u )
      {
        ++*((_DWORD *)v47 + 98);
        CLegacySurfaceManager::ReleaseCaptureBitsResponse((CLegacySurfaceManager *)(v47 + 96));
      }
    }
    v19 = 0;
    SurfaceUpdates = 0;
    v210 = 0;
    if ( *((_DWORD *)v47 + 56) )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        TemplateEventDescriptor(v45, &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSDEFERREDTOKENS_Start);
      v170 = 0;
      if ( *((_DWORD *)v47 + 56) )
      {
        v171 = (__int64 *)(v47 + 200);
        while ( 1 )
        {
          v172 = *v171;
          v204 = 0;
          ++*(_DWORD *)(v172 + 16LL * v170);
          v185 = *(_DWORD *)(*v171 + 16LL * v170) > 0x64u;
          lpMem = *(void **)(*v171 + 16LL * v170 + 8);
          SurfaceUpdates = CLegacySurfaceManager::ProcessToken(
                             (CLegacySurfaceManager *)(v47 + 96),
                             (const struct _D3DKMT_PRESENTHISTORYTOKEN *)lpMem,
                             &v210,
                             &v204);
          if ( SurfaceUpdates < 0 )
            break;
          v173 = v204;
          if ( v204 || v185 )
          {
            SurfaceUpdates = DynArray<CLegacySurfaceManager::UnclaimedToken,0>::RemoveAt((__int64 *)v47 + 25, v170);
            if ( SurfaceUpdates < 0 )
            {
              cDatac = 426;
              goto LABEL_435;
            }
            WPF::ProcessHeapImpl::Free(lpMem);
            if ( !v173 )
              ++*((_DWORD *)v47 + 49);
            --v170;
          }
          ++v170;
          v171 = (__int64 *)(v47 + 200);
          if ( v170 >= *((_DWORD *)v47 + 56) )
          {
            v36 = v207;
            v48 = 0;
            goto LABEL_357;
          }
        }
        cDatac = 418;
LABEL_435:
        v19 = SurfaceUpdates;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, SurfaceUpdates, cDatac);
        v36 = v207;
        v48 = 0;
      }
      else
      {
LABEL_357:
        v19 = SurfaceUpdates;
      }
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        TemplateEventDescriptor(v45, &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSDEFERREDTOKENS_Stop);
    }
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x111u);
    }
    else
    {
      v227 = v36;
      v49 = 0;
      FrameLegacyTokens = NtDCompositionGetFrameLegacyTokens(&v227, &v209, &v212);
      if ( FrameLegacyTokens < 0 )
      {
        v49 = FrameLegacyTokens | 0x10000000;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, FrameLegacyTokens | 0x10000000, 0x46u);
      }
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        Template_qq(v51, &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSPRESENTHISTORY_GetPresentHistory, (unsigned int)v49, v209);
      *((_DWORD *)v47 + 48) = v49;
      if ( v49 < 0 )
      {
LABEL_94:
        if ( *((int *)v47 + 48) < 0 )
          CLegacySurfaceManager::FlushVistaBltPresentHistory((CLegacySurfaceManager *)(v47 + 96));
        v19 = SurfaceUpdates;
      }
      else
      {
        while ( 1 )
        {
          v52 = 0;
          v53 = *((_QWORD *)v47 + 80);
          v46 += v209;
          if ( v209 )
            break;
LABEL_93:
          v36 = v207;
          if ( v212 )
          {
            ++v48;
            LegacyTokens = CLegacySurfaceManager::GetLegacyTokens(v51, v207, &v209, &v212);
            *((_DWORD *)v47 + 48) = LegacyTokens;
            if ( LegacyTokens >= 0 )
              continue;
          }
          goto LABEL_94;
        }
        while ( 1 )
        {
          v203 = 0;
          SurfaceUpdates = CLegacySurfaceManager::ProcessToken(
                             (CLegacySurfaceManager *)(v47 + 96),
                             (const struct _D3DKMT_PRESENTHISTORYTOKEN *)v53,
                             &v210,
                             &v203);
          if ( SurfaceUpdates < 0 )
            break;
          if ( !v203 )
          {
            SurfaceUpdates = CLegacySurfaceManager::AddUnclaimedToken(
                               (CLegacySurfaceManager *)(v47 + 96),
                               (const struct _D3DKMT_PRESENTHISTORYTOKEN *)v53);
            if ( SurfaceUpdates < 0 )
            {
              cDatab = 307;
              goto LABEL_437;
            }
          }
          ++v52;
          v53 += *(unsigned int *)(v53 + 4);
          if ( v52 >= v209 )
            goto LABEL_93;
        }
        cDatab = 300;
LABEL_437:
        v19 = SurfaceUpdates;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, SurfaceUpdates, cDatab);
        v36 = v207;
      }
    }
    v54 = Microsoft_Windows_Dwm_CoreEnableBits;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    {
      Template_qq(v51, &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSPRESENTHISTORY_Stop, v46, v48);
      v54 = Microsoft_Windows_Dwm_CoreEnableBits;
    }
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x228u);
      goto LABEL_137;
    }
    v55 = (char *)v4[5].Ptr;
    v211 = 0;
    v56 = 0;
    v213 = 0;
    v57 = 0;
    v210 = 0;
    v205 = 0;
    if ( (v54 & 0x20) != 0 )
      TemplateEventDescriptor(v51, &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSSURFACEUPDATES_Start);
    v58 = 0;
    v228 = v36;
    SurfaceUpdates = 0;
    FrameSurfaceUpdates = NtDCompositionGetFrameSurfaceUpdates(&v228, &v211, &v213);
    if ( FrameSurfaceUpdates < 0 )
    {
      v58 = FrameSurfaceUpdates | 0x10000000;
      SurfaceUpdates = FrameSurfaceUpdates | 0x10000000;
      MilInstrumentationCheckHR(0x14u, &dword_1801F35B8, 3u, FrameSurfaceUpdates | 0x10000000, 0x7Eu);
    }
    if ( v58 >= 0 )
    {
      do
      {
        v61 = 0;
        if ( v211 )
        {
          v145 = v205;
          do
          {
            Buffer[1] = 0LL;
            v146 = *((_QWORD *)v55 + 80) + 200LL * v61;
            Buffer[0] = *(_QWORD *)(v146 + 4);
            v147 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)(v55 + 24), Buffer);
            if ( v147 )
            {
              v148 = (CCompositionSurfaceInfo *)v147[1];
              if ( v148 )
              {
                if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
                  Template_nxxxqqxqqqqqqqqx(
                    *((_DWORD *)v148 + 19) >= 2,
                    *(_DWORD *)(v146 + 28),
                    (*(_DWORD *)(v146 + 188) >> 2) & 1,
                    v146 + 4,
                    *(_QWORD *)(v146 + 16),
                    *(_DWORD *)(v146 + 28),
                    v199,
                    (*(_DWORD *)(v146 + 188) & 0x10) != 0,
                    *(_DWORD *)(v146 + 72),
                    *(_QWORD *)(v146 + 80),
                    (*(_DWORD *)(v146 + 188) & 4) != 0,
                    (*(_DWORD *)(v146 + 188) & 8) != 0,
                    v200,
                    *(_DWORD *)(v146 + 112),
                    *((_DWORD *)v148 + 19) >= 2,
                    *(_DWORD *)(v146 + 108),
                    v201,
                    *(_DWORD *)(v146 + 24));
                updated = CCompositionSurfaceInfo::ProcessSurfaceUpdateInternal(
                            v148,
                            (const struct CSM_SURFACE_UPDATE *)v146);
                if ( updated < 0 )
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0xCFu);
                ++v145;
              }
            }
            v60 = *(void **)(v146 + 32);
            if ( (unsigned __int64)v60 >= 2 )
              DeleteObject(v60);
            ++v61;
          }
          while ( v61 < v211 );
          v36 = v207;
          v56 = v210;
          v205 = v145;
          v4 = v222;
        }
        if ( !v213 )
          break;
        v210 = ++v56;
        SurfaceUpdates = CCompositionSurfaceManager::GetSurfaceUpdates(
                           (CCompositionSurfaceManager *)v60,
                           v36,
                           &v211,
                           &v213);
      }
      while ( SurfaceUpdates >= 0 );
      v57 = v205;
    }
    v62 = (struct _RTL_GENERIC_TABLE *)(v55 + 24);
    RestartKey = 0LL;
    do
    {
LABEL_109:
      v63 = RtlEnumerateGenericTableWithoutSplaying(v62, &RestartKey);
      if ( !v63 )
      {
LABEL_133:
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
          Template_qq(v45, &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSSURFACEUPDATES_Stop, v57, v56);
        v19 = SurfaceUpdates;
        if ( SurfaceUpdates < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, SurfaceUpdates, 0x22Du);
        goto LABEL_137;
      }
      v64 = v63[1];
      v65 = CBitmapRealization::HrFindInterface;
      v208 = 0LL;
      v66 = 0;
      v67 = *(__int64 (__fastcall ****)(CBitmapRealization *__hidden, const struct _GUID *, void **))(v64 + 120);
    }
    while ( !v67 );
    v68 = **v67;
    if ( v68 == CBitmapRealization::QueryInterface )
    {
      v69 = *(_QWORD *)GUID_302508ed_c63d_40f8_af07_af5881d2df95.Data4;
      v70 = *(_QWORD *)&GUID_302508ed_c63d_40f8_af07_af5881d2df95.Data1
          - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
      if ( *(_QWORD *)&GUID_302508ed_c63d_40f8_af07_af5881d2df95.Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
        v70 = *(_QWORD *)GUID_302508ed_c63d_40f8_af07_af5881d2df95.Data4
            - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
      if ( v70 )
      {
        v71 = (*v67)[4];
        if ( v71 == CBitmapRealization::HrFindInterface )
        {
          v72 = *(_QWORD *)&GUID_302508ed_c63d_40f8_af07_af5881d2df95.Data1
              - *(_QWORD *)&GUID_db178a3c_d733_4570_9513_5392d717955f.Data1;
          if ( *(_QWORD *)&GUID_302508ed_c63d_40f8_af07_af5881d2df95.Data1 == *(_QWORD *)&GUID_db178a3c_d733_4570_9513_5392d717955f.Data1 )
            v72 = *(_QWORD *)GUID_302508ed_c63d_40f8_af07_af5881d2df95.Data4
                - *(_QWORD *)GUID_db178a3c_d733_4570_9513_5392d717955f.Data4;
          if ( v72 )
          {
            v73 = *(_QWORD *)&GUID_302508ed_c63d_40f8_af07_af5881d2df95.Data1
                - *(_QWORD *)&GUID_475af409_d8b1_4ca5_8177_4562f6260b68.Data1;
            if ( *(_QWORD *)&GUID_302508ed_c63d_40f8_af07_af5881d2df95.Data1 == *(_QWORD *)&GUID_475af409_d8b1_4ca5_8177_4562f6260b68.Data1 )
              v73 = *(_QWORD *)GUID_302508ed_c63d_40f8_af07_af5881d2df95.Data4
                  - *(_QWORD *)GUID_475af409_d8b1_4ca5_8177_4562f6260b68.Data4;
            if ( v73 )
            {
              v74 = *(_QWORD *)&GUID_302508ed_c63d_40f8_af07_af5881d2df95.Data1
                  - *(_QWORD *)&GUID_c5a4a15d_a7cd_44bc_8a15_7199ecad6671.Data1;
              if ( *(_QWORD *)&GUID_302508ed_c63d_40f8_af07_af5881d2df95.Data1 == *(_QWORD *)&GUID_c5a4a15d_a7cd_44bc_8a15_7199ecad6671.Data1 )
                v74 = *(_QWORD *)GUID_302508ed_c63d_40f8_af07_af5881d2df95.Data4
                    - *(_QWORD *)GUID_c5a4a15d_a7cd_44bc_8a15_7199ecad6671.Data4;
              if ( v74 )
              {
                v67 = 0LL;
                v208 = 0LL;
                v75 = -2147467263;
              }
              else
              {
                v75 = 0;
                v67 += 2;
                v208 = v67;
              }
            }
            else
            {
              v75 = 0;
              v67 += 14;
              v208 = v67;
            }
          }
          else
          {
            v75 = 0;
            v67 += 13;
            v208 = v67;
          }
        }
        else
        {
          v186 = v71((CBitmapRealization *)v67, &GUID_302508ed_c63d_40f8_af07_af5881d2df95, (void **)&v208);
          v67 = v208;
          v75 = v186;
        }
        if ( v75 < 0 )
        {
          v76 = 0LL;
          v208 = 0LL;
          goto LABEL_128;
        }
      }
      else
      {
        v208 = v67;
        v75 = 0;
      }
      (*v67)[1]((CBitmapRealization *)v67, (const struct _GUID *)*v67, (void **)v65);
    }
    else
    {
      v75 = v68((CBitmapRealization *)v67, &GUID_302508ed_c63d_40f8_af07_af5881d2df95, (void **)&v208);
    }
    v76 = v208;
LABEL_128:
    if ( v75 >= 0 )
    {
      v187 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(CBitmapRealization *__hidden, const struct _GUID *, void **), _QWORD, __int64 (__fastcall *)(CBitmapRealization *__hidden, const struct _GUID *, void **), __int64 (__fastcall ***)(CBitmapRealization *__hidden, const struct _GUID *, void **)))(*v76)[7])(
               v76,
               0LL,
               v65,
               v67);
      v66 = v187;
      if ( v187 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v187, 0xCFu);
      v76 = v208;
    }
    if ( v76 )
      ((void (__fastcall *)(__int64 (__fastcall ***)(CBitmapRealization *__hidden, const struct _GUID *, void **), __int64, __int64 (__fastcall *)(CBitmapRealization *__hidden, const struct _GUID *, void **), __int64 (__fastcall ***)(CBitmapRealization *__hidden, const struct _GUID *, void **)))(*v76)[2])(
        v76,
        v69,
        v65,
        v67);
    if ( v66 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v66, 0xBDu);
      goto LABEL_133;
    }
    goto LABEL_109;
  }
LABEL_137:
  if ( v19 < 0 )
  {
    cDataa = 345;
    goto LABEL_409;
  }
  v77 = v4[4].Ptr;
  v78 = 0;
  SurfaceUpdates = 0;
  if ( *((_DWORD *)v77 + 20) )
  {
    while ( 1 )
    {
      v79 = *(CDesktopRenderTarget **)(v77[7] + 8LL * v78);
      v80 = *(__int64 (__fastcall **)(CDesktopRenderTarget *__hidden))(*(_QWORD *)v79 + 144LL);
      v81 = v80 == CDesktopRenderTarget::EnsureRenderTargets
          ? CDesktopRenderTarget::EnsureRenderTargets(v79)
          : ((__int64 (*)(void))v80)();
      SurfaceUpdates = v81;
      v45 = (unsigned int)v81;
      if ( v81 < 0 )
        break;
      if ( ++v78 >= *((_DWORD *)v77 + 20) )
        goto LABEL_143;
    }
    v19 = v81;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v81, 0x39Bu);
  }
  else
  {
LABEL_143:
    v19 = SurfaceUpdates;
  }
  if ( v19 < 0 )
  {
    cDataa = 351;
LABEL_409:
    v183 = v19;
LABEL_410:
    MilInstrumentationCheckHR(0x14u, &dword_1801E9F58, 2u, v183, cDataa);
    goto LABEL_197;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    TemplateEventDescriptor(v45, &EVTDESC_MILEVENT_MEDIA_UCE_CHECKDEVICESTATE_Start);
  v82 = v4[4].Ptr;
  if ( v82[150] )
    goto LABEL_164;
  v83 = 1;
  v84 = 0;
  if ( !*((_DWORD *)v82 + 12) )
  {
LABEL_299:
    v92 = 142213121;
    goto LABEL_300;
  }
  while ( 2 )
  {
    v85 = (struct CRenderTarget **)(*((_QWORD *)v82 + 3) + 8LL * v84);
    v86 = *v85;
    v87 = *(__int64 (__fastcall **)(struct CRenderTarget *, __int64))(*(_QWORD *)*v85 + 48LL);
    if ( (char *)v87 == (char *)CHwndRenderTarget::IsOfType )
      v88 = CHwndRenderTarget::IsOfType(v86, 38LL);
    else
      v88 = v87(v86, 38LL);
    if ( v88
      || (*(unsigned __int8 (__fastcall **)(struct CRenderTarget *, __int64))(*(_QWORD *)*v85 + 48LL))(*v85, 48LL) )
    {
      v89 = (struct CRenderTarget *)((char *)*v85 + 64);
      v90 = *(__int64 (**)(void))(*(_QWORD *)v89 + 120LL);
      if ( (char *)v90 == (char *)CHwndRenderTarget::CheckDeviceState )
        v91 = CHwndRenderTarget::CheckDeviceState(v89);
      else
        v91 = v90();
      v92 = v91;
      if ( v91 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, &dword_1801D55C8, 1u, v91, 0x5E9u);
        goto LABEL_336;
      }
      v203 = v91 == 142213121;
      v93 = 0;
      if ( v91 == 142213121 )
        v93 = v83;
      v83 = v93;
      v94 = *v85;
      v95 = *(__int64 (__fastcall **)(struct CRenderTarget *, __int64))(*(_QWORD *)*v85 + 48LL);
      if ( (char *)v95 == (char *)CHwndRenderTarget::IsOfType
         ? CHwndRenderTarget::IsOfType(v94, 38LL)
         : (unsigned __int8)v95(v94, 38LL) )
      {
        v97 = *v85;
        v98 = *((_DWORD *)v82 + 24);
        v92 = 0;
        if ( v98 < *((_DWORD *)v82 + 12) )
        {
          while ( 1 )
          {
            v156 = *((_QWORD *)v82 + 3);
            v222 = (RTL_SRWLOCK *)(8LL * v98);
            if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)((char *)&v222->Ptr + v156) + 48LL))(
                   *(PVOID *)((char *)&v222->Ptr + v156),
                   59LL) )
            {
              v188 = CIndirectSwapchainRenderTarget::SetTargetOcclusion(
                       *(CIndirectSwapchainRenderTarget **)((char *)&v222->Ptr + *((_QWORD *)v82 + 3)),
                       v97,
                       v203);
              v92 = v188;
              if ( v188 < 0 )
                break;
            }
            if ( ++v98 >= *((_DWORD *)v82 + 12) )
              goto LABEL_161;
          }
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v188, 0x419u);
        }
LABEL_161:
        if ( v92 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, &dword_1801D55C8, 1u, v92, 0x5E4u);
LABEL_336:
          if ( !v92 )
            goto LABEL_165;
          if ( v92 == -2003304442 || v92 == -2003304307 )
            goto LABEL_338;
          if ( v92 != 142213121 )
          {
            if ( v92 == 142213130 )
              goto LABEL_165;
LABEL_338:
            v99 = 1;
            goto LABEL_166;
          }
LABEL_300:
          v99 = 2;
          goto LABEL_166;
        }
      }
    }
    if ( ++v84 < *((_DWORD *)v82 + 12) )
      continue;
    break;
  }
  if ( v83 )
    goto LABEL_299;
LABEL_164:
  v92 = 0;
LABEL_165:
  v99 = 3;
LABEL_166:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    TemplateEventDescriptor(v45, &EVTDESC_MILEVENT_MEDIA_UCE_CHECKDEVICESTATE_Stop);
  v100 = (int)v4[48].Ptr;
  if ( v99 == 3 )
  {
    v101 = 0;
    if ( v100 != 2 )
      goto LABEL_170;
    v166 = CMmcssTask::Apply((CMmcssTask *)&v4[20], 0);
    if ( v166 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v166, 0xCA6u);
LABEL_328:
    CComposition::UpdateMmcssPartners((CComposition *)v4);
  }
  else if ( v99 <= 1 )
  {
    v101 = 1;
    if ( v100 == 2 )
    {
      v168 = CMmcssTask::Apply((CMmcssTask *)&v4[20], 0);
      if ( v168 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v168, 0xCB6u);
      goto LABEL_328;
    }
  }
  else
  {
    v101 = 2;
    if ( v100 != 2 )
    {
      CMmcssTask::Revert((CMmcssTask *)&v4[20]);
      goto LABEL_328;
    }
  }
LABEL_170:
  LODWORD(v4[48].Ptr) = v101;
  if ( v101 != v100 )
  {
    v159 = v4[49].Ptr;
    if ( v159 && v101 == 1 )
      v159[28] = 1;
    v230[0] = 5;
    v230[1] = 0;
    v230[2] = v100;
    v231 = v101;
    v232 = 0LL;
    CComposition::NotifyHelper((CComposition *)v4, (struct MIL_MESSAGE *)v230);
  }
  v102 = v4[49].Ptr;
  if ( v102 && v101 == 2 && LODWORD(v4[64].Ptr) )
    v102[28] = 1;
  if ( v92 >= 142213121 || v92 < -2003304306 )
  {
    if ( v92 == -2003304442 )
    {
      *v225 = 1;
      goto LABEL_175;
    }
    if ( v92 == -2003304307 )
    {
      if ( dword_18023D720 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_18023D720, 0x400000000000uLL) )
      {
        v251 = 16LL;
        v250 = &gDwmCoreTelemetryActivityId;
        TlgWrite((TraceLoggingHProvider)&dword_18023D720, &unk_1801F677D, v189, v190, 3u, &v249);
      }
      goto LABEL_175;
    }
    v103 = v216;
    if ( v92 == 142213121 )
      *v216 = 1;
  }
  else
  {
LABEL_175:
    v103 = v216;
  }
  v104 = (_QWORD **)v4[71].Ptr;
  if ( v104 )
  {
    v191 = (*(__int64 (__fastcall **)(_QWORD *, PVOID, bool))(*v104[3] + 64LL))(v104[3], v4[65].Ptr, *v103);
    v214 = v191;
    v192 = v191;
    if ( v191 < 0 )
      MilInstrumentationCheckHR(0x14u, &dword_1801E9F58, 2u, v191, 0x184u);
    TranslateDXGIorD3DErrorInContext(v192, 0LL, &v214);
    v19 = v214;
    SurfaceUpdates = v214;
    if ( v214 < 0 )
    {
      cDataa = 397;
      goto LABEL_409;
    }
  }
  v105 = v4[19].Ptr;
  if ( v105 && v105[4] )
  {
    v229 = v4[19].Ptr;
    CHolographicInteropTaskQueue::ProcessPendingMessages__lambda_1af5a33988fbdcb1a8e6d38412aed786___(v105[6], &v229);
  }
  if ( *v103 )
  {
    v157 = CComposition::PerformQueuedSnapshots((CComposition *)v4);
    SurfaceUpdates = v157;
    if ( v157 >= 0 )
      goto LABEL_197;
    cDataa = 427;
    v183 = v157;
    goto LABEL_410;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    TemplateEventDescriptor(v105, &EVTDESC_MILEVENT_UCE_PROCESSANIMATERESOURCES_Start);
  LODWORD(v106) = v4[84].Ptr;
  v107 = 0;
  if ( (_DWORD)v106 )
  {
    do
    {
      v106 = (unsigned int)(v106 - 1);
      v124 = (CAnimation *)*((_QWORD *)v4[81].Ptr + v106);
      v125 = **(__int64 (***)(void))v124;
      if ( (char *)v125 == (char *)CAnimation::UpdateAnimateValues )
        v126 = CAnimation::UpdateAnimateValues(v124);
      else
        v126 = v125();
      if ( v126 )
        ++v107;
    }
    while ( (_DWORD)v106 );
    if ( v107 )
      *((_BYTE *)v4[30].Ptr + 376) |= 2u;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    TemplateEventDescriptor(v105, "q");
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      TemplateEventDescriptor(v193, &EVTDESC_PROCESS_EXPRESSIONS_Start);
  }
  CExpressionManager::UpdateExpressions((CExpressionManager *)v4[30].Ptr, (__int64)v4[65].Ptr, (__int64)v4[50].Ptr);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    TemplateEventDescriptor(v108, &EVTDESC_PROCESS_EXPRESSIONS_Stop);
  v109 = v4[4].Ptr;
  v110 = 0;
  SurfaceUpdates = 0;
  if ( *((_DWORD *)v109 + 20) )
  {
    while ( 1 )
    {
      v111 = *(CDesktopRenderTarget **)(v109[7] + 8LL * v110);
      v112 = *(__int64 (__fastcall **)(CDesktopRenderTarget *__hidden))(*(_QWORD *)v111 + 152LL);
      v113 = v112 == CDesktopRenderTarget::PreRender
           ? CDesktopRenderTarget::PreRender(v111)
           : ((__int64 (*)(void))v112)();
      SurfaceUpdates = v113;
      if ( v113 < 0 )
        break;
      if ( ++v110 >= *((_DWORD *)v109 + 20) )
        goto LABEL_190;
    }
    cDatad = 175;
LABEL_480:
    v19 = SurfaceUpdates;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, SurfaceUpdates, cDatad);
  }
  else
  {
LABEL_190:
    v114 = 0;
    if ( *((_DWORD *)v109 + 12) )
    {
      while ( 1 )
      {
        v115 = *(CHolographicInteropTarget **)(v109[3] + 8LL * v114);
        v116 = *(__int64 (__fastcall **)(CHolographicInteropTarget *, __int64))(*(_QWORD *)v115 + 48LL);
        if ( (char *)v116 == (char *)CHwndRenderTarget::IsOfType
           ? CHwndRenderTarget::IsOfType(v115, 48LL)
           : (unsigned __int8)v116(v115, 48LL) )
        {
          SurfaceUpdates = CHolographicInteropTarget::PreCompute(v115);
          if ( SurfaceUpdates < 0 )
            break;
        }
        if ( ++v114 >= *((_DWORD *)v109 + 12) )
          goto LABEL_195;
      }
      cDatad = 193;
      goto LABEL_480;
    }
LABEL_195:
    v19 = SurfaceUpdates;
  }
  if ( v19 < 0 )
  {
    cDataa = 422;
    goto LABEL_409;
  }
LABEL_197:
  v3 = v4 + 73;
LABEL_198:
  v118 = (char *)v4[8].Ptr;
  if ( v118 )
  {
    v119 = v118 + 200;
    while ( 1 )
    {
      v120 = 0LL;
      EnterCriticalSection((LPCRITICAL_SECTION)(v119 + 24));
      v121 = *(__int64 **)v119;
      v122 = **(_QWORD **)v119;
      if ( *(char **)(*(_QWORD *)v119 + 8LL) != v119 || *(__int64 **)(v122 + 8) != v121 )
        __fastfail(3u);
      *(_QWORD *)v119 = v122;
      *(_QWORD *)(v122 + 8) = v119;
      if ( v121 != (__int64 *)v119 )
      {
        v120 = v121[2];
        WPF::ProcessHeapImpl::Free(v121);
        --*((_DWORD *)v119 + 4);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(v119 + 24));
      if ( !v120 )
        break;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v120 + 16LL))(v120);
    }
  }
  LODWORD(v3[1].Ptr) = 0;
  ReleaseSRWLockExclusive(v3);
  if ( dword_18023E7E0 )
    SetEvent(hEvent);
  return (unsigned int)SurfaceUpdates;
}
