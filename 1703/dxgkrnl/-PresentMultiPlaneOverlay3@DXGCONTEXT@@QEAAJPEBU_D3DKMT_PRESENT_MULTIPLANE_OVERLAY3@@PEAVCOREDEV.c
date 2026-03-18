/*
 * XREFs of ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C01B880C
 * Callers:
 *     ?PresentMultiPlaneOverlay2@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C01B8578 (-PresentMultiPlaneOverlay2@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAVCOREDEV.c)
 *     ?PresentMultiPlaneOverlay@DXGCONTEXT@@QEAAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C01B9A00 (-PresentMultiPlaneOverlay@DXGCONTEXT@@QEAAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAVCOREDEVICE.c)
 *     DxgkPresentMultiPlaneOverlay3 @ 0x1C01BB650 (DxgkPresentMultiPlaneOverlay3.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C0002180 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C00021D8 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C0004AD0 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C0004B20 (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0005890 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000590C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006E30 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C000B4C0 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?GetDisplayedAllMultiPlaneOverlays@DXGDEVICE@@QEAAXIPEAVDXGALLOCATIONREFERENCE@@@Z @ 0x1C003BDB8 (-GetDisplayedAllMultiPlaneOverlays@DXGDEVICE@@QEAAXIPEAVDXGALLOCATIONREFERENCE@@@Z.c)
 *     Template_qqqpqddddddddddddqqqqq @ 0x1C003BE80 (Template_qqqpqddddddddddddqqqqq.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C00871E4 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C00CA330 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00CCDB0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00CCDF0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C00CFC9C (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ @ 0x1C00D00CC (-IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ.c)
 *     ?UpdatePostComposition@DXGCONTEXT@@QEAAXIEII@Z @ 0x1C016B760 (-UpdatePostComposition@DXGCONTEXT@@QEAAXIEII@Z.c)
 *     ?WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z @ 0x1C016B93C (-WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z @ 0x1C0188048 (-IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z.c)
 *     ?CheckDevicePresentSettings@DXGCONTEXT@@QEAAJHI@Z @ 0x1C01B7DCC (-CheckDevicePresentSettings@DXGCONTEXT@@QEAAJHI@Z.c)
 *     ?ConvertMPOThunkToLegacyPresentThunk@@YAXPEAU_D3DKMT_PRESENT@@PEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEBU_D3DKMT_MULTIPLANE_OVERLAY3@@@Z @ 0x1C01B7EE8 (-ConvertMPOThunkToLegacyPresentThunk@@YAXPEAU_D3DKMT_PRESENT@@PEBU_D3DKMT_PRESENT_MULTIPLANE_OVE.c)
 *     ?DisplayOnlyPresent@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGALLOCATION@@IPEAU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01B81A8 (-DisplayOnlyPresent@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGALLOCATION@@IPEAU_DXGKARG_PRESE.c)
 *     InverseXformMPORect3 @ 0x1C01B83E4 (InverseXformMPORect3.c)
 *     ?SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEPEBVDXGALLOCATIONREFERENCE@@PEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAPEAV1@@Z @ 0x1C01B9D98 (-SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEP.c)
 *     ?UpdateDisplayStateForFullWDDMDevice@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVDXGALLOCATIONREFERENCE@@HI@Z @ 0x1C01BA878 (-UpdateDisplayStateForFullWDDMDevice@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@P.c)
 */

__int64 __fastcall DXGCONTEXT::PresentMultiPlaneOverlay3(
        DXGCONTEXT *this,
        const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *a2,
        struct COREDEVICEACCESS *a3,
        struct DXGCONTEXT **a4)
{
  __int64 v4; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 VidPnSourceId; // rbx
  __int64 v17; // rcx
  _QWORD *v18; // rax
  bool v19; // di
  int v20; // eax
  _QWORD *v21; // rax
  __int64 v23; // r9
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  __int64 v25; // rdx
  unsigned __int64 Height; // rcx
  _QWORD *v27; // rax
  __int64 v28; // r8
  __int64 v29; // r9
  D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION *pPostComposition; // rdx
  _QWORD *v31; // rax
  __int64 Rotation; // rdx
  int bottom; // eax
  __int64 v34; // rcx
  RECT SrcRect; // xmm0
  __int64 v36; // r8
  unsigned __int8 v37; // r10
  unsigned __int8 v38; // r11
  D3DKMT_MULTIPLANE_OVERLAY3 **ppPresentPlanes; // rax
  unsigned int v40; // r14d
  int v41; // edi
  __int64 v42; // rdx
  D3DKMT_MULTIPLANE_OVERLAY3 *v43; // r13
  __int64 v44; // rax
  __int64 LayerIndex; // r12
  __int64 v46; // rcx
  struct _D3DKMT_PLANE_SPECIFIC_INPUT_FLAGS::$390DB612F88C1DE2E40C850E65A6A89F::$1196FF6CE8067B2B35B898660F75E27E Value; // eax
  bool v48; // zf
  __int64 v49; // r13
  D3DKMT_HANDLE v50; // ebx
  unsigned int v51; // ecx
  __int64 v52; // r8
  int v53; // edx
  struct _EX_RUNDOWN_REF *v54; // rdx
  struct DXGALLOCATION **v55; // rbx
  __int64 v56; // rdx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  struct DXGALLOCATION *v63; // rbx
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // rcx
  D3DKMT_MULTIPLANE_OVERLAY3 *v67; // rcx
  int v68; // eax
  __int64 v69; // rax
  __int64 v70; // r8
  int v71; // eax
  D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *v72; // rdx
  __int64 v73; // rbx
  const D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *pPlaneAttributes; // rbx
  D3DDDI_ROTATION v75; // eax
  _QWORD *v76; // rax
  __int64 v77; // rdx
  int v78; // edx
  char v79; // r8
  __int64 v80; // r13
  struct DXGALLOCATION *v81; // rbx
  __int64 v82; // rdx
  __int64 v83; // r8
  __int64 v84; // r9
  _QWORD *v85; // rax
  D3DKMT_HANDLE v86; // r8d
  __int64 v87; // r8
  const D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *v88; // rdx
  unsigned int v89; // r12d
  _QWORD *v90; // rax
  D3DKMT_MULTIPLANE_OVERLAY3 *v91; // rcx
  UINT v92; // ecx
  __int16 v93; // ax
  __int64 v94; // rcx
  struct VIDSCH_SUBMIT_DATA_BASE *v95; // rbx
  __int64 v96; // rax
  __int64 v97; // r14
  int v98; // ecx
  int v99; // ecx
  int v100; // eax
  UINT v101; // ecx
  int v102; // ecx
  UINT v103; // ecx
  UINT v104; // ecx
  UINT v105; // ecx
  UINT Duration; // eax
  int v107; // eax
  __int64 v108; // r8
  __int64 v109; // r9
  unsigned __int64 HDRMetaDataType; // rcx
  __int64 v111; // rax
  int v112; // eax
  __int64 v113; // rcx
  __int64 v114; // rax
  __int64 v115; // rdx
  __int64 v116; // rcx
  int v117; // eax
  __int64 v118; // rdx
  __int64 v119; // rcx
  int v120; // eax
  __int64 v121; // rdx
  __int64 v122; // rcx
  __int64 v123; // r8
  __int64 v124; // r9
  __int64 v125; // rax
  _QWORD *v126; // rax
  __int64 v127; // rax
  __int64 v128; // rdx
  __int64 v129; // r8
  __int64 v130; // r9
  __int64 v131; // rax
  int v132; // r9d
  D3DKMT_MULTIPLANE_OVERLAY3 **v133; // rax
  const struct _D3DKMT_MULTIPLANE_OVERLAY3 *v134; // rbx
  __int64 v135; // rax
  __int64 v136; // rdx
  __int64 v137; // rcx
  __int64 v138; // r8
  __int64 v139; // r9
  __int64 v140; // rax
  __int64 v141; // rax
  __int64 v142; // rax
  __int64 v143; // rax
  int v144; // [rsp+B0h] [rbp-A0h]
  unsigned __int8 v145; // [rsp+D0h] [rbp-80h]
  unsigned __int8 v146; // [rsp+D1h] [rbp-7Fh]
  bool v147; // [rsp+D2h] [rbp-7Eh]
  char v148; // [rsp+D3h] [rbp-7Dh]
  unsigned __int8 v149; // [rsp+D4h] [rbp-7Ch]
  unsigned int v150; // [rsp+D8h] [rbp-78h]
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v151; // [rsp+DCh] [rbp-74h]
  char v152; // [rsp+E0h] [rbp-70h]
  D3DDDI_FLIPINTERVAL_TYPE v153; // [rsp+E4h] [rbp-6Ch] BYREF
  int v154; // [rsp+E8h] [rbp-68h]
  int v155; // [rsp+ECh] [rbp-64h]
  D3DKMT_MULTIPLANE_OVERLAY3 *v156; // [rsp+F0h] [rbp-60h]
  RECT v157; // [rsp+100h] [rbp-50h]
  struct _EX_RUNDOWN_REF *v158; // [rsp+110h] [rbp-40h] BYREF
  unsigned int v159; // [rsp+118h] [rbp-38h]
  D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION *v160; // [rsp+120h] [rbp-30h]
  __int64 v161; // [rsp+130h] [rbp-20h]
  COREDEVICEACCESS *v162; // [rsp+138h] [rbp-18h]
  struct _EX_RUNDOWN_REF *v163; // [rsp+140h] [rbp-10h] BYREF
  struct DXGALLOCATION **v164; // [rsp+148h] [rbp-8h]
  struct VIDSCH_SUBMIT_DATA_BASE *v165[2]; // [rsp+150h] [rbp+0h] BYREF
  struct DXGALLOCATION *v166; // [rsp+160h] [rbp+10h]
  __int64 v167; // [rsp+168h] [rbp+18h]
  struct DXGCONTEXT **v168; // [rsp+170h] [rbp+20h]
  RECT v169; // [rsp+178h] [rbp+28h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v170; // [rsp+188h] [rbp+38h] BYREF
  struct _DXGKARG_PRESENT v171; // [rsp+1C0h] [rbp+70h] BYREF
  _D3DKMT_PRESENT v172; // [rsp+270h] [rbp+120h] BYREF
  struct DXGALLOCATION *v173[8]; // [rsp+850h] [rbp+700h] BYREF

  v4 = *((_QWORD *)this + 2);
  v168 = a4;
  v162 = a3;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(v4 + 16) + 16LL)) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
    *(_QWORD *)(v11 + 24) = 2419LL;
    WdLogEvent5_WdAssertion(v11);
  }
  v12 = *((_QWORD *)this + 2);
  v13 = *(_QWORD *)(*(_QWORD *)(v12 + 16) + 16LL);
  if ( *(_QWORD *)(v12 + 1800) != v13 )
  {
    v14 = WdLogNewEntry5_WdAssertion(v13, v12, v9, v10);
    *(_QWORD *)(v14 + 24) = 2420LL;
    WdLogEvent5_WdAssertion(v14);
  }
  v15 = *((_QWORD *)this + 2);
  VidPnSourceId = a2->VidPnSourceId;
  v151 = a2->VidPnSourceId;
  v17 = *(_QWORD *)(*(_QWORD *)(v15 + 16) + 16LL);
  if ( a2->PresentPlaneCount > *(_DWORD *)(v17 + 2152) )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdWarning(v17, v15, v9, v10);
    v18[3] = a2->PresentPlaneCount;
    v18[4] = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 2152LL);
LABEL_218:
    v18[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v18);
    return 3221225485LL;
  }
  v19 = 1;
  v20 = *(_DWORD *)(v15 + 4 * VidPnSourceId + 1032) >> 9;
  v167 = a2->VidPnSourceId;
  if ( (v20 & 1) == 0 )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdWarning(v17, v15, v9, v10);
    v21[3] = -1071775739LL;
    v21[4] = this;
    v21[5] = VidPnSourceId;
    WdLogEvent5_WdWarning(v21);
    return 3223191557LL;
  }
  if ( (a2->Flags.Value & 3) != 0 )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdWarning(v17, v15, v9, v10);
    v18[3] = this;
    v18[4] = a2->Flags.Value;
    goto LABEL_218;
  }
  `vector constructor iterator'(
    (char *)v173,
    8LL,
    8LL,
    (void (__fastcall *)(char *))DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE);
  DXGDEVICE::GetDisplayedAllMultiPlaneOverlays(
    *((DXGDEVICE **)this + 2),
    VidPnSourceId,
    (struct DXGALLOCATIONREFERENCE *)v173,
    v23);
  v166 = v173[0];
  if ( ADAPTER_RENDER::IsMultiPlaneOverlaySupported(*(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL)) )
    v19 = *(_QWORD *)(*((_QWORD *)this + 2) + 1800LL) != *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
  v147 = v19;
  DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(
                      *(DXGADAPTER ***)(*(_QWORD *)(*((_QWORD *)this + 2) + 1800LL) + 2280LL),
                      VidPnSourceId);
  if ( !DisplayModeInfo )
  {
    v27 = (_QWORD *)WdLogNewEntry5_WdError(Height, v25);
    v27[3] = -1073741811LL;
    v27[4] = this;
    v27[5] = VidPnSourceId;
LABEL_66:
    WdLogEvent5_WdError(v27);
LABEL_212:
    LODWORD(v73) = -1073741811;
    goto LABEL_213;
  }
  v28 = *(unsigned int *)DisplayModeInfo;
  v29 = *((unsigned int *)DisplayModeInfo + 1);
  pPostComposition = a2->pPostComposition;
  v157.right = *(_DWORD *)DisplayModeInfo;
  v157.bottom = v29;
  *(_QWORD *)&v157.left = 0LL;
  v148 = 0;
  v155 = 0;
  v161 = 0LL;
  if ( pPostComposition )
  {
    if ( pPostComposition->Flags.Value )
    {
      v31 = (_QWORD *)WdLogNewEntry5_WdWarning(Height, pPostComposition, v28, v29);
      v31[3] = this;
      Rotation = (__int64)a2->pPostComposition->Flags.0;
LABEL_17:
      v31[4] = Rotation;
LABEL_210:
      v31[5] = -1073741811LL;
      goto LABEL_211;
    }
    if ( pPostComposition->Rotation != D3DDDI_ROTATION_IDENTITY )
    {
      v31 = (_QWORD *)WdLogNewEntry5_WdWarning(Height, pPostComposition, v28, v29);
      v31[3] = this;
      Rotation = a2->pPostComposition->Rotation;
      goto LABEL_17;
    }
    if ( pPostComposition->SrcRect.left >= pPostComposition->SrcRect.right
      || pPostComposition->SrcRect.top >= pPostComposition->SrcRect.bottom
      || pPostComposition->DstRect.left >= pPostComposition->DstRect.right
      || (bottom = pPostComposition->DstRect.bottom, pPostComposition->DstRect.top >= bottom)
      || pPostComposition->DstRect.left < 0
      || (int)v28 < pPostComposition->DstRect.right
      || pPostComposition->DstRect.top < 0
      || (int)v29 < bottom )
    {
      v31 = (_QWORD *)WdLogNewEntry5_WdWarning(Height, pPostComposition, v28, v29);
      v31[3] = this;
      v31[4] = -1073741811LL;
    }
    else
    {
      v34 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      if ( *(_BYTE *)(*(_QWORD *)(v34 + 16) + 2242LL) && !v19 )
      {
        SrcRect = pPostComposition->SrcRect;
        pPostComposition = *(D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION **)&pPostComposition->SrcRect.left;
        v157 = SrcRect;
        Height = *(_QWORD *)&SrcRect.right;
        v160 = pPostComposition;
        if ( (_DWORD)pPostComposition
          || SrcRect.right != (_DWORD)v28
          || HIDWORD(pPostComposition)
          || SrcRect.bottom != (_DWORD)v29 )
        {
          v148 = 1;
          v155 = SrcRect.right - (_DWORD)pPostComposition;
          Height = (unsigned int)(SrcRect.bottom - HIDWORD(pPostComposition));
          v161 = (unsigned int)Height;
        }
        goto LABEL_38;
      }
      v31 = (_QWORD *)WdLogNewEntry5_WdWarning(v34, pPostComposition, v28, v29);
      v31[3] = -1073741811LL;
      v31[4] = this;
    }
LABEL_211:
    WdLogEvent5_WdWarning(v31);
    goto LABEL_212;
  }
  v160 = *(D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION **)&v157.left;
LABEL_38:
  v154 = -1;
  LOBYTE(Height) = 0;
  v145 = 0;
  v146 = 0;
  v36 = 0LL;
  v150 = Height;
  v37 = 0;
  v153 = D3DDDI_FLIPINTERVAL_ONE;
  v38 = 0;
  v152 = 0;
  if ( v19 )
  {
    if ( a2->PresentPlaneCount != 1
      || (ppPresentPlanes = a2->ppPresentPlanes,
          Height = (unsigned __int64)*ppPresentPlanes,
          (*ppPresentPlanes)->LayerIndex)
      || (*(_DWORD *)(Height + 4) & 1) == 0 )
    {
      v27 = (_QWORD *)WdLogNewEntry5_WdError(Height, pPostComposition);
      v27[3] = -1073741811LL;
      v27[4] = this;
      v27[5] = a2->PresentPlaneCount;
      goto LABEL_66;
    }
    Height = v150;
  }
  v40 = 0;
  if ( !a2->PresentPlaneCount )
    goto LABEL_215;
  v41 = -1073741811;
  while ( 1 )
  {
    v42 = *((_QWORD *)this + 2);
    v149 = Height;
    v43 = a2->ppPresentPlanes[v40];
    v44 = *(_QWORD *)(v42 + 16);
    v156 = v43;
    LayerIndex = v43->LayerIndex;
    v46 = *(_QWORD *)(v44 + 16);
    if ( (unsigned int)LayerIndex >= *(_DWORD *)(v46 + 2152)
      || (v46 = (unsigned int)LayerIndex, ((unsigned int)v36 & (1 << LayerIndex)) != 0) )
    {
      v31 = (_QWORD *)WdLogNewEntry5_WdWarning(v46, v42, v36, v29);
      v31[4] = LayerIndex;
      v31[3] = this;
      goto LABEL_210;
    }
    Value = (struct _D3DKMT_PLANE_SPECIFIC_INPUT_FLAGS::$390DB612F88C1DE2E40C850E65A6A89F::$1196FF6CE8067B2B35B898660F75E27E)v43->InputFlags.Value;
    v159 = (1 << LayerIndex) | v36;
    if ( (*(_BYTE *)&Value & 1) == 0 )
    {
      v158 = 0LL;
      v81 = v173[LayerIndex];
      DXGALLOCATIONREFERENCE::MoveAssign(&v173[LayerIndex], (struct DXGALLOCATION **)&v158);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v158, v82, v83, v84);
      Height = (unsigned __int8)(v150 + 1);
      if ( !v81 )
        Height = v149;
      LOBYTE(v150) = Height;
      goto LABEL_139;
    }
    v48 = v173[LayerIndex] == 0LL;
    v164 = &v173[LayerIndex];
    if ( v48 )
      v146 = v38 + 1;
    else
      v145 = v37 + 1;
    v49 = *(_QWORD *)(v42 + 40);
    v50 = *v156->pAllocationList;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v49 + 168));
    v51 = (v50 >> 6) & 0xFFFFFF;
    if ( v51 < *(_DWORD *)(v49 + 208)
      && (v52 = *(_QWORD *)(v49 + 192),
          v53 = *(_DWORD *)(v52 + 16LL * v51 + 8),
          ((v50 >> 26) & 0x30) == (*(_BYTE *)(v52 + 16LL * v51 + 8) & 0x30))
      && (v53 & 0x1000) == 0
      && (v53 & 0xF) != 0
      && (*(_BYTE *)(v52 + 16LL * v51 + 8) & 0xF) == 5 )
    {
      v54 = *(struct _EX_RUNDOWN_REF **)(v52 + 16LL * v51);
    }
    else
    {
      v54 = 0LL;
    }
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v163, v54);
    ExReleasePushLockSharedEx(v49 + 168, 0LL);
    KeLeaveCriticalRegion();
    v55 = v164;
    DXGALLOCATIONREFERENCE::MoveAssign(v164, (struct DXGALLOCATION **)&v163);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v163, v56, v57, v58);
    v63 = *v55;
    if ( !v63 )
    {
      v31 = (_QWORD *)WdLogNewEntry5_WdWarning(v60, v59, v61, v62);
      v91 = v156;
      v31[3] = -1073741811LL;
      v31[4] = this;
      v31[5] = *v91->pAllocationList;
      goto LABEL_211;
    }
    _mm_lfence();
    v64 = *(_QWORD *)(*((_QWORD *)v63 + 1) + 16LL);
    v65 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    if ( *(_QWORD *)(v64 + 16) != *(_QWORD *)(v65 + 16) )
    {
      v27 = (_QWORD *)WdLogNewEntry5_WdError(v65, v64);
      v27[3] = *((_QWORD *)this + 2);
      v27[4] = v173[LayerIndex];
      v27[5] = -1073741811LL;
      goto LABEL_66;
    }
    _mm_lfence();
    v66 = *(unsigned int *)(*((_QWORD *)v63 + 6) + 4LL);
    _mm_lfence();
    if ( (v66 & 0x2000) != 0 )
    {
      if ( (*(_DWORD *)(*((_QWORD *)v63 + 6) + 4LL) & 0x20) == 0
        && !DXGDEVICE::IsDirectFlipAllocationPinned(*((DXGDEVICE **)this + 2), v63) )
      {
        _mm_lfence();
LABEL_65:
        v27 = (_QWORD *)WdLogNewEntry5_WdError(v66, v64);
        v27[3] = -1073741811LL;
        v27[4] = this;
        v27[5] = v173[LayerIndex];
        v67 = v156;
        v27[6] = *((_QWORD *)v173[LayerIndex] + 6);
        v27[7] = *v67->pAllocationList;
        goto LABEL_66;
      }
    }
    else
    {
      if ( (v66 & 0xB) == 0 )
        goto LABEL_65;
      v68 = v154;
      if ( (*(_BYTE *)(*((_QWORD *)v63 + 6) + 4LL) & 1) != 0 )
        v68 = LayerIndex;
      v154 = v68;
    }
    _mm_lfence();
    memset(&v170, 0, sizeof(v170));
    v69 = *((_QWORD *)this + 2);
    v170.hAllocation = *(HANDLE *)(*((_QWORD *)v63 + 6) + 16LL);
    v71 = ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(v69 + 16), &v170, v70);
    v29 = 0LL;
    v73 = v71;
    if ( v71 < 0 )
      break;
    v43 = v156;
    pPlaneAttributes = v156->pPlaneAttributes;
    if ( pPlaneAttributes->SrcRect.left >= pPlaneAttributes->SrcRect.right )
      goto LABEL_155;
    if ( pPlaneAttributes->SrcRect.top >= pPlaneAttributes->SrcRect.bottom )
      goto LABEL_155;
    Height = v170.Height;
    LODWORD(v158) = v170.Width;
    LODWORD(v156) = v170.Height;
    if ( pPlaneAttributes->SrcRect.left < 0
      || (int)v170.Width < pPlaneAttributes->SrcRect.right
      || pPlaneAttributes->SrcRect.top < 0
      || (int)v170.Height < pPlaneAttributes->SrcRect.bottom
      || pPlaneAttributes->ClipRect.left >= pPlaneAttributes->ClipRect.right
      || pPlaneAttributes->ClipRect.top >= pPlaneAttributes->ClipRect.bottom
      || pPlaneAttributes->DstRect.left >= pPlaneAttributes->DstRect.right
      || pPlaneAttributes->DstRect.top >= pPlaneAttributes->DstRect.bottom
      || (int)v160 > pPlaneAttributes->ClipRect.left
      || v157.right < pPlaneAttributes->ClipRect.right
      || v157.top > pPlaneAttributes->ClipRect.top
      || v157.bottom < pPlaneAttributes->ClipRect.bottom
      || pPlaneAttributes->DstRect.left > pPlaneAttributes->ClipRect.left
      || pPlaneAttributes->DstRect.right < pPlaneAttributes->ClipRect.right
      || pPlaneAttributes->DstRect.top > pPlaneAttributes->ClipRect.top
      || pPlaneAttributes->DstRect.bottom < pPlaneAttributes->ClipRect.bottom )
    {
      goto LABEL_155;
    }
    v75 = pPlaneAttributes->Rotation;
    if ( v75 )
    {
      if ( (unsigned int)(v75 - 1) > 3 )
      {
        v76 = (_QWORD *)WdLogNewEntry5_WdError(v170.Height, v72);
        v76[3] = -1073741811LL;
        v76[4] = this;
        v76[5] = v40;
        v77 = v43->pPlaneAttributes->Rotation;
LABEL_93:
        v76[6] = v77;
LABEL_156:
        WdLogEvent5_WdError(v76);
        goto LABEL_214;
      }
    }
    else
    {
      pPlaneAttributes->Rotation = D3DDDI_ROTATION_IDENTITY;
    }
    Height = *(_QWORD *)(*((_QWORD *)this + 2) + 1800LL);
    if ( *(_BYTE *)(Height + 2206) )
    {
      v72 = (D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *)v43->pPlaneAttributes;
      if ( v72->DstRect.left != v72->ClipRect.left
        || v72->DstRect.right != v72->ClipRect.right
        || v72->DstRect.top != v72->ClipRect.top
        || v72->DstRect.bottom != v72->ClipRect.bottom )
      {
        InverseXformMPORect3(&v169, v72, &v72->ClipRect.left);
        pPlaneAttributes->SrcRect = v169;
        pPlaneAttributes->DstRect = v43->pPlaneAttributes->ClipRect;
        if ( pPlaneAttributes->SrcRect.left >= pPlaneAttributes->SrcRect.right
          || pPlaneAttributes->SrcRect.top >= pPlaneAttributes->SrcRect.bottom
          || pPlaneAttributes->DstRect.left >= pPlaneAttributes->DstRect.right
          || pPlaneAttributes->DstRect.top >= pPlaneAttributes->DstRect.bottom
          || (v29 = 0LL, pPlaneAttributes->SrcRect.left < 0)
          || (int)v158 < pPlaneAttributes->SrcRect.right
          || pPlaneAttributes->SrcRect.top < 0
          || (int)v156 < pPlaneAttributes->SrcRect.bottom
          || (int)v160 > pPlaneAttributes->DstRect.left
          || v157.right < pPlaneAttributes->DstRect.right
          || v157.top > pPlaneAttributes->DstRect.top
          || v157.bottom < pPlaneAttributes->DstRect.bottom )
        {
LABEL_155:
          v76 = (_QWORD *)WdLogNewEntry5_WdError(Height, v72);
          v76[3] = -1073741811LL;
          v76[4] = this;
          v76[5] = v40;
          goto LABEL_156;
        }
      }
    }
    if ( !(_DWORD)LayerIndex )
    {
      if ( v166 )
      {
        v78 = *(_DWORD *)(*((_QWORD *)v173[0] + 6) + 4LL) & 0x2000;
        if ( !v78 || (*(_DWORD *)(*((_QWORD *)v166 + 6) + 4LL) & 0x2000) != 0 )
        {
          if ( !v78 )
          {
            v79 = v152;
            if ( (*(_DWORD *)(*((_QWORD *)v166 + 6) + 4LL) & 0x2000) != 0 )
              v79 = 1;
            v152 = v79;
          }
        }
        else
        {
          v152 = 1;
        }
      }
      v72 = (D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *)(unsigned int)(pPlaneAttributes->SrcRect.right
                                                                  - pPlaneAttributes->SrcRect.left);
      Height = (unsigned int)(pPlaneAttributes->DstRect.right - pPlaneAttributes->DstRect.left);
      if ( (_DWORD)Height != (_DWORD)v72 )
      {
        Height = *(_QWORD *)(*((_QWORD *)this + 2) + 1800LL);
        if ( *(_BYTE *)(Height + 2178) )
        {
          Height = (unsigned int)(pPlaneAttributes->SrcRect.bottom - pPlaneAttributes->SrcRect.top);
          LODWORD(v161) = pPlaneAttributes->SrcRect.bottom - pPlaneAttributes->SrcRect.top;
          v148 = 1;
          v155 = (int)v72;
        }
      }
    }
    if ( v147 )
    {
      if ( pPlaneAttributes->DstRect.left != pPlaneAttributes->SrcRect.left
        || pPlaneAttributes->DstRect.right != pPlaneAttributes->SrcRect.right
        || pPlaneAttributes->DstRect.top != pPlaneAttributes->SrcRect.top
        || pPlaneAttributes->DstRect.bottom != pPlaneAttributes->SrcRect.bottom
        || pPlaneAttributes->DstRect.left != pPlaneAttributes->ClipRect.left
        || pPlaneAttributes->DstRect.right != pPlaneAttributes->ClipRect.right
        || pPlaneAttributes->DstRect.top != pPlaneAttributes->ClipRect.top
        || pPlaneAttributes->DstRect.bottom != pPlaneAttributes->ClipRect.bottom )
      {
        v76 = (_QWORD *)WdLogNewEntry5_WdError(Height, v72);
        v76[3] = -1073741811LL;
        v76[4] = this;
        goto LABEL_156;
      }
      if ( v43->pPlaneAttributes->Rotation != D3DDDI_ROTATION_IDENTITY )
      {
        v76 = (_QWORD *)WdLogNewEntry5_WdError(Height, v72);
        v76[3] = -1073741811LL;
        v76[4] = this;
        v76[5] = (unsigned int)v43->pPlaneAttributes->Rotation;
        goto LABEL_156;
      }
      _mm_lfence();
      Height = *((_QWORD *)*v164 + 6);
      if ( v151 != ((*(_DWORD *)(Height + 4) >> 6) & 0xF) )
      {
        _mm_lfence();
        v76 = (_QWORD *)WdLogNewEntry5_WdError(Height, v72);
        v80 = v167;
        v76[3] = -1073741811LL;
        v76[4] = this;
        v76[5] = v80;
        v77 = (*(_DWORD *)(*((_QWORD *)v173[LayerIndex] + 6) + 4LL) >> 6) & 0xF;
        goto LABEL_93;
      }
    }
LABEL_139:
    if ( (v43->InputFlags.Value & 1) != 0
      && (a2->PresentPlaneCount > 1 || (_DWORD)LayerIndex)
      && v43->FlipInterval != D3DDDI_FLIPINTERVAL_ONE )
    {
      v85 = (_QWORD *)WdLogNewEntry5_WdError(Height, v72);
      v85[5] = v40;
      v85[3] = -1073741811LL;
      v85[4] = this;
      WdLogEvent5_WdError(v85);
    }
    if ( bTracingEnabled
      && ((v86 = *v43->pAllocationList) == 0
        ? (v87 = 0LL)
        : (v87 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                               + 16LL)
                                                                                   + 432LL)
                                                                       + 8LL)
                                                           + 336LL))(
                   *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 440LL),
                   v86)),
          (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0) )
    {
      v89 = v151;
      v88 = v43->pPlaneAttributes;
      Template_qqqpqddddddddddddqqqqq(
        v43->InputFlags.Value & 1,
        (__int64)v88,
        v87,
        v151,
        v43->LayerIndex,
        *(_BYTE *)&v43->InputFlags.0 & 1,
        v87,
        v88->Flags,
        v88->SrcRect.left,
        v88->SrcRect.right,
        v88->SrcRect.top,
        v88->SrcRect.bottom,
        v88->DstRect.left,
        v88->DstRect.right,
        v88->DstRect.top,
        v88->DstRect.bottom,
        v88->ClipRect.left,
        v88->ClipRect.right,
        v88->ClipRect.top,
        v88->ClipRect.bottom,
        v88->Rotation,
        v88->Blend,
        v144,
        v88->ColorSpace,
        a2->HDRMetaDataType);
    }
    else
    {
      v89 = v151;
    }
    if ( ++v40 >= a2->PresentPlaneCount )
    {
      if ( v146 || v145 || (_BYTE)v150 )
      {
        memset(&v171, 0, sizeof(v171));
        v92 = v171.Flags.Value | 4;
        if ( !v147 )
          v92 = v171.Flags.Value | 0x1004;
        v93 = v92 ^ ((unsigned __int16)*(_DWORD *)&a2->Flags.0 << 8);
        v165[0] = 0LL;
        v171.Flags.Value = v92 ^ v93 & 0x700 | 8;
        v171.FlipInterval = v153;
        v165[1] = *(struct VIDSCH_SUBMIT_DATA_BASE **)(*((_QWORD *)this + 2) + 16LL);
        CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v165);
        v95 = v165[0];
        if ( !v165[0] )
        {
          v96 = WdLogNewEntry5_WdLowResource(v94);
          *(_QWORD *)(v96 + 24) = 2950LL;
          WdLogEvent5_WdLowResource(v96);
          LODWORD(v97) = -1073741801;
LABEL_208:
          CVidSchSubmitData::~CVidSchSubmitData((struct _SLIST_ENTRY **)v165);
          goto LABEL_216;
        }
        v98 = *(_DWORD *)v165[0] | 0x30020;
        *(_DWORD *)v165[0] = v98;
        v99 = v98 | 1;
        *((_DWORD *)v95 + 28) = a2->PresentCount;
        *(_DWORD *)v95 = v99;
        if ( v152 )
          *(_DWORD *)v95 = v99 | 0x400000;
        v100 = *(_DWORD *)v95 | 4;
        *(_DWORD *)v95 = v100;
        if ( !v147 )
          *(_DWORD *)v95 = v100 | 0x800000;
        v101 = *(_DWORD *)v95 ^ (*(_DWORD *)v95 ^ (a2->Flags.Value >> 1)) & 8;
        *(_DWORD *)v95 = v101;
        v102 = ((unsigned __int8)v101 ^ (unsigned __int8)(a2->Flags.Value >> 1)) & 0x10 ^ v101;
        *(_DWORD *)v95 = v102;
        v103 = (v102 ^ (a2->Flags.Value << 19)) & 0x80000 ^ v102;
        *(_DWORD *)v95 = v103;
        v104 = (v103 ^ (a2->Flags.Value << 19)) & 0x100000 ^ v103;
        *(_DWORD *)v95 = v104;
        v105 = (v104 ^ (a2->Flags.Value << 19)) & 0x200000 ^ v104;
        *(_DWORD *)v95 = v105;
        *(_DWORD *)v95 = v105 ^ (v105 ^ (a2->Flags.Value << 21)) & 0x20000000;
        if ( (a2->Flags.Value & 0x40) != 0 )
          Duration = a2->Duration;
        else
          Duration = 0;
        *((_DWORD *)v95 + 36) = Duration;
        *((_DWORD *)v95 + 29) = v89;
        *((_DWORD *)v95 + 31) = v153;
        v107 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, D3DDDI_FLIPINTERVAL_TYPE *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 408LL)
                                                                                                 + 8LL)
                                                                                     + 424LL))(
                 *(_QWORD *)(*((_QWORD *)this + 2) + 600LL),
                 v89,
                 &v153);
        *((_DWORD *)v95 + 30) = v107;
        HDRMetaDataType = a2->Flags.Value;
        if ( (HDRMetaDataType & 0x80u) != 0LL )
        {
          *(_DWORD *)v95 |= 0x40000000u;
          HDRMetaDataType = (unsigned int)a2->HDRMetaDataType;
          *((_DWORD *)v95 + 88) = HDRMetaDataType;
          if ( a2->HDRMetaDataType == D3DDDI_HDR_METADATA_TYPE_HDR10 )
          {
            HDRMetaDataType = (unsigned __int64)a2->pHDRMetaData;
            *(_OWORD *)((char *)v95 + 356) = *(_OWORD *)HDRMetaDataType;
            *(_QWORD *)((char *)v95 + 372) = *(_QWORD *)(HDRMetaDataType + 16);
            *((_DWORD *)v95 + 95) = *(_DWORD *)(HDRMetaDataType + 24);
          }
        }
        if ( a2->pPostComposition )
        {
          *(_DWORD *)v95 |= 0x80000000;
          *((_OWORD *)v95 + 24) = a2->pPostComposition->SrcRect;
          *((_OWORD *)v95 + 25) = a2->pPostComposition->DstRect;
        }
        if ( v107 != *(_DWORD *)(*((_QWORD *)this + 2) + 4LL * v89 + 1736) )
        {
          v111 = WdLogNewEntry5_WdEvent(HDRMetaDataType);
          *(_QWORD *)(v111 + 24) = *((_QWORD *)this + 2);
          WdLogEvent5_WdEvent(v111);
          COREDEVICEACCESS::Release(v162);
          DXGDEVICE::FlushScheduler(*((_QWORD **)this + 2), 3);
          v112 = COREDEVICEACCESS::AcquireShared(v162);
          v97 = v112;
          if ( v112 < 0 )
          {
            v114 = WdLogNewEntry5_WdEvent(v113);
LABEL_185:
            *(_QWORD *)(v114 + 24) = v97;
            WdLogEvent5_WdEvent(v114);
            goto LABEL_208;
          }
        }
        v115 = *((_QWORD *)this + 2);
        v116 = *(_QWORD *)(*(_QWORD *)(v115 + 16) + 16LL);
        if ( *(_QWORD *)(v115 + 1800) == v116 )
        {
          v117 = DXGCONTEXT::WaitForQueuedPresentLimit(this, v89, (a2->Flags.Value & 8) == 0, v162);
          v97 = v117;
          if ( v117 < 0 )
          {
            v114 = WdLogNewEntry5_WdEvent(v119);
            *(_QWORD *)(v114 + 32) = this;
            goto LABEL_185;
          }
          v120 = DXGCONTEXT::CheckDevicePresentSettings(this, v118, v89);
          v97 = v120;
          if ( v120 < 0 )
          {
            v125 = WdLogNewEntry5_WdEvent(v122);
            *(_QWORD *)(v125 + 24) = v97;
            *(_QWORD *)(v125 + 32) = this;
            WdLogEvent5_WdEvent(v125);
            if ( (_DWORD)v97 == -1071774920 )
            {
              DXGCONTEXT::UpdateDisplayStateForFullWDDMDevice(
                this,
                a2,
                (struct DXGALLOCATIONREFERENCE *)v173,
                v154,
                *((_DWORD *)v95 + 34));
              LODWORD(v97) = 0;
              *(_DWORD *)(*((_QWORD *)this + 2) + 4LL * v89 + 1736) = *((_DWORD *)v95 + 30);
            }
            goto LABEL_208;
          }
          if ( *((_DWORD *)v95 + 30) != 5 )
          {
            v126 = (_QWORD *)WdLogNewEntry5_WdWarning(v122, v121, v123, v124);
            v126[3] = this;
            v126[4] = v153;
            v126[5] = -1073741811LL;
            WdLogEvent5_WdWarning(v126);
LABEL_207:
            LODWORD(v97) = -1073741811;
            goto LABEL_208;
          }
          if ( *((_QWORD *)this + 38) )
          {
            v127 = WdLogNewEntry5_WdAssertion(v122, v121, v123, v124);
            *(_QWORD *)(v127 + 24) = 3076LL;
            WdLogEvent5_WdAssertion(v127);
          }
          LODWORD(v97) = DXGCONTEXT::SubmitPresentMultiPlaneOverlays3(
                           this,
                           a2,
                           v146,
                           v145,
                           v150,
                           (const struct DXGALLOCATIONREFERENCE *)v173,
                           &v171,
                           v95,
                           v168);
          if ( (int)v97 >= 0 )
          {
            if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1800LL) + 2280LL) + 112LL)
                           + 3208LL * v89
                           + 1028) == -1 )
            {
              v131 = WdLogNewEntry5_WdAssertion(3208LL * v89, v128, v129, v130);
              *(_QWORD *)(v131 + 24) = 3092LL;
              WdLogEvent5_WdAssertion(v131);
            }
            DXGCONTEXT::UpdateDisplayStateForFullWDDMDevice(
              this,
              a2,
              (struct DXGALLOCATIONREFERENCE *)v173,
              v154,
              *((_DWORD *)v95 + 34));
            v132 = v155;
            *(_DWORD *)(*((_QWORD *)this + 2) + 4LL * v89 + 1736) = *((_DWORD *)v95 + 30);
            DXGCONTEXT::UpdatePostComposition(this, v89, v148, v132, v161);
          }
        }
        else
        {
          if ( !*(_QWORD *)(v115 + 1800) )
          {
            v142 = WdLogNewEntry5_WdAssertion(v116, v115, v108, v109);
            *(_QWORD *)(v142 + 24) = *((_QWORD *)this + 2);
            *(_QWORD *)(v142 + 32) = -1073741822LL;
            WdLogEvent5_WdAssertion(v142);
            goto LABEL_207;
          }
          v133 = a2->ppPresentPlanes;
          v134 = *v133;
          if ( (*v133)->LayerIndex )
          {
            v135 = WdLogNewEntry5_WdAssertion(v116, v115, v108, v109);
            *(_QWORD *)(v135 + 24) = 3112LL;
            WdLogEvent5_WdAssertion(v135);
          }
          memset(&v172, 0, sizeof(v172));
          ConvertMPOThunkToLegacyPresentThunk(&v172, a2, v134);
          LODWORD(v97) = DXGCONTEXT::DisplayOnlyPresent((DXGDEVICE **)this, &v172, v173[0], v89, &v171, v162);
          DXGCONTEXT::UpdatePostComposition(this, v89, 0, 0, 0);
        }
        if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL))
          && (_DWORD)v97 != -1073741130 )
        {
          v140 = WdLogNewEntry5_WdAssertion(v137, v136, v138, v139);
          *(_QWORD *)(v140 + 24) = 3134LL;
          WdLogEvent5_WdAssertion(v140);
        }
        if ( *((_QWORD *)this + 38) )
        {
          v141 = WdLogNewEntry5_WdAssertion(v137, v136, v138, v139);
          *(_QWORD *)(v141 + 24) = 3135LL;
          WdLogEvent5_WdAssertion(v141);
        }
        goto LABEL_208;
      }
LABEL_215:
      v143 = WdLogNewEntry5_WdEvent(Height);
      *(_QWORD *)(v143 + 24) = 0LL;
      *(_QWORD *)(v143 + 32) = this;
      WdLogEvent5_WdEvent(v143);
      LODWORD(v97) = 0;
      goto LABEL_216;
    }
    LOBYTE(Height) = v150;
    v36 = v159;
    v37 = v145;
    v38 = v146;
  }
  _mm_lfence();
  v90 = (_QWORD *)WdLogNewEntry5_WdError(Height, v72);
  v90[3] = v73;
  v90[4] = this;
  v90[5] = *(_QWORD *)(*((_QWORD *)v173[LayerIndex] + 6) + 16LL);
  v90[6] = v173[LayerIndex];
  WdLogEvent5_WdError(v90);
LABEL_213:
  v41 = v73;
LABEL_214:
  LODWORD(v97) = v41;
LABEL_216:
  `vector destructor iterator'(
    (char *)v173,
    8LL,
    8LL,
    (void (__fastcall *)(char *))DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE);
  return (unsigned int)v97;
}
