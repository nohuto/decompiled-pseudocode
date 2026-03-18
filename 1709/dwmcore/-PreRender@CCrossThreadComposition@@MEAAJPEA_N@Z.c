/*
 * XREFs of ?PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z @ 0x180029EC0
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x180012360 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180004630 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180005610 (_TlgWrite.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18000BC20 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAVCDXGIEnumeration@@PEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateComparison@@@Z @ 0x180010AF4 (-DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAVCDXGIEnumeration@@PEAPEAVCDisplaySet@@PEAW4En.c)
 *     ?EnsureRenderTargets@CDesktopRenderTarget@@UEAAJPEA_N@Z @ 0x1800163A0 (-EnsureRenderTargets@CDesktopRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?CheckOcclusionState@CHwndRenderTarget@@UEAAJXZ @ 0x180018130 (-CheckOcclusionState@CHwndRenderTarget@@UEAAJXZ.c)
 *     ?PreRender@CHwndRenderTarget@@UEAAJXZ @ 0x180019650 (-PreRender@CHwndRenderTarget@@UEAAJXZ.c)
 *     ?IsOfType@CHwndRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180019AA0 (-IsOfType@CHwndRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?FlushAllDevices@CD3DDeviceManager@@QEAAXXZ @ 0x18001B08C (-FlushAllDevices@CD3DDeviceManager@@QEAAXXZ.c)
 *     ?InternalRemoveTarget@CRenderTargetManager@@AEAAXPEAVCRenderTarget@@@Z @ 0x18001B2AC (-InternalRemoveTarget@CRenderTargetManager@@AEAAXPEAVCRenderTarget@@@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18001D1C0 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001F0A0 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?UpdateAnimateValues@CAnimation@@UEAAXXZ @ 0x18002D090 (-UpdateAnimateValues@CAnimation@@UEAAXXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?ProcessSurfaceUpdate@CCompositionSurfaceInfo@@QEAAJAEBUCSM_SURFACE_UPDATE@@@Z @ 0x18004BDE0 (-ProcessSurfaceUpdate@CCompositionSurfaceInfo@@QEAAJAEBUCSM_SURFACE_UPDATE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ResetTokenThread@CSurfaceManager@@QEAAJXZ @ 0x180076BDC (-ResetTokenThread@CSurfaceManager@@QEAAJXZ.c)
 *     ?ReleaseCaptureBitsResponse@CLegacySurfaceManager@@QEAA_NXZ @ 0x18007F530 (-ReleaseCaptureBitsResponse@CLegacySurfaceManager@@QEAA_NXZ.c)
 *     ?GetLegacyTokens@CLegacySurfaceManager@@QEAAJ_KPEAIPEAH@Z @ 0x18007F594 (-GetLegacyTokens@CLegacySurfaceManager@@QEAAJ_KPEAIPEAH@Z.c)
 *     ?ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z @ 0x18007F5DC (-ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z.c)
 *     ?FlushVistaBltPresentHistory@CLegacySurfaceManager@@QEAAXXZ @ 0x18007F6FC (-FlushVistaBltPresentHistory@CLegacySurfaceManager@@QEAAXXZ.c)
 *     ??$ReleaseInterface@VCRemoteApplicationWindow@@@@YAXAEAPEAVCRemoteApplicationWindow@@@Z @ 0x1800824CC (--$ReleaseInterface@VCRemoteApplicationWindow@@@@YAXAEAPEAVCRemoteApplicationWindow@@@Z.c)
 *     ??1CDisplaySet@@AEAA@XZ @ 0x1800988F0 (--1CDisplaySet@@AEAA@XZ.c)
 *     ?Release@CDisplaySet@@QEBAKXZ @ 0x180098A94 (-Release@CDisplaySet@@QEBAKXZ.c)
 *     ?UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z @ 0x1800A12A0 (-UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z.c)
 *     ?ProcessPartitionCommand@CComposition@@QEAAJPEBUUCE_RDP_HEADER@@@Z @ 0x1800AA580 (-ProcessPartitionCommand@CComposition@@QEAAJPEBUUCE_RDP_HEADER@@@Z.c)
 *     ?ProcessRenderingStatus@CComposition@@QEAAXJ@Z @ 0x1800AABCC (-ProcessRenderingStatus@CComposition@@QEAAXJ@Z.c)
 *     ?OnCapabilitiesChanged@CCompositionCapabilities@@QEAAXXZ @ 0x1800BFB80 (-OnCapabilitiesChanged@CCompositionCapabilities@@QEAAXXZ.c)
 *     ?CreateD3DObjects@CD3DModuleLoaderInternal@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x1800C0360 (-CreateD3DObjects@CD3DModuleLoaderInternal@@AEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x1800C2F28 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800C2F88 (_Init_thread_header.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?GetSurfaceUpdates@CCompositionSurfaceManager@@QEAAJ_KPEAIPEAH@Z @ 0x18011CE48 (-GetSurfaceUpdates@CCompositionSurfaceManager@@QEAAJ_KPEAIPEAH@Z.c)
 *     ?DestroyDelayedResources@CD3DResourceManager@@AEAAIXZ @ 0x18011DB78 (-DestroyDelayedResources@CD3DResourceManager@@AEAAIXZ.c)
 *     McTemplateU0 @ 0x180120DC8 (McTemplateU0.c)
 *     McTemplateU0qq @ 0x180125258 (McTemplateU0qq.c)
 *     McTemplateU0qqq @ 0x1801252C0 (McTemplateU0qqq.c)
 *     McTemplateU0d @ 0x180126994 (McTemplateU0d.c)
 *     McTemplateU0x @ 0x180126C58 (McTemplateU0x.c)
 *     ?SetTargetOcclusion@CIndirectSwapchainRenderTarget@@QEAAJPEAVCRenderTarget@@_N@Z @ 0x180137A74 (-SetTargetOcclusion@CIndirectSwapchainRenderTarget@@QEAAJPEAVCRenderTarget@@_N@Z.c)
 *     ?AddUnclaimedToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x18013B39C (-AddUnclaimedToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?RemoveAt@?$DynArray@ULineSegment@ClipPlaneIterator@@$0A@@@QEAAJI@Z @ 0x18014AA64 (-RemoveAt@-$DynArray@ULineSegment@ClipPlaneIterator@@$0A@@@QEAAJI@Z.c)
 *     ?ClearProtectedResources@CD3DDeviceLevel1@@QEAA_NXZ @ 0x1801A61F0 (-ClearProtectedResources@CD3DDeviceLevel1@@QEAA_NXZ.c)
 *     CHolographicInteropTaskQueue::ProcessPendingMessages__lambda_1af5a33988fbdcb1a8e6d38412aed786___ @ 0x1801BF828 (CHolographicInteropTaskQueue--ProcessPendingMessages__lambda_1af5a33988fbdcb1a8e6d38412aed786___.c)
 */

__int64 __fastcall CCrossThreadComposition::PreRender(RTL_SRWLOCK *this, bool *a2)
{
  RTL_SRWLOCK *v2; // rsi
  bool *v3; // r15
  __int64 v4; // r14
  LARGE_INTEGER **Ptr; // rdx
  LARGE_INTEGER v6; // r8
  _QWORD *v7; // rcx
  __int64 v8; // rax
  int SurfaceUpdates; // r13d
  _QWORD *v10; // rcx
  int v11; // eax
  unsigned __int64 v12; // r12
  PVOID v13; // rax
  unsigned __int64 v14; // rcx
  _QWORD *v15; // rcx
  int ConnectionBatch; // eax
  struct UCE_RDP_HEADER *v17; // rax
  int v18; // eax
  unsigned int k; // ebx
  __int64 v20; // rdi
  int v21; // eax
  int v22; // ebx
  unsigned __int64 v23; // rcx
  HANDLE CurrentThread; // rax
  BOOL v25; // eax
  _QWORD **v26; // rcx
  unsigned int v27; // edi
  _DWORD *v28; // rbx
  int v29; // eax
  int FrameLegacyTokens; // eax
  CLegacySurfaceManager *v31; // rcx
  unsigned int v32; // r12d
  __int64 v33; // r14
  char v34; // al
  char *v35; // r14
  unsigned int v36; // r15d
  unsigned int v37; // edi
  int FrameSurfaceUpdates; // eax
  void *v39; // rcx
  unsigned int v40; // edi
  int v41; // r12d
  __int64 v42; // rbx
  PVOID v43; // rax
  CCompositionSurfaceInfo *v44; // rcx
  int v45; // eax
  _QWORD *v46; // rax
  __int64 v47; // rax
  __int64 (__fastcall *v48)(CBitmapRealization *__hidden, const struct _GUID *, void **); // r8
  int v49; // edi
  __int64 (__fastcall ***v50)(CBitmapRealization *__hidden, const struct _GUID *, void **); // r9
  __int64 (__fastcall *v51)(CBitmapRealization *__hidden, const struct _GUID *, void **); // rax
  __int64 v52; // rdx
  __int64 v53; // rax
  __int64 (__fastcall *v54)(CBitmapRealization *__hidden, const struct _GUID *, void **); // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rcx
  int v59; // ebx
  unsigned __int64 v60; // rcx
  unsigned __int64 v61; // rcx
  HANDLE v62; // rax
  BOOL v63; // eax
  char v64; // di
  _QWORD *v65; // r14
  unsigned int v66; // ebx
  __int64 v67; // rax
  CDesktopRenderTarget *v68; // rcx
  __int64 (__fastcall *v69)(CDesktopRenderTarget *, bool *); // rax
  int v70; // eax
  __int64 v71; // rcx
  _DWORD *v72; // rdi
  int v73; // ebx
  struct CRenderTarget *v74; // r14
  char v75; // r14
  _QWORD *v76; // rbx
  unsigned int v77; // edi
  struct CRenderTarget *v78; // r15
  CHwndRenderTarget *v79; // rcx
  __int64 (__fastcall *v80)(CHwndRenderTarget *); // rax
  int v81; // eax
  char v82; // cl
  bool v83; // r13
  bool (__fastcall *v84)(__int64, int); // rax
  bool v85; // al
  unsigned int v86; // r12d
  int v87; // r14d
  int v88; // r15d
  CDisplaySet *v89; // rdi
  int v90; // r12d
  int v91; // r13d
  CD3DModuleLoaderInternal *v92; // rcx
  CDXGIEnumeration *v93; // rbx
  struct CDXGIEnumeration *v94; // rbx
  __int64 (__fastcall *v95)(CMILRefCountBase *); // rax
  __int64 v96; // rdx
  __m128i v97; // xmm3
  __int64 v98; // rdx
  __int64 v99; // r8
  int v100; // r9d
  int v101; // r10d
  unsigned int v102; // ebx
  unsigned int v103; // r14d
  bool v104; // r13
  __int64 v105; // rax
  __int64 v106; // r15
  __int64 v107; // r12
  unsigned int v108; // r10d
  bool v109; // zf
  char v110; // r15
  _QWORD **v111; // rcx
  bool *v112; // rdi
  _QWORD *v113; // rcx
  __int64 v114; // rbx
  unsigned __int64 v115; // rcx
  HANDLE v116; // rax
  BOOL v117; // eax
  _QWORD *v118; // rbx
  unsigned int v119; // edi
  __int64 v120; // rcx
  int v121; // eax
  unsigned int v122; // edi
  __int64 v123; // rcx
  __int64 v124; // rax
  CHwndRenderTarget *v125; // rcx
  __int64 (__fastcall *v126)(CHwndRenderTarget *); // rax
  int v127; // eax
  int v128; // r14d
  unsigned int v129; // edi
  char *v130; // rbx
  char *v131; // rbx
  char *v132; // rcx
  __int64 v133; // rax
  CAnimation *v135; // rcx
  void (*v136)(void); // rax
  int v137; // eax
  __int64 v138; // rcx
  void *v139; // rcx
  unsigned int v140; // edx
  unsigned int i; // ebx
  __int64 v142; // rdi
  __int64 v143; // rax
  int LegacyTokens; // eax
  unsigned int j; // ebx
  int v146; // eax
  __int64 v147; // rax
  __int64 v148; // rax
  int v149; // edx
  void *v150; // rax
  bool v151; // r12
  int v152; // eax
  int v153; // eax
  int v154; // eax
  int v155; // eax
  int v156; // eax
  const GUID *v157; // r8
  const GUID *v158; // r9
  int v159; // eax
  int v160; // eax
  int v161; // ebx
  __int64 v162; // rcx
  int v163; // eax
  int v164; // r14d
  UINT32 cData; // [rsp+20h] [rbp-188h]
  int v166; // [rsp+30h] [rbp-178h]
  int v167; // [rsp+30h] [rbp-178h]
  int v168; // [rsp+30h] [rbp-178h]
  bool v169; // [rsp+34h] [rbp-174h] BYREF
  char v170; // [rsp+35h] [rbp-173h]
  int v171; // [rsp+38h] [rbp-170h] BYREF
  unsigned __int64 v172; // [rsp+40h] [rbp-168h] BYREF
  bool v173; // [rsp+48h] [rbp-160h] BYREF
  bool v174; // [rsp+49h] [rbp-15Fh] BYREF
  unsigned int v175; // [rsp+4Ch] [rbp-15Ch] BYREF
  unsigned int v176; // [rsp+50h] [rbp-158h] BYREF
  bool *v177; // [rsp+58h] [rbp-150h]
  unsigned int v178; // [rsp+60h] [rbp-148h] BYREF
  int v179; // [rsp+64h] [rbp-144h] BYREF
  int v180; // [rsp+68h] [rbp-140h] BYREF
  int D3DObjects; // [rsp+6Ch] [rbp-13Ch] BYREF
  __int64 v182; // [rsp+70h] [rbp-138h] BYREF
  unsigned __int64 v183; // [rsp+78h] [rbp-130h] BYREF
  PVOID RestartKey; // [rsp+80h] [rbp-128h] BYREF
  struct UCE_RDP_HEADER *v185; // [rsp+88h] [rbp-120h] BYREF
  unsigned __int64 CycleTime; // [rsp+90h] [rbp-118h] BYREF
  unsigned __int64 v187; // [rsp+98h] [rbp-110h] BYREF
  CDisplaySet *v188; // [rsp+A0h] [rbp-108h] BYREF
  unsigned __int64 v189; // [rsp+A8h] [rbp-100h] BYREF
  unsigned __int64 v190; // [rsp+B0h] [rbp-F8h] BYREF
  unsigned __int64 v191; // [rsp+B8h] [rbp-F0h] BYREF
  unsigned __int64 v192; // [rsp+C0h] [rbp-E8h] BYREF
  RTL_SRWLOCK *v193; // [rsp+C8h] [rbp-E0h]
  PVOID v194; // [rsp+D0h] [rbp-D8h] BYREF
  _QWORD Buffer[6]; // [rsp+D8h] [rbp-D0h] BYREF
  __int64 v196; // [rsp+108h] [rbp-A0h]
  LARGE_INTEGER v197; // [rsp+110h] [rbp-98h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+118h] [rbp-90h] BYREF
  int v199; // [rsp+120h] [rbp-88h]
  __int64 QuadPart; // [rsp+124h] [rbp-84h]
  __int128 v201; // [rsp+12Ch] [rbp-7Ch]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+140h] [rbp-68h] BYREF
  GUID *v203; // [rsp+160h] [rbp-48h]
  __int64 v204; // [rsp+168h] [rbp-40h]
  void *retaddr; // [rsp+1A8h] [rbp+0h]

  v2 = this;
  v193 = this;
  v177 = a2;
  v3 = a2;
  *a2 = 0;
  AcquireSRWLockExclusive(this + 69);
  LODWORD(v2[70].Ptr) = GetCurrentThreadId();
  memset_0(&v197, 0, 0x30uLL);
  if ( dword_180272620 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_180272620);
    if ( dword_180272620 == -1 )
    {
      qword_180272028 = g_qpcFrequency.QuadPart * LODWORD(v2[163].Ptr);
      Init_thread_footer(&dword_180272620);
    }
  }
  if ( !v2[164].Ptr )
    v2[164].Ptr = v2[42].Ptr;
  v4 = 0LL;
  if ( (PVOID)((char *)v2[42].Ptr - (char *)v2[164].Ptr) >= (PVOID)qword_180272028 )
  {
    v140 = qword_18026EFB0;
    for ( i = 0; i < v140; ++i )
    {
      v142 = *(_QWORD *)(qword_18026EF60 + 24LL * i);
      if ( !*(_BYTE *)(v142 + 1041) )
      {
        CD3DResourceManager::DestroyDelayedResources((CD3DResourceManager *)(v142 + 896));
        *(_BYTE *)(v142 + 1041) = 1;
        v140 = qword_18026EFB0;
      }
    }
    v2[164].Ptr = v2[42].Ptr;
  }
  Ptr = (LARGE_INTEGER **)v2[44].Ptr;
  if ( Ptr )
  {
    v2[42].Ptr = (PVOID)(*Ptr)[30];
    v197 = (*Ptr)[29];
    v6 = (*Ptr)[160];
    PerformanceCount = v6;
    v199 = *((_DWORD *)Ptr + 6) + (*Ptr)[12].HighPart;
    QuadPart = Ptr[1][2].QuadPart;
  }
  else
  {
    QueryPerformanceCounter(&PerformanceCount);
    v6 = PerformanceCount;
    v197.QuadPart = 0LL;
    v199 = 0;
    QuadPart = 0x10000003CLL;
  }
  v7 = v2[61].Ptr;
  v8 = QuadPart;
  SurfaceUpdates = 0;
  v2[59].Ptr = (PVOID)v6;
  v7[519] = v8;
  v10 = v2[65].Ptr;
  v201 = *(_OWORD *)&v2[166].Ptr;
  v11 = NtDCompositionBeginFrame(*v10, &v197, &v189);
  if ( v11 < 0 )
  {
    SurfaceUpdates = v11 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11 | 0x10000000, 0x87u);
    if ( SurfaceUpdates < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, SurfaceUpdates, 0x10Au);
  }
  if ( LOBYTE(v2[168].Ptr) )
  {
    for ( j = 0; j < LODWORD(v2[135].Ptr); ++j )
      CCompositionCapabilities::OnCapabilitiesChanged(*((CCompositionCapabilities **)v2[132].Ptr + j));
    LOBYTE(v2[168].Ptr) = 0;
  }
  v12 = v189;
  v13 = v2[44].Ptr;
  v14 = v189;
  v172 = v189;
  if ( v13 )
  {
    *(_QWORD *)(*(_QWORD *)v13 + 8LL) = v189;
    v12 = v189;
    v172 = v189;
  }
  v2[45].Ptr = (PVOID)v14;
  if ( DWORD2(v201) )
    dword_18026ED20 |= 0x40u;
  if ( SurfaceUpdates < 0 )
  {
    cData = 345;
    goto LABEL_380;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0x(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSQUEUEEVENT_Start, v2);
  v15 = v2[65].Ptr;
  v190 = v12;
  SurfaceUpdates = 0;
  ConnectionBatch = NtDCompositionGetConnectionBatch(*v15, &v190, &v185);
  if ( ConnectionBatch < 0 )
  {
    SurfaceUpdates = ConnectionBatch | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ConnectionBatch | 0x10000000, 0xBDu);
  }
  else
  {
    v17 = v185;
    if ( v185 )
    {
      while ( 1 )
      {
        v18 = CComposition::ProcessPartitionCommand((CComposition *)v2, v17);
        SurfaceUpdates = v18;
        if ( v18 < 0 )
          break;
        v17 = (struct UCE_RDP_HEADER *)*((_QWORD *)v185 + 1);
        v185 = v17;
        if ( !v17 )
          goto LABEL_20;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0xC1u);
    }
  }
LABEL_20:
  if ( SurfaceUpdates < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, SurfaceUpdates, 0x25Au);
  for ( k = 0; k < LODWORD(v2[41].Ptr); ++k )
  {
    v20 = *((_QWORD *)v2[38].Ptr + k);
    if ( v20 && *(_DWORD *)(v20 + 80) )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x1000) != 0 )
        McTemplateU0qqq(
          (unsigned int)&Microsoft_Windows_Dwm_Core_Provider_Context,
          (unsigned int)&CHANNELBATCHES_PROCESSED,
          *(_DWORD *)(v20 + 16),
          *(_DWORD *)(v20 + 20),
          *(_DWORD *)(v20 + 80));
      dword_18026EDA8 += *(_DWORD *)(v20 + 80);
      ++*(_DWORD *)(*(_QWORD *)(v20 + 40) + 36LL);
      *(_DWORD *)(v20 + 80) = 0;
    }
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0x(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSQUEUEEVENT_Stop, v2);
  v21 = (*(__int64 (__fastcall **)(PVOID, __int64))(*(_QWORD *)v2[165].Ptr + 24LL))(v2[165].Ptr, 3LL);
  v22 = v21;
  if ( v21 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x267u);
  if ( !SurfaceUpdates )
    goto LABEL_31;
  if ( SurfaceUpdates < 0 )
    goto LABEL_378;
  if ( v22 < 0 )
LABEL_31:
    SurfaceUpdates = v22;
  if ( SurfaceUpdates < 0 )
  {
LABEL_378:
    cData = 350;
LABEL_380:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180201D00, 2u, SurfaceUpdates, cData);
    goto LABEL_217;
  }
  v23 = 0LL;
  CycleTime = 0LL;
  if ( ::CycleTime )
  {
    CurrentThread = GetCurrentThread();
    v25 = QueryThreadCycleTime(CurrentThread, &CycleTime);
    v23 = CycleTime;
    if ( v25 )
      qword_18026ED60 += CycleTime - ::CycleTime;
  }
  ::CycleTime = v23;
  v26 = (_QWORD **)v2[67].Ptr;
  if ( v26 )
  {
    v146 = (*(__int64 (__fastcall **)(_QWORD *))(*v26[3] + 48LL))(v26[3]);
    SurfaceUpdates = v146;
    if ( v146 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180201D00, 2u, v146, 0x166u);
      goto LABEL_217;
    }
  }
  SurfaceUpdates = 0;
  if ( !v12 )
    goto LABEL_108;
  if ( BYTE1(v2[37].Ptr) )
  {
    CD3DDeviceManager::FlushAllDevices((CD3DDeviceManager *)&g_D3DDeviceManager);
    BYTE1(v2[37].Ptr) = 0;
  }
  v27 = 0;
  v28 = v2[10].Ptr;
  v176 = 0;
  v179 = 0;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSPRESENTHISTORY_Start);
  if ( *((_QWORD *)v28 + 47) )
  {
    if ( ++v28[96] > 8u )
    {
      ++v28[98];
      CLegacySurfaceManager::ReleaseCaptureBitsResponse((CLegacySurfaceManager *)(v28 + 24));
    }
  }
  v29 = 0;
  v178 = 0;
  v166 = 0;
  if ( !v28[56] )
  {
    v166 = 0;
    goto LABEL_45;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSDEFERREDTOKENS_Start);
    v29 = 0;
  }
  if ( v28[56] )
  {
    while ( 1 )
    {
      v147 = *((_QWORD *)v28 + 25);
      v173 = 0;
      ++*(_DWORD *)(v147 + 16LL * (unsigned int)v4);
      v148 = *((_QWORD *)v28 + 25);
      v149 = *(_DWORD *)(v148 + 16LL * (unsigned int)v4);
      v150 = *(void **)(v148 + 16LL * (unsigned int)v4 + 8);
      LODWORD(v182) = v149;
      RestartKey = v150;
      v29 = CLegacySurfaceManager::ProcessToken(
              (CLegacySurfaceManager *)(v28 + 24),
              (const struct _D3DKMT_PRESENTHISTORYTOKEN *)v150,
              &v178,
              &v173);
      v166 = v29;
      if ( v29 < 0 )
        break;
      v151 = v173;
      if ( v173 || (unsigned int)v182 > 0x64 )
      {
        v152 = DynArray<ClipPlaneIterator::LineSegment,0>::RemoveAt(v28 + 50, (unsigned int)v4);
        v166 = v152;
        if ( v152 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v152, 0x1AAu);
          goto LABEL_292;
        }
        WPF::ProcessHeapImpl::Free(RestartKey);
        if ( !v151 )
          ++v28[49];
        v29 = v166;
        LODWORD(v4) = v4 - 1;
      }
      LODWORD(v4) = v4 + 1;
      if ( (unsigned int)v4 >= v28[56] )
        goto LABEL_293;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v29, 0x1A2u);
LABEL_292:
    v29 = v166;
LABEL_293:
    v12 = v172;
    SurfaceUpdates = 0;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSDEFERREDTOKENS_Stop);
    v29 = v166;
  }
  if ( v29 >= 0 )
  {
    LODWORD(v4) = 0;
LABEL_45:
    v191 = v12;
    FrameLegacyTokens = NtDCompositionGetFrameLegacyTokens(&v191, &v176, &v179);
    if ( FrameLegacyTokens < 0 )
    {
      LODWORD(v4) = FrameLegacyTokens | 0x10000000;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, FrameLegacyTokens | 0x10000000, 0x46u);
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0qq(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSPRESENTHISTORY_GetPresentHistory,
        (unsigned int)v4,
        v176);
    v28[48] = v4;
    if ( (int)v4 < 0 )
    {
LABEL_52:
      if ( (int)v28[48] < 0 )
        CLegacySurfaceManager::FlushVistaBltPresentHistory((CLegacySurfaceManager *)(v28 + 24));
    }
    else
    {
      while ( 1 )
      {
        v32 = 0;
        v33 = *((_QWORD *)v28 + 80);
        v27 += v176;
        if ( v176 )
          break;
LABEL_51:
        v12 = v172;
        if ( v179 )
        {
          ++SurfaceUpdates;
          LegacyTokens = CLegacySurfaceManager::GetLegacyTokens(v31, v172, &v176, &v179);
          v28[48] = LegacyTokens;
          if ( LegacyTokens >= 0 )
            continue;
        }
        goto LABEL_52;
      }
      while ( 1 )
      {
        v174 = 0;
        v137 = CLegacySurfaceManager::ProcessToken(
                 (CLegacySurfaceManager *)(v28 + 24),
                 (const struct _D3DKMT_PRESENTHISTORYTOKEN *)v33,
                 &v178,
                 &v174);
        v166 = v137;
        if ( v137 < 0 )
          break;
        if ( !v174 )
        {
          v153 = CLegacySurfaceManager::AddUnclaimedToken(
                   (CLegacySurfaceManager *)(v28 + 24),
                   (const struct _D3DKMT_PRESENTHISTORYTOKEN *)v33);
          v166 = v153;
          if ( v153 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v153, 0x138u);
            goto LABEL_302;
          }
        }
        ++v32;
        v33 += *(unsigned int *)(v33 + 4);
        if ( v32 >= v176 )
          goto LABEL_51;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v137, 0x131u);
LABEL_302:
      v12 = v172;
    }
    goto LABEL_54;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v29, 0x116u);
LABEL_54:
  v34 = Microsoft_Windows_Dwm_CoreEnableBits;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    McTemplateU0qq(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSPRESENTHISTORY_Stop,
      v27,
      (unsigned int)SurfaceUpdates);
    v34 = Microsoft_Windows_Dwm_CoreEnableBits;
  }
  dword_18026EDAC += v27;
  SurfaceUpdates = v166;
  if ( v166 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v166, 0x239u);
    goto LABEL_108;
  }
  v35 = (char *)v2[10].Ptr;
  v175 = 0;
  v36 = 0;
  v180 = 0;
  v37 = 0;
  v167 = 0;
  v171 = 0;
  if ( (v34 & 0x20) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSSURFACEUPDATES_Start);
  v192 = v12;
  SurfaceUpdates = 0;
  FrameSurfaceUpdates = NtDCompositionGetFrameSurfaceUpdates(&v192, &v175, &v180);
  if ( FrameSurfaceUpdates < 0 )
  {
    SurfaceUpdates = FrameSurfaceUpdates | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180201E18, 3u, FrameSurfaceUpdates | 0x10000000, 0x7Eu);
  }
  if ( SurfaceUpdates >= 0 )
  {
    do
    {
      v40 = 0;
      if ( v175 )
      {
        v41 = v171;
        do
        {
          Buffer[1] = 0LL;
          v42 = *((_QWORD *)v35 + 80) + 200LL * v40;
          v196 = *(_QWORD *)(v42 + 4);
          Buffer[0] = v196;
          v43 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)(v35 + 24), Buffer);
          if ( v43 )
          {
            v44 = (CCompositionSurfaceInfo *)*((_QWORD *)v43 + 1);
            if ( v44 )
            {
              v45 = CCompositionSurfaceInfo::ProcessSurfaceUpdate(v44, (const struct CSM_SURFACE_UPDATE *)v42);
              if ( v45 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v45, 0xCFu);
              ++v41;
            }
          }
          v39 = *(void **)(v42 + 32);
          if ( (unsigned __int64)v39 >= 2 )
            DeleteObject(v39);
          ++v40;
        }
        while ( v40 < v175 );
        v36 = v167;
        v171 = v41;
        v12 = v172;
      }
      if ( !v180 )
        break;
      v167 = ++v36;
      SurfaceUpdates = CCompositionSurfaceManager::GetSurfaceUpdates(
                         (CCompositionSurfaceManager *)v39,
                         v12,
                         &v175,
                         &v180);
    }
    while ( SurfaceUpdates >= 0 );
    v37 = v171;
  }
  RestartKey = 0LL;
  v46 = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)(v35 + 24), &RestartKey);
  if ( !v46 )
    goto LABEL_103;
  while ( 1 )
  {
    v47 = v46[1];
    v48 = CBitmapRealization::HrFindInterface;
    v172 = 0LL;
    v49 = 0;
    v50 = *(__int64 (__fastcall ****)(CBitmapRealization *__hidden, const struct _GUID *, void **))(v47 + 120);
    if ( v50 )
      break;
LABEL_101:
    v46 = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)(v35 + 24), &RestartKey);
    if ( !v46 )
      goto LABEL_102;
  }
  v51 = **v50;
  if ( v51 == CBitmapRealization::QueryInterface )
  {
    v52 = *(_QWORD *)GUID_302508ed_c63d_40f8_af07_af5881d2df95.Data4;
    v53 = *(_QWORD *)&GUID_302508ed_c63d_40f8_af07_af5881d2df95.Data1
        - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *(_QWORD *)&GUID_302508ed_c63d_40f8_af07_af5881d2df95.Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v53 = *(_QWORD *)GUID_302508ed_c63d_40f8_af07_af5881d2df95.Data4
          - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( v53 )
    {
      v54 = (*v50)[4];
      if ( v54 == CBitmapRealization::HrFindInterface )
      {
        v55 = *(_QWORD *)&GUID_302508ed_c63d_40f8_af07_af5881d2df95.Data1
            - *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1;
        if ( *(_QWORD *)&GUID_302508ed_c63d_40f8_af07_af5881d2df95.Data1 == *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1 )
          v55 = *(_QWORD *)GUID_302508ed_c63d_40f8_af07_af5881d2df95.Data4
              - *(_QWORD *)GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data4;
        if ( v55 )
        {
          v56 = *(_QWORD *)&GUID_302508ed_c63d_40f8_af07_af5881d2df95.Data1
              - *(_QWORD *)&GUID_db178a3c_d733_4570_9513_5392d717955f.Data1;
          if ( *(_QWORD *)&GUID_302508ed_c63d_40f8_af07_af5881d2df95.Data1 == *(_QWORD *)&GUID_db178a3c_d733_4570_9513_5392d717955f.Data1 )
            v56 = *(_QWORD *)GUID_302508ed_c63d_40f8_af07_af5881d2df95.Data4
                - *(_QWORD *)GUID_db178a3c_d733_4570_9513_5392d717955f.Data4;
          if ( v56 )
          {
            v57 = *(_QWORD *)&GUID_302508ed_c63d_40f8_af07_af5881d2df95.Data1
                - *(_QWORD *)&GUID_475af409_d8b1_4ca5_8177_4562f6260b68.Data1;
            if ( *(_QWORD *)&GUID_302508ed_c63d_40f8_af07_af5881d2df95.Data1 == *(_QWORD *)&GUID_475af409_d8b1_4ca5_8177_4562f6260b68.Data1 )
              v57 = *(_QWORD *)GUID_302508ed_c63d_40f8_af07_af5881d2df95.Data4
                  - *(_QWORD *)GUID_475af409_d8b1_4ca5_8177_4562f6260b68.Data4;
            if ( v57 )
            {
              v58 = *(_QWORD *)&GUID_302508ed_c63d_40f8_af07_af5881d2df95.Data1
                  - *(_QWORD *)&GUID_c5a4a15d_a7cd_44bc_8a15_7199ecad6671.Data1;
              if ( *(_QWORD *)&GUID_302508ed_c63d_40f8_af07_af5881d2df95.Data1 == *(_QWORD *)&GUID_c5a4a15d_a7cd_44bc_8a15_7199ecad6671.Data1 )
                v58 = *(_QWORD *)GUID_302508ed_c63d_40f8_af07_af5881d2df95.Data4
                    - *(_QWORD *)GUID_c5a4a15d_a7cd_44bc_8a15_7199ecad6671.Data4;
              if ( v58 )
              {
                v50 = 0LL;
                v172 = 0LL;
                v59 = -2147467263;
              }
              else
              {
                v59 = 0;
                v50 += 2;
                v172 = (unsigned __int64)v50;
              }
            }
            else
            {
              v50 += 11;
              v59 = 0;
              v172 = (unsigned __int64)v50;
            }
          }
          else
          {
            v50 += 18;
            v59 = 0;
            v172 = (unsigned __int64)v50;
          }
        }
        else
        {
          v59 = 0;
          v50 += 18;
          v172 = (unsigned __int64)v50;
        }
      }
      else
      {
        v154 = v54((CBitmapRealization *)v50, &GUID_302508ed_c63d_40f8_af07_af5881d2df95, (void **)&v172);
        v50 = (__int64 (__fastcall ***)(CBitmapRealization *__hidden, const struct _GUID *, void **))v172;
        v59 = v154;
      }
      if ( v59 < 0 )
      {
        v60 = 0LL;
        v172 = 0LL;
        goto LABEL_97;
      }
    }
    else
    {
      v172 = (unsigned __int64)v50;
      v59 = 0;
    }
    (*v50)[1]((CBitmapRealization *)v50, (const struct _GUID *)*v50, (void **)v48);
  }
  else
  {
    v59 = v51((CBitmapRealization *)v50, &GUID_302508ed_c63d_40f8_af07_af5881d2df95, (void **)&v172);
  }
  v60 = v172;
LABEL_97:
  if ( v59 >= 0 )
  {
    v155 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64 (__fastcall *)(CBitmapRealization *__hidden, const struct _GUID *, void **), __int64 (__fastcall ***)(CBitmapRealization *__hidden, const struct _GUID *, void **)))(*(_QWORD *)v60 + 56LL))(
             v60,
             0LL,
             v48,
             v50);
    v49 = v155;
    if ( v155 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v155, 0xCFu);
    v60 = v172;
  }
  if ( v60 )
    (*(void (__fastcall **)(unsigned __int64, __int64, __int64 (__fastcall *)(CBitmapRealization *__hidden, const struct _GUID *, void **), __int64 (__fastcall ***)(CBitmapRealization *__hidden, const struct _GUID *, void **)))(*(_QWORD *)v60 + 16LL))(
      v60,
      v52,
      v48,
      v50);
  if ( v49 >= 0 )
    goto LABEL_101;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v49, 0xBDu);
LABEL_102:
  v37 = v171;
LABEL_103:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0qq(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSSURFACEUPDATES_Stop,
      v37,
      v36);
  dword_18026EDAC += v37;
  if ( SurfaceUpdates < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, SurfaceUpdates, 0x23Eu);
  v3 = v177;
LABEL_108:
  if ( SurfaceUpdates < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180201D00, 2u, SurfaceUpdates, 0x16Cu);
    goto LABEL_376;
  }
  v61 = 0LL;
  v187 = 0LL;
  if ( ::CycleTime )
  {
    v62 = GetCurrentThread();
    v63 = QueryThreadCycleTime(v62, &v187);
    v61 = v187;
    if ( v63 )
      qword_18026ED68 += v187 - ::CycleTime;
  }
  ::CycleTime = v61;
  v64 = 0;
  v65 = v2[9].Ptr;
  SurfaceUpdates = 0;
  v66 = 0;
  if ( *((_DWORD *)v65 + 20) )
  {
    do
    {
      v67 = v65[7];
      v169 = 0;
      v68 = *(CDesktopRenderTarget **)(v67 + 8LL * v66);
      v69 = *(__int64 (__fastcall **)(CDesktopRenderTarget *, bool *))(*(_QWORD *)v68 + 152LL);
      if ( v69 == CDesktopRenderTarget::EnsureRenderTargets )
        v70 = CDesktopRenderTarget::EnsureRenderTargets(v68, &v169);
      else
        v70 = v69(v68, &v169);
      SurfaceUpdates = v70;
      if ( v70 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v70, 0x322u);
        goto LABEL_118;
      }
      v64 |= v169;
      ++v66;
    }
    while ( v66 < *((_DWORD *)v65 + 20) );
    if ( v64 && !(unsigned int)DWMCommitInputSystemOutputConfig(v71, CDesktopRenderTarget::EnsureRenderTargets) )
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
  }
LABEL_118:
  if ( SurfaceUpdates < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180201D00, 2u, SurfaceUpdates, 0x173u);
    goto LABEL_376;
  }
  *v3 = 0;
  v72 = v2[9].Ptr;
  v73 = v72[12];
  while ( v73 )
  {
    v74 = *(struct CRenderTarget **)(*((_QWORD *)v72 + 3) + 8LL * (unsigned int)--v73);
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *))(*((_QWORD *)v74 + 8) + 32LL))((_QWORD *)v74 + 8) )
      CRenderTargetManager::InternalRemoveTarget((CRenderTargetManager *)v72, v74);
  }
  v75 = 1;
  v76 = v2[9].Ptr;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_MILEVENT_MEDIA_UCE_CHECKDEVICESTATE_Start);
  v77 = 0;
  if ( *((_DWORD *)v76 + 12) )
  {
    do
    {
      v78 = *(struct CRenderTarget **)(v76[3] + 8LL * v77);
      v79 = (struct CRenderTarget *)((char *)v78 + 64);
      v80 = *(__int64 (__fastcall **)(CHwndRenderTarget *))(*((_QWORD *)v78 + 8) + 48LL);
      if ( v80 == CHwndRenderTarget::CheckOcclusionState )
        v81 = CHwndRenderTarget::CheckOcclusionState(v79);
      else
        v81 = v80(v79);
      v168 = v81;
      SurfaceUpdates = v81;
      if ( v81 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180201D00, 2u, v81, 0x541u);
        goto LABEL_140;
      }
      v82 = 0;
      v83 = v81 == 142213121;
      if ( v81 == 142213121 )
        v82 = v75;
      v75 = v82;
      v84 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v78 + 48LL);
      if ( v84 == CHwndRenderTarget::IsOfType )
        v85 = CHwndRenderTarget::IsOfType((__int64)v78, 70);
      else
        v85 = v84((__int64)v78, 70);
      if ( v85 )
      {
        v168 = 0;
        v86 = *((_DWORD *)v76 + 24);
        if ( v86 < *((_DWORD *)v76 + 12) )
        {
          while ( 1 )
          {
            v143 = v76[3];
            v183 = 8LL * v86;
            if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v183 + v143) + 48LL))(
                   *(_QWORD *)(v183 + v143),
                   73LL) )
            {
              v156 = CIndirectSwapchainRenderTarget::SetTargetOcclusion(
                       *(CIndirectSwapchainRenderTarget **)(v183 + v76[3]),
                       v78,
                       v83);
              v168 = v156;
              if ( v156 < 0 )
                break;
            }
            if ( ++v86 >= *((_DWORD *)v76 + 12) )
              goto LABEL_135;
          }
          SurfaceUpdates = v156;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v156, 0x3ABu);
        }
        else
        {
LABEL_135:
          SurfaceUpdates = v168;
        }
        if ( SurfaceUpdates < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180201D00, 2u, SurfaceUpdates, 0x53Cu);
          goto LABEL_140;
        }
      }
      ++v77;
    }
    while ( v77 < *((_DWORD *)v76 + 12) );
    if ( v75 )
      goto LABEL_324;
LABEL_139:
    SurfaceUpdates = 0;
    v168 = 0;
  }
  else
  {
LABEL_324:
    if ( *((_BYTE *)v76 + 147) )
      goto LABEL_139;
    SurfaceUpdates = 142213121;
    v168 = 142213121;
  }
LABEL_140:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_MILEVENT_MEDIA_UCE_CHECKDEVICESTATE_Stop);
  if ( SurfaceUpdates < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1801F0798, 1u, SurfaceUpdates, 0xD07u);
  CComposition::ProcessRenderingStatus((CComposition *)v2, SurfaceUpdates);
  if ( SurfaceUpdates == 142213121 )
  {
    v168 = 0;
    v171 = 0;
    *v177 = 1;
    goto LABEL_147;
  }
  if ( SurfaceUpdates == -2003304307
    && hProvider > 5u
    && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
  {
    v204 = 16LL;
    v203 = &gDwmCoreTelemetryActivityId;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1802119BF, v157, v158, 3u, &pData);
  }
  v171 = SurfaceUpdates;
  if ( SurfaceUpdates < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180201D00, 2u, SurfaceUpdates, 0x179u);
LABEL_376:
    v4 = 0LL;
    goto LABEL_217;
  }
LABEL_147:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0d(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_CLEAR_D2D_CACHES_Start, 2000LL);
  v170 = 1;
  v87 = 1366;
  v88 = 768;
  v89 = 0LL;
  v90 = 4;
  EnterCriticalSection(&g_DisplayManager);
  v91 = 0;
  EnterCriticalSection(&g_DisplayManager);
  v93 = qword_18026EEB0;
  if ( !qword_18026EEB0
    || (!(*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)qword_18026EEB0 + 2) + 104LL))(*((_QWORD *)qword_18026EEB0
                                                                                               + 2))
     || (unsigned int)DrvQueryAdapterPopulationUniqueness() != *((_DWORD *)v93 + 14)
     || qword_18026EEB0 != v93
      ? (ReleaseInterface<CRemoteApplicationWindow>(&qword_18026EEB0), LOBYTE(v93) = 1)
      : (LOBYTE(v93) = 0),
        !qword_18026EEB0) )
  {
    D3DObjects = CD3DModuleLoaderInternal::CreateD3DObjects(v92, &qword_18026EEB0);
    TranslateDXGIorD3DErrorInContext(D3DObjects, 4, &D3DObjects);
    v91 = D3DObjects;
    if ( D3DObjects < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180202590, 1u, D3DObjects, 0x128u);
  }
  if ( (_BYTE)v93 && qword_18026EEC0 )
    CSurfaceManager::ResetTokenThread(qword_18026EEC0);
  v94 = qword_18026EEB0;
  if ( qword_18026EEB0 )
    (**(void (__fastcall ***)(CDXGIEnumeration *))qword_18026EEB0)(qword_18026EEB0);
  LeaveCriticalSection(&g_DisplayManager);
  if ( v91 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v91, 0xEAu);
  }
  else
  {
    if ( qword_18026EEA8 )
      goto LABEL_160;
    v188 = 0LL;
    LeaveCriticalSection(&g_DisplayManager);
    v159 = CDisplayManager::DeriveCurrentDisplaySet(&g_DisplayManager, v94, &v188, 0LL);
    v91 = v159;
    if ( v159 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v159, 0xF8u);
      EnterCriticalSection(&g_DisplayManager);
    }
    else
    {
      EnterCriticalSection(&g_DisplayManager);
      if ( qword_18026EEA8 )
      {
        if ( v188 )
          CDisplaySet::Release(v188);
      }
      else
      {
        qword_18026EEA8 = v188;
        if ( v188 )
          _InterlockedIncrement((volatile signed __int32 *)v188);
      }
LABEL_160:
      _InterlockedIncrement((volatile signed __int32 *)qword_18026EEA8);
      v89 = qword_18026EEA8;
      v168 = v171;
    }
  }
  if ( v94 )
  {
    v95 = *(__int64 (__fastcall **)(CMILRefCountBase *))(*(_QWORD *)v94 + 8LL);
    if ( v95 == CMILRefCountBase::Release )
      CMILRefCountBase::Release(v94);
    else
      v95(v94);
  }
  LeaveCriticalSection(&g_DisplayManager);
  if ( v91 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v91, 0xD9u);
  if ( v89 )
  {
    v87 = 0;
    v88 = 0;
    v90 = 0;
    if ( *((_DWORD *)v89 + 18) )
    {
      v96 = *((_QWORD *)v89 + 6);
      do
      {
        v97 = *(__m128i *)(*(_QWORD *)v96 + 260LL);
        v101 = GetPixelFormatSize(*(_DWORD *)(*(_QWORD *)v96 + 276LL)) >> 3;
        if ( v100 * v101 * _mm_cvtsi128_si32(v97) > (unsigned int)(v87 * v88 * v90) )
        {
          v87 = _mm_cvtsi128_si32(v97);
          v88 = v100;
          v90 = v101;
        }
        v96 = v98 + 8;
      }
      while ( v99 != 1 );
    }
  }
  v102 = 0;
  v103 = v90 * ((v87 + 255) & 0xFFFFFF00) * ((v88 + 255) & 0xFFFFFF00)
       + ((v90 * ((v87 + 255) & 0xFFFFFF00) * ((v88 + 255) & 0xFFFFFF00)) >> 2);
  if ( (_DWORD)qword_18026EFB0 )
  {
    do
    {
      v104 = 0;
      v105 = *(_QWORD *)(qword_18026EF60 + 24LL * v102 + 8);
      v106 = *(_QWORD *)(qword_18026EF60 + 24LL * v102);
      v107 = 24LL * v102;
      v182 = v105;
      if ( !CD3DDeviceManager::s_bHwProtectionTempDisabled && !CD3DDeviceManager::s_bHwProtectionTeardown )
      {
        v108 = 0;
        if ( dword_18026EF48 )
        {
          while ( *(_QWORD *)(qword_18026EF30 + 12LL * v108) != __PAIR64__(HIDWORD(v182), v105) )
          {
            if ( ++v108 >= dword_18026EF48 )
              goto LABEL_176;
          }
          v104 = *(_DWORD *)(qword_18026EF30 + 12LL * v108 + 8) != 0;
        }
      }
LABEL_176:
      if ( *(_BYTE *)(qword_18026EF60 + v107 + 16) && !v104 )
        CD3DDeviceLevel1::ClearProtectedResources((CD3DDeviceLevel1 *)v106);
      v109 = *(_QWORD *)(v106 + 160) == 0LL;
      LODWORD(v182) = 1;
      if ( !v109 )
      {
        (*(void (__fastcall **)(_QWORD, __int64, _QWORD, __int64 *))(**(_QWORD **)(v106 + 168) + 40LL))(
          *(_QWORD *)(v106 + 168),
          2000LL,
          v103,
          &v182);
        if ( (_DWORD)v182 != 1 )
          v170 = 0;
      }
      ++v102;
      *(_BYTE *)(v107 + qword_18026EF60 + 16) = v104;
    }
    while ( v102 < (unsigned int)qword_18026EFB0 );
    v2 = v193;
  }
  if ( v89 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v89, 0xFFFFFFFF) == 1 )
    {
      CDisplaySet::~CDisplaySet(v89);
      WPF::ProcessHeapImpl::Free(v89);
    }
    SurfaceUpdates = v171;
  }
  else
  {
    SurfaceUpdates = v168;
  }
  v110 = v170;
  v4 = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0d(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_CLEAR_D2D_CACHES_Stop, v170 != 0);
  v111 = (_QWORD **)v2[67].Ptr;
  v112 = v177;
  if ( !v111 )
    goto LABEL_189;
  v160 = (*(__int64 (__fastcall **)(_QWORD *, PVOID, bool))(*v111[3] + 64LL))(v111[3], v2[59].Ptr, *v177);
  v171 = v160;
  v161 = v160;
  if ( v160 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180201D00, 2u, v160, 0x190u);
  TranslateDXGIorD3DErrorInContext(v161, 0, &v171);
  SurfaceUpdates = v171;
  if ( v171 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180201D00, 2u, v171, 0x197u);
  }
  else
  {
LABEL_189:
    v113 = v2[16].Ptr;
    if ( v113 && v113[4] )
    {
      v194 = v2[16].Ptr;
      CHolographicInteropTaskQueue::ProcessPendingMessages__lambda_1af5a33988fbdcb1a8e6d38412aed786___(v113[6], &v194);
    }
    if ( !*v112 )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_MILEVENT_UCE_PROCESSANIMATERESOURCES_Start);
      LODWORD(v114) = v2[80].Ptr;
      while ( (_DWORD)v114 )
      {
        v114 = (unsigned int)(v114 - 1);
        v135 = (CAnimation *)*((_QWORD *)v2[77].Ptr + v114);
        v136 = **(void (***)(void))v135;
        if ( (char *)v136 == (char *)CAnimation::UpdateAnimateValues )
          CAnimation::UpdateAnimateValues(v135);
        else
          v136();
      }
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      {
        McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_MILEVENT_UCE_PROCESSANIMATERESOURCES_Stop);
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
          McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_PROCESS_EXPRESSIONS_Start);
      }
      CExpressionManager::UpdateExpressions(
        (CExpressionManager *)v2[27].Ptr,
        (unsigned __int64)v2[59].Ptr,
        (unsigned __int64)v2[45].Ptr);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_PROCESS_EXPRESSIONS_Stop);
      v115 = 0LL;
      v183 = 0LL;
      if ( ::CycleTime )
      {
        v116 = GetCurrentThread();
        v117 = QueryThreadCycleTime(v116, &v183);
        v115 = v183;
        if ( v117 )
          qword_18026ED70 += v183 - ::CycleTime;
      }
      ::CycleTime = v115;
      SurfaceUpdates = 0;
      v118 = v2[9].Ptr;
      v119 = 0;
      if ( *((_DWORD *)v118 + 20) )
      {
        while ( 1 )
        {
          v120 = *(_QWORD *)(v118[7] + 8LL * v119);
          v121 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v120 + 40LL))(v120);
          SurfaceUpdates = v121;
          if ( v121 < 0 )
            break;
          if ( ++v119 >= *((_DWORD *)v118 + 20) )
            goto LABEL_203;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v121, 0xA8u);
      }
      else
      {
LABEL_203:
        v122 = 0;
        if ( *((_DWORD *)v118 + 12) )
        {
          do
          {
            v123 = *(_QWORD *)(v118[3] + 8LL * v122);
            v124 = *(_QWORD *)(v123 + 64);
            v125 = (CHwndRenderTarget *)(v123 + 64);
            v126 = *(__int64 (__fastcall **)(CHwndRenderTarget *))(v124 + 40);
            if ( v126 == CHwndRenderTarget::PreRender )
              v127 = CHwndRenderTarget::PreRender(v125);
            else
              v127 = v126(v125);
            v128 = v127;
            if ( v127 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v127, 0xB0u);
            if ( !SurfaceUpdates || SurfaceUpdates >= 0 && v128 < 0 )
              SurfaceUpdates = v128;
            ++v122;
          }
          while ( v122 < *((_DWORD *)v118 + 12) );
          v4 = 0LL;
        }
        v129 = 0;
        if ( *((_DWORD *)v118 + 34) )
        {
          do
          {
            v162 = *(_QWORD *)(v118[14] + 8LL * v129);
            v163 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v162 + 64) + 40LL))(v162 + 64);
            v164 = v163;
            if ( v163 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v163, 0xB6u);
            if ( !SurfaceUpdates || SurfaceUpdates >= 0 && v164 < 0 )
              SurfaceUpdates = v164;
            ++v129;
          }
          while ( v129 < *((_DWORD *)v118 + 34) );
          v4 = 0LL;
        }
      }
      if ( SurfaceUpdates < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180201D00, 2u, SurfaceUpdates, 0x1ABu);
      v112 = v177;
    }
  }
  if ( !v110 && !*v112 )
    (*(void (__fastcall **)(PVOID, __int64, __int64))(*(_QWORD *)v2[66].Ptr + 104LL))(v2[66].Ptr, 2000LL, 4LL);
LABEL_217:
  v130 = (char *)v2[13].Ptr;
  if ( v130 )
  {
    v131 = v130 + 200;
    while ( 1 )
    {
      EnterCriticalSection((LPCRITICAL_SECTION)(v131 + 24));
      v132 = *(char **)v131;
      if ( *(char **)(*(_QWORD *)v131 + 8LL) != v131
        || (v133 = *(_QWORD *)v132, *(char **)(*(_QWORD *)v132 + 8LL) != v132) )
      {
        __fastfail(3u);
      }
      *(_QWORD *)v131 = v133;
      *(_QWORD *)(v133 + 8) = v131;
      if ( v132 != v131 )
      {
        v4 = *((_QWORD *)v132 + 2);
        WPF::ProcessHeapImpl::Free(v132);
        --*((_DWORD *)v131 + 4);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(v131 + 24));
      if ( !v4 )
        break;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      v4 = 0LL;
    }
  }
  LODWORD(v2[70].Ptr) = 0;
  ReleaseSRWLockExclusive(v2 + 69);
  if ( BYTE2(v2[162].Ptr) )
  {
    v138 = *((_QWORD *)v2[12].Ptr + 29);
    if ( v138 )
    {
      v139 = *(void **)(v138 + 120);
      if ( v139 != (void *)-1LL )
        SetEvent(v139);
    }
    BYTE2(v2[162].Ptr) = 0;
  }
  if ( dword_180272550 )
    SetEvent(qword_1802727E0);
  return (unsigned int)SurfaceUpdates;
}
