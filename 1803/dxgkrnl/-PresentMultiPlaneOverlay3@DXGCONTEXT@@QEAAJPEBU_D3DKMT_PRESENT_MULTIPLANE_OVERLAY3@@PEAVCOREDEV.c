/*
 * XREFs of ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C01D8C08
 * Callers:
 *     ?PresentMultiPlaneOverlay2@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C01D8988 (-PresentMultiPlaneOverlay2@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAVCOREDEV.c)
 *     ?PresentMultiPlaneOverlay@DXGCONTEXT@@QEAAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C01D9FF4 (-PresentMultiPlaneOverlay@DXGCONTEXT@@QEAAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAVCOREDEVICE.c)
 *     DxgkPresentMultiPlaneOverlay3 @ 0x1C01DC260 (DxgkPresentMultiPlaneOverlay3.c)
 * Callees:
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C00092DC (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C0014A18 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C001552C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0015700 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C001576C (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0016650 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C002486C (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     ?GetDisplayedAllMultiPlaneOverlays@DXGDEVICE@@QEAAXIPEAVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C003736C (-GetDisplayedAllMultiPlaneOverlays@DXGDEVICE@@QEAAXIPEAVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     McTemplateK0qqqpqddddddddddddqqqqqq @ 0x1C0037400 (McTemplateK0qqqpqddddddddddddqqqqqq.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C00962E0 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ @ 0x1C00A6160 (-IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00E8320 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00E8360 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C00F263C (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 *     ?IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z @ 0x1C010B07C (-IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C010EEAC (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ??0?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$03@@QEAA@I@Z @ 0x1C011020C (--0-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$03@@QEAA@I@Z.c)
 *     ??1?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$03@@QEAA@XZ @ 0x1C0110284 (--1-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$03@@QEAA@XZ.c)
 *     ?CheckDevicePresentSettings@DXGCONTEXT@@QEAAJHHI@Z @ 0x1C0145C94 (-CheckDevicePresentSettings@DXGCONTEXT@@QEAAJHHI@Z.c)
 *     ?WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z @ 0x1C0145EA4 (-WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?GetDDIEnabledPlanes@ADAPTER_DISPLAY@@QEAAXIPEAE@Z @ 0x1C0154A78 (-GetDDIEnabledPlanes@ADAPTER_DISPLAY@@QEAAXIPEAE@Z.c)
 *     ?ConvertMPOThunkToLegacyPresentThunk@@YAXPEAU_D3DKMT_PRESENT@@PEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEBU_D3DKMT_MULTIPLANE_OVERLAY3@@@Z @ 0x1C01D82CC (-ConvertMPOThunkToLegacyPresentThunk@@YAXPEAU_D3DKMT_PRESENT@@PEBU_D3DKMT_PRESENT_MULTIPLANE_OVE.c)
 *     ?DisplayOnlyPresent@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGALLOCATION@@IPEAU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01D85A0 (-DisplayOnlyPresent@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGALLOCATION@@IPEAU_DXGKARG_PRESE.c)
 *     InverseXformMPORect3 @ 0x1C01D87E0 (InverseXformMPORect3.c)
 *     ?SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEPEBVDXGALLOCATIONREFERENCE@@PEAEPEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAPEAV1@@Z @ 0x1C01DA37C (-SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEP.c)
 *     ?UpdateDisplayStateForFullWDDMDevice@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVDXGALLOCATIONREFERENCE@@PEAW4_D3DDDIFORMAT@@HI@Z @ 0x1C01DB240 (-UpdateDisplayStateForFullWDDMDevice@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@P.c)
 *     ?UpdatePostComposition@@YAXIEIIPEAVADAPTER_DISPLAY@@@Z @ 0x1C01DB434 (-UpdatePostComposition@@YAXIEIIPEAVADAPTER_DISPLAY@@@Z.c)
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
  UINT v9; // r13d
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 VidPnSourceId; // r12
  __int64 v15; // rcx
  __int64 v16; // rbx
  _QWORD *v17; // rax
  int v18; // eax
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 LayerIndex; // rbx
  __int64 v24; // rax
  unsigned __int8 IsMultiPlaneOverlaySupported; // al
  __int64 v26; // rdx
  char v27; // bl
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  unsigned __int64 right; // rcx
  _QWORD *v30; // rax
  __int64 v31; // r8
  LONG v32; // r9d
  D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION *pPostComposition; // rdx
  _QWORD *v34; // rax
  __int64 Rotation; // rdx
  int left; // eax
  int top; // r10d
  LONG bottom; // r11d
  __int64 v39; // rcx
  RECT SrcRect; // xmm0
  __int64 v41; // rdx
  __int64 pDirtyRects; // r8
  char v43; // r15
  __int64 v44; // rdx
  unsigned __int8 v45; // r10
  unsigned __int8 v46; // r11
  char v47; // r9
  __int64 PresentPlaneCount; // rcx
  D3DKMT_MULTIPLANE_OVERLAY3 **ppPresentPlanes; // rax
  __int64 v50; // rcx
  D3DKMT_MULTIPLANE_OVERLAY3 *v51; // r15
  __int64 v52; // r14
  struct _D3DKMT_PLANE_SPECIFIC_INPUT_FLAGS::$390DB612F88C1DE2E40C850E65A6A89F::$1196FF6CE8067B2B35B898660F75E27E Value; // eax
  int v54; // r12d
  __int64 v55; // r8
  __int64 v56; // r15
  D3DKMT_HANDLE v57; // ebx
  __int64 v58; // rax
  __int64 v59; // r8
  int v60; // ecx
  struct _EX_RUNDOWN_REF *v61; // rdx
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // rax
  __int64 v66; // rcx
  struct DXGALLOCATIONREFERENCE *v67; // rbx
  bool v68; // zf
  const struct DXGALLOCATION *v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  int v72; // eax
  __int64 v73; // rcx
  const D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *pPlaneAttributes; // rbx
  int v75; // eax
  __int64 FlipInterval; // rcx
  int v77; // edx
  int v78; // r8d
  int v79; // eax
  int v80; // r9d
  int v81; // r11d
  int v82; // r10d
  int v83; // r12d
  D3DDDI_ROTATION v84; // eax
  UINT v85; // r12d
  LONG v86; // r9d
  LONG v87; // r10d
  BOOL v88; // eax
  char v89; // r11
  BOOL v90; // eax
  int v91; // r10d
  int v92; // eax
  int v93; // r9d
  int v94; // r11d
  int v95; // r12d
  int v96; // edx
  char v97; // r8
  __int64 v98; // r15
  __int64 v99; // rdx
  struct DXGALLOCATION **v100; // rcx
  int v101; // r14d
  D3DKMT_HANDLE v102; // r8d
  __int64 v103; // rdx
  D3DDDI_FLIPINTERVAL_TYPE v104; // r13d
  __int64 v105; // rax
  __int64 v106; // rax
  int v107; // ecx
  __int64 v108; // rcx
  __int64 v109; // rax
  int v110; // ecx
  int v111; // ecx
  int v112; // ecx
  int v113; // eax
  int v114; // ecx
  int v115; // ecx
  UINT v116; // ecx
  UINT v117; // ecx
  UINT v118; // ecx
  UINT v119; // edx
  UINT Duration; // eax
  int v121; // ecx
  _OWORD *v122; // rax
  _QWORD *pHDRMetaData; // rax
  __int64 v124; // rcx
  __int64 v125; // rdx
  __int64 v126; // rax
  __int64 v127; // rax
  COREDEVICEACCESS *v128; // r13
  int v129; // eax
  __int64 v130; // rdx
  __int64 v131; // rcx
  __int64 v132; // r14
  __int64 v133; // rax
  int v134; // eax
  __int64 v135; // rdx
  __int64 v136; // rcx
  __int64 v137; // rax
  int v138; // eax
  __int64 v139; // rdx
  __int64 v140; // rcx
  __int64 v141; // rax
  int v142; // eax
  __int64 v143; // rax
  __int64 v144; // rcx
  __int64 v145; // rax
  unsigned int v146; // r9d
  unsigned int v147; // r8d
  unsigned __int8 v148; // dl
  D3DKMT_MULTIPLANE_OVERLAY3 **v149; // rax
  const struct _D3DKMT_MULTIPLANE_OVERLAY3 *v150; // rbx
  __int64 v151; // rax
  int v152; // eax
  __int64 v153; // rcx
  __int64 v154; // rax
  __int64 v155; // rax
  __int64 v156; // rax
  int v158; // [rsp+B0h] [rbp-A0h]
  char v159; // [rsp+D0h] [rbp-80h]
  unsigned __int8 v160; // [rsp+D1h] [rbp-7Fh]
  unsigned __int8 v161; // [rsp+D2h] [rbp-7Eh]
  char v162; // [rsp+D3h] [rbp-7Dh]
  char v163; // [rsp+D4h] [rbp-7Ch]
  char v164; // [rsp+D8h] [rbp-78h]
  unsigned int v165; // [rsp+DCh] [rbp-74h]
  UINT v166; // [rsp+E0h] [rbp-70h]
  UINT DirtyRectCount; // [rsp+E0h] [rbp-70h]
  int v168; // [rsp+E8h] [rbp-68h]
  unsigned int v169; // [rsp+ECh] [rbp-64h]
  RECT v170; // [rsp+F0h] [rbp-60h]
  unsigned int v171; // [rsp+100h] [rbp-50h]
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v172; // [rsp+104h] [rbp-4Ch]
  D3DKMT_MULTIPLANE_OVERLAY3 *v173; // [rsp+110h] [rbp-40h]
  signed int Height; // [rsp+110h] [rbp-40h]
  struct _EX_RUNDOWN_REF *v175; // [rsp+118h] [rbp-38h] BYREF
  __int64 v176; // [rsp+120h] [rbp-30h]
  __int64 v177; // [rsp+130h] [rbp-20h]
  COREDEVICEACCESS *v178; // [rsp+138h] [rbp-18h]
  unsigned int v179; // [rsp+140h] [rbp-10h]
  struct _EX_RUNDOWN_REF *v180; // [rsp+148h] [rbp-8h] BYREF
  struct VIDSCH_SUBMIT_DATA_BASE *v181[2]; // [rsp+150h] [rbp+0h] BYREF
  __int64 v182; // [rsp+160h] [rbp+10h]
  __int64 v183; // [rsp+168h] [rbp+18h]
  struct DXGCONTEXT **v184; // [rsp+170h] [rbp+20h]
  RECT v185; // [rsp+178h] [rbp+28h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v186; // [rsp+188h] [rbp+38h] BYREF
  struct DXGALLOCATIONREFERENCE *v187[7]; // [rsp+1B8h] [rbp+68h] BYREF
  struct _DXGKARG_PRESENT v188; // [rsp+1F0h] [rbp+A0h] BYREF
  _D3DKMT_PRESENT v189; // [rsp+2A0h] [rbp+150h] BYREF
  enum _D3DDDIFORMAT v190[10]; // [rsp+880h] [rbp+730h] BYREF
  unsigned __int8 v191[16]; // [rsp+8A8h] [rbp+758h] BYREF

  v4 = *((_QWORD *)this + 2);
  v184 = a4;
  v178 = a3;
  v9 = 0;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(v4 + 16) + 16LL)) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v10 + 24) = 2678LL;
    WdLogEvent5_WdAssertion(v10);
  }
  v11 = *((_QWORD *)this + 2);
  v12 = *(_QWORD *)(*(_QWORD *)(v11 + 16) + 16LL);
  if ( *(_QWORD *)(v11 + 1688) != v12 )
  {
    v13 = WdLogNewEntry5_WdAssertion(v12);
    *(_QWORD *)(v13 + 24) = 2679LL;
    WdLogEvent5_WdAssertion(v13);
    v11 = *((_QWORD *)this + 2);
  }
  *((_BYTE *)this + 402) = 1;
  VidPnSourceId = a2->VidPnSourceId;
  v172 = a2->VidPnSourceId;
  v15 = *(_QWORD *)(*(_QWORD *)(v11 + 16) + 16LL);
  v16 = *(unsigned int *)(v15 + 2312);
  v171 = v16;
  if ( a2->PresentPlaneCount > (unsigned int)v16 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdWarning(v15, v11, v8);
    v17[3] = a2->PresentPlaneCount;
    v17[4] = v16;
LABEL_251:
    LODWORD(LayerIndex) = -1073741811;
    v17[5] = -1073741811LL;
LABEL_252:
    WdLogEvent5_WdWarning(v17);
    return (unsigned int)LayerIndex;
  }
  v18 = *(_DWORD *)(v11 + 4 * VidPnSourceId + 1048) >> 9;
  v183 = a2->VidPnSourceId;
  if ( (v18 & 1) == 0 )
  {
    v19 = DXGCONTEXT::CheckDevicePresentSettings(this, 1, 0, VidPnSourceId);
    LayerIndex = v19;
    if ( v19 >= 0 )
    {
      v17 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v20, v22);
      LayerIndex = -1071775739LL;
    }
    else
    {
      v17 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v20, v22);
    }
    v17[3] = LayerIndex;
    v17[4] = this;
    v17[5] = VidPnSourceId;
    goto LABEL_252;
  }
  if ( (a2->Flags.Value & 3) != 0 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdWarning(v15, v11, v8);
    v17[3] = this;
    v17[4] = a2->Flags.Value;
    goto LABEL_251;
  }
  PagedPoolArray<DXGALLOCATIONREFERENCE,4>::PagedPoolArray<DXGALLOCATIONREFERENCE,4>(
    (__int64)v187,
    v16 * a2->ContextCount);
  DXGDEVICE::GetDisplayedAllMultiPlaneOverlays(*((DXGDEVICE **)this + 2), VidPnSourceId, v187[0], v16);
  v24 = *((_QWORD *)this + 2);
  v182 = *(_QWORD *)v187[0];
  ADAPTER_DISPLAY::GetDDIEnabledPlanes(*(ADAPTER_DISPLAY **)(*(_QWORD *)(v24 + 1688) + 2456LL), VidPnSourceId, v191);
  memset(v190, 0, sizeof(v190));
  IsMultiPlaneOverlaySupported = ADAPTER_RENDER::IsMultiPlaneOverlaySupported(*(ADAPTER_RENDER **)(*((_QWORD *)this + 2)
                                                                                                 + 16LL));
  v26 = *((_QWORD *)this + 2);
  if ( !IsMultiPlaneOverlaySupported || (v27 = 0, *(_QWORD *)(v26 + 1688) != *(_QWORD *)(*(_QWORD *)(v26 + 16) + 16LL)) )
    v27 = 1;
  v162 = v27;
  DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(
                      *(DXGADAPTER ***)(*(_QWORD *)(v26 + 1688) + 2456LL),
                      VidPnSourceId);
  if ( !DisplayModeInfo )
  {
    v30 = (_QWORD *)WdLogNewEntry5_WdError(right);
    LODWORD(LayerIndex) = -1073741811;
    v30[3] = -1073741811LL;
    v30[4] = this;
    v30[5] = VidPnSourceId;
LABEL_182:
    WdLogEvent5_WdError(v30);
    goto LABEL_249;
  }
  v31 = *(unsigned int *)DisplayModeInfo;
  v32 = *((_DWORD *)DisplayModeInfo + 1);
  pPostComposition = a2->pPostComposition;
  *(_QWORD *)&v170.right = *(_QWORD *)DisplayModeInfo;
  v170.top = 0;
  v163 = 0;
  v169 = 0;
  LODWORD(v177) = 0;
  if ( pPostComposition )
  {
    if ( pPostComposition->Flags.Value )
    {
      v34 = (_QWORD *)WdLogNewEntry5_WdWarning(right, pPostComposition, v31);
      v34[3] = this;
      Rotation = (__int64)a2->pPostComposition->Flags.0;
      goto LABEL_21;
    }
    if ( pPostComposition->Rotation != D3DDDI_ROTATION_IDENTITY )
    {
      v34 = (_QWORD *)WdLogNewEntry5_WdWarning(right, pPostComposition, v31);
      v34[3] = this;
      Rotation = a2->pPostComposition->Rotation;
LABEL_21:
      v34[4] = Rotation;
LABEL_188:
      LODWORD(LayerIndex) = -1073741811;
      v34[5] = -1073741811LL;
      goto LABEL_189;
    }
    if ( pPostComposition->SrcRect.left >= pPostComposition->SrcRect.right
      || pPostComposition->SrcRect.top >= pPostComposition->SrcRect.bottom
      || (left = pPostComposition->DstRect.left,
          right = (unsigned int)pPostComposition->DstRect.right,
          left >= (int)right)
      || (top = pPostComposition->DstRect.top, bottom = pPostComposition->DstRect.bottom, top >= bottom)
      || left < 0
      || (int)v31 < (int)right
      || top < 0
      || v32 < bottom )
    {
      v34 = (_QWORD *)WdLogNewEntry5_WdWarning(right, pPostComposition, v31);
      LODWORD(LayerIndex) = -1073741811;
      v34[3] = this;
      v34[4] = -1073741811LL;
    }
    else
    {
      v39 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      if ( *(_BYTE *)(*(_QWORD *)(v39 + 16) + 2410LL) && !v27 )
      {
        SrcRect = pPostComposition->SrcRect;
        v41 = *(_QWORD *)&pPostComposition->SrcRect.left;
        v170 = SrcRect;
        right = *(_QWORD *)&SrcRect.right;
        v176 = v41;
        if ( (_DWORD)v41 || SrcRect.right != (_DWORD)v31 || HIDWORD(v41) || SrcRect.bottom != v32 )
        {
          v163 = 1;
          v169 = SrcRect.right - v41;
          right = (unsigned int)(SrcRect.bottom - HIDWORD(v41));
          v177 = (unsigned int)right;
        }
        goto LABEL_42;
      }
      v34 = (_QWORD *)WdLogNewEntry5_WdWarning(v39, pPostComposition, v31);
      LODWORD(LayerIndex) = -1073741811;
      v34[3] = -1073741811LL;
      v34[4] = this;
    }
LABEL_189:
    WdLogEvent5_WdWarning(v34);
    goto LABEL_249;
  }
  v176 = 0LL;
LABEL_42:
  pDirtyRects = 0xFFFFFFFFLL;
  v160 = 0;
  v43 = 0;
  v164 = 0;
  v44 = 0LL;
  v161 = 0;
  v45 = 0;
  v159 = 0;
  v46 = 0;
  v165 = -1;
  v47 = 0;
  if ( v27 )
  {
    if ( a2->PresentPlaneCount != 1
      || (ppPresentPlanes = a2->ppPresentPlanes,
          right = (unsigned __int64)*ppPresentPlanes,
          (*ppPresentPlanes)->LayerIndex)
      || (*(_DWORD *)(right + 4) & 1) == 0 )
    {
      v30 = (_QWORD *)WdLogNewEntry5_WdError(right);
      LODWORD(LayerIndex) = -1073741811;
      v30[3] = -1073741811LL;
      v30[4] = this;
      PresentPlaneCount = a2->PresentPlaneCount;
LABEL_45:
      v30[5] = PresentPlaneCount;
      goto LABEL_182;
    }
  }
  LODWORD(LayerIndex) = 0;
  v168 = 0;
  v166 = 0;
  if ( !a2->PresentPlaneCount )
    goto LABEL_185;
  while ( 1 )
  {
    v50 = v9;
    v51 = a2->ppPresentPlanes[v9];
    v173 = v51;
    LayerIndex = v51->LayerIndex;
    if ( (unsigned int)LayerIndex >= v171
      || (_mm_lfence(), v50 = (unsigned int)LayerIndex, ((1 << LayerIndex) & (unsigned int)v44) != 0) )
    {
      v34 = (_QWORD *)WdLogNewEntry5_WdWarning(v50, v44, pDirtyRects);
      v34[4] = LayerIndex;
      v34[3] = this;
      goto LABEL_188;
    }
    v52 = (unsigned int)LayerIndex;
    Value = (struct _D3DKMT_PLANE_SPECIFIC_INPUT_FLAGS::$390DB612F88C1DE2E40C850E65A6A89F::$1196FF6CE8067B2B35B898660F75E27E)v51->InputFlags.Value;
    v179 = (1 << LayerIndex) | v44;
    if ( (*(_BYTE *)&Value & 1) == 0 )
    {
      v100 = (struct DXGALLOCATION **)((char *)v187[0] + 8 * LayerIndex);
      LODWORD(LayerIndex) = 0;
      if ( *v100 || v191[v52] )
        v159 = v47 + 1;
      v175 = 0LL;
      DXGALLOCATIONREFERENCE::MoveAssign(v100, (struct DXGALLOCATION **)&v175);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v175);
      goto LABEL_161;
    }
    if ( *((_QWORD *)v187[0] + LayerIndex) || v191[LayerIndex] )
      v160 = v45 + 1;
    else
      v161 = v46 + 1;
    v54 = 0;
    if ( v51->AllocationCount )
    {
      v55 = *((_QWORD *)this + 2);
      while ( 1 )
      {
        v56 = *(_QWORD *)(v55 + 40);
        v57 = v173->pAllocationList[v54];
        DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v56 + 208));
        v58 = (v57 >> 6) & 0xFFFFFF;
        if ( (unsigned int)v58 < *(_DWORD *)(v56 + 248)
          && (v59 = *(_QWORD *)(v56 + 232),
              v60 = *(_DWORD *)(v59 + 16 * v58 + 8),
              ((v57 >> 25) & 0x60) == (*(_BYTE *)(v59 + 16 * v58 + 8) & 0x60))
          && (v60 & 0x2000) == 0
          && (v60 & 0x1F) == 5 )
        {
          v61 = *(struct _EX_RUNDOWN_REF **)(v59 + 16LL * (unsigned int)v58);
        }
        else
        {
          v61 = 0LL;
        }
        DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v180, v61);
        ExReleasePushLockSharedEx(v56 + 208, 0LL);
        KeLeaveCriticalRegion();
        LayerIndex = (unsigned int)v52 + v171 * v54;
        DXGALLOCATIONREFERENCE::MoveAssign(
          (struct DXGALLOCATION **)v187[0] + LayerIndex,
          (struct DXGALLOCATION **)&v180);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v180);
        v65 = *((_QWORD *)v187[0] + LayerIndex);
        if ( !v65 )
          break;
        v55 = *((_QWORD *)this + 2);
        v66 = *(_QWORD *)(*(_QWORD *)(v55 + 16) + 16LL);
        if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v65 + 8) + 16LL) + 16LL) != v66 )
        {
          v30 = (_QWORD *)WdLogNewEntry5_WdError(v66);
          v30[3] = *((_QWORD *)this + 2);
          v103 = *((_QWORD *)v187[0] + LayerIndex);
          LODWORD(LayerIndex) = -1073741811;
          v30[5] = -1073741811LL;
          v30[4] = v103;
          goto LABEL_182;
        }
        v51 = v173;
        if ( ++v54 >= v173->AllocationCount )
        {
          v9 = v166;
          LODWORD(pDirtyRects) = v165;
          goto LABEL_68;
        }
      }
      v34 = (_QWORD *)WdLogNewEntry5_WdWarning(v63, v62, v64);
      LODWORD(LayerIndex) = -1073741811;
      v34[3] = -1073741811LL;
      v34[4] = this;
      v34[5] = v173->pAllocationList[v54];
      goto LABEL_189;
    }
LABEL_68:
    _mm_lfence();
    v67 = v187[0];
    v68 = (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v187[0] + v52) + 48LL) + 4LL) & 0x2000) == 0;
    _mm_lfence();
    if ( v68 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v187[0] + v52) + 48LL) + 4LL) & 8) == 0 )
      {
        _mm_lfence();
        if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v187[0] + v52) + 48LL) + 4LL) & 1) == 0 )
        {
          _mm_lfence();
          v70 = *(_QWORD *)(*((_QWORD *)v187[0] + v52) + 48LL);
          if ( (*(_DWORD *)(v70 + 4) & 2) == 0 )
          {
LABEL_71:
            _mm_lfence();
            v30 = (_QWORD *)WdLogNewEntry5_WdError(v70);
            LODWORD(LayerIndex) = -1073741811;
            v30[3] = -1073741811LL;
            v30[4] = this;
            v30[5] = *((_QWORD *)v187[0] + v52);
            v30[6] = *(_QWORD *)(*((_QWORD *)v187[0] + v52) + 48LL);
            v30[7] = *v51->pAllocationList;
            goto LABEL_182;
          }
        }
      }
      _mm_lfence();
      if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)v187[0] + v52) + 48LL) + 4LL) & 1) != 0 )
        LODWORD(pDirtyRects) = v52;
      v165 = pDirtyRects;
    }
    else
    {
      v69 = (const struct DXGALLOCATION *)*((_QWORD *)v187[0] + v52);
      if ( (*(_DWORD *)(*((_QWORD *)v69 + 6) + 4LL) & 0x20) == 0
        && !DXGDEVICE::IsDirectFlipAllocationPinned(*((DXGDEVICE **)this + 2), v69) )
      {
        goto LABEL_71;
      }
    }
    _mm_lfence();
    memset(&v186, 0, sizeof(v186));
    v186.hAllocation = *(HANDLE *)(*(_QWORD *)(*((_QWORD *)v67 + v52) + 48LL) + 16LL);
    v72 = ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL), &v186, v71);
    LayerIndex = v72;
    if ( v72 < 0 )
    {
      _mm_lfence();
      v30 = (_QWORD *)WdLogNewEntry5_WdError(v73);
      v30[3] = LayerIndex;
      v30[4] = this;
      v30[5] = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v187[0] + v52) + 48LL) + 16LL);
      v99 = *((_QWORD *)v187[0] + v52);
      goto LABEL_181;
    }
    pPlaneAttributes = v51->pPlaneAttributes;
    v190[v52] = v186.Format;
    v75 = pPlaneAttributes->SrcRect.left;
    FlipInterval = (unsigned int)pPlaneAttributes->SrcRect.right;
    if ( v75 >= (int)FlipInterval )
      goto LABEL_179;
    v77 = pPlaneAttributes->SrcRect.top;
    v78 = pPlaneAttributes->SrcRect.bottom;
    if ( v77 >= v78 )
      goto LABEL_179;
    LODWORD(v175) = v186.Width;
    Height = v186.Height;
    if ( v75 < 0 )
      goto LABEL_179;
    if ( (int)v186.Width < (int)FlipInterval )
      goto LABEL_179;
    if ( v77 < 0 )
      goto LABEL_179;
    if ( (int)v186.Height < v78 )
      goto LABEL_179;
    v79 = pPlaneAttributes->ClipRect.left;
    FlipInterval = (unsigned int)pPlaneAttributes->ClipRect.right;
    if ( v79 >= (int)FlipInterval )
      goto LABEL_179;
    v44 = (unsigned int)pPlaneAttributes->ClipRect.top;
    pDirtyRects = (unsigned int)pPlaneAttributes->ClipRect.bottom;
    if ( (int)v44 >= (int)pDirtyRects )
      goto LABEL_179;
    v80 = pPlaneAttributes->DstRect.left;
    v81 = pPlaneAttributes->DstRect.right;
    if ( v80 >= v81 )
      goto LABEL_179;
    v82 = pPlaneAttributes->DstRect.top;
    v83 = pPlaneAttributes->DstRect.bottom;
    if ( v82 >= v83
      || (int)v176 > v79
      || v170.right < (int)FlipInterval
      || v170.top > (int)v44
      || v170.bottom < (int)pDirtyRects
      || v80 > v79
      || v81 < (int)FlipInterval
      || v82 > (int)v44
      || v83 < (int)pDirtyRects )
    {
      goto LABEL_179;
    }
    v84 = pPlaneAttributes->Rotation;
    if ( v84 )
    {
      if ( (unsigned int)(v84 - 1) > 3 )
      {
        v30 = (_QWORD *)WdLogNewEntry5_WdError(FlipInterval);
        LODWORD(LayerIndex) = -1073741811;
        v30[3] = -1073741811LL;
        v30[4] = this;
        v30[5] = v9;
        v99 = v51->pPlaneAttributes->Rotation;
        goto LABEL_181;
      }
    }
    else
    {
      pPlaneAttributes->Rotation = D3DDDI_ROTATION_IDENTITY;
    }
    v85 = 0;
    DirtyRectCount = pPlaneAttributes->DirtyRectCount;
    LOBYTE(v44) = 1;
    if ( DirtyRectCount )
    {
      while ( (_BYTE)v44 )
      {
        pDirtyRects = (__int64)pPlaneAttributes->pDirtyRects;
        v86 = *(_DWORD *)(pDirtyRects + 16LL * v85);
        v87 = *(_DWORD *)(pDirtyRects + 16LL * v85 + 8);
        v88 = v86 < v87 && *(_DWORD *)(pDirtyRects + 16LL * v85 + 4) < *(_DWORD *)(pDirtyRects + 16LL * v85 + 12);
        v89 = v88 ? v44 : 0;
        v90 = pPlaneAttributes->SrcRect.left <= v86
           && pPlaneAttributes->SrcRect.right >= v87
           && pPlaneAttributes->SrcRect.top <= *(_DWORD *)(pDirtyRects + 16LL * v85 + 4)
           && pPlaneAttributes->SrcRect.bottom >= *(_DWORD *)(pDirtyRects + 16LL * v85 + 12);
        ++v85;
        LOBYTE(v44) = v90 ? v89 : 0;
        if ( v85 >= DirtyRectCount )
        {
          if ( (_BYTE)v44 )
            goto LABEL_116;
          break;
        }
      }
      pPlaneAttributes->DirtyRectCount = 0;
    }
LABEL_116:
    FlipInterval = *(_QWORD *)(*((_QWORD *)this + 2) + 1688LL);
    if ( *(_BYTE *)(FlipInterval + 2374) )
    {
      v44 = (__int64)v51->pPlaneAttributes;
      pDirtyRects = v44 + 36;
      if ( *(_DWORD *)(v44 + 20) != *(_DWORD *)(v44 + 36)
        || *(_DWORD *)(v44 + 28) != *(_DWORD *)(v44 + 44)
        || *(_DWORD *)(v44 + 24) != *(_DWORD *)(v44 + 40)
        || *(_DWORD *)(v44 + 32) != *(_DWORD *)(v44 + 48) )
      {
        InverseXformMPORect3(&v185, (_DWORD *)v44, (int *)pDirtyRects);
        pPlaneAttributes->SrcRect = v185;
        pPlaneAttributes->DstRect = v51->pPlaneAttributes->ClipRect;
        v44 = (unsigned int)pPlaneAttributes->SrcRect.left;
        v91 = pPlaneAttributes->SrcRect.right;
        if ( (int)v44 >= v91
          || (v92 = pPlaneAttributes->SrcRect.top,
              pDirtyRects = (unsigned int)pPlaneAttributes->SrcRect.bottom,
              v92 >= (int)pDirtyRects)
          || (FlipInterval = (unsigned int)pPlaneAttributes->DstRect.left,
              v93 = pPlaneAttributes->DstRect.right,
              (int)FlipInterval >= v93)
          || (v94 = pPlaneAttributes->DstRect.top, v95 = pPlaneAttributes->DstRect.bottom, v94 >= v95)
          || (int)v44 < 0
          || (int)v175 < v91
          || v92 < 0
          || Height < (int)pDirtyRects
          || (int)v176 > (int)FlipInterval
          || v170.right < v93
          || v170.top > v94
          || v170.bottom < v95 )
        {
LABEL_179:
          v30 = (_QWORD *)WdLogNewEntry5_WdError(FlipInterval);
          LODWORD(LayerIndex) = -1073741811;
          PresentPlaneCount = v9;
          v30[3] = -1073741811LL;
          v30[4] = this;
          goto LABEL_45;
        }
      }
    }
    if ( !(_DWORD)v52 )
    {
      if ( v182 )
      {
        v96 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v187[0] + 48LL) + 4LL) & 0x2000;
        if ( v96 && (*(_DWORD *)(*(_QWORD *)(v182 + 48) + 4LL) & 0x2000) == 0 )
        {
          pDirtyRects = 1LL;
          v164 = 1;
LABEL_143:
          v44 = (unsigned int)(pPlaneAttributes->SrcRect.right - pPlaneAttributes->SrcRect.left);
          FlipInterval = (unsigned int)(pPlaneAttributes->DstRect.right - pPlaneAttributes->DstRect.left);
          if ( (_DWORD)FlipInterval != (_DWORD)v44 )
          {
            FlipInterval = *(_QWORD *)(*((_QWORD *)this + 2) + 1688LL);
            if ( *(_BYTE *)(FlipInterval + 2338) )
            {
              FlipInterval = (unsigned int)(pPlaneAttributes->SrcRect.bottom - pPlaneAttributes->SrcRect.top);
              LODWORD(v177) = pPlaneAttributes->SrcRect.bottom - pPlaneAttributes->SrcRect.top;
              v163 = 1;
              v169 = v44;
            }
          }
          goto LABEL_146;
        }
        if ( !v96 )
        {
          v97 = v164;
          if ( (*(_DWORD *)(*(_QWORD *)(v182 + 48) + 4LL) & 0x2000) != 0 )
            v97 = 1;
          v164 = v97;
          pDirtyRects = 1LL;
          goto LABEL_143;
        }
      }
      pDirtyRects = 1LL;
      goto LABEL_143;
    }
LABEL_146:
    if ( v162 )
    {
      if ( pPlaneAttributes->DstRect.left != pPlaneAttributes->SrcRect.left
        || (FlipInterval = (unsigned int)pPlaneAttributes->DstRect.right,
            (_DWORD)FlipInterval != pPlaneAttributes->SrcRect.right)
        || (v44 = (unsigned int)pPlaneAttributes->DstRect.top, (_DWORD)v44 != pPlaneAttributes->SrcRect.top)
        || (pDirtyRects = (unsigned int)pPlaneAttributes->DstRect.bottom,
            __PAIR128__(__PAIR64__(FlipInterval, v44), *(_QWORD *)&pPlaneAttributes->SrcRect.bottom) != *(_OWORD *)&pPlaneAttributes->DstRect.bottom)
        || (_DWORD)pDirtyRects != pPlaneAttributes->ClipRect.bottom )
      {
        v30 = (_QWORD *)WdLogNewEntry5_WdError(FlipInterval);
        LODWORD(LayerIndex) = -1073741811;
        v30[3] = -1073741811LL;
        v30[4] = this;
        goto LABEL_182;
      }
      if ( v51->pPlaneAttributes->Rotation != D3DDDI_ROTATION_IDENTITY )
      {
        v30 = (_QWORD *)WdLogNewEntry5_WdError(FlipInterval);
        LODWORD(LayerIndex) = -1073741811;
        v30[3] = -1073741811LL;
        v30[4] = this;
        v30[5] = (unsigned int)v51->pPlaneAttributes->Rotation;
        goto LABEL_182;
      }
      _mm_lfence();
      LODWORD(VidPnSourceId) = v172;
      FlipInterval = (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v187[0] + v52) + 48LL) + 4LL) >> 6) & 0xF;
      if ( v172 != (_DWORD)FlipInterval )
      {
        _mm_lfence();
        v30 = (_QWORD *)WdLogNewEntry5_WdError(FlipInterval);
        v98 = v183;
        LODWORD(LayerIndex) = -1073741811;
        v30[3] = -1073741811LL;
        v30[4] = this;
        v30[5] = v98;
        v99 = (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v187[0] + v52) + 48LL) + 4LL) >> 6) & 0xF;
LABEL_181:
        v30[6] = v99;
        goto LABEL_182;
      }
    }
    else
    {
      LODWORD(VidPnSourceId) = v172;
    }
    LODWORD(LayerIndex) = 0;
LABEL_161:
    if ( (v51->InputFlags.Value & 1) != 0 && (FlipInterval = (unsigned int)v51->FlipInterval, (_DWORD)FlipInterval) )
    {
      if ( (_DWORD)FlipInterval != 1 )
      {
        v34 = (_QWORD *)WdLogNewEntry5_WdWarning(FlipInterval, v44, pDirtyRects);
        v34[3] = this;
        v34[4] = v51->FlipInterval;
        goto LABEL_188;
      }
      v101 = 1;
      v168 = 1;
    }
    else
    {
      v101 = v168;
    }
    if ( bTracingEnabled )
    {
      v102 = *v51->pAllocationList;
      pDirtyRects = v102
                  ? (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                                  + 16LL)
                                                                                      + 544LL)
                                                                          + 8LL)
                                                              + 336LL))(
                      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 552LL),
                      v102)
                  : 0LL;
      v44 = (__int64)v51->pPlaneAttributes;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqqpqddddddddddddqqqqqq(
          v51->InputFlags.Value & 1,
          v44,
          pDirtyRects,
          VidPnSourceId,
          v51->LayerIndex,
          *(_BYTE *)&v51->InputFlags.0 & 1,
          pDirtyRects,
          *(_DWORD *)v44,
          *(_DWORD *)(v44 + 4),
          *(_DWORD *)(v44 + 12),
          *(_DWORD *)(v44 + 8),
          *(_DWORD *)(v44 + 16),
          *(_DWORD *)(v44 + 20),
          *(_DWORD *)(v44 + 28),
          *(_DWORD *)(v44 + 24),
          *(_DWORD *)(v44 + 32),
          *(_DWORD *)(v44 + 36),
          *(_DWORD *)(v44 + 44),
          *(_DWORD *)(v44 + 40),
          *(_DWORD *)(v44 + 48),
          *(_DWORD *)(v44 + 52),
          *(_DWORD *)(v44 + 56),
          v158,
          *(_DWORD *)(v44 + 72),
          a2->HDRMetaDataType,
          *(_DWORD *)(v44 + 80));
    }
    v166 = ++v9;
    if ( v9 >= a2->PresentPlaneCount )
      break;
    v44 = v179;
    pDirtyRects = v165;
    v47 = v159;
    v45 = v160;
    v46 = v161;
  }
  v43 = v164;
  if ( v101 )
    goto LABEL_191;
LABEL_185:
  FlipInterval = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( *(_BYTE *)(*(_QWORD *)(FlipInterval + 16) + 2410LL) )
  {
    v104 = D3DDDI_FLIPINTERVAL_IMMEDIATE;
  }
  else
  {
    v105 = WdLogNewEntry5_WdWarning(FlipInterval, v44, pDirtyRects);
    *(_QWORD *)(v105 + 24) = 3255LL;
    WdLogEvent5_WdWarning(v105);
LABEL_191:
    v104 = D3DDDI_FLIPINTERVAL_ONE;
  }
  if ( !v161 && !v160 && !v159 )
  {
    v106 = WdLogNewEntry5_WdEvent(FlipInterval, v44);
    *(_QWORD *)(v106 + 24) = 0LL;
    *(_QWORD *)(v106 + 32) = this;
    WdLogEvent5_WdEvent(v106);
    goto LABEL_249;
  }
  memset(&v188, 0, sizeof(v188));
  v107 = 4;
  v188.FlipInterval = v104;
  v181[0] = 0LL;
  if ( !v162 )
    v107 = 4100;
  v188.Flags.Value = v107 ^ ((unsigned __int16)v107 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)&a2->Flags.0 << 8)) & 0x700 | 8;
  v181[1] = *(struct VIDSCH_SUBMIT_DATA_BASE **)(*((_QWORD *)this + 2) + 16LL);
  CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v181);
  LayerIndex = (__int64)v181[0];
  if ( v181[0] )
  {
    v110 = *(_DWORD *)v181[0] | 0x30020;
    *(_DWORD *)v181[0] = v110;
    v111 = v110 | 1;
    *(_DWORD *)(LayerIndex + 112) = a2->PresentCount;
    *(_DWORD *)LayerIndex = v111;
    if ( v43 )
    {
      v111 |= 0x400000u;
      *(_DWORD *)LayerIndex = v111;
    }
    v112 = v111 | 4;
    *(_DWORD *)LayerIndex = v112;
    v113 = v112;
    if ( !v162 && a2->ContextCount <= 1 )
    {
      v113 = v112 | 0x800000;
      *(_DWORD *)LayerIndex = v112 | 0x800000;
    }
    v114 = v113 ^ ((unsigned __int8)v113 ^ (unsigned __int8)(a2->Flags.Value >> 1)) & 8;
    *(_DWORD *)LayerIndex = v114;
    v115 = ((unsigned __int8)v114 ^ (unsigned __int8)(a2->Flags.Value >> 1)) & 0x10 ^ v114;
    *(_DWORD *)LayerIndex = v115;
    v116 = (v115 ^ (a2->Flags.Value << 19)) & 0x80000 ^ v115;
    *(_DWORD *)LayerIndex = v116;
    v117 = (v116 ^ (a2->Flags.Value << 19)) & 0x100000 ^ v116;
    *(_DWORD *)LayerIndex = v117;
    v118 = (v117 ^ (a2->Flags.Value << 19)) & 0x200000 ^ v117;
    *(_DWORD *)LayerIndex = v118;
    v119 = v118 ^ (v118 ^ (a2->Flags.Value << 21)) & 0x20000000;
    *(_DWORD *)LayerIndex = v119;
    if ( (a2->Flags.Value & 0x40) != 0 )
      Duration = a2->Duration;
    else
      Duration = 0;
    *(_DWORD *)(LayerIndex + 144) = Duration;
    v121 = v119;
    *(_DWORD *)(LayerIndex + 116) = VidPnSourceId;
    *(_DWORD *)(LayerIndex + 124) = v104;
    *(_DWORD *)(LayerIndex + 120) = 5;
    if ( v104 == D3DDDI_FLIPINTERVAL_IMMEDIATE && (a2->Flags.Value & 0x200) != 0 )
    {
      v121 = v119 | 0x10000000;
      *(_DWORD *)LayerIndex = v119 | 0x10000000;
    }
    if ( (*(_DWORD *)&a2->Flags.0 & 0x80u) != 0 )
    {
      v121 |= 0x40000000u;
      *(_DWORD *)LayerIndex = v121;
      *(_DWORD *)(LayerIndex + 352) = a2->HDRMetaDataType;
      if ( a2->HDRMetaDataType == D3DDDI_HDR_METADATA_TYPE_HDR10 )
      {
        pHDRMetaData = a2->pHDRMetaData;
        *(_OWORD *)(LayerIndex + 356) = *(_OWORD *)pHDRMetaData;
        *(_QWORD *)(LayerIndex + 372) = pHDRMetaData[2];
        *(_DWORD *)(LayerIndex + 380) = *((_DWORD *)pHDRMetaData + 6);
      }
      else if ( a2->HDRMetaDataType == D3DDDI_HDR_METADATA_TYPE_HDR10PLUS )
      {
        v122 = a2->pHDRMetaData;
        *(_OWORD *)(LayerIndex + 356) = *v122;
        *(_OWORD *)(LayerIndex + 372) = v122[1];
        *(_OWORD *)(LayerIndex + 388) = v122[2];
        *(_OWORD *)(LayerIndex + 404) = v122[3];
        *(_QWORD *)(LayerIndex + 420) = *((_QWORD *)v122 + 8);
      }
    }
    if ( a2->pPostComposition )
    {
      *(_DWORD *)LayerIndex = v121 | 0x80000000;
      *(RECT *)(LayerIndex + 428) = a2->pPostComposition->SrcRect;
      *(RECT *)(LayerIndex + 444) = a2->pPostComposition->DstRect;
    }
    v124 = *((_QWORD *)this + 2);
    v125 = *(_QWORD *)(v124 + 1688);
    if ( v125 == *(_QWORD *)(*(_QWORD *)(v124 + 16) + 16LL) )
    {
      if ( *(_DWORD *)(v124 + 4LL * (unsigned int)VidPnSourceId + 1624) == 5 )
      {
        v128 = v178;
      }
      else
      {
        if ( (a2->Flags.Value & 8) != 0 )
        {
          v126 = WdLogNewEntry5_WdEvent(v124, v125);
          LODWORD(LayerIndex) = -1071775739;
          *(_QWORD *)(v126 + 24) = -1071775739LL;
          WdLogEvent5_WdEvent(v126);
          goto LABEL_248;
        }
        v127 = WdLogNewEntry5_WdEvent(v124, v125);
        *(_QWORD *)(v127 + 24) = *((_QWORD *)this + 2);
        WdLogEvent5_WdEvent(v127);
        v128 = v178;
        COREDEVICEACCESS::Release(v178);
        DXGDEVICE::FlushScheduler(*((_QWORD **)this + 2), 3u);
        v129 = COREDEVICEACCESS::AcquireShared(v128);
        v132 = v129;
        if ( v129 < 0 )
        {
          v133 = WdLogNewEntry5_WdEvent(v131, v130);
          *(_QWORD *)(v133 + 24) = v132;
          WdLogEvent5_WdEvent(v133);
          COREDEVICEACCESS::AcquireSharedUncheck(v128);
LABEL_224:
          LODWORD(LayerIndex) = v132;
          goto LABEL_248;
        }
      }
      v134 = DXGCONTEXT::WaitForQueuedPresentLimit(this, VidPnSourceId, (a2->Flags.Value & 8) == 0, v128);
      v132 = v134;
      if ( v134 < 0 )
      {
        v137 = WdLogNewEntry5_WdEvent(v136, v135);
        *(_QWORD *)(v137 + 24) = v132;
        *(_QWORD *)(v137 + 32) = this;
        WdLogEvent5_WdEvent(v137);
        goto LABEL_224;
      }
      v138 = DXGCONTEXT::CheckDevicePresentSettings(this, 1, 0, VidPnSourceId);
      v132 = v138;
      if ( v138 < 0 )
      {
        v141 = WdLogNewEntry5_WdEvent(v140, v139);
        *(_QWORD *)(v141 + 24) = v132;
        *(_QWORD *)(v141 + 32) = this;
        WdLogEvent5_WdEvent(v141);
        if ( (_DWORD)v132 == -1071774920 )
        {
          DXGCONTEXT::UpdateDisplayStateForFullWDDMDevice(this, a2, v187[0], v190, v165, *(_DWORD *)(LayerIndex + 136));
          v142 = *(_DWORD *)(LayerIndex + 120);
          LODWORD(LayerIndex) = 0;
          *(_DWORD *)(*((_QWORD *)this + 2) + 4LL * (unsigned int)VidPnSourceId + 1624) = v142;
          goto LABEL_248;
        }
        goto LABEL_224;
      }
      if ( *((_QWORD *)this + 40) )
      {
        v143 = WdLogNewEntry5_WdAssertion(v140);
        *(_QWORD *)(v143 + 24) = 3426LL;
        WdLogEvent5_WdAssertion(v143);
      }
      LODWORD(v132) = DXGCONTEXT::SubmitPresentMultiPlaneOverlays3(
                        this,
                        a2,
                        v161,
                        v160,
                        v159,
                        v187[0],
                        v191,
                        &v188,
                        (struct VIDSCH_SUBMIT_DATA_BASE *)LayerIndex,
                        v184);
      if ( (int)v132 < 0 )
      {
LABEL_242:
        if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL))
          && (_DWORD)v132 != -1073741130 )
        {
          v154 = WdLogNewEntry5_WdAssertion(v153);
          *(_QWORD *)(v154 + 24) = 3489LL;
          WdLogEvent5_WdAssertion(v154);
        }
        if ( *((_QWORD *)this + 40) )
        {
          v155 = WdLogNewEntry5_WdAssertion(v153);
          *(_QWORD *)(v155 + 24) = 3490LL;
          WdLogEvent5_WdAssertion(v155);
        }
        goto LABEL_224;
      }
      v144 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1688LL) + 2456LL) + 112LL);
      if ( *(_DWORD *)(v144 + 3760LL * (unsigned int)VidPnSourceId + 1068) == -1 )
      {
        v145 = WdLogNewEntry5_WdAssertion(v144);
        *(_QWORD *)(v145 + 24) = 3443LL;
        WdLogEvent5_WdAssertion(v145);
      }
      DXGCONTEXT::UpdateDisplayStateForFullWDDMDevice(this, a2, v187[0], v190, v165, *(_DWORD *)(LayerIndex + 136));
      v146 = v177;
      v147 = v169;
      v148 = v163;
      *(_DWORD *)(*((_QWORD *)this + 2) + 4LL * (unsigned int)VidPnSourceId + 1624) = *(_DWORD *)(LayerIndex + 120);
    }
    else
    {
      if ( !v125 )
      {
        v156 = WdLogNewEntry5_WdAssertion(v124);
        *(_QWORD *)(v156 + 24) = *((_QWORD *)this + 2);
        *(_QWORD *)(v156 + 32) = -1073741822LL;
        WdLogEvent5_WdAssertion(v156);
        LODWORD(LayerIndex) = -1073741811;
        goto LABEL_248;
      }
      v149 = a2->ppPresentPlanes;
      v150 = *v149;
      if ( (*v149)->LayerIndex )
      {
        v151 = WdLogNewEntry5_WdAssertion(v124);
        *(_QWORD *)(v151 + 24) = 3467LL;
        WdLogEvent5_WdAssertion(v151);
      }
      memset(&v189, 0, sizeof(v189));
      ConvertMPOThunkToLegacyPresentThunk(&v189, a2, v150);
      v152 = DXGCONTEXT::DisplayOnlyPresent(this, &v189, *(struct DXGALLOCATION **)v187[0], VidPnSourceId, &v188, v178);
      v146 = 0;
      v147 = 0;
      v148 = 0;
      LODWORD(v132) = v152;
    }
    UpdatePostComposition(
      VidPnSourceId,
      v148,
      v147,
      v146,
      *(struct ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)this + 2) + 1688LL) + 2456LL));
    goto LABEL_242;
  }
  v109 = WdLogNewEntry5_WdLowResource(v108);
  *(_QWORD *)(v109 + 24) = 3291LL;
  WdLogEvent5_WdLowResource(v109);
  LODWORD(LayerIndex) = -1073741801;
LABEL_248:
  CVidSchSubmitData::~CVidSchSubmitData((struct _SLIST_ENTRY **)v181);
LABEL_249:
  PagedPoolArray<DXGALLOCATIONREFERENCE,4>::~PagedPoolArray<DXGALLOCATIONREFERENCE,4>(v187);
  return (unsigned int)LayerIndex;
}
