/*
 * XREFs of ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C01D07FC
 * Callers:
 *     ?PresentMultiPlaneOverlay2@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C01D056C (-PresentMultiPlaneOverlay2@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAVCOREDEV.c)
 *     ?PresentMultiPlaneOverlay@DXGCONTEXT@@QEAAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C01D1BBC (-PresentMultiPlaneOverlay@DXGCONTEXT@@QEAAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAVCOREDEVICE.c)
 *     DxgkPresentMultiPlaneOverlay3 @ 0x1C01D3B60 (DxgkPresentMultiPlaneOverlay3.c)
 * Callees:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001B00 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0001D2C (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0001DA0 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002CE0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C00075FC (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C0008EE0 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C0008F30 (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?GetDisplayedAllMultiPlaneOverlays@DXGDEVICE@@QEAAXIPEAVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C002C104 (-GetDisplayedAllMultiPlaneOverlays@DXGDEVICE@@QEAAXIPEAVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     McTemplateK0qqqpqddddddddddddqqqqqq @ 0x1C002C198 (McTemplateK0qqqpqddddddddddddqqqqqq.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C00799D8 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C00833BC (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ @ 0x1C00839FC (-IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0086DD0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0086E10 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C009DF28 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 *     ?UpdatePostComposition@@YAXIEIIPEAVADAPTER_DISPLAY@@@Z @ 0x1C00F2FB4 (-UpdatePostComposition@@YAXIEIIPEAVADAPTER_DISPLAY@@@Z.c)
 *     ?IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z @ 0x1C0100168 (-IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z.c)
 *     ??0?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$03@@QEAA@I@Z @ 0x1C01001B8 (--0-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$03@@QEAA@I@Z.c)
 *     ??1?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$03@@QEAA@XZ @ 0x1C0100230 (--1-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$03@@QEAA@XZ.c)
 *     ?CheckDevicePresentSettings@DXGCONTEXT@@QEAAJHHI@Z @ 0x1C016F2F0 (-CheckDevicePresentSettings@DXGCONTEXT@@QEAAJHHI@Z.c)
 *     ?WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z @ 0x1C016F668 (-WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?GetDDIEnabledPlanes@ADAPTER_DISPLAY@@QEAAXIPEAE@Z @ 0x1C017522C (-GetDDIEnabledPlanes@ADAPTER_DISPLAY@@QEAAXIPEAE@Z.c)
 *     ?ConvertMPOThunkToLegacyPresentThunk@@YAXPEAU_D3DKMT_PRESENT@@PEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEBU_D3DKMT_MULTIPLANE_OVERLAY3@@@Z @ 0x1C01CFED4 (-ConvertMPOThunkToLegacyPresentThunk@@YAXPEAU_D3DKMT_PRESENT@@PEBU_D3DKMT_PRESENT_MULTIPLANE_OVE.c)
 *     ?DisplayOnlyPresent@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGALLOCATION@@IPEAU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01D019C (-DisplayOnlyPresent@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGALLOCATION@@IPEAU_DXGKARG_PRESE.c)
 *     InverseXformMPORect3 @ 0x1C01D03D8 (InverseXformMPORect3.c)
 *     ?SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEPEBVDXGALLOCATIONREFERENCE@@PEAEPEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAPEAV1@@Z @ 0x1C01D1F50 (-SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEP.c)
 *     ?UpdateDisplayStateForFullWDDMDevice@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVDXGALLOCATIONREFERENCE@@PEAW4_D3DDDIFORMAT@@HI@Z @ 0x1C01D2E18 (-UpdateDisplayStateForFullWDDMDevice@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@P.c)
 */

__int64 __fastcall DXGCONTEXT::PresentMultiPlaneOverlay3(
        DXGCONTEXT *this,
        const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *a2,
        struct COREDEVICEACCESS *a3,
        struct DXGCONTEXT **a4)
{
  __int64 v4; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  D3DDDI_FLIPINTERVAL_TYPE v9; // r15d
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 VidPnSourceId; // r13
  __int64 v16; // rcx
  __int64 v17; // rbx
  _QWORD *v18; // rax
  int v19; // eax
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rbx
  __int64 v25; // rax
  char v26; // bl
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  unsigned __int64 right; // rcx
  _QWORD *v29; // rax
  __int64 v30; // r8
  __int64 v31; // r9
  D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION *pPostComposition; // rdx
  _QWORD *v33; // rax
  __int64 Rotation; // rdx
  int left; // eax
  int top; // r10d
  int bottom; // r11d
  __int64 v38; // rcx
  RECT SrcRect; // xmm0
  __int64 v40; // rdx
  __int64 pDirtyRects; // r8
  __int64 v42; // rdx
  unsigned __int8 v43; // r10
  unsigned __int8 v44; // r11
  D3DKMT_MULTIPLANE_OVERLAY3 **ppPresentPlanes; // rax
  __int64 PresentPlaneCount; // rcx
  int v47; // r14d
  UINT v48; // r12d
  __int64 v49; // rcx
  D3DKMT_MULTIPLANE_OVERLAY3 *v50; // r15
  __int64 LayerIndex; // rbx
  struct _D3DKMT_PLANE_SPECIFIC_INPUT_FLAGS::$390DB612F88C1DE2E40C850E65A6A89F::$1196FF6CE8067B2B35B898660F75E27E Value; // eax
  __int64 v53; // r13
  int v54; // r14d
  __int64 v55; // r15
  D3DKMT_HANDLE v56; // ebx
  __int64 v57; // rax
  __int64 v58; // r8
  int v59; // edx
  struct _EX_RUNDOWN_REF *v60; // rdx
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // rax
  __int64 v65; // rcx
  struct DXGALLOCATIONREFERENCE *v66; // rbx
  bool v67; // zf
  const struct DXGALLOCATION *v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  int v71; // eax
  __int64 v72; // rcx
  const D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *pPlaneAttributes; // rbx
  int v74; // eax
  __int64 FlipInterval; // rcx
  int v76; // edx
  int v77; // r8d
  int v78; // eax
  int v79; // r11d
  int v80; // r10d
  int v81; // r14d
  D3DDDI_ROTATION v82; // eax
  UINT v83; // r14d
  int v84; // r10d
  BOOL v85; // eax
  char v86; // r11
  BOOL v87; // eax
  int v88; // r10d
  int v89; // eax
  int v90; // r11d
  int v91; // r14d
  int v92; // edx
  char v93; // r8
  __int64 v94; // r15
  __int64 v95; // rdx
  struct DXGALLOCATION **v96; // rcx
  D3DKMT_HANDLE v97; // r8d
  __int64 v98; // rdx
  __int64 v99; // rax
  __int64 v100; // rax
  UINT v101; // ecx
  __int16 v102; // ax
  __int64 v103; // rcx
  __int64 v104; // r8
  __int64 v105; // r9
  __int64 v106; // rax
  int v107; // ecx
  int v108; // ecx
  int v109; // eax
  UINT v110; // ecx
  int v111; // ecx
  UINT v112; // ecx
  UINT v113; // ecx
  UINT v114; // ecx
  UINT Duration; // eax
  _QWORD *pHDRMetaData; // rax
  __int64 v117; // rcx
  __int64 v118; // rdx
  __int64 v119; // rax
  __int64 v120; // rax
  COREDEVICEACCESS *v121; // r12
  int v122; // eax
  __int64 v123; // rdx
  __int64 v124; // rcx
  __int64 v125; // r8
  __int64 v126; // r9
  __int64 v127; // r14
  __int64 v128; // rax
  int v129; // eax
  __int64 v130; // rdx
  __int64 v131; // rcx
  __int64 v132; // r8
  __int64 v133; // r9
  __int64 v134; // rax
  int v135; // eax
  __int64 v136; // rdx
  __int64 v137; // rcx
  __int64 v138; // r8
  __int64 v139; // r9
  __int64 v140; // rax
  int v141; // eax
  __int64 v142; // rax
  __int64 v143; // rcx
  __int64 v144; // rax
  int v145; // r9d
  int v146; // r8d
  char v147; // dl
  D3DKMT_MULTIPLANE_OVERLAY3 **v148; // rax
  const struct _D3DKMT_MULTIPLANE_OVERLAY3 *v149; // rbx
  __int64 v150; // rax
  int v151; // eax
  __int64 v152; // rcx
  __int64 v153; // rax
  __int64 v154; // rax
  __int64 v155; // rax
  int v157; // [rsp+B0h] [rbp-A0h]
  char v158; // [rsp+D0h] [rbp-80h]
  unsigned __int8 v159; // [rsp+D1h] [rbp-7Fh]
  unsigned __int8 v160; // [rsp+D2h] [rbp-7Eh]
  char v161; // [rsp+D3h] [rbp-7Dh]
  char v162; // [rsp+D4h] [rbp-7Ch]
  unsigned int v163; // [rsp+D8h] [rbp-78h]
  char v164; // [rsp+DCh] [rbp-74h]
  UINT v165; // [rsp+E0h] [rbp-70h]
  UINT DirtyRectCount; // [rsp+E0h] [rbp-70h]
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v167; // [rsp+E8h] [rbp-68h]
  int v168; // [rsp+ECh] [rbp-64h]
  int v169; // [rsp+F0h] [rbp-60h]
  RECT v170; // [rsp+100h] [rbp-50h]
  unsigned int v171; // [rsp+110h] [rbp-40h]
  D3DKMT_MULTIPLANE_OVERLAY3 *v172; // [rsp+118h] [rbp-38h]
  signed int Height; // [rsp+118h] [rbp-38h]
  struct _EX_RUNDOWN_REF *v174[2]; // [rsp+120h] [rbp-30h] BYREF
  __int64 v175; // [rsp+130h] [rbp-20h]
  __int64 v176; // [rsp+140h] [rbp-10h]
  COREDEVICEACCESS *v177; // [rsp+148h] [rbp-8h]
  unsigned int v178; // [rsp+150h] [rbp+0h]
  struct _EX_RUNDOWN_REF *v179; // [rsp+158h] [rbp+8h] BYREF
  struct VIDSCH_SUBMIT_DATA_BASE *v180[2]; // [rsp+160h] [rbp+10h] BYREF
  __int64 v181; // [rsp+170h] [rbp+20h]
  __int64 v182; // [rsp+178h] [rbp+28h]
  struct DXGCONTEXT **v183; // [rsp+180h] [rbp+30h]
  RECT v184; // [rsp+188h] [rbp+38h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v185; // [rsp+198h] [rbp+48h] BYREF
  struct _DXGKARG_PRESENT v186; // [rsp+1D0h] [rbp+80h] BYREF
  struct DXGALLOCATIONREFERENCE *v187[6]; // [rsp+280h] [rbp+130h] BYREF
  _D3DKMT_PRESENT v188; // [rsp+2B0h] [rbp+160h] BYREF
  enum _D3DDDIFORMAT v189[10]; // [rsp+890h] [rbp+740h] BYREF
  unsigned __int8 v190[16]; // [rsp+8B8h] [rbp+768h] BYREF

  v4 = *((_QWORD *)this + 2);
  v183 = a4;
  v177 = a3;
  v9 = D3DDDI_FLIPINTERVAL_IMMEDIATE;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(v4 + 16) + 16LL)) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v10 + 24) = 2590LL;
    WdLogEvent5_WdAssertion(v10);
  }
  v11 = *((_QWORD *)this + 2);
  v12 = *(_QWORD *)(*(_QWORD *)(v11 + 16) + 16LL);
  if ( *(_QWORD *)(v11 + 1672) != v12 )
  {
    v13 = WdLogNewEntry5_WdAssertion(v12);
    *(_QWORD *)(v13 + 24) = 2591LL;
    WdLogEvent5_WdAssertion(v13);
  }
  v14 = *((_QWORD *)this + 2);
  VidPnSourceId = a2->VidPnSourceId;
  v167 = a2->VidPnSourceId;
  v16 = *(_QWORD *)(*(_QWORD *)(v14 + 16) + 16LL);
  v17 = *(unsigned int *)(v16 + 2176);
  v171 = v17;
  if ( a2->PresentPlaneCount > (unsigned int)v17 )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdWarning(v16, v14, v8);
    v18[3] = a2->PresentPlaneCount;
    v18[4] = v17;
LABEL_245:
    LODWORD(v24) = -1073741811;
    v18[5] = -1073741811LL;
LABEL_246:
    WdLogEvent5_WdWarning(v18);
    return (unsigned int)v24;
  }
  v19 = *(_DWORD *)(v14 + 4 * VidPnSourceId + 1032) >> 9;
  v182 = a2->VidPnSourceId;
  if ( (v19 & 1) == 0 )
  {
    v20 = DXGCONTEXT::CheckDevicePresentSettings(this, 1, 0, VidPnSourceId);
    v24 = v20;
    if ( v20 >= 0 )
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdWarning(v22, v21, v23);
      v24 = -1071775739LL;
    }
    else
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdWarning(v22, v21, v23);
    }
    v18[3] = v24;
    v18[4] = this;
    v18[5] = VidPnSourceId;
    goto LABEL_246;
  }
  if ( (a2->Flags.Value & 3) != 0 )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdWarning(v16, v14, v8);
    v18[3] = this;
    v18[4] = a2->Flags.Value;
    goto LABEL_245;
  }
  PagedPoolArray<DXGALLOCATIONREFERENCE,4>::PagedPoolArray<DXGALLOCATIONREFERENCE,4>(
    (__int64)v187,
    a2->ContextCount * v17);
  DXGDEVICE::GetDisplayedAllMultiPlaneOverlays(*((DXGDEVICE **)this + 2), VidPnSourceId, v187[0], v17);
  v25 = *((_QWORD *)this + 2);
  v181 = *(_QWORD *)v187[0];
  ADAPTER_DISPLAY::GetDDIEnabledPlanes(*(ADAPTER_DISPLAY **)(*(_QWORD *)(v25 + 1672) + 2304LL), VidPnSourceId, v190);
  memset(v189, 0, sizeof(v189));
  if ( !ADAPTER_RENDER::IsMultiPlaneOverlaySupported(*(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL))
    || (v26 = 0,
        *(_QWORD *)(*((_QWORD *)this + 2) + 1672LL) != *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    v26 = 1;
  }
  v161 = v26;
  DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(
                      *(DXGADAPTER ***)(*(_QWORD *)(*((_QWORD *)this + 2) + 1672LL) + 2304LL),
                      VidPnSourceId);
  if ( !DisplayModeInfo )
  {
    v29 = (_QWORD *)WdLogNewEntry5_WdError(right);
    LODWORD(v24) = -1073741811;
    v29[3] = -1073741811LL;
    v29[4] = this;
    v29[5] = VidPnSourceId;
LABEL_180:
    WdLogEvent5_WdError(v29);
    goto LABEL_243;
  }
  v30 = *(unsigned int *)DisplayModeInfo;
  v31 = *((unsigned int *)DisplayModeInfo + 1);
  pPostComposition = a2->pPostComposition;
  *(_QWORD *)&v170.right = *(_QWORD *)DisplayModeInfo;
  v170.top = 0;
  v162 = 0;
  v169 = 0;
  LODWORD(v176) = 0;
  if ( pPostComposition )
  {
    if ( pPostComposition->Flags.Value )
    {
      v33 = (_QWORD *)WdLogNewEntry5_WdWarning(right, pPostComposition, v30);
      v33[3] = this;
      Rotation = (__int64)a2->pPostComposition->Flags.0;
      goto LABEL_21;
    }
    if ( pPostComposition->Rotation != D3DDDI_ROTATION_IDENTITY )
    {
      v33 = (_QWORD *)WdLogNewEntry5_WdWarning(right, pPostComposition, v30);
      v33[3] = this;
      Rotation = a2->pPostComposition->Rotation;
LABEL_21:
      v33[4] = Rotation;
LABEL_191:
      LODWORD(v24) = -1073741811;
      v33[5] = -1073741811LL;
      goto LABEL_192;
    }
    if ( pPostComposition->SrcRect.left >= pPostComposition->SrcRect.right
      || pPostComposition->SrcRect.top >= pPostComposition->SrcRect.bottom
      || (left = pPostComposition->DstRect.left,
          right = (unsigned int)pPostComposition->DstRect.right,
          left >= (int)right)
      || (top = pPostComposition->DstRect.top, bottom = pPostComposition->DstRect.bottom, top >= bottom)
      || left < 0
      || (int)v30 < (int)right
      || top < 0
      || (int)v31 < bottom )
    {
      v33 = (_QWORD *)WdLogNewEntry5_WdWarning(right, pPostComposition, v30);
      LODWORD(v24) = -1073741811;
      v33[3] = this;
      v33[4] = -1073741811LL;
    }
    else
    {
      v38 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      if ( *(_BYTE *)(*(_QWORD *)(v38 + 16) + 2266LL) && !v26 )
      {
        SrcRect = pPostComposition->SrcRect;
        v40 = *(_QWORD *)&pPostComposition->SrcRect.left;
        v170 = SrcRect;
        right = *(_QWORD *)&SrcRect.right;
        v175 = v40;
        if ( (_DWORD)v40 || SrcRect.right != (_DWORD)v30 || HIDWORD(v40) || SrcRect.bottom != (_DWORD)v31 )
        {
          v162 = 1;
          v169 = SrcRect.right - v40;
          right = (unsigned int)(SrcRect.bottom - HIDWORD(v40));
          v176 = (unsigned int)right;
        }
        goto LABEL_42;
      }
      v33 = (_QWORD *)WdLogNewEntry5_WdWarning(v38, pPostComposition, v30);
      LODWORD(v24) = -1073741811;
      v33[3] = -1073741811LL;
      v33[4] = this;
    }
LABEL_192:
    WdLogEvent5_WdWarning(v33);
    goto LABEL_243;
  }
  v175 = 0LL;
LABEL_42:
  pDirtyRects = 0xFFFFFFFFLL;
  v159 = 0;
  v160 = 0;
  v42 = 0LL;
  v158 = 0;
  v43 = 0;
  v163 = -1;
  v44 = 0;
  LOBYTE(v31) = 0;
  v164 = 0;
  if ( v26 )
  {
    if ( a2->PresentPlaneCount != 1
      || (ppPresentPlanes = a2->ppPresentPlanes,
          right = (unsigned __int64)*ppPresentPlanes,
          (*ppPresentPlanes)->LayerIndex)
      || (*(_DWORD *)(right + 4) & 1) == 0 )
    {
      v29 = (_QWORD *)WdLogNewEntry5_WdError(right);
      LODWORD(v24) = -1073741811;
      v29[3] = -1073741811LL;
      v29[4] = this;
      PresentPlaneCount = a2->PresentPlaneCount;
LABEL_47:
      v29[5] = PresentPlaneCount;
      goto LABEL_180;
    }
  }
  v47 = 0;
  v168 = 0;
  v48 = 0;
  v165 = 0;
  if ( !a2->PresentPlaneCount )
    goto LABEL_183;
  while ( 1 )
  {
    v49 = v48;
    v50 = a2->ppPresentPlanes[v48];
    v172 = v50;
    LayerIndex = v50->LayerIndex;
    if ( (unsigned int)LayerIndex >= v171
      || (_mm_lfence(), v49 = (unsigned int)LayerIndex, ((1 << LayerIndex) & (unsigned int)v42) != 0) )
    {
      v33 = (_QWORD *)WdLogNewEntry5_WdWarning(v49, v42, pDirtyRects);
      v33[4] = LayerIndex;
      v33[3] = this;
      goto LABEL_191;
    }
    Value = (struct _D3DKMT_PLANE_SPECIFIC_INPUT_FLAGS::$390DB612F88C1DE2E40C850E65A6A89F::$1196FF6CE8067B2B35B898660F75E27E)v50->InputFlags.Value;
    v178 = (1 << LayerIndex) | v42;
    if ( (*(_BYTE *)&Value & 1) == 0 )
    {
      v96 = (struct DXGALLOCATION **)((char *)v187[0] + 8 * LayerIndex);
      if ( *v96 || v190[LayerIndex] )
        v158 = v31 + 1;
      v174[0] = 0LL;
      DXGALLOCATIONREFERENCE::MoveAssign(v96, (struct DXGALLOCATION **)v174);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(v174);
      goto LABEL_160;
    }
    v53 = (unsigned int)LayerIndex;
    if ( *((_QWORD *)v187[0] + LayerIndex) || v190[LayerIndex] )
      v159 = v43 + 1;
    else
      v160 = v44 + 1;
    v54 = 0;
    if ( v50->AllocationCount )
    {
      while ( 1 )
      {
        v55 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
        v56 = v172->pAllocationList[v54];
        DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v55 + 200));
        v57 = (v56 >> 6) & 0xFFFFFF;
        if ( (unsigned int)v57 < *(_DWORD *)(v55 + 240)
          && (v58 = *(_QWORD *)(v55 + 224),
              v59 = *(_DWORD *)(v58 + 16 * v57 + 8),
              ((v56 >> 25) & 0x60) == (*(_BYTE *)(v58 + 16 * v57 + 8) & 0x60))
          && (v59 & 0x2000) == 0
          && (v59 & 0x1F) != 0
          && (*(_BYTE *)(v58 + 16LL * (unsigned int)v57 + 8) & 0x1F) == 5 )
        {
          v60 = *(struct _EX_RUNDOWN_REF **)(v58 + 16LL * (unsigned int)v57);
        }
        else
        {
          v60 = 0LL;
        }
        DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v179, v60);
        ExReleasePushLockSharedEx(v55 + 200, 0LL);
        KeLeaveCriticalRegion();
        v24 = (unsigned int)v53 + v171 * v54;
        DXGALLOCATIONREFERENCE::MoveAssign((struct DXGALLOCATION **)v187[0] + v24, (struct DXGALLOCATION **)&v179);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v179);
        v64 = *((_QWORD *)v187[0] + v24);
        if ( !v64 )
          break;
        v65 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
        if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v64 + 8) + 16LL) + 16LL) != *(_QWORD *)(v65 + 16) )
        {
          v29 = (_QWORD *)WdLogNewEntry5_WdError(v65);
          v29[3] = *((_QWORD *)this + 2);
          v98 = *((_QWORD *)v187[0] + v24);
          LODWORD(v24) = -1073741811;
          v29[5] = -1073741811LL;
          v29[4] = v98;
          goto LABEL_180;
        }
        v50 = v172;
        if ( ++v54 >= v172->AllocationCount )
        {
          v48 = v165;
          LODWORD(pDirtyRects) = v163;
          goto LABEL_68;
        }
      }
      v33 = (_QWORD *)WdLogNewEntry5_WdWarning(v62, v61, v63);
      LODWORD(v24) = -1073741811;
      v33[3] = -1073741811LL;
      v33[4] = this;
      v33[5] = v172->pAllocationList[v54];
      goto LABEL_192;
    }
LABEL_68:
    _mm_lfence();
    v66 = v187[0];
    v67 = (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v187[0] + v53) + 48LL) + 4LL) & 0x2000) == 0;
    _mm_lfence();
    if ( v67 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v187[0] + v53) + 48LL) + 4LL) & 8) == 0 )
      {
        _mm_lfence();
        if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v187[0] + v53) + 48LL) + 4LL) & 1) == 0 )
        {
          _mm_lfence();
          v69 = *(_QWORD *)(*((_QWORD *)v187[0] + v53) + 48LL);
          if ( (*(_DWORD *)(v69 + 4) & 2) == 0 )
          {
LABEL_71:
            _mm_lfence();
            v29 = (_QWORD *)WdLogNewEntry5_WdError(v69);
            LODWORD(v24) = -1073741811;
            v29[3] = -1073741811LL;
            v29[4] = this;
            v29[5] = *((_QWORD *)v187[0] + v53);
            v29[6] = *(_QWORD *)(*((_QWORD *)v187[0] + v53) + 48LL);
            v29[7] = *v50->pAllocationList;
            goto LABEL_180;
          }
        }
      }
      _mm_lfence();
      if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)v187[0] + v53) + 48LL) + 4LL) & 1) != 0 )
        LODWORD(pDirtyRects) = v53;
      v163 = pDirtyRects;
    }
    else
    {
      v68 = (const struct DXGALLOCATION *)*((_QWORD *)v187[0] + v53);
      if ( (*(_DWORD *)(*((_QWORD *)v68 + 6) + 4LL) & 0x20) == 0
        && !DXGDEVICE::IsDirectFlipAllocationPinned(*((DXGDEVICE **)this + 2), v68) )
      {
        goto LABEL_71;
      }
    }
    _mm_lfence();
    memset(&v185, 0, sizeof(v185));
    v185.hAllocation = *(HANDLE *)(*(_QWORD *)(*((_QWORD *)v66 + v53) + 48LL) + 16LL);
    v71 = ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL), &v185, v70);
    v24 = v71;
    if ( v71 < 0 )
    {
      _mm_lfence();
      v29 = (_QWORD *)WdLogNewEntry5_WdError(v72);
      v29[3] = v24;
      v29[4] = this;
      v29[5] = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v187[0] + v53) + 48LL) + 16LL);
      v95 = *((_QWORD *)v187[0] + v53);
      goto LABEL_179;
    }
    pPlaneAttributes = v50->pPlaneAttributes;
    v189[v53] = v185.Format;
    v74 = pPlaneAttributes->SrcRect.left;
    FlipInterval = (unsigned int)pPlaneAttributes->SrcRect.right;
    if ( v74 >= (int)FlipInterval )
      goto LABEL_177;
    v76 = pPlaneAttributes->SrcRect.top;
    v77 = pPlaneAttributes->SrcRect.bottom;
    if ( v76 >= v77 )
      goto LABEL_177;
    LODWORD(v174[0]) = v185.Width;
    Height = v185.Height;
    if ( v74 < 0 )
      goto LABEL_177;
    if ( (int)v185.Width < (int)FlipInterval )
      goto LABEL_177;
    if ( v76 < 0 )
      goto LABEL_177;
    if ( (int)v185.Height < v77 )
      goto LABEL_177;
    v78 = pPlaneAttributes->ClipRect.left;
    FlipInterval = (unsigned int)pPlaneAttributes->ClipRect.right;
    if ( v78 >= (int)FlipInterval )
      goto LABEL_177;
    v42 = (unsigned int)pPlaneAttributes->ClipRect.top;
    pDirtyRects = (unsigned int)pPlaneAttributes->ClipRect.bottom;
    if ( (int)v42 >= (int)pDirtyRects )
      goto LABEL_177;
    v31 = (unsigned int)pPlaneAttributes->DstRect.left;
    v79 = pPlaneAttributes->DstRect.right;
    if ( (int)v31 >= v79 )
      goto LABEL_177;
    v80 = pPlaneAttributes->DstRect.top;
    v81 = pPlaneAttributes->DstRect.bottom;
    if ( v80 >= v81
      || (int)v175 > v78
      || v170.right < (int)FlipInterval
      || v170.top > (int)v42
      || v170.bottom < (int)pDirtyRects
      || (int)v31 > v78
      || v79 < (int)FlipInterval
      || v80 > (int)v42
      || v81 < (int)pDirtyRects )
    {
      goto LABEL_177;
    }
    v82 = pPlaneAttributes->Rotation;
    if ( v82 )
    {
      if ( (unsigned int)(v82 - 1) > 3 )
      {
        v29 = (_QWORD *)WdLogNewEntry5_WdError(FlipInterval);
        LODWORD(v24) = -1073741811;
        v29[3] = -1073741811LL;
        v29[4] = this;
        v29[5] = v48;
        v95 = v50->pPlaneAttributes->Rotation;
        goto LABEL_179;
      }
    }
    else
    {
      pPlaneAttributes->Rotation = D3DDDI_ROTATION_IDENTITY;
    }
    v83 = 0;
    DirtyRectCount = pPlaneAttributes->DirtyRectCount;
    LOBYTE(v42) = 1;
    if ( DirtyRectCount )
    {
      while ( (_BYTE)v42 )
      {
        pDirtyRects = (__int64)pPlaneAttributes->pDirtyRects;
        v31 = *(unsigned int *)(pDirtyRects + 16LL * v83);
        v84 = *(_DWORD *)(pDirtyRects + 16LL * v83 + 8);
        v85 = (int)v31 < v84 && *(_DWORD *)(pDirtyRects + 16LL * v83 + 4) < *(_DWORD *)(pDirtyRects + 16LL * v83 + 12);
        v86 = v85 ? v42 : 0;
        v87 = pPlaneAttributes->SrcRect.left <= (int)v31
           && pPlaneAttributes->SrcRect.right >= v84
           && pPlaneAttributes->SrcRect.top <= *(_DWORD *)(pDirtyRects + 16LL * v83 + 4)
           && pPlaneAttributes->SrcRect.bottom >= *(_DWORD *)(pDirtyRects + 16LL * v83 + 12);
        ++v83;
        LOBYTE(v42) = v87 ? v86 : 0;
        if ( v83 >= DirtyRectCount )
        {
          if ( (_BYTE)v42 )
            goto LABEL_116;
          break;
        }
      }
      pPlaneAttributes->DirtyRectCount = 0;
    }
LABEL_116:
    FlipInterval = *(_QWORD *)(*((_QWORD *)this + 2) + 1672LL);
    if ( *(_BYTE *)(FlipInterval + 2230) )
    {
      v42 = (__int64)v50->pPlaneAttributes;
      pDirtyRects = v42 + 36;
      if ( *(_DWORD *)(v42 + 20) != *(_DWORD *)(v42 + 36)
        || *(_DWORD *)(v42 + 28) != *(_DWORD *)(v42 + 44)
        || *(_DWORD *)(v42 + 24) != *(_DWORD *)(v42 + 40)
        || *(_DWORD *)(v42 + 32) != *(_DWORD *)(v42 + 48) )
      {
        InverseXformMPORect3(&v184, (_DWORD *)v42, (_DWORD *)pDirtyRects);
        pPlaneAttributes->SrcRect = v184;
        pPlaneAttributes->DstRect = v50->pPlaneAttributes->ClipRect;
        v42 = (unsigned int)pPlaneAttributes->SrcRect.left;
        v88 = pPlaneAttributes->SrcRect.right;
        if ( (int)v42 >= v88
          || (v89 = pPlaneAttributes->SrcRect.top,
              pDirtyRects = (unsigned int)pPlaneAttributes->SrcRect.bottom,
              v89 >= (int)pDirtyRects)
          || (FlipInterval = (unsigned int)pPlaneAttributes->DstRect.left,
              v31 = (unsigned int)pPlaneAttributes->DstRect.right,
              (int)FlipInterval >= (int)v31)
          || (v90 = pPlaneAttributes->DstRect.top, v91 = pPlaneAttributes->DstRect.bottom, v90 >= v91)
          || (int)v42 < 0
          || SLODWORD(v174[0]) < v88
          || v89 < 0
          || Height < (int)pDirtyRects
          || (int)v175 > (int)FlipInterval
          || v170.right < (int)v31
          || v170.top > v90
          || v170.bottom < v91 )
        {
LABEL_177:
          v29 = (_QWORD *)WdLogNewEntry5_WdError(FlipInterval);
          LODWORD(v24) = -1073741811;
          PresentPlaneCount = v48;
          v29[3] = -1073741811LL;
          v29[4] = this;
          goto LABEL_47;
        }
      }
    }
    if ( !(_DWORD)v53 )
    {
      if ( v181 )
      {
        v31 = 0x2000LL;
        v92 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v187[0] + 48LL) + 4LL) & 0x2000;
        if ( v92 && (*(_DWORD *)(*(_QWORD *)(v181 + 48) + 4LL) & 0x2000) == 0 )
        {
          pDirtyRects = 1LL;
          v164 = 1;
LABEL_143:
          v42 = (unsigned int)(pPlaneAttributes->SrcRect.right - pPlaneAttributes->SrcRect.left);
          FlipInterval = (unsigned int)(pPlaneAttributes->DstRect.right - pPlaneAttributes->DstRect.left);
          if ( (_DWORD)FlipInterval != (_DWORD)v42 )
          {
            FlipInterval = *(_QWORD *)(*((_QWORD *)this + 2) + 1672LL);
            if ( *(_BYTE *)(FlipInterval + 2202) )
            {
              FlipInterval = (unsigned int)(pPlaneAttributes->SrcRect.bottom - pPlaneAttributes->SrcRect.top);
              LODWORD(v176) = pPlaneAttributes->SrcRect.bottom - pPlaneAttributes->SrcRect.top;
              v162 = 1;
              v169 = v42;
            }
          }
          goto LABEL_146;
        }
        if ( !v92 )
        {
          v93 = v164;
          if ( (*(_DWORD *)(*(_QWORD *)(v181 + 48) + 4LL) & 0x2000) != 0 )
            v93 = 1;
          v164 = v93;
          pDirtyRects = 1LL;
          goto LABEL_143;
        }
      }
      pDirtyRects = 1LL;
      goto LABEL_143;
    }
LABEL_146:
    if ( v161 )
    {
      pDirtyRects = (unsigned int)pPlaneAttributes->DstRect.left;
      if ( (_DWORD)pDirtyRects != pPlaneAttributes->SrcRect.left
        || (v42 = (unsigned int)pPlaneAttributes->DstRect.right, (_DWORD)v42 != pPlaneAttributes->SrcRect.right)
        || (FlipInterval = (unsigned int)pPlaneAttributes->DstRect.top,
            (_DWORD)FlipInterval != pPlaneAttributes->SrcRect.top)
        || __PAIR128__(__PAIR64__(v42, FlipInterval), *(_QWORD *)&pPlaneAttributes->SrcRect.bottom) != *(_OWORD *)&pPlaneAttributes->DstRect.bottom
        || pPlaneAttributes->DstRect.bottom != pPlaneAttributes->ClipRect.bottom )
      {
        v29 = (_QWORD *)WdLogNewEntry5_WdError(FlipInterval);
        LODWORD(v24) = -1073741811;
        v29[3] = -1073741811LL;
        v29[4] = this;
        goto LABEL_180;
      }
      if ( v50->pPlaneAttributes->Rotation != D3DDDI_ROTATION_IDENTITY )
      {
        v29 = (_QWORD *)WdLogNewEntry5_WdError(FlipInterval);
        LODWORD(v24) = -1073741811;
        v29[3] = -1073741811LL;
        v29[4] = this;
        v29[5] = (unsigned int)v50->pPlaneAttributes->Rotation;
        goto LABEL_180;
      }
      _mm_lfence();
      FlipInterval = (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v187[0] + v53) + 48LL) + 4LL) >> 6) & 0xF;
      if ( v167 != (_DWORD)FlipInterval )
      {
        _mm_lfence();
        v29 = (_QWORD *)WdLogNewEntry5_WdError(FlipInterval);
        v94 = v182;
        LODWORD(v24) = -1073741811;
        v29[3] = -1073741811LL;
        v29[4] = this;
        v29[5] = v94;
        v95 = (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v187[0] + v53) + 48LL) + 4LL) >> 6) & 0xF;
LABEL_179:
        v29[6] = v95;
        goto LABEL_180;
      }
    }
    v47 = v168;
    LODWORD(VidPnSourceId) = v167;
LABEL_160:
    if ( (v50->InputFlags.Value & 1) != 0 )
    {
      FlipInterval = (unsigned int)v50->FlipInterval;
      if ( (_DWORD)FlipInterval )
      {
        if ( (_DWORD)FlipInterval != 1 )
        {
          v33 = (_QWORD *)WdLogNewEntry5_WdWarning(FlipInterval, v42, pDirtyRects);
          v33[3] = this;
          v33[4] = v50->FlipInterval;
          goto LABEL_191;
        }
        v47 = 1;
        v168 = 1;
      }
    }
    if ( bTracingEnabled )
    {
      v97 = *v50->pAllocationList;
      pDirtyRects = v97
                  ? (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                                  + 16LL)
                                                                                      + 528LL)
                                                                          + 8LL)
                                                              + 336LL))(
                      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 536LL),
                      v97)
                  : 0LL;
      v42 = (__int64)v50->pPlaneAttributes;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqqpqddddddddddddqqqqqq(
          v50->InputFlags.Value & 1,
          v42,
          pDirtyRects,
          VidPnSourceId,
          v50->LayerIndex,
          *(_BYTE *)&v50->InputFlags.0 & 1,
          pDirtyRects,
          *(_DWORD *)v42,
          *(_DWORD *)(v42 + 4),
          *(_DWORD *)(v42 + 12),
          *(_DWORD *)(v42 + 8),
          *(_DWORD *)(v42 + 16),
          *(_DWORD *)(v42 + 20),
          *(_DWORD *)(v42 + 28),
          *(_DWORD *)(v42 + 24),
          *(_DWORD *)(v42 + 32),
          *(_DWORD *)(v42 + 36),
          *(_DWORD *)(v42 + 44),
          *(_DWORD *)(v42 + 40),
          *(_DWORD *)(v42 + 48),
          *(_DWORD *)(v42 + 52),
          *(_DWORD *)(v42 + 56),
          v157,
          *(_DWORD *)(v42 + 72),
          a2->HDRMetaDataType,
          *(_DWORD *)(v42 + 80));
    }
    v165 = ++v48;
    if ( v48 >= a2->PresentPlaneCount )
      break;
    v42 = v178;
    pDirtyRects = v163;
    LOBYTE(v31) = v158;
    v43 = v159;
    v44 = v160;
  }
  v9 = D3DDDI_FLIPINTERVAL_IMMEDIATE;
  if ( v47 )
    goto LABEL_185;
LABEL_183:
  FlipInterval = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( !*(_BYTE *)(*(_QWORD *)(FlipInterval + 16) + 2266LL) )
  {
    v99 = WdLogNewEntry5_WdWarning(FlipInterval, v42, pDirtyRects);
    *(_QWORD *)(v99 + 24) = 3162LL;
    WdLogEvent5_WdWarning(v99);
LABEL_185:
    v9 = D3DDDI_FLIPINTERVAL_ONE;
  }
  if ( !v160 && !v159 && !v158 )
  {
    v100 = WdLogNewEntry5_WdEvent(FlipInterval, v42, pDirtyRects, v31);
    *(_QWORD *)(v100 + 24) = 0LL;
    *(_QWORD *)(v100 + 32) = this;
    WdLogEvent5_WdEvent(v100);
    LODWORD(v24) = 0;
    goto LABEL_243;
  }
  memset(&v186, 0, sizeof(v186));
  v101 = v186.Flags.Value | 4;
  if ( !v161 )
    v101 = v186.Flags.Value | 0x1004;
  v102 = v101 ^ ((unsigned __int16)*(_DWORD *)&a2->Flags.0 << 8);
  v186.FlipInterval = v9;
  v180[0] = 0LL;
  v186.Flags.Value = v101 ^ v102 & 0x700 | 8;
  v180[1] = *(struct VIDSCH_SUBMIT_DATA_BASE **)(*((_QWORD *)this + 2) + 16LL);
  CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v180);
  v24 = (__int64)v180[0];
  if ( !v180[0] )
  {
    v106 = WdLogNewEntry5_WdLowResource(v103);
    *(_QWORD *)(v106 + 24) = 3198LL;
    WdLogEvent5_WdLowResource(v106);
    LODWORD(v24) = -1073741801;
    goto LABEL_242;
  }
  v107 = *(_DWORD *)v180[0] | 0x30020;
  *(_DWORD *)v180[0] = v107;
  v108 = v107 | 1;
  *(_DWORD *)(v24 + 112) = a2->PresentCount;
  *(_DWORD *)v24 = v108;
  if ( v164 )
    *(_DWORD *)v24 = v108 | 0x400000;
  v109 = *(_DWORD *)v24 | 4;
  *(_DWORD *)v24 = v109;
  if ( !v161 && a2->ContextCount <= 1 )
    *(_DWORD *)v24 = v109 | 0x800000;
  v110 = *(_DWORD *)v24 ^ (*(_DWORD *)v24 ^ (a2->Flags.Value >> 1)) & 8;
  *(_DWORD *)v24 = v110;
  v111 = ((unsigned __int8)v110 ^ (unsigned __int8)(a2->Flags.Value >> 1)) & 0x10 ^ v110;
  *(_DWORD *)v24 = v111;
  v112 = (v111 ^ (a2->Flags.Value << 19)) & 0x80000 ^ v111;
  *(_DWORD *)v24 = v112;
  v113 = (v112 ^ (a2->Flags.Value << 19)) & 0x100000 ^ v112;
  *(_DWORD *)v24 = v113;
  v114 = (v113 ^ (a2->Flags.Value << 19)) & 0x200000 ^ v113;
  *(_DWORD *)v24 = v114;
  *(_DWORD *)v24 = v114 ^ (v114 ^ (a2->Flags.Value << 21)) & 0x20000000;
  if ( (a2->Flags.Value & 0x40) != 0 )
    Duration = a2->Duration;
  else
    Duration = 0;
  *(_DWORD *)(v24 + 144) = Duration;
  *(_DWORD *)(v24 + 116) = VidPnSourceId;
  *(_DWORD *)(v24 + 124) = v9;
  *(_DWORD *)(v24 + 120) = 5;
  if ( v9 == D3DDDI_FLIPINTERVAL_IMMEDIATE )
    *(_DWORD *)v24 |= 0x10000000u;
  if ( (*(_DWORD *)&a2->Flags.0 & 0x80u) != 0 )
  {
    *(_DWORD *)v24 |= 0x40000000u;
    *(_DWORD *)(v24 + 352) = a2->HDRMetaDataType;
    if ( a2->HDRMetaDataType == D3DDDI_HDR_METADATA_TYPE_HDR10 )
    {
      pHDRMetaData = a2->pHDRMetaData;
      *(_OWORD *)(v24 + 356) = *(_OWORD *)pHDRMetaData;
      *(_QWORD *)(v24 + 372) = pHDRMetaData[2];
      *(_DWORD *)(v24 + 380) = *((_DWORD *)pHDRMetaData + 6);
    }
  }
  if ( a2->pPostComposition )
  {
    *(_DWORD *)v24 |= 0x80000000;
    *(RECT *)(v24 + 384) = a2->pPostComposition->SrcRect;
    *(RECT *)(v24 + 400) = a2->pPostComposition->DstRect;
  }
  v117 = *((_QWORD *)this + 2);
  v118 = *(_QWORD *)(v117 + 1672);
  if ( v118 == *(_QWORD *)(*(_QWORD *)(v117 + 16) + 16LL) )
  {
    if ( *(_DWORD *)(v117 + 4LL * (unsigned int)VidPnSourceId + 1608) == 5 )
    {
      v121 = v177;
    }
    else
    {
      if ( (a2->Flags.Value & 8) != 0 )
      {
        v119 = WdLogNewEntry5_WdEvent(v117, v118, v104, v105);
        LODWORD(v24) = -1071775739;
        *(_QWORD *)(v119 + 24) = -1071775739LL;
        WdLogEvent5_WdEvent(v119);
        goto LABEL_242;
      }
      v120 = WdLogNewEntry5_WdEvent(v117, v118, v104, v105);
      *(_QWORD *)(v120 + 24) = *((_QWORD *)this + 2);
      WdLogEvent5_WdEvent(v120);
      v121 = v177;
      COREDEVICEACCESS::Release(v177);
      DXGDEVICE::FlushScheduler(*((_QWORD **)this + 2), 3u);
      v122 = COREDEVICEACCESS::AcquireShared(v121);
      v127 = v122;
      if ( v122 < 0 )
      {
        v128 = WdLogNewEntry5_WdEvent(v124, v123, v125, v126);
        *(_QWORD *)(v128 + 24) = v127;
        WdLogEvent5_WdEvent(v128);
        COREDEVICEACCESS::AcquireSharedUncheck(v121);
        goto LABEL_218;
      }
    }
    v129 = DXGCONTEXT::WaitForQueuedPresentLimit(this, VidPnSourceId, (a2->Flags.Value & 8) == 0, v121);
    v127 = v129;
    if ( v129 < 0 )
    {
      v134 = WdLogNewEntry5_WdEvent(v131, v130, v132, v133);
      *(_QWORD *)(v134 + 24) = v127;
      *(_QWORD *)(v134 + 32) = this;
      WdLogEvent5_WdEvent(v134);
      goto LABEL_218;
    }
    v135 = DXGCONTEXT::CheckDevicePresentSettings(this, 1, 0, VidPnSourceId);
    v127 = v135;
    if ( v135 < 0 )
    {
      v140 = WdLogNewEntry5_WdEvent(v137, v136, v138, v139);
      *(_QWORD *)(v140 + 24) = v127;
      *(_QWORD *)(v140 + 32) = this;
      WdLogEvent5_WdEvent(v140);
      if ( (_DWORD)v127 == -1071774920 )
      {
        DXGCONTEXT::UpdateDisplayStateForFullWDDMDevice(this, a2, v187[0], v189, v163, *(_DWORD *)(v24 + 136));
        v141 = *(_DWORD *)(v24 + 120);
        LODWORD(v24) = 0;
        *(_DWORD *)(*((_QWORD *)this + 2) + 4LL * (unsigned int)VidPnSourceId + 1608) = v141;
        goto LABEL_242;
      }
LABEL_218:
      LODWORD(v24) = v127;
      goto LABEL_242;
    }
    if ( *((_QWORD *)this + 40) )
    {
      v142 = WdLogNewEntry5_WdAssertion(v137);
      *(_QWORD *)(v142 + 24) = 3322LL;
      WdLogEvent5_WdAssertion(v142);
    }
    LODWORD(v127) = DXGCONTEXT::SubmitPresentMultiPlaneOverlays3(
                      this,
                      a2,
                      v160,
                      v159,
                      v158,
                      v187[0],
                      v190,
                      &v186,
                      (struct VIDSCH_SUBMIT_DATA_BASE *)v24,
                      v183);
    if ( (int)v127 >= 0 )
    {
      v143 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1672LL) + 2304LL) + 112LL);
      if ( *(_DWORD *)(v143 + 3760LL * (unsigned int)VidPnSourceId + 1068) == -1 )
      {
        v144 = WdLogNewEntry5_WdAssertion(v143);
        *(_QWORD *)(v144 + 24) = 3339LL;
        WdLogEvent5_WdAssertion(v144);
      }
      DXGCONTEXT::UpdateDisplayStateForFullWDDMDevice(this, a2, v187[0], v189, v163, *(_DWORD *)(v24 + 136));
      v145 = v176;
      v146 = v169;
      v147 = v162;
      *(_DWORD *)(*((_QWORD *)this + 2) + 4LL * (unsigned int)VidPnSourceId + 1608) = *(_DWORD *)(v24 + 120);
      goto LABEL_235;
    }
    goto LABEL_236;
  }
  if ( v118 )
  {
    v148 = a2->ppPresentPlanes;
    v149 = *v148;
    if ( (*v148)->LayerIndex )
    {
      v150 = WdLogNewEntry5_WdAssertion(v117);
      *(_QWORD *)(v150 + 24) = 3363LL;
      WdLogEvent5_WdAssertion(v150);
    }
    memset(&v188, 0, sizeof(v188));
    ConvertMPOThunkToLegacyPresentThunk(&v188, a2, v149);
    v151 = DXGCONTEXT::DisplayOnlyPresent(
             (struct _KTHREAD ***)this,
             &v188,
             *(struct DXGALLOCATION **)v187[0],
             (unsigned int)VidPnSourceId,
             &v186,
             v177);
    v145 = 0;
    v146 = 0;
    v147 = 0;
    LODWORD(v127) = v151;
LABEL_235:
    UpdatePostComposition(
      VidPnSourceId,
      v147,
      v146,
      v145,
      *(struct ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)this + 2) + 1672LL) + 2304LL));
LABEL_236:
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL))
      && (_DWORD)v127 != -1073741130 )
    {
      v153 = WdLogNewEntry5_WdAssertion(v152);
      *(_QWORD *)(v153 + 24) = 3385LL;
      WdLogEvent5_WdAssertion(v153);
    }
    if ( *((_QWORD *)this + 40) )
    {
      v154 = WdLogNewEntry5_WdAssertion(v152);
      *(_QWORD *)(v154 + 24) = 3386LL;
      WdLogEvent5_WdAssertion(v154);
    }
    goto LABEL_218;
  }
  v155 = WdLogNewEntry5_WdAssertion(v117);
  *(_QWORD *)(v155 + 24) = *((_QWORD *)this + 2);
  *(_QWORD *)(v155 + 32) = -1073741822LL;
  WdLogEvent5_WdAssertion(v155);
  LODWORD(v24) = -1073741811;
LABEL_242:
  CVidSchSubmitData::~CVidSchSubmitData((struct _SLIST_ENTRY **)v180);
LABEL_243:
  PagedPoolArray<DXGALLOCATIONREFERENCE,4>::~PagedPoolArray<DXGALLOCATIONREFERENCE,4>(v187);
  return (unsigned int)v24;
}
