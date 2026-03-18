/*
 * XREFs of ?CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@IPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C019BC54
 * Callers:
 *     ?CheckMultiPlaneOverlaySupport2@DXGDEVICE@@QEAAJIPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C019BAB8 (-CheckMultiPlaneOverlaySupport2@DXGDEVICE@@QEAAJIPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2@@_N.c)
 *     ?CheckMultiPlaneOverlaySupport@DXGDEVICE@@QEAAJIPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE@@_NPEAH@Z @ 0x1C019C850 (-CheckMultiPlaneOverlaySupport@DXGDEVICE@@QEAAJIPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE@@_NPEA.c)
 *     DxgkCheckMultiPlaneOverlaySupport3 @ 0x1C019FB90 (DxgkCheckMultiPlaneOverlaySupport3.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002CE0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C00075FC (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C00833BC (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ @ 0x1C00839FC (-IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C008A3AC (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C008A3F0 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?ClearAllQueryStateUnsafe@DISPLAY_SOURCE@@QEAAXXZ @ 0x1C00AF11C (-ClearAllQueryStateUnsafe@DISPLAY_SOURCE@@QEAAXXZ.c)
 *     ??1?$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ @ 0x1C00E75F0 (--1-$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ.c)
 *     ?ClearQueryStateForPlaneUnsafe@DISPLAY_SOURCE@@QEAAXI@Z @ 0x1C0173628 (-ClearQueryStateForPlaneUnsafe@DISPLAY_SOURCE@@QEAAXI@Z.c)
 *     ?InitializeQueryStateUnsafe@DISPLAY_SOURCE@@QEAAXXZ @ 0x1C01756E4 (-InitializeQueryStateUnsafe@DISPLAY_SOURCE@@QEAAXXZ.c)
 *     ?SetQueryPlaneStateUnsafe@DISPLAY_SOURCE@@QEAAXIPEBVDXGALLOCATION@@IPEBUtagRECT@@11W4_D3DDDI_ROTATION@@W4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@W4D3DDDI_COLOR_SPACE_TYPE@@I@Z @ 0x1C0176958 (-SetQueryPlaneStateUnsafe@DISPLAY_SOURCE@@QEAAXIPEBVDXGALLOCATION@@IPEBUtagRECT@@11W4_D3DDDI_ROT.c)
 *     ?SetQueryPostCompositionStateUnsafe@DISPLAY_SOURCE@@QEAAXPEBUtagRECT@@0@Z @ 0x1C0176A54 (-SetQueryPostCompositionStateUnsafe@DISPLAY_SOURCE@@QEAAXPEBUtagRECT@@0@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@I@Z @ 0x1C019AB14 (-AllocateElements@-$PagedPoolZeroedArray@PEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAP.c)
 *     ?CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C019B62C (-CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CH.c)
 *     ?LogCheckMutiplaneOverlaySupport@@YAXJHIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXIPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@PEAVADAPTER_RENDER@@@Z @ 0x1C019D830 (-LogCheckMutiplaneOverlaySupport@@YAXJHIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXI.c)
 *     ?UseCachedIndependentFlipParameters@DXGDEVICE@@QEAAEPEAVDISPLAY_SOURCE@@PEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@@Z @ 0x1C019E74C (-UseCachedIndependentFlipParameters@DXGDEVICE@@QEAAEPEAVDISPLAY_SOURCE@@PEAU_D3DKMT_CHECK_MULTIP.c)
 */

__int64 __fastcall DXGDEVICE::CheckMultiPlaneOverlaySupport3(
        DXGDEVICE *this,
        unsigned int a2,
        struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **a3,
        unsigned int a4,
        struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **a5,
        bool a6,
        int *a7,
        struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *a8)
{
  __int64 v10; // rsi
  __int64 v11; // r12
  ADAPTER_RENDER *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  unsigned int v21; // edi
  _QWORD *v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  _QWORD *v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rcx
  char v31; // r13
  __int64 v32; // rax
  unsigned int v33; // ebx
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  __int64 v35; // rcx
  int v36; // ecx
  __int64 v37; // rax
  __int128 v38; // xmm1
  __int64 v39; // rax
  __int64 v40; // r15
  __int64 v41; // rcx
  char v42; // al
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v43; // r14
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *v44; // rbx
  unsigned int Rotation; // eax
  __int64 v46; // rax
  D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId; // eax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // r12
  __int64 v52; // r15
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *v53; // r14
  __int64 v54; // r12
  D3DKMT_HANDLE hResource; // ebx
  __int64 v56; // rax
  __int64 v57; // r8
  int v58; // ecx
  struct _EX_RUNDOWN_REF *v59; // rdx
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  _QWORD *Count; // rbx
  __int64 v64; // r12
  void **v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rcx
  ADAPTER_RENDER *v68; // rbx
  __int64 v69; // rcx
  D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *pPlaneAttributes; // rdx
  __int64 v71; // r8
  int v72; // eax
  __int64 right; // rcx
  __int64 v74; // r8
  D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *v75; // rdx
  _QWORD *v76; // rax
  unsigned int v77; // ebx
  D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *v78; // rcx
  unsigned int v79; // eax
  char v80; // cl
  __int64 v81; // rax
  __int64 StretchQuality; // rcx
  __int64 v83; // rax
  __int64 v84; // rcx
  int ColorSpace; // eax
  UINT SDRWhiteLevel; // edx
  _QWORD *v87; // rax
  __int64 v88; // rcx
  __int64 v89; // rax
  _QWORD *v90; // rax
  _QWORD *v91; // rax
  _QWORD *v92; // rax
  void **v93; // rdx
  __int64 v94; // rax
  _QWORD *v95; // rax
  __int64 v96; // rax
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v97; // r14
  __int64 v98; // r12
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *v99; // rbx
  __int64 v100; // rdx
  __int64 v101; // rcx
  DISPLAY_SOURCE *v102; // rsi
  __int64 v103; // r12
  const struct DXGALLOCATION **v104; // r13
  char *v105; // r14
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *v106; // rsi
  __int64 v107; // rdx
  __int64 v108; // rcx
  DISPLAY_SOURCE *v109; // rbx
  D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *v110; // r9
  int *v111; // rbx
  int v112; // eax
  unsigned int v113; // r9d
  __int128 *v114; // r10
  char v115; // [rsp+60h] [rbp-A0h]
  unsigned int v116; // [rsp+64h] [rbp-9Ch]
  struct _EX_RUNDOWN_REF *v117; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v118; // [rsp+70h] [rbp-90h]
  unsigned int v119; // [rsp+74h] [rbp-8Ch]
  int v120; // [rsp+78h] [rbp-88h]
  void **v121; // [rsp+80h] [rbp-80h]
  int *v122; // [rsp+88h] [rbp-78h]
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v123; // [rsp+90h] [rbp-70h]
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **v124; // [rsp+98h] [rbp-68h]
  __int64 Elements; // [rsp+A0h] [rbp-60h]
  _BYTE v126[16]; // [rsp+A8h] [rbp-58h] BYREF
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *v127; // [rsp+B8h] [rbp-48h]
  struct _DXGKARG_DESCRIBEALLOCATION v128; // [rsp+C0h] [rbp-40h] BYREF
  PVOID v129[4]; // [rsp+F0h] [rbp-10h] BYREF
  int v130; // [rsp+110h] [rbp+10h]
  PVOID v131[4]; // [rsp+118h] [rbp+18h] BYREF
  int v132; // [rsp+138h] [rbp+38h]
  _BYTE v133[512]; // [rsp+140h] [rbp+40h]
  __int128 v134; // [rsp+340h] [rbp+240h] BYREF

  v123 = a5;
  LODWORD(v10) = 0;
  v11 = a2;
  v127 = a8;
  v118 = a4;
  *a7 = 0;
  a8->Value = 0;
  v12 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
  v124 = a3;
  v119 = a2;
  v122 = a7;
  if ( !ADAPTER_RENDER::IsMultiPlaneOverlaySupported(v12) )
  {
    v16 = WdLogNewEntry5_WdWarning(v14, v13, v15);
    *(_QWORD *)(v16 + 24) = 0LL;
    WdLogEvent5_WdWarning(v16);
    return 0LL;
  }
  v131[0] = 0LL;
  v132 = 0;
  Elements = PagedPoolZeroedArray<_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *,3>::AllocateElements(v131, v11);
  if ( !Elements )
  {
    v21 = -1073741801;
    v22 = (_QWORD *)WdLogNewEntry5_WdWarning(v19, v18, v20);
    v22[3] = v11;
    v22[4] = -1073741801LL;
    v22[5] = PsGetCurrentProcess(v24, v23);
    WdLogEvent5_WdWarning(v22);
    goto LABEL_169;
  }
  v129[0] = 0LL;
  v130 = 0;
  v121 = (void **)PagedPoolZeroedArray<_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *,3>::AllocateElements(v129, v11);
  if ( !v121 )
  {
    v21 = -1073741801;
    v28 = (_QWORD *)WdLogNewEntry5_WdWarning(v26, v25, v27);
    v28[3] = v11;
    v28[4] = -1073741801LL;
    v28[5] = PsGetCurrentProcess(v30, v29);
    WdLogEvent5_WdWarning(v28);
    goto LABEL_168;
  }
  v31 = 1;
  v115 = 1;
  if ( *((_DWORD *)this + 420) > 0x10u )
  {
    v32 = WdLogNewEntry5_WdAssertion(v26);
    *(_QWORD *)(v32 + 24) = 9593LL;
    WdLogEvent5_WdAssertion(v32);
  }
  v33 = 0;
  if ( *((_DWORD *)this + 420) )
  {
    while ( v33 < 0x10 )
    {
      DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(*(DXGADAPTER ***)(*((_QWORD *)this + 209) + 2304LL), v33);
      if ( !DisplayModeInfo )
      {
        v39 = WdLogNewEntry5_WdError(v35);
        *(_QWORD *)(v39 + 32) = v33;
        *(_QWORD *)(v39 + 24) = this;
        WdLogEvent5_WdError(v39);
        v31 = 0;
        v115 = 0;
        break;
      }
      v36 = *(_DWORD *)DisplayModeInfo;
      HIDWORD(v134) = *((_DWORD *)DisplayModeInfo + 1);
      v37 = v33++;
      v37 *= 2LL;
      *(_QWORD *)&v134 = 0LL;
      DWORD2(v134) = v36;
      v38 = v134;
      *(_OWORD *)&v133[8 * v37 + 256] = v134;
      *(_OWORD *)&v133[8 * v37] = v38;
      if ( v33 >= *((_DWORD *)this + 420) )
        break;
    }
  }
  v120 = -1;
  LODWORD(v40) = 0;
  if ( a4 )
  {
    v41 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    if ( !*(_QWORD *)(v41 + 896) || (v42 = 1, !*(_BYTE *)(v41 + 2266)) )
      v42 = 0;
    v31 &= v42;
    v43 = v123;
    v115 = v31;
    while ( 1 )
    {
      if ( (int)v10 < 0 )
        goto LABEL_42;
      v44 = *v43;
      if ( (*v43)->PostComposition.SrcRect.left >= (*v43)->PostComposition.SrcRect.right
        || v44->PostComposition.SrcRect.top >= v44->PostComposition.SrcRect.bottom
        || v44->PostComposition.DstRect.left >= v44->PostComposition.DstRect.right
        || v44->PostComposition.DstRect.top >= v44->PostComposition.DstRect.bottom )
      {
        break;
      }
      Rotation = v44->PostComposition.Rotation;
      if ( Rotation > 2 )
      {
        if ( Rotation > 4 )
        {
          v46 = WdLogNewEntry5_WdWarning(0LL, v25, v27);
          LODWORD(v10) = -1073741811;
          *(_QWORD *)(v46 + 24) = v44->PostComposition.Rotation;
          *(_QWORD *)(v46 + 32) = -1073741811LL;
          WdLogEvent5_WdWarning(v46);
        }
        else
        {
          v31 = 0;
          v115 = 0;
        }
      }
      if ( v44->PostComposition.Flags.Value )
        goto LABEL_38;
      VidPnSourceId = v44->VidPnSourceId;
      if ( v44->VidPnSourceId >= *((_DWORD *)this + 420) )
      {
        v49 = WdLogNewEntry5_WdWarning(0LL, v25, v27);
        LODWORD(v40) = 0;
        *(_QWORD *)(v49 + 24) = v44->VidPnSourceId;
        *(_QWORD *)(v49 + 32) = 0LL;
        WdLogEvent5_WdWarning(v49);
        goto LABEL_39;
      }
      if ( *(_DWORD *)&v133[16 * VidPnSourceId + 256] > v44->PostComposition.DstRect.left
        || *(_DWORD *)&v133[16 * VidPnSourceId + 264] < v44->PostComposition.DstRect.right
        || *(_DWORD *)&v133[16 * VidPnSourceId + 260] > v44->PostComposition.DstRect.top
        || *(_DWORD *)&v133[16 * VidPnSourceId + 268] < v44->PostComposition.DstRect.bottom )
      {
        v48 = WdLogNewEntry5_WdWarning(2LL * VidPnSourceId, v25, v27);
        *(_QWORD *)(v48 + 24) = this;
        *(_QWORD *)(v48 + 32) = -1073741811LL;
        WdLogEvent5_WdWarning(v48);
LABEL_38:
        LODWORD(v40) = 0;
LABEL_39:
        v31 = 0;
        v115 = 0;
        goto LABEL_43;
      }
      LODWORD(v40) = v40 + 1;
      ++v43;
      *(RECT *)&v133[16 * VidPnSourceId] = v44->PostComposition.SrcRect;
      if ( (unsigned int)v40 >= v118 )
        goto LABEL_42;
    }
    v50 = WdLogNewEntry5_WdWarning(0LL, v25, v27);
    *(_QWORD *)(v50 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v50);
    LODWORD(v10) = -1073741811;
LABEL_42:
    LODWORD(v40) = 0;
  }
LABEL_43:
  v116 = 0;
  if ( !(_DWORD)v11 )
    goto LABEL_137;
  v51 = 0LL;
  *(_QWORD *)&v134 = 0LL;
  do
  {
    if ( (int)v10 < 0 )
      break;
    v52 = *((_QWORD *)this + 5);
    v53 = v124[v51];
    v54 = v52 + 200;
    hResource = v53->hResource;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v52 + 200));
    v56 = (hResource >> 6) & 0xFFFFFF;
    if ( (unsigned int)v56 >= *(_DWORD *)(v52 + 240)
      || (v57 = *(_QWORD *)(v52 + 224),
          v58 = *(_DWORD *)(v57 + 16 * v56 + 8),
          ((hResource >> 25) & 0x60) != (*(_BYTE *)(v57 + 16 * v56 + 8) & 0x60))
      || (v58 & 0x2000) != 0
      || (v58 & 0x1F) == 0 )
    {
      LODWORD(v40) = 0;
LABEL_53:
      v59 = 0LL;
      goto LABEL_54;
    }
    LODWORD(v40) = 0;
    if ( (*(_BYTE *)(v57 + 16LL * (unsigned int)v56 + 8) & 0x1F) != 4 )
      goto LABEL_53;
    v59 = *(struct _EX_RUNDOWN_REF **)(v57 + 16LL * (unsigned int)v56);
LABEL_54:
    DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v117, v59);
    ExReleasePushLockSharedEx(v54, 0LL);
    KeLeaveCriticalRegion();
    if ( !v117 )
      goto LABEL_135;
    Count = (_QWORD *)v117[3].Count;
    while ( 1 )
    {
      if ( !Count )
        goto LABEL_135;
      if ( (DXGDEVICE *)Count[1] != this )
      {
        v95 = (_QWORD *)WdLogNewEntry5_WdWarning(v61, v60, v62);
        v95[3] = v53->hResource;
        v95[4] = Count[1];
        v95[5] = this;
        v95[6] = -1073741811LL;
        WdLogEvent5_WdWarning(v95);
LABEL_135:
        v96 = WdLogNewEntry5_WdWarning(v61, v60, v62);
        *(_QWORD *)(v96 + 24) = v53->hResource;
        *(_QWORD *)(v96 + 32) = -1073741811LL;
        WdLogEvent5_WdWarning(v96);
        LODWORD(v10) = -1073741811;
LABEL_136:
        DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v117);
        goto LABEL_137;
      }
      v40 = Count[6];
      if ( (*(_DWORD *)(v40 + 4) & 0x200B) != 0 )
        break;
      Count = (_QWORD *)Count[8];
      LODWORD(v40) = 0;
    }
    v64 = v134;
    v62 = 0LL;
    *(_QWORD *)(Elements + 8 * v134) = Count;
    if ( !v40 )
      goto LABEL_135;
    v65 = v121;
    v121[v64] = *(void **)(v40 + 16);
    v66 = v53->VidPnSourceId;
    if ( (unsigned int)v66 >= *((_DWORD *)this + 420) )
    {
      v87 = (_QWORD *)WdLogNewEntry5_WdWarning(v66, v65, 0LL);
      LODWORD(v40) = 0;
      v87[3] = v53->VidPnSourceId;
      v87[4] = 0LL;
      goto LABEL_125;
    }
    if ( (_DWORD)v66 != ((*(_DWORD *)(v40 + 4) >> 6) & 0xF) )
    {
      v67 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      if ( !*(_QWORD *)(v67 + 896) || !*(_BYTE *)(v67 + 2266) )
      {
        v87 = (_QWORD *)WdLogNewEntry5_WdWarning(v67, v65, 0LL);
        v87[3] = v53->VidPnSourceId;
        v88 = (*(_DWORD *)(v40 + 4) >> 6) & 0xF;
LABEL_124:
        LODWORD(v40) = 0;
        v87[4] = v88;
        v87[5] = 0LL;
LABEL_125:
        WdLogEvent5_WdWarning(v87);
        v31 = 0;
        v115 = 0;
        goto LABEL_136;
      }
    }
    v68 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
    v69 = *(unsigned int *)(*((_QWORD *)v68 + 2) + 2176LL);
    if ( v53->LayerIndex >= (unsigned int)v69 )
    {
      v87 = (_QWORD *)WdLogNewEntry5_WdWarning(v69, v65, 0LL);
      v87[3] = v53->LayerIndex;
      v88 = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 2176LL);
      goto LABEL_124;
    }
    if ( a6 && !*((_DWORD *)this + 421) )
    {
      v89 = WdLogNewEntry5_WdWarning(v69, v65, 0LL);
      LODWORD(v10) = -1073741790;
      *(_QWORD *)(v89 + 24) = -1073741790LL;
      WdLogEvent5_WdWarning(v89);
LABEL_127:
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v117);
      LODWORD(v40) = 0;
      break;
    }
    pPlaneAttributes = v53->pPlaneAttributes;
    if ( pPlaneAttributes->SrcRect.left >= pPlaneAttributes->SrcRect.right
      || pPlaneAttributes->SrcRect.top >= pPlaneAttributes->SrcRect.bottom
      || pPlaneAttributes->DstRect.left >= pPlaneAttributes->DstRect.right
      || pPlaneAttributes->DstRect.top >= pPlaneAttributes->DstRect.bottom
      || pPlaneAttributes->ClipRect.left >= pPlaneAttributes->ClipRect.right
      || pPlaneAttributes->ClipRect.top >= pPlaneAttributes->ClipRect.bottom )
    {
      v94 = WdLogNewEntry5_WdWarning(v69, pPlaneAttributes, 0LL);
      *(_QWORD *)(v94 + 24) = -1073741811LL;
      WdLogEvent5_WdWarning(v94);
      LODWORD(v10) = -1073741811;
      goto LABEL_127;
    }
    memset(&v128.Width, 0, 0x28uLL);
    v128.hAllocation = v121[v64];
    v72 = ADAPTER_RENDER::DdiDescribeAllocation(v68, &v128, v71);
    v10 = v72;
    if ( v72 < 0 )
    {
      v92 = (_QWORD *)WdLogNewEntry5_WdError(right);
      v93 = v121;
      v92[3] = v10;
      v92[4] = this;
      v92[5] = v93[v116];
      v92[6] = v40;
      WdLogEvent5_WdError(v92);
      goto LABEL_127;
    }
    v75 = v53->pPlaneAttributes;
    LODWORD(v40) = 0;
    if ( v75->SrcRect.left < 0
      || (right = (unsigned int)v75->SrcRect.right, (int)v128.Width < (int)right)
      || v75->SrcRect.top < 0
      || (int)v128.Height < v75->SrcRect.bottom )
    {
      v91 = (_QWORD *)WdLogNewEntry5_WdError(right);
      v91[5] = v116;
      v91[3] = -1073741811LL;
      v91[4] = this;
      WdLogEvent5_WdError(v91);
      LODWORD(v10) = -1073741811;
      goto LABEL_136;
    }
    if ( *(_DWORD *)&v133[16 * v53->VidPnSourceId] <= v75->ClipRect.left
      && *(_DWORD *)&v133[16 * v53->VidPnSourceId + 8] >= v75->ClipRect.right
      && *(_DWORD *)&v133[16 * v53->VidPnSourceId + 4] <= v75->ClipRect.top
      && *(_DWORD *)&v133[16 * v53->VidPnSourceId + 12] >= v75->ClipRect.bottom )
    {
      v77 = v116;
    }
    else
    {
      v76 = (_QWORD *)WdLogNewEntry5_WdWarning(2LL * v53->VidPnSourceId, v75, v74);
      v77 = v116;
      v76[3] = 0LL;
      v76[4] = this;
      v76[5] = v116;
      WdLogEvent5_WdWarning(v76);
      v31 = 0;
      v115 = 0;
    }
    v78 = v53->pPlaneAttributes;
    if ( v78->DstRect.left > v78->ClipRect.left
      || v78->DstRect.right < v78->ClipRect.right
      || v78->DstRect.top > v78->ClipRect.top
      || v78->DstRect.bottom < v78->ClipRect.bottom )
    {
      v90 = (_QWORD *)WdLogNewEntry5_WdError(v78);
      LODWORD(v10) = -1073741811;
      v90[5] = v77;
      v90[3] = -1073741811LL;
      v90[4] = this;
      WdLogEvent5_WdError(v90);
      goto LABEL_136;
    }
    v79 = v78->Rotation;
    if ( v79 > 1 )
    {
      if ( v79 > 4 )
      {
        v81 = WdLogNewEntry5_WdWarning(v78, v75, v74);
        LODWORD(v10) = -1073741811;
        *(_QWORD *)(v81 + 24) = v53->pPlaneAttributes->Rotation;
        *(_QWORD *)(v81 + 32) = -1073741811LL;
        WdLogEvent5_WdWarning(v81);
      }
      else
      {
        v80 = 0;
        if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 3884LL) & 0x20) == 0 )
          v80 = v31;
        v31 = v80;
        v115 = v80;
      }
    }
    StretchQuality = (unsigned int)v53->pPlaneAttributes->StretchQuality;
    if ( (int)StretchQuality <= 0 || (int)StretchQuality > 2 )
    {
      v83 = WdLogNewEntry5_WdWarning(StretchQuality, v75, v74);
      LODWORD(v10) = -1073741811;
      *(_QWORD *)(v83 + 24) = -1073741811LL;
      WdLogEvent5_WdWarning(v83);
    }
    v84 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    if ( !*(_QWORD *)(v84 + 864) && (!*(_QWORD *)(v84 + 896) || !*(_BYTE *)(v84 + 2266)) )
    {
      ColorSpace = v53->pPlaneAttributes->ColorSpace;
      if ( ColorSpace == -1
        || ColorSpace > 0 && (ColorSpace <= 3 || ColorSpace == 5 || (unsigned int)(ColorSpace - 10) <= 9) )
      {
        v31 = 0;
        v115 = 0;
      }
    }
    SDRWhiteLevel = v53->pPlaneAttributes->SDRWhiteLevel;
    if ( SDRWhiteLevel && SDRWhiteLevel != 80 && (*(_DWORD *)(v84 + 300) & 0x200) == 0 )
    {
      if ( *(int *)(v84 + 1968) < 8960 )
        v31 = 0;
      v115 = v31;
    }
    if ( !*(_QWORD *)(v84 + 896) || !*(_BYTE *)(v84 + 2266) )
    {
      if ( v120 == -1 )
      {
        LODWORD(v40) = 0;
        v120 = v53->VidPnSourceId;
      }
      else
      {
        LODWORD(v40) = 0;
        if ( v120 != v53->VidPnSourceId )
          v31 = 0;
        v115 = v31;
      }
    }
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v117);
    v51 = v64 + 1;
    v116 = v77 + 1;
    *(_QWORD *)&v134 = v51;
  }
  while ( v77 + 1 < v119 );
LABEL_137:
  DXGAUTOMUTEX::DXGAUTOMUTEX(
    (DXGAUTOMUTEX *)v126,
    (struct DXGFASTMUTEX *const)(*(_QWORD *)(*((_QWORD *)this + 209) + 2304LL) + 400LL));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v126);
  if ( (int)v10 < 0 )
  {
    v111 = v122;
    goto LABEL_165;
  }
  if ( v31 )
  {
    v134 = 0uLL;
    if ( v118 )
    {
      v97 = v123;
      v98 = v118;
      do
      {
        v99 = *v97;
        v100 = (*v97)->VidPnSourceId;
        v101 = *(_QWORD *)(*((_QWORD *)this + 209) + 2304LL);
        v102 = (DISPLAY_SOURCE *)(*(_QWORD *)(v101 + 112) + 3760 * v100);
        if ( !*((_BYTE *)&v134 + v100) )
        {
          DISPLAY_SOURCE::InitializeQueryStateUnsafe((DISPLAY_SOURCE *)(*(_QWORD *)(v101 + 112) + 3760 * v100));
          LODWORD(v40) = v99->VidPnSourceId;
          *((_BYTE *)&v134 + v99->VidPnSourceId) = 1;
        }
        DISPLAY_SOURCE::SetQueryPostCompositionStateUnsafe(
          v102,
          &v99->PostComposition.SrcRect,
          &v99->PostComposition.DstRect);
        ++v97;
        --v98;
      }
      while ( v98 );
      v31 = v115;
    }
    if ( v119 )
    {
      v103 = v119;
      v104 = (const struct DXGALLOCATION **)Elements;
      v105 = (char *)v124 - Elements;
      do
      {
        v106 = *(struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **)((char *)v104 + (_QWORD)v105);
        v107 = v106->VidPnSourceId;
        v108 = *(_QWORD *)(*((_QWORD *)this + 209) + 2304LL);
        v109 = (DISPLAY_SOURCE *)(*(_QWORD *)(v108 + 112) + 3760 * v107);
        if ( !*((_BYTE *)&v134 + v107) )
        {
          DISPLAY_SOURCE::InitializeQueryStateUnsafe((DISPLAY_SOURCE *)(*(_QWORD *)(v108 + 112) + 3760 * v107));
          LODWORD(v40) = v106->VidPnSourceId;
          *((_BYTE *)&v134 + (unsigned int)v40) = 1;
        }
        if ( DXGDEVICE::UseCachedIndependentFlipParameters(this, v109, v106) )
        {
          DISPLAY_SOURCE::ClearQueryStateForPlaneUnsafe(v109, v106->LayerIndex);
        }
        else
        {
          v110 = v106->pPlaneAttributes;
          DISPLAY_SOURCE::SetQueryPlaneStateUnsafe(
            v109,
            v106->LayerIndex,
            *v104,
            v110->Flags,
            &v110->SrcRect,
            &v110->DstRect,
            &v110->ClipRect,
            v110->Rotation,
            v110->Blend,
            v110->ColorSpace,
            v110->SDRWhiteLevel);
        }
        ++v104;
        --v103;
      }
      while ( v103 );
      v31 = v115;
    }
    v111 = v122;
    v112 = CheckMultiPlaneOverlayInternal3(
             v40,
             *((struct ADAPTER_RENDER **)this + 2),
             *(struct ADAPTER_DISPLAY **)(*((_QWORD *)this + 209) + 2304LL),
             v122,
             v127);
    LOBYTE(v40) = 0;
    LODWORD(v10) = v112;
    if ( !*v111 )
    {
      v113 = 0;
      v114 = &v134;
      do
      {
        if ( *(_BYTE *)v114 )
          DISPLAY_SOURCE::ClearAllQueryStateUnsafe((DISPLAY_SOURCE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 209)
                                                                                            + 2304LL)
                                                                                + 112LL)
                                                                    + 3760LL * v113));
        ++v113;
        v114 = (__int128 *)((char *)v114 + 1);
      }
      while ( v113 < 0x10 );
    }
  }
  else
  {
    v111 = v122;
  }
  if ( (int)v10 < 0 || !v31 )
LABEL_165:
    LogCheckMutiplaneOverlaySupport(v10, *v111, v119, v124, v121, v118, v123, *((struct ADAPTER_RENDER **)this + 2));
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v126);
  v21 = v10;
  if ( v126[8] != (_BYTE)v40 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v126);
LABEL_168:
  PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v129);
LABEL_169:
  PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v131);
  return v21;
}
