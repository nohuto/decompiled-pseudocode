/*
 * XREFs of ?CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@IPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C0188F30
 * Callers:
 *     ?CheckMultiPlaneOverlaySupport2@DXGDEVICE@@QEAAJIPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C0188D94 (-CheckMultiPlaneOverlaySupport2@DXGDEVICE@@QEAAJIPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2@@_N.c)
 *     ?CheckMultiPlaneOverlaySupport@DXGDEVICE@@QEAAJIPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE@@_NPEAH@Z @ 0x1C0189B30 (-CheckMultiPlaneOverlaySupport@DXGDEVICE@@QEAAJIPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE@@_NPEA.c)
 *     DxgkCheckMultiPlaneOverlaySupport3 @ 0x1C018DBA0 (DxgkCheckMultiPlaneOverlaySupport3.c)
 * Callees:
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C0014A18 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0016650 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ @ 0x1C00A6160 (-IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ.c)
 *     ??1?$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAA@XZ @ 0x1C00D4248 (--1-$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAA@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C00E6124 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C00E6170 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?ClearAllQueryStateUnsafe@DISPLAY_SOURCE@@QEAAXXZ @ 0x1C010DEE4 (-ClearAllQueryStateUnsafe@DISPLAY_SOURCE@@QEAAXXZ.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C010EEAC (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?ClearQueryStateForPlaneUnsafe@DISPLAY_SOURCE@@QEAAXI@Z @ 0x1C0150F3C (-ClearQueryStateForPlaneUnsafe@DISPLAY_SOURCE@@QEAAXI@Z.c)
 *     ?InitializeQueryStateUnsafe@DISPLAY_SOURCE@@QEAAXXZ @ 0x1C0155A20 (-InitializeQueryStateUnsafe@DISPLAY_SOURCE@@QEAAXXZ.c)
 *     ?SetQueryPlaneStateUnsafe@DISPLAY_SOURCE@@QEAAXIPEBVDXGALLOCATION@@IPEBUtagRECT@@11W4_D3DDDI_ROTATION@@W4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@W4D3DDDI_COLOR_SPACE_TYPE@@I@Z @ 0x1C015787C (-SetQueryPlaneStateUnsafe@DISPLAY_SOURCE@@QEAAXIPEBVDXGALLOCATION@@IPEBUtagRECT@@11W4_D3DDDI_ROT.c)
 *     ?SetQueryPostCompositionStateUnsafe@DISPLAY_SOURCE@@QEAAXPEBUtagRECT@@0@Z @ 0x1C0157978 (-SetQueryPostCompositionStateUnsafe@DISPLAY_SOURCE@@QEAAXPEBUtagRECT@@0@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@I@Z @ 0x1C0187E00 (-AllocateElements@-$PagedPoolZeroedArray@PEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAP.c)
 *     ?CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C01888EC (-CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CH.c)
 *     ?LogCheckMutiplaneOverlaySupport@@YAXJHIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXIPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@PEAVADAPTER_RENDER@@@Z @ 0x1C018B0DC (-LogCheckMutiplaneOverlaySupport@@YAXJHIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXI.c)
 *     ?UseCachedIndependentFlipParameters@DXGDEVICE@@QEAAEPEAVDISPLAY_SOURCE@@PEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@@Z @ 0x1C018CA8C (-UseCachedIndependentFlipParameters@DXGDEVICE@@QEAAEPEAVDISPLAY_SOURCE@@PEAU_D3DKMT_CHECK_MULTIP.c)
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
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **v11; // r15
  __int64 v12; // r13
  __int64 v13; // rsi
  ADAPTER_RENDER *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  unsigned int v23; // edi
  _QWORD *v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  _QWORD *v30; // rbx
  __int64 v31; // rdx
  __int64 v32; // rcx
  unsigned int v33; // eax
  unsigned __int8 v34; // r12
  __int64 v35; // rax
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  int v37; // ecx
  __int64 v38; // rax
  __int128 v39; // xmm1
  __int64 v40; // rax
  __int64 v41; // rcx
  char v42; // al
  unsigned int v43; // r15d
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v44; // r14
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *v45; // rbx
  unsigned int Rotation; // eax
  __int64 v47; // rax
  D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId; // eax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // r14
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *v54; // r15
  unsigned int hResource; // ebx
  __int64 v56; // rax
  __int64 v57; // r8
  int v58; // ecx
  struct _EX_RUNDOWN_REF *v59; // rdx
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  ULONG_PTR i; // rbx
  __int64 v64; // r14
  __int64 v65; // r13
  void **v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // rcx
  ADAPTER_RENDER *v69; // rbx
  __int64 v70; // rcx
  D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *pPlaneAttributes; // rdx
  __int64 v72; // r8
  int v73; // eax
  __int64 right; // rcx
  __int64 v75; // r8
  D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *v76; // rdx
  __int64 v77; // rcx
  unsigned int v78; // r13d
  __int64 v79; // rbx
  _QWORD *v80; // rax
  D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *v81; // r8
  unsigned int v82; // eax
  __int64 v83; // rax
  int StretchQuality; // eax
  __int64 v85; // rax
  __int64 v86; // rcx
  int ColorSpace; // eax
  UINT SDRWhiteLevel; // eax
  _QWORD *v89; // rax
  __int64 v90; // rcx
  __int64 v91; // rax
  _QWORD *v92; // rax
  _QWORD *v93; // rax
  void **v94; // rdx
  __int64 v95; // rax
  _QWORD *v96; // rax
  __int64 v97; // rax
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v98; // r15d
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v99; // r14
  __int64 v100; // r13
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *v101; // rbx
  __int64 v102; // rdx
  __int64 v103; // rcx
  DISPLAY_SOURCE *v104; // rsi
  __int64 v105; // r13
  const struct DXGALLOCATION **v106; // r12
  char *v107; // r14
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *v108; // rsi
  __int64 v109; // rcx
  __int64 v110; // rdx
  DISPLAY_SOURCE *v111; // rbx
  D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *v112; // r9
  int *v113; // rbx
  unsigned int v114; // r9d
  __int128 *v115; // r10
  char v116; // [rsp+60h] [rbp-A0h]
  unsigned int v117; // [rsp+64h] [rbp-9Ch]
  struct _EX_RUNDOWN_REF *v118; // [rsp+68h] [rbp-98h] BYREF
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **v119; // [rsp+70h] [rbp-90h]
  unsigned int v120; // [rsp+78h] [rbp-88h]
  unsigned int v121; // [rsp+7Ch] [rbp-84h]
  int v122; // [rsp+80h] [rbp-80h]
  void **v123; // [rsp+88h] [rbp-78h]
  int *v124; // [rsp+90h] [rbp-70h]
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v125; // [rsp+98h] [rbp-68h]
  const struct DXGALLOCATION **Elements; // [rsp+A0h] [rbp-60h]
  _BYTE v127[16]; // [rsp+A8h] [rbp-58h] BYREF
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *v128; // [rsp+B8h] [rbp-48h]
  struct _DXGKARG_DESCRIBEALLOCATION v129; // [rsp+C0h] [rbp-40h] BYREF
  PVOID v130[4]; // [rsp+F0h] [rbp-10h] BYREF
  int v131; // [rsp+110h] [rbp+10h]
  PVOID v132[4]; // [rsp+118h] [rbp+18h] BYREF
  int v133; // [rsp+138h] [rbp+38h]
  _BYTE v134[512]; // [rsp+140h] [rbp+40h]
  __int128 v135; // [rsp+340h] [rbp+240h] BYREF

  v9 = 0;
  v125 = a5;
  v11 = a3;
  v12 = a2;
  LODWORD(v13) = 0;
  v128 = a8;
  v120 = a4;
  *a7 = 0;
  a8->Value = 0;
  v14 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
  v119 = a3;
  v121 = a2;
  v124 = a7;
  if ( !ADAPTER_RENDER::IsMultiPlaneOverlaySupported(v14) )
  {
    v18 = WdLogNewEntry5_WdWarning(v16, v15, v17);
    *(_QWORD *)(v18 + 24) = 0LL;
    WdLogEvent5_WdWarning(v18);
    return 0LL;
  }
  v132[0] = 0LL;
  v133 = 0;
  Elements = (const struct DXGALLOCATION **)PagedPoolZeroedArray<_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *,3>::AllocateElements(
                                              v132,
                                              v12);
  if ( Elements )
  {
    v130[0] = 0LL;
    v131 = 0;
    v123 = (void **)PagedPoolZeroedArray<_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *,3>::AllocateElements(v130, v12);
    if ( !v123 )
    {
      v23 = -1073741801;
      v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v28, v27, v29);
      v30[3] = v12;
      v30[4] = -1073741801LL;
      v30[5] = PsGetCurrentProcess(v32, v31);
      WdLogEvent5_WdWarning(v30);
LABEL_167:
      PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(v130);
      goto LABEL_168;
    }
    v33 = *((_DWORD *)this + 424);
    v34 = 1;
    v116 = 1;
    if ( v33 > 0x10 )
    {
      v35 = WdLogNewEntry5_WdAssertion(v28);
      *(_QWORD *)(v35 + 24) = 10054LL;
      WdLogEvent5_WdAssertion(v35);
      v33 = *((_DWORD *)this + 424);
    }
    if ( v33 )
    {
      while ( v9 < 0x10 )
      {
        DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(*(DXGADAPTER ***)(*((_QWORD *)this + 211) + 2456LL), v9);
        if ( !DisplayModeInfo )
        {
          v40 = WdLogNewEntry5_WdError(0LL);
          *(_QWORD *)(v40 + 32) = v9;
          *(_QWORD *)(v40 + 24) = this;
          WdLogEvent5_WdError(v40);
          v34 = 0;
          v116 = 0;
          break;
        }
        *(_QWORD *)&v135 = 0LL;
        v37 = *(_DWORD *)DisplayModeInfo;
        HIDWORD(v135) = *((_DWORD *)DisplayModeInfo + 1);
        v38 = v9++;
        v38 *= 2LL;
        DWORD2(v135) = v37;
        v39 = v135;
        *(_OWORD *)&v134[8 * v38 + 256] = v135;
        *(_OWORD *)&v134[8 * v38] = v39;
        if ( v9 >= *((_DWORD *)this + 424) )
          break;
      }
    }
    v122 = -1;
    if ( a4 )
    {
      v41 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      if ( !*(_QWORD *)(v41 + 896) || (v42 = 1, !*(_BYTE *)(v41 + 2410)) )
        v42 = 0;
      v34 &= v42;
      v43 = 0;
      v44 = v125;
      v116 = v34;
      while ( 1 )
      {
        if ( (int)v13 < 0 )
          goto LABEL_41;
        v45 = *v44;
        if ( (*v44)->PostComposition.SrcRect.left >= (*v44)->PostComposition.SrcRect.right
          || v45->PostComposition.SrcRect.top >= v45->PostComposition.SrcRect.bottom
          || v45->PostComposition.DstRect.left >= v45->PostComposition.DstRect.right
          || v45->PostComposition.DstRect.top >= v45->PostComposition.DstRect.bottom )
        {
          break;
        }
        Rotation = v45->PostComposition.Rotation;
        if ( Rotation > 2 )
        {
          if ( Rotation > 4 )
          {
            v47 = WdLogNewEntry5_WdWarning(v41, v27, v29);
            LODWORD(v13) = -1073741811;
            *(_QWORD *)(v47 + 24) = v45->PostComposition.Rotation;
            *(_QWORD *)(v47 + 32) = -1073741811LL;
            WdLogEvent5_WdWarning(v47);
          }
          else
          {
            v34 = 0;
            v116 = 0;
          }
        }
        if ( v45->PostComposition.Flags.Value )
          goto LABEL_38;
        VidPnSourceId = v45->VidPnSourceId;
        if ( v45->VidPnSourceId >= *((_DWORD *)this + 424) )
        {
          v50 = WdLogNewEntry5_WdWarning(0LL, v27, v29);
          *(_QWORD *)(v50 + 24) = v45->VidPnSourceId;
          *(_QWORD *)(v50 + 32) = 0LL;
          WdLogEvent5_WdWarning(v50);
          goto LABEL_38;
        }
        v41 = 2LL * VidPnSourceId;
        if ( *(_DWORD *)&v134[16 * VidPnSourceId + 256] > v45->PostComposition.DstRect.left
          || *(_DWORD *)&v134[16 * VidPnSourceId + 264] < v45->PostComposition.DstRect.right
          || *(_DWORD *)&v134[16 * VidPnSourceId + 260] > v45->PostComposition.DstRect.top
          || *(_DWORD *)&v134[16 * VidPnSourceId + 268] < v45->PostComposition.DstRect.bottom )
        {
          v49 = WdLogNewEntry5_WdWarning(v41, v27, v29);
          *(_QWORD *)(v49 + 24) = this;
          *(_QWORD *)(v49 + 32) = -1073741811LL;
          WdLogEvent5_WdWarning(v49);
LABEL_38:
          v34 = 0;
          v116 = 0;
          goto LABEL_41;
        }
        ++v43;
        ++v44;
        *(RECT *)&v134[16 * VidPnSourceId] = v45->PostComposition.SrcRect;
        if ( v43 >= v120 )
          goto LABEL_41;
      }
      v51 = WdLogNewEntry5_WdWarning(v41, v27, v29);
      *(_QWORD *)(v51 + 24) = -1073741811LL;
      WdLogEvent5_WdWarning(v51);
      LODWORD(v13) = -1073741811;
LABEL_41:
      v11 = v119;
    }
    v117 = 0;
    if ( (_DWORD)v12 )
    {
      v52 = 0LL;
      *(_QWORD *)&v135 = 0LL;
LABEL_44:
      if ( (int)v13 >= 0 )
      {
        v53 = *((_QWORD *)this + 5);
        v54 = v11[v52];
        hResource = v54->hResource;
        DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v53 + 208));
        v56 = (hResource >> 6) & 0xFFFFFF;
        if ( (unsigned int)v56 < *(_DWORD *)(v53 + 248)
          && (v57 = *(_QWORD *)(v53 + 232),
              v58 = *(_DWORD *)(v57 + 16 * v56 + 8),
              ((hResource >> 25) & 0x60) == (*(_BYTE *)(v57 + 16 * v56 + 8) & 0x60))
          && (v58 & 0x2000) == 0
          && (v58 & 0x1F) == 4 )
        {
          v59 = *(struct _EX_RUNDOWN_REF **)(v57 + 16LL * (unsigned int)v56);
        }
        else
        {
          v59 = 0LL;
        }
        DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v118, v59);
        ExReleasePushLockSharedEx(v53 + 208, 0LL);
        KeLeaveCriticalRegion();
        if ( v118 )
        {
          for ( i = v118[3].Count; ; i = *(_QWORD *)(i + 64) )
          {
            if ( !i )
              goto LABEL_134;
            if ( *(DXGDEVICE **)(i + 8) != this )
              break;
            v64 = *(_QWORD *)(i + 48);
            if ( (*(_DWORD *)(v64 + 4) & 0x200B) != 0 )
            {
              v65 = v135;
              Elements[(_QWORD)v135] = (const struct DXGALLOCATION *)i;
              if ( !v64 )
                goto LABEL_134;
              v66 = v123;
              v123[v65] = *(void **)(v64 + 16);
              v67 = v54->VidPnSourceId;
              if ( (unsigned int)v67 >= *((_DWORD *)this + 424) )
              {
                v89 = (_QWORD *)WdLogNewEntry5_WdWarning(v67, v66, v62);
                v89[3] = v54->VidPnSourceId;
                v89[4] = 0LL;
              }
              else
              {
                if ( (_DWORD)v67 == ((*(_DWORD *)(v64 + 4) >> 6) & 0xF)
                  || (v68 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL), *(_QWORD *)(v68 + 896)) && *(_BYTE *)(v68 + 2410) )
                {
                  v69 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
                  v70 = *(unsigned int *)(*((_QWORD *)v69 + 2) + 2312LL);
                  if ( v54->LayerIndex < (unsigned int)v70 )
                  {
                    if ( !a6 || *((_DWORD *)this + 425) )
                    {
                      pPlaneAttributes = v54->pPlaneAttributes;
                      if ( pPlaneAttributes->SrcRect.left >= pPlaneAttributes->SrcRect.right
                        || pPlaneAttributes->SrcRect.top >= pPlaneAttributes->SrcRect.bottom
                        || pPlaneAttributes->DstRect.left >= pPlaneAttributes->DstRect.right
                        || pPlaneAttributes->DstRect.top >= pPlaneAttributes->DstRect.bottom
                        || pPlaneAttributes->ClipRect.left >= pPlaneAttributes->ClipRect.right
                        || pPlaneAttributes->ClipRect.top >= pPlaneAttributes->ClipRect.bottom )
                      {
                        v95 = WdLogNewEntry5_WdWarning(v70, pPlaneAttributes, v62);
                        *(_QWORD *)(v95 + 24) = -1073741811LL;
                        WdLogEvent5_WdWarning(v95);
                        goto LABEL_126;
                      }
                      memset(&v129, 0, sizeof(v129));
                      v129.hAllocation = v123[v65];
                      v73 = ADAPTER_RENDER::DdiDescribeAllocation(v69, &v129, v72);
                      v13 = v73;
                      if ( v73 < 0 )
                      {
                        v93 = (_QWORD *)WdLogNewEntry5_WdError(right);
                        v94 = v123;
                        v93[3] = v13;
                        v93[4] = this;
                        v93[5] = v94[v117];
                        v93[6] = v64;
                      }
                      else
                      {
                        v76 = v54->pPlaneAttributes;
                        if ( v76->SrcRect.left >= 0 )
                        {
                          right = (unsigned int)v76->SrcRect.right;
                          if ( (int)v129.Width >= (int)right
                            && v76->SrcRect.top >= 0
                            && (int)v129.Height >= v76->SrcRect.bottom )
                          {
                            v77 = 2LL * v54->VidPnSourceId;
                            if ( *(_DWORD *)&v134[16 * v54->VidPnSourceId] > v76->ClipRect.left
                              || *(_DWORD *)&v134[16 * v54->VidPnSourceId + 8] < v76->ClipRect.right
                              || *(_DWORD *)&v134[16 * v54->VidPnSourceId + 4] > v76->ClipRect.top
                              || *(_DWORD *)&v134[16 * v54->VidPnSourceId + 12] < v76->ClipRect.bottom )
                            {
                              v80 = (_QWORD *)WdLogNewEntry5_WdWarning(v77, v76, v75);
                              v78 = v117;
                              v80[3] = 0LL;
                              v79 = v117;
                              v80[5] = v117;
                              v80[4] = this;
                              WdLogEvent5_WdWarning(v80);
                              v76 = v54->pPlaneAttributes;
                              v77 = 0LL;
                              v34 = 0;
                              v116 = 0;
                            }
                            else
                            {
                              v78 = v117;
                              v79 = v117;
                            }
                            v81 = v76;
                            if ( v76->DstRect.left <= v76->ClipRect.left
                              && v76->DstRect.right >= v76->ClipRect.right
                              && v76->DstRect.top <= v76->ClipRect.top
                              && v76->DstRect.bottom >= v76->ClipRect.bottom )
                            {
                              v82 = v76->Rotation;
                              if ( v82 > 1 )
                              {
                                if ( v82 > 4 )
                                {
                                  v83 = WdLogNewEntry5_WdWarning(v77, v76, v76);
                                  *(_QWORD *)(v83 + 24) = v54->pPlaneAttributes->Rotation;
                                  *(_QWORD *)(v83 + 32) = -1073741811LL;
                                  WdLogEvent5_WdWarning(v83);
                                  v76 = v54->pPlaneAttributes;
                                  LODWORD(v13) = -1073741811;
                                  v81 = v76;
                                }
                                else
                                {
                                  v77 = 0LL;
                                  if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 4044LL) & 0x20) == 0 )
                                    v77 = v34;
                                  v34 = v77;
                                  v116 = v77;
                                }
                              }
                              StretchQuality = v76->StretchQuality;
                              if ( StretchQuality <= 0 || StretchQuality > 2 )
                              {
                                v85 = WdLogNewEntry5_WdWarning(v77, v76, v81);
                                *(_QWORD *)(v85 + 24) = -1073741811LL;
                                WdLogEvent5_WdWarning(v85);
                                v76 = v54->pPlaneAttributes;
                                LODWORD(v13) = -1073741811;
                                v81 = v76;
                              }
                              v86 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
                              if ( !*(_QWORD *)(v86 + 864) && (!*(_QWORD *)(v86 + 896) || !*(_BYTE *)(v86 + 2410)) )
                              {
                                ColorSpace = v81->ColorSpace;
                                if ( ColorSpace == -1
                                  || (v76 = v81, ColorSpace > 0)
                                  && (ColorSpace <= 3 || ColorSpace == 5 || ColorSpace > 9 && ColorSpace <= 19) )
                                {
                                  v34 = 0;
                                  v76 = v81;
                                  v116 = 0;
                                }
                              }
                              SDRWhiteLevel = v76->SDRWhiteLevel;
                              if ( SDRWhiteLevel && SDRWhiteLevel != 80 && (*(_DWORD *)(v86 + 300) & 0x200) == 0 )
                              {
                                if ( *(int *)(v86 + 2104) < 8960 )
                                  v34 = 0;
                                v116 = v34;
                              }
                              if ( !*(_QWORD *)(v86 + 896) || !*(_BYTE *)(v86 + 2410) )
                              {
                                if ( v122 == -1 )
                                {
                                  v122 = v54->VidPnSourceId;
                                }
                                else
                                {
                                  if ( v122 != v54->VidPnSourceId )
                                    v34 = 0;
                                  v116 = v34;
                                }
                              }
                              DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v118);
                              v52 = v135 + 1;
                              v117 = v78 + 1;
                              *(_QWORD *)&v135 = v135 + 1;
                              if ( v78 + 1 < v121 )
                              {
                                v11 = v119;
                                goto LABEL_44;
                              }
                              goto LABEL_136;
                            }
                            v92 = (_QWORD *)WdLogNewEntry5_WdError(v77);
                            v92[3] = -1073741811LL;
                            v92[4] = this;
                            v92[5] = v79;
                            WdLogEvent5_WdError(v92);
LABEL_126:
                            LODWORD(v13) = -1073741811;
LABEL_135:
                            DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v118);
                            goto LABEL_136;
                          }
                        }
                        v93 = (_QWORD *)WdLogNewEntry5_WdError(right);
                        LODWORD(v13) = -1073741811;
                        v93[3] = -1073741811LL;
                        v93[4] = this;
                        v93[5] = v117;
                      }
                      WdLogEvent5_WdError(v93);
                      goto LABEL_135;
                    }
                    v91 = WdLogNewEntry5_WdWarning(v70, v66, v62);
                    LODWORD(v13) = -1073741790;
                    *(_QWORD *)(v91 + 24) = -1073741790LL;
                    WdLogEvent5_WdWarning(v91);
                    goto LABEL_135;
                  }
                  v89 = (_QWORD *)WdLogNewEntry5_WdWarning(v70, v66, v62);
                  v89[3] = v54->LayerIndex;
                  v90 = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 2312LL);
                }
                else
                {
                  v89 = (_QWORD *)WdLogNewEntry5_WdWarning(v68, v66, v62);
                  v89[3] = v54->VidPnSourceId;
                  v90 = (*(_DWORD *)(v64 + 4) >> 6) & 0xF;
                }
                v89[4] = v90;
                v89[5] = 0LL;
              }
              WdLogEvent5_WdWarning(v89);
              v34 = 0;
              v116 = 0;
              goto LABEL_135;
            }
          }
          v96 = (_QWORD *)WdLogNewEntry5_WdWarning(v61, v60, v62);
          v96[3] = v54->hResource;
          v96[4] = *(_QWORD *)(i + 8);
          v96[5] = this;
          v96[6] = -1073741811LL;
          WdLogEvent5_WdWarning(v96);
        }
LABEL_134:
        v97 = WdLogNewEntry5_WdWarning(v61, v60, v62);
        *(_QWORD *)(v97 + 24) = v54->hResource;
        *(_QWORD *)(v97 + 32) = -1073741811LL;
        WdLogEvent5_WdWarning(v97);
        LODWORD(v13) = -1073741811;
        goto LABEL_135;
      }
    }
LABEL_136:
    DXGAUTOMUTEX::DXGAUTOMUTEX(
      (DXGAUTOMUTEX *)v127,
      (struct DXGFASTMUTEX *const)(*(_QWORD *)(*((_QWORD *)this + 211) + 2456LL) + 400LL),
      0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v127);
    if ( (int)v13 < 0 )
    {
      v113 = v124;
    }
    else
    {
      if ( v34 )
      {
        v98 = 0;
        v135 = 0uLL;
        if ( v120 )
        {
          v99 = v125;
          v100 = v120;
          do
          {
            v101 = *v99;
            v102 = (*v99)->VidPnSourceId;
            v103 = *(_QWORD *)(*((_QWORD *)this + 211) + 2456LL);
            v104 = (DISPLAY_SOURCE *)(*(_QWORD *)(v103 + 112) + 3760 * v102);
            if ( !*((_BYTE *)&v135 + v102) )
            {
              DISPLAY_SOURCE::InitializeQueryStateUnsafe((DISPLAY_SOURCE *)(*(_QWORD *)(v103 + 112) + 3760 * v102));
              v98 = v101->VidPnSourceId;
              *((_BYTE *)&v135 + v101->VidPnSourceId) = 1;
            }
            DISPLAY_SOURCE::SetQueryPostCompositionStateUnsafe(
              v104,
              &v101->PostComposition.SrcRect,
              &v101->PostComposition.DstRect);
            ++v99;
            --v100;
          }
          while ( v100 );
          v34 = v116;
        }
        if ( v121 )
        {
          v105 = v121;
          v106 = Elements;
          v107 = (char *)((char *)v119 - (char *)Elements);
          do
          {
            v108 = *(struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **)((char *)v106 + (_QWORD)v107);
            v109 = *(_QWORD *)(*((_QWORD *)this + 211) + 2456LL);
            v110 = v108->VidPnSourceId;
            v111 = (DISPLAY_SOURCE *)(*(_QWORD *)(v109 + 112) + 3760 * v110);
            if ( !*((_BYTE *)&v135 + v110) )
            {
              DISPLAY_SOURCE::InitializeQueryStateUnsafe((DISPLAY_SOURCE *)(*(_QWORD *)(v109 + 112) + 3760 * v110));
              v98 = v108->VidPnSourceId;
              *((_BYTE *)&v135 + v98) = 1;
            }
            if ( DXGDEVICE::UseCachedIndependentFlipParameters(this, v111, v108) )
            {
              DISPLAY_SOURCE::ClearQueryStateForPlaneUnsafe(v111, v108->LayerIndex);
            }
            else
            {
              v112 = v108->pPlaneAttributes;
              DISPLAY_SOURCE::SetQueryPlaneStateUnsafe(
                v111,
                v108->LayerIndex,
                *v106,
                v112->Flags,
                &v112->SrcRect,
                &v112->DstRect,
                &v112->ClipRect,
                v112->Rotation,
                v112->Blend,
                v112->ColorSpace,
                v112->SDRWhiteLevel);
            }
            ++v106;
            --v105;
          }
          while ( v105 );
          v34 = v116;
        }
        v113 = v124;
        LODWORD(v13) = CheckMultiPlaneOverlayInternal3(
                         v98,
                         *((struct ADAPTER_RENDER **)this + 2),
                         *(struct ADAPTER_DISPLAY **)(*((_QWORD *)this + 211) + 2456LL),
                         v124,
                         v128);
        if ( !*v113 )
        {
          v114 = 0;
          v115 = &v135;
          do
          {
            if ( *(_BYTE *)v115 )
              DISPLAY_SOURCE::ClearAllQueryStateUnsafe((DISPLAY_SOURCE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 211)
                                                                                                + 2456LL)
                                                                                    + 112LL)
                                                                        + 3760LL * v114));
            ++v114;
            v115 = (__int128 *)((char *)v115 + 1);
          }
          while ( v114 < 0x10 );
        }
      }
      else
      {
        v113 = v124;
      }
      if ( (int)v13 >= 0 && v34 )
        goto LABEL_165;
    }
    LogCheckMutiplaneOverlaySupport(v13, *v113, v121, v119, v123, v120, v125, *((struct ADAPTER_RENDER **)this + 2));
LABEL_165:
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v127);
    v23 = v13;
    if ( v127[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v127);
    goto LABEL_167;
  }
  v23 = -1073741801;
  v24 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v20, v22);
  v24[3] = v12;
  v24[4] = -1073741801LL;
  v24[5] = PsGetCurrentProcess(v26, v25);
  WdLogEvent5_WdWarning(v24);
LABEL_168:
  PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(v132);
  return v23;
}
