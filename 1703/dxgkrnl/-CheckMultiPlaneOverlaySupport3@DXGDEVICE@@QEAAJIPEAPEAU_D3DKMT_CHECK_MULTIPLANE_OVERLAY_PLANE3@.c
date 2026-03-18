/*
 * XREFs of ?CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@IPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C0186368
 * Callers:
 *     ?CheckMultiPlaneOverlaySupport2@DXGDEVICE@@QEAAJIPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C01861CC (-CheckMultiPlaneOverlaySupport2@DXGDEVICE@@QEAAJIPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2@@_N.c)
 *     ?CheckMultiPlaneOverlaySupport@DXGDEVICE@@QEAAJIPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE@@_NPEAH@Z @ 0x1C0186EB8 (-CheckMultiPlaneOverlaySupport@DXGDEVICE@@QEAAJIPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE@@_NPEA.c)
 *     DxgkCheckMultiPlaneOverlaySupport3 @ 0x1C018ACA0 (DxgkCheckMultiPlaneOverlaySupport3.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006E30 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C000B4C0 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?SupportCheckMultiPlaneOverlaySupport3@DXGADAPTER@@QEBAEXZ @ 0x1C0034C14 (-SupportCheckMultiPlaneOverlaySupport3@DXGADAPTER@@QEBAEXZ.c)
 *     ??1?$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ @ 0x1C0097FE0 (--1-$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C00CAD84 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C00CADD0 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C00CFC9C (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ @ 0x1C00D00CC (-IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ.c)
 *     ?ClearAllQueryStateUnsafe@DISPLAY_SOURCE@@QEAAXXZ @ 0x1C00E9330 (-ClearAllQueryStateUnsafe@DISPLAY_SOURCE@@QEAAXXZ.c)
 *     ?ClearQueryStateForPlaneUnsafe@DISPLAY_SOURCE@@QEAAXI@Z @ 0x1C016FF80 (-ClearQueryStateForPlaneUnsafe@DISPLAY_SOURCE@@QEAAXI@Z.c)
 *     ?InitializeQueryStateUnsafe@DISPLAY_SOURCE@@QEAAXXZ @ 0x1C0171BF0 (-InitializeQueryStateUnsafe@DISPLAY_SOURCE@@QEAAXXZ.c)
 *     ?SetQueryPlaneStateUnsafe@DISPLAY_SOURCE@@QEAAXIPEBVDXGALLOCATION@@IPEBUtagRECT@@11W4_D3DDDI_ROTATION@@W4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@W4D3DDDI_COLOR_SPACE_TYPE@@@Z @ 0x1C0172F80 (-SetQueryPlaneStateUnsafe@DISPLAY_SOURCE@@QEAAXIPEBVDXGALLOCATION@@IPEBUtagRECT@@11W4_D3DDDI_ROT.c)
 *     ?SetQueryPostCompositionStateUnsafe@DISPLAY_SOURCE@@QEAAXPEBUtagRECT@@0@Z @ 0x1C017307C (-SetQueryPostCompositionStateUnsafe@DISPLAY_SOURCE@@QEAAXPEBUtagRECT@@0@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@I@Z @ 0x1C018521C (-AllocateElements@-$PagedPoolZeroedArray@PEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAP.c)
 *     ?CheckMultiPlaneOverlayInternal3@DXGDEVICE@@QEAAJIPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C0185D44 (-CheckMultiPlaneOverlayInternal3@DXGDEVICE@@QEAAJIPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPOR.c)
 *     ?LogCheckMutiplaneOverlaySupport@DXGDEVICE@@QEAAXJHIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXIPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@@Z @ 0x1C0188148 (-LogCheckMutiplaneOverlaySupport@DXGDEVICE@@QEAAXJHIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLAN.c)
 *     ?UseCachedIndependentFlipParameters@DXGDEVICE@@QEAAEPEAVDISPLAY_SOURCE@@PEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@@Z @ 0x1C0189710 (-UseCachedIndependentFlipParameters@DXGDEVICE@@QEAAEPEAVDISPLAY_SOURCE@@PEAU_D3DKMT_CHECK_MULTIP.c)
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
  unsigned int v9; // ebx
  __int64 v10; // rsi
  __int64 v11; // r12
  ADAPTER_RENDER *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r14
  unsigned int v24; // edi
  _QWORD *v25; // rbx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  void **v31; // r15
  _QWORD *v32; // rbx
  __int64 v33; // rcx
  char v34; // r13
  __int64 v35; // rax
  __int64 v36; // r8
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  int v40; // ecx
  __int64 v41; // rax
  __int128 v42; // xmm1
  __int64 v43; // rax
  bool v44; // al
  __int64 v45; // rdx
  unsigned int v46; // r15d
  __int64 v47; // rcx
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v48; // r14
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *v49; // rbx
  unsigned int Rotation; // eax
  __int64 v51; // rax
  D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId; // eax
  __int64 v53; // rax
  __int64 v54; // rax
  char *v55; // rcx
  __int64 v56; // rax
  void **v57; // r12
  __int64 v58; // r14
  unsigned int *v59; // r15
  __int64 v60; // r12
  unsigned int v61; // ebx
  unsigned int v62; // ecx
  __int64 v63; // r8
  int v64; // edx
  struct _EX_RUNDOWN_REF *v65; // rdx
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  ULONG_PTR i; // rbx
  HANDLE *v71; // r12
  __int64 v72; // rcx
  __int64 v73; // rcx
  ADAPTER_RENDER *v74; // rbx
  __int64 v75; // rcx
  _DWORD *v76; // rdx
  __int64 v77; // r8
  int v78; // eax
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // r9
  _DWORD *v83; // rdx
  unsigned int v84; // eax
  char v85; // cl
  __int64 v86; // rax
  __int64 v87; // rcx
  __int64 v88; // rax
  DXGADAPTER *v89; // rcx
  int v90; // eax
  _QWORD *v91; // rax
  __int64 v92; // rcx
  __int64 v93; // rax
  __int64 v94; // rdx
  __int64 v95; // r8
  __int64 v96; // r9
  unsigned int v97; // r15d
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v98; // r14
  __int64 v99; // r12
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *v100; // rbx
  __int64 v101; // rdx
  __int64 v102; // rcx
  DISPLAY_SOURCE *v103; // rsi
  __int64 v104; // r12
  const struct DXGALLOCATION **v105; // r13
  char *v106; // r14
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *v107; // rsi
  __int64 v108; // rcx
  __int64 v109; // rdx
  DISPLAY_SOURCE *v110; // rbx
  __int64 v111; // r8
  __int64 v112; // r9
  _QWORD *v113; // rax
  _QWORD *v114; // rax
  void **v115; // rdx
  __int64 v116; // rax
  _QWORD *v117; // rax
  __int64 v118; // rax
  D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *pPlaneAttributes; // r9
  int *v120; // rbx
  __int128 *v121; // r10
  __int64 v122; // rdx
  __int64 v123; // r8
  __int64 v124; // r9
  char v125; // [rsp+50h] [rbp-B0h]
  unsigned int v126; // [rsp+54h] [rbp-ACh]
  struct _EX_RUNDOWN_REF *v127; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v128; // [rsp+60h] [rbp-A0h]
  void **v129; // [rsp+68h] [rbp-98h]
  unsigned int v130; // [rsp+70h] [rbp-90h]
  __int64 Elements; // [rsp+78h] [rbp-88h]
  int v132; // [rsp+80h] [rbp-80h]
  int *v133; // [rsp+88h] [rbp-78h]
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v134; // [rsp+90h] [rbp-70h]
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **v135; // [rsp+98h] [rbp-68h]
  void **v136; // [rsp+A0h] [rbp-60h]
  __int64 v137; // [rsp+A8h] [rbp-58h]
  _BYTE v138[16]; // [rsp+B0h] [rbp-50h] BYREF
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *v139; // [rsp+C0h] [rbp-40h]
  struct _DXGKARG_DESCRIBEALLOCATION v140; // [rsp+C8h] [rbp-38h] BYREF
  PVOID v141[4]; // [rsp+F8h] [rbp-8h] BYREF
  int v142; // [rsp+118h] [rbp+18h]
  PVOID v143[4]; // [rsp+120h] [rbp+20h] BYREF
  int v144; // [rsp+140h] [rbp+40h]
  _BYTE v145[512]; // [rsp+150h] [rbp+50h]
  __int128 v146; // [rsp+350h] [rbp+250h] BYREF

  v9 = 0;
  v134 = a5;
  LODWORD(v10) = 0;
  v11 = a2;
  v139 = a8;
  v128 = a4;
  *a7 = 0;
  a8->Value = 0;
  v12 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
  v135 = a3;
  v130 = a2;
  v133 = a7;
  if ( !ADAPTER_RENDER::IsMultiPlaneOverlaySupported(v12) )
  {
    v17 = WdLogNewEntry5_WdWarning(v14, v13, v15, v16);
    *(_QWORD *)(v17 + 24) = 0LL;
    WdLogEvent5_WdWarning(v17);
    return 0LL;
  }
  v143[0] = 0LL;
  v144 = 0;
  Elements = PagedPoolZeroedArray<_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *,3>::AllocateElements(v143, v11);
  v23 = Elements;
  if ( Elements )
  {
    v141[0] = 0LL;
    v142 = 0;
    v129 = (void **)PagedPoolZeroedArray<_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *,3>::AllocateElements(v141, v11);
    v31 = v129;
    if ( !v129 )
    {
      v24 = -1073741801;
      v32 = (_QWORD *)WdLogNewEntry5_WdWarning(v28, v27, v29, v30);
      v32[3] = v11;
      v32[4] = -1073741801LL;
      v32[5] = PsGetCurrentProcess(v33);
      WdLogEvent5_WdWarning(v32);
LABEL_156:
      PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v141);
      goto LABEL_157;
    }
    v34 = 1;
    v125 = 1;
    if ( *((_DWORD *)this + 452) > 0x10u )
    {
      v35 = WdLogNewEntry5_WdAssertion(v28, v27, v29, v30);
      *(_QWORD *)(v35 + 24) = 9560LL;
      WdLogEvent5_WdAssertion(v35);
    }
    v36 = 0LL;
    if ( *((_DWORD *)this + 452) )
    {
      while ( v9 < 0x10 )
      {
        DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(*(DXGADAPTER ***)(*((_QWORD *)this + 225) + 2280LL), v9);
        v36 = 0LL;
        if ( !DisplayModeInfo )
        {
          v43 = WdLogNewEntry5_WdError(v39, v38);
          *(_QWORD *)(v43 + 32) = v9;
          *(_QWORD *)(v43 + 24) = this;
          WdLogEvent5_WdError(v43);
          v36 = 0LL;
          v34 = 0;
          v125 = 0;
          break;
        }
        v40 = *(_DWORD *)DisplayModeInfo;
        HIDWORD(v146) = *((_DWORD *)DisplayModeInfo + 1);
        v41 = v9++;
        v41 *= 2LL;
        *(_QWORD *)&v146 = 0LL;
        DWORD2(v146) = v40;
        v42 = v146;
        *(_OWORD *)&v145[8 * v41 + 256] = v146;
        *(_OWORD *)&v145[8 * v41] = v42;
        if ( v9 >= *((_DWORD *)this + 452) )
          break;
      }
    }
    v132 = -1;
    if ( v128 )
    {
      v44 = DXGADAPTER::SupportCheckMultiPlaneOverlaySupport3(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL));
      v46 = v36;
      LOBYTE(v47) = -v44;
      v34 &= v47;
      v125 = v34;
      if ( (_DWORD)v45 )
      {
        v48 = v134;
        v125 = v34;
        while ( 1 )
        {
          if ( (int)v10 < 0 )
            goto LABEL_40;
          v49 = *v48;
          if ( (*v48)->PostComposition.SrcRect.left >= (*v48)->PostComposition.SrcRect.right
            || v49->PostComposition.SrcRect.top >= v49->PostComposition.SrcRect.bottom
            || v49->PostComposition.DstRect.left >= v49->PostComposition.DstRect.right
            || v49->PostComposition.DstRect.top >= v49->PostComposition.DstRect.bottom )
          {
            break;
          }
          Rotation = v49->PostComposition.Rotation;
          if ( Rotation > 2 )
          {
            if ( Rotation > 4 )
            {
              v51 = WdLogNewEntry5_WdWarning(v47, v45, v36, v30);
              LODWORD(v10) = -1073741811;
              *(_QWORD *)(v51 + 24) = v49->PostComposition.Rotation;
              *(_QWORD *)(v51 + 32) = -1073741811LL;
              WdLogEvent5_WdWarning(v51);
              v45 = v128;
              v36 = 0LL;
            }
            else
            {
              v34 = v36;
              v125 = v36;
            }
          }
          if ( v49->PostComposition.Flags.Value != (_DWORD)v36 )
            goto LABEL_37;
          VidPnSourceId = v49->VidPnSourceId;
          if ( v49->VidPnSourceId >= *((_DWORD *)this + 452) )
          {
            v53 = WdLogNewEntry5_WdWarning(v47, v45, v36, v30);
            *(_QWORD *)(v53 + 24) = v49->VidPnSourceId;
            *(_QWORD *)(v53 + 32) = 0LL;
            goto LABEL_36;
          }
          v47 = 2LL * VidPnSourceId;
          if ( *(_DWORD *)&v145[16 * VidPnSourceId + 256] > v49->PostComposition.DstRect.left
            || *(_DWORD *)&v145[16 * VidPnSourceId + 264] < v49->PostComposition.DstRect.right
            || *(_DWORD *)&v145[16 * VidPnSourceId + 260] > v49->PostComposition.DstRect.top
            || *(_DWORD *)&v145[16 * VidPnSourceId + 268] < v49->PostComposition.DstRect.bottom )
          {
            v53 = WdLogNewEntry5_WdWarning(v47, v45, v36, v30);
            *(_QWORD *)(v53 + 24) = this;
            *(_QWORD *)(v53 + 32) = -1073741811LL;
LABEL_36:
            WdLogEvent5_WdWarning(v53);
            v36 = 0LL;
LABEL_37:
            v34 = v36;
            v125 = v36;
            goto LABEL_40;
          }
          ++v46;
          ++v48;
          *(RECT *)&v145[16 * VidPnSourceId] = v49->PostComposition.SrcRect;
          if ( v46 >= (unsigned int)v45 )
            goto LABEL_40;
        }
        v54 = WdLogNewEntry5_WdWarning(v47, v45, v36, v30);
        *(_QWORD *)(v54 + 24) = -1073741811LL;
        WdLogEvent5_WdWarning(v54);
        v36 = 0LL;
        LODWORD(v10) = -1073741811;
LABEL_40:
        v23 = Elements;
      }
      v31 = v129;
    }
    v126 = v36;
    if ( !(_DWORD)v11 )
    {
LABEL_115:
      LODWORD(v23) = 0;
      goto LABEL_116;
    }
    v55 = (char *)v135 - v23;
    v136 = v31;
    v56 = v23 - (_QWORD)v31;
    *(_QWORD *)&v146 = (char *)v135 - v23;
    v137 = v23 - (_QWORD)v31;
    LODWORD(v23) = 0;
    v57 = v31;
LABEL_44:
    if ( (int)v10 >= 0 )
    {
      v58 = *((_QWORD *)this + 5);
      v59 = *(unsigned int **)&v55[(_QWORD)v57 + v56];
      v60 = v58 + 168;
      v61 = v59[1];
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v58 + 168));
      v62 = (v61 >> 6) & 0xFFFFFF;
      if ( v62 < *(_DWORD *)(v58 + 208)
        && (v63 = *(_QWORD *)(v58 + 192),
            v64 = *(_DWORD *)(v63 + 16LL * v62 + 8),
            ((v61 >> 26) & 0x30) == (*(_BYTE *)(v63 + 16LL * v62 + 8) & 0x30))
        && (v64 & 0x1000) == 0
        && (v64 & 0xF) != 0 )
      {
        LODWORD(v23) = 0;
        if ( (*(_BYTE *)(v63 + 16LL * v62 + 8) & 0xF) == 4 )
        {
          v65 = *(struct _EX_RUNDOWN_REF **)(v63 + 16LL * v62);
          goto LABEL_53;
        }
      }
      else
      {
        LODWORD(v23) = 0;
      }
      v65 = 0LL;
LABEL_53:
      DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v127, v65);
      ExReleasePushLockSharedEx(v60, 0LL);
      KeLeaveCriticalRegion();
      if ( v127 )
      {
        for ( i = v127[3].Count; ; i = *(_QWORD *)(i + 64) )
        {
          if ( !i )
            goto LABEL_138;
          if ( *(DXGDEVICE **)(i + 8) != this )
            break;
          if ( (*(_DWORD *)(*(_QWORD *)(i + 48) + 4LL) & 0x200B) != 0 )
          {
            v71 = v136;
            v23 = *(_QWORD *)(i + 48);
            v66 = 0LL;
            *(void **)((char *)v136 + v137) = (void *)i;
            if ( !v23 )
              goto LABEL_138;
            *v71 = *(HANDLE *)(v23 + 16);
            v72 = v59[4];
            if ( (unsigned int)v72 >= *((_DWORD *)this + 452) )
            {
              v91 = (_QWORD *)WdLogNewEntry5_WdWarning(v72, 0LL, v68, v69);
              LODWORD(v23) = 0;
              v91[3] = v59[4];
              v91[4] = 0LL;
            }
            else
            {
              if ( (_DWORD)v72 == ((*(_DWORD *)(v23 + 4) >> 6) & 0xF)
                || DXGADAPTER::SupportCheckMultiPlaneOverlaySupport3(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
              {
                v74 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
                v75 = *(unsigned int *)(*((_QWORD *)v74 + 2) + 2152LL);
                if ( *v59 < (unsigned int)v75 )
                {
                  if ( a6 != (_BYTE)v66 && *((_DWORD *)this + 453) == (_DWORD)v66 )
                  {
                    v93 = WdLogNewEntry5_WdWarning(v75, v66, v68, v69);
                    LODWORD(v10) = -1073741790;
                    *(_QWORD *)(v93 + 24) = -1073741790LL;
                    WdLogEvent5_WdWarning(v93);
                  }
                  else
                  {
                    v76 = (_DWORD *)*((_QWORD *)v59 + 3);
                    if ( v76[1] >= v76[3]
                      || v76[2] >= v76[4]
                      || v76[5] >= v76[7]
                      || v76[6] >= v76[8]
                      || v76[9] >= v76[11]
                      || v76[10] >= v76[12] )
                    {
                      v116 = WdLogNewEntry5_WdWarning(v75, v76, v68, v69);
                      *(_QWORD *)(v116 + 24) = -1073741811LL;
                      WdLogEvent5_WdWarning(v116);
                      LODWORD(v10) = -1073741811;
                    }
                    else
                    {
                      memset(&v140.Width, 0, 0x28uLL);
                      v140.hAllocation = *v71;
                      v78 = ADAPTER_RENDER::DdiDescribeAllocation(v74, &v140, v77);
                      v10 = v78;
                      if ( v78 >= 0 )
                      {
                        v83 = (_DWORD *)*((_QWORD *)v59 + 3);
                        LODWORD(v23) = 0;
                        if ( (int)v83[1] >= 0 )
                        {
                          v80 = (unsigned int)v83[3];
                          if ( (int)v140.Width >= (int)v80 && (int)v83[2] >= 0 && (int)v140.Height >= v83[4] )
                          {
                            v80 = 2LL * v59[4];
                            if ( *(_DWORD *)&v145[16 * v59[4]] <= v83[9]
                              && *(_DWORD *)&v145[16 * v59[4] + 8] >= v83[11]
                              && *(_DWORD *)&v145[16 * v59[4] + 4] <= v83[10]
                              && *(_DWORD *)&v145[16 * v59[4] + 12] >= v83[12]
                              && v83[5] <= v83[9]
                              && v83[7] >= v83[11]
                              && v83[6] <= v83[10]
                              && v83[8] >= v83[12] )
                            {
                              v84 = v83[13];
                              if ( v84 > 1 )
                              {
                                if ( v84 > 4 )
                                {
                                  v86 = WdLogNewEntry5_WdWarning(v80, v83, v81, v82);
                                  *(_QWORD *)(v86 + 24) = *(int *)(*((_QWORD *)v59 + 3) + 52LL);
                                  *(_QWORD *)(v86 + 32) = -1073741811LL;
                                  WdLogEvent5_WdWarning(v86);
                                  LODWORD(v10) = -1073741811;
                                }
                                else
                                {
                                  v85 = 0;
                                  if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 3868LL) & 0x20) == 0 )
                                    v85 = v34;
                                  v34 = v85;
                                  v125 = v85;
                                }
                              }
                              v87 = *(unsigned int *)(*((_QWORD *)v59 + 3) + 76LL);
                              if ( (int)v87 <= 0 || (int)v87 > 2 )
                              {
                                v88 = WdLogNewEntry5_WdWarning(v87, v83, v81, v82);
                                *(_QWORD *)(v88 + 24) = -1073741811LL;
                                WdLogEvent5_WdWarning(v88);
                                LODWORD(v10) = -1073741811;
                              }
                              v89 = *(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL);
                              if ( !*((_QWORD *)v89 + 108) && !DXGADAPTER::SupportCheckMultiPlaneOverlaySupport3(v89) )
                              {
                                v90 = *(_DWORD *)(*((_QWORD *)v59 + 3) + 72LL);
                                if ( v90 == -1 || v90 > 0 && (v90 <= 3 || v90 == 5 || (unsigned int)(v90 - 10) <= 9) )
                                {
                                  v34 = 0;
                                  v125 = 0;
                                }
                              }
                              if ( !DXGADAPTER::SupportCheckMultiPlaneOverlaySupport3(v89) )
                              {
                                if ( v132 == -1 )
                                {
                                  v132 = v59[4];
                                }
                                else
                                {
                                  if ( v132 != v59[4] )
                                    v34 = 0;
                                  v125 = v34;
                                }
                              }
                              DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v127);
                              v57 = v71 + 1;
                              v136 = v57;
                              if ( ++v126 < v130 )
                              {
                                v55 = (char *)v146;
                                v56 = v137;
                                goto LABEL_44;
                              }
                              goto LABEL_116;
                            }
                          }
                        }
                        v113 = (_QWORD *)WdLogNewEntry5_WdError(v80, v83);
                        v113[3] = -1073741811LL;
                        v113[4] = this;
                        v113[5] = v126;
                        WdLogEvent5_WdError(v113);
                        LODWORD(v10) = -1073741811;
LABEL_136:
                        DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v127);
                        goto LABEL_116;
                      }
                      v114 = (_QWORD *)WdLogNewEntry5_WdError(v80, v79);
                      v115 = v129;
                      v114[3] = v10;
                      v114[4] = this;
                      v114[5] = v115[v126];
                      v114[6] = v23;
                      WdLogEvent5_WdError(v114);
                    }
                  }
                  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v127);
                  goto LABEL_115;
                }
                v91 = (_QWORD *)WdLogNewEntry5_WdWarning(v75, v66, v68, v69);
                v91[3] = *v59;
                v92 = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 2152LL);
              }
              else
              {
                v91 = (_QWORD *)WdLogNewEntry5_WdWarning(v73, v66, v68, v69);
                v91[3] = v59[4];
                v92 = (*(_DWORD *)(v23 + 4) >> 6) & 0xF;
              }
              LODWORD(v23) = 0;
              v91[4] = v92;
              v91[5] = 0LL;
            }
            WdLogEvent5_WdWarning(v91);
            v34 = 0;
            v125 = 0;
            goto LABEL_136;
          }
        }
        v117 = (_QWORD *)WdLogNewEntry5_WdWarning(v67, v66, v68, v69);
        v117[3] = v59[1];
        v117[4] = *(_QWORD *)(i + 8);
        v117[5] = this;
        v117[6] = -1073741811LL;
        WdLogEvent5_WdWarning(v117);
      }
LABEL_138:
      v118 = WdLogNewEntry5_WdWarning(v67, v66, v68, v69);
      *(_QWORD *)(v118 + 24) = v59[1];
      *(_QWORD *)(v118 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v118);
      LODWORD(v10) = -1073741811;
      goto LABEL_136;
    }
LABEL_116:
    DXGAUTOMUTEX::DXGAUTOMUTEX(
      (DXGAUTOMUTEX *)v138,
      (struct DXGFASTMUTEX *const)(*(_QWORD *)(*((_QWORD *)this + 225) + 2280LL) + 400LL),
      v36,
      v30);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v138);
    if ( (int)v10 < 0 )
    {
      v120 = v133;
    }
    else
    {
      if ( v34 )
      {
        v97 = v23;
        v146 = 0uLL;
        if ( v128 )
        {
          v98 = v134;
          v99 = v128;
          do
          {
            v100 = *v98;
            v101 = (*v98)->VidPnSourceId;
            v102 = *(_QWORD *)(*((_QWORD *)this + 225) + 2280LL);
            v103 = (DISPLAY_SOURCE *)(*(_QWORD *)(v102 + 112) + 3208 * v101);
            if ( !*((_BYTE *)&v146 + v101) )
            {
              DISPLAY_SOURCE::InitializeQueryStateUnsafe(
                (DISPLAY_SOURCE *)(*(_QWORD *)(v102 + 112) + 3208 * v101),
                v101,
                v95,
                v96);
              v97 = v100->VidPnSourceId;
              *((_BYTE *)&v146 + v100->VidPnSourceId) = 1;
            }
            DISPLAY_SOURCE::SetQueryPostCompositionStateUnsafe(
              v103,
              &v100->PostComposition.SrcRect,
              &v100->PostComposition.DstRect);
            ++v98;
            --v99;
          }
          while ( v99 );
          v34 = v125;
          LODWORD(v23) = 0;
        }
        if ( v130 )
        {
          v104 = v130;
          v105 = (const struct DXGALLOCATION **)Elements;
          v106 = (char *)v135 - Elements;
          do
          {
            v107 = *(struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **)((char *)v105 + (_QWORD)v106);
            v108 = *(_QWORD *)(*((_QWORD *)this + 225) + 2280LL);
            v109 = v107->VidPnSourceId;
            v110 = (DISPLAY_SOURCE *)(*(_QWORD *)(v108 + 112) + 3208 * v109);
            if ( !*((_BYTE *)&v146 + v109) )
            {
              DISPLAY_SOURCE::InitializeQueryStateUnsafe(
                (DISPLAY_SOURCE *)(*(_QWORD *)(v108 + 112) + 3208 * v109),
                v109,
                v95,
                v96);
              v97 = v107->VidPnSourceId;
              *((_BYTE *)&v146 + v97) = 1;
            }
            if ( DXGDEVICE::UseCachedIndependentFlipParameters(this, v110, v107) )
            {
              DISPLAY_SOURCE::ClearQueryStateForPlaneUnsafe(v110, v107->LayerIndex, v111, v112);
            }
            else
            {
              pPlaneAttributes = v107->pPlaneAttributes;
              DISPLAY_SOURCE::SetQueryPlaneStateUnsafe(
                v110,
                v107->LayerIndex,
                *v105,
                pPlaneAttributes->Flags,
                &pPlaneAttributes->SrcRect,
                &pPlaneAttributes->DstRect,
                &pPlaneAttributes->ClipRect,
                pPlaneAttributes->Rotation,
                pPlaneAttributes->Blend,
                pPlaneAttributes->ColorSpace);
            }
            ++v105;
            --v104;
          }
          while ( v104 );
          v34 = v125;
          LODWORD(v23) = 0;
        }
        v120 = v133;
        LODWORD(v10) = DXGDEVICE::CheckMultiPlaneOverlayInternal3(this, v97, v133, v139);
        if ( *v120 == (_DWORD)v23 )
        {
          LODWORD(v96) = v23;
          v121 = &v146;
          do
          {
            if ( *(_BYTE *)v121 != (_BYTE)v23 )
              DISPLAY_SOURCE::ClearAllQueryStateUnsafe((DISPLAY_SOURCE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 225)
                                                                                                + 2280LL)
                                                                                    + 112LL)
                                                                        + 3208LL * (unsigned int)v96));
            v96 = (unsigned int)(v96 + 1);
            v121 = (__int128 *)((char *)v121 + 1);
          }
          while ( (unsigned int)v96 < 0x10 );
        }
      }
      else
      {
        v120 = v133;
      }
      if ( (int)v10 >= 0 && v34 )
        goto LABEL_154;
    }
    DXGDEVICE::LogCheckMutiplaneOverlaySupport(this, v10, *v120, v130, v135, v129, v128, v134);
LABEL_154:
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v138, v94, v95, v96);
    v24 = v10;
    if ( v138[8] != (_BYTE)v23 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v138, v122, v123, v124);
    goto LABEL_156;
  }
  v24 = -1073741801;
  v25 = (_QWORD *)WdLogNewEntry5_WdWarning(v20, v19, v21, v22);
  v25[3] = v11;
  v25[4] = -1073741801LL;
  v25[5] = PsGetCurrentProcess(v26);
  WdLogEvent5_WdWarning(v25);
LABEL_157:
  PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v143);
  return v24;
}
