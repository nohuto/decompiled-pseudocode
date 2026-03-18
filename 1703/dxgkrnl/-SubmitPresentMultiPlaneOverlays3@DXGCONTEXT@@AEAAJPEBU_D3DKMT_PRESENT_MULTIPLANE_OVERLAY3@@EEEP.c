/*
 * XREFs of ?SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEPEBVDXGALLOCATIONREFERENCE@@PEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAPEAV1@@Z @ 0x1C01B9D98
 * Callers:
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C01B880C (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0005D94 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?VidMmReferencePrimaryAllocationForSubmission@VIDMM_EXPORT@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_ALLOC@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0013A14 (-VidMmReferencePrimaryAllocationForSubmission@VIDMM_EXPORT@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MU.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C00201C8 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ?VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@KPEAUVIDMM_ALLOC@@H@Z @ 0x1C0038E6C (-VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@KPEAUVIDMM_ALLOC@@H@Z.c)
 *     ?DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z @ 0x1C016C16C (-DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z.c)
 *     ?GetPlaneAllocation@ADAPTER_DISPLAY@@QEAAPEBVDXGALLOCATION@@II@Z @ 0x1C01719A8 (-GetPlaneAllocation@ADAPTER_DISPLAY@@QEAAPEBVDXGALLOCATION@@II@Z.c)
 *     ?ConvertThunkOverlayToPackedAttributes3@DXGCONTEXT@@AEAAXPEAU_VIDSCH_LAYER_ATTRIBUTE@@AEBU_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@@Z @ 0x1C01B8058 (-ConvertThunkOverlayToPackedAttributes3@DXGCONTEXT@@AEAAXPEAU_VIDSCH_LAYER_ATTRIBUTE@@AEBU_D3DKM.c)
 *     ?ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@PEBU_D3DKMT_MULTIPLANE_OVERLAY3@@PEAPEAVCRefCountedBuffer@@@Z @ 0x1C01B9CB0 (-ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@PEBU_D3DKMT_MULTIPLANE_OVERLAY3@@PEAPEAVCRefCo.c)
 */

__int64 __fastcall DXGCONTEXT::SubmitPresentMultiPlaneOverlays3(
        void **this,
        const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 a5,
        const struct DXGALLOCATIONREFERENCE *a6,
        struct _DXGKARG_PRESENT *a7,
        struct VIDSCH_SUBMIT_DATA_BASE *a8,
        struct DXGCONTEXT **a9)
{
  unsigned __int8 v9; // di
  unsigned __int8 v10; // r15
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 ContextCount; // r12
  _QWORD *v22; // rax
  __int64 v24; // rdx
  int v25; // esi
  struct DXGCONTEXT **v26; // rcx
  int v27; // r8d
  UINT PresentPlaneCount; // r8d
  __int64 v29; // rdx
  D3DKMT_MULTIPLANE_OVERLAY3 **ppPresentPlanes; // r10
  D3DKMT_MULTIPLANE_OVERLAY3 *v31; // rcx
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdi
  __int64 v36; // rax
  int v37; // eax
  __int64 v38; // rdx
  struct _DXGKARG_PRESENT *v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // r10
  __int64 v43; // rax
  __int64 v44; // rax
  unsigned __int8 v45; // r15
  __int64 v46; // rcx
  int v47; // eax
  __int64 v48; // rax
  unsigned int v49; // edx
  __int64 v50; // rdi
  __int64 v51; // r15
  D3DKMT_MULTIPLANE_OVERLAY3 *v52; // rdx
  UINT LayerIndex; // esi
  _QWORD *v54; // rax
  __int64 v55; // rcx
  const struct DXGALLOCATION *PlaneAllocation; // rax
  UINT v57; // eax
  __int64 v58; // rsi
  __int64 v59; // r12
  D3DKMT_MULTIPLANE_OVERLAY3 *v60; // rcx
  __int64 v61; // rdi
  _QWORD *v62; // rax
  bool v63; // zf
  int v64; // eax
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rsi
  unsigned int v68; // ecx
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // r8
  __int64 v72; // rax
  __int64 v73; // rdi
  char *v74; // rdx
  char *v75; // rdx
  __int64 v76; // r9
  char *v77; // rax
  int v78; // eax
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // rsi
  __int64 v82; // rsi
  __int64 v83; // r9
  __int64 v84; // rdx
  __int64 v85; // rax
  int v86; // r8d
  D3DKMT_MULTIPLANE_OVERLAY3 *v87; // r8
  struct _VIDSCH_LAYER_ATTRIBUTE *v88; // rdi
  const D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *pPlaneAttributes; // rcx
  __int64 v90; // rax
  DXGCONTEXT *v91; // rcx
  __int64 v92; // rax
  __int64 v93; // rcx
  __int64 VidPnSourceId; // rdx
  const struct DXGALLOCATION *v95; // rax
  __int64 v96; // rcx
  __int64 v97; // rax
  __int64 v98; // rax
  __int64 v99; // rax
  struct _DXGKARG_PRESENT *v100; // r8
  __int64 v101; // rdx
  struct VIDMM_ALLOC **v102; // rcx
  __int64 v103; // r8
  __int64 v104; // r9
  unsigned int v105; // edi
  struct DXGCONTEXT **v106; // r15
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v108; // rax
  __int64 v109; // r15
  struct VIDMM_ALLOC **v110; // rdi
  __int64 v111; // r12
  _QWORD *v112; // rax
  __int64 v113; // rax
  int v114; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v115; // [rsp+34h] [rbp-CCh]
  int v116; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v117; // [rsp+3Ch] [rbp-C4h]
  UINT v118; // [rsp+40h] [rbp-C0h]
  int v119; // [rsp+44h] [rbp-BCh]
  int v120; // [rsp+48h] [rbp-B8h]
  D3DKMT_MULTIPLANE_OVERLAY3 *v121; // [rsp+50h] [rbp-B0h]
  CRefCountedBuffer *v122; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v123; // [rsp+60h] [rbp-A0h]
  struct _DXGKARG_PRESENT *v124; // [rsp+68h] [rbp-98h]
  __int64 v125; // [rsp+70h] [rbp-90h] BYREF
  const struct DXGALLOCATIONREFERENCE *v126; // [rsp+78h] [rbp-88h]
  struct DXGCONTEXT **v127; // [rsp+80h] [rbp-80h]
  _DWORD v128[2]; // [rsp+88h] [rbp-78h] BYREF
  _DWORD *v129; // [rsp+90h] [rbp-70h]
  _DWORD v130[64]; // [rsp+A0h] [rbp-60h] BYREF

  v9 = a4;
  v10 = a3;
  v126 = a6;
  v124 = a7;
  v115 = a4;
  v127 = a9;
  if ( !(_BYTE)a3 && !(_BYTE)a4 && !a5 )
  {
    v13 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v13 + 24) = 1352LL;
    WdLogEvent5_WdAssertion(v13);
  }
  v14 = a5 + v9 + (unsigned int)v10;
  if ( (unsigned int)v14 > a2->PresentPlaneCount )
  {
    v15 = WdLogNewEntry5_WdAssertion(v14, a2, a3, a4);
    *(_QWORD *)(v15 + 24) = 1355LL;
    WdLogEvent5_WdAssertion(v15);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this[2] + 2) + 16LL)) )
  {
    v20 = WdLogNewEntry5_WdAssertion(v17, v16, v18, v19);
    *(_QWORD *)(v20 + 24) = 1356LL;
    WdLogEvent5_WdAssertion(v20);
  }
  ContextCount = a2->ContextCount;
  v119 = ContextCount;
  if ( (unsigned int)ContextCount > 0x40 )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdError(v17, v16);
    v22[4] = ContextCount;
    v22[5] = 64LL;
    v22[6] = -1073741811LL;
LABEL_11:
    v22[3] = this;
    WdLogEvent5_WdError(v22);
    return 3221225485LL;
  }
  v24 = 1LL;
  v25 = *((_DWORD *)*a9 + 85);
  if ( (unsigned int)ContextCount > 1 )
  {
    v26 = v127 + 1;
    while ( 1 )
    {
      v27 = *((_DWORD *)*v26 + 85);
      if ( (v27 & v25) != 0 )
        break;
      v25 |= v27;
      v24 = (unsigned int)(v24 + 1);
      ++v26;
      if ( (unsigned int)v24 >= (unsigned int)ContextCount )
        goto LABEL_16;
    }
    v22 = (_QWORD *)WdLogNewEntry5_WdError(v26, v24);
    v22[4] = -1073741811LL;
    goto LABEL_11;
  }
LABEL_16:
  PresentPlaneCount = a2->PresentPlaneCount;
  v122 = 0LL;
  v29 = 0LL;
  if ( PresentPlaneCount )
  {
    ppPresentPlanes = a2->ppPresentPlanes;
    while ( 1 )
    {
      v31 = ppPresentPlanes[v29];
      if ( (v31->InputFlags.Value & 1) != 0 && !v31->LayerIndex )
        break;
      v29 = (unsigned int)(v29 + 1);
      if ( (unsigned int)v29 >= PresentPlaneCount )
        goto LABEL_26;
    }
    v32 = ReadPresentPrivateDriverData(
            *(struct DXGADAPTER **)(*((_QWORD *)this[2] + 2) + 16LL),
            ppPresentPlanes[v29],
            &v122);
    v35 = v32;
    if ( v32 < 0 )
    {
      v36 = WdLogNewEntry5_WdError(v34, v33);
      *(_QWORD *)(v36 + 24) = v35;
      WdLogEvent5_WdError(v36);
      return (unsigned int)v35;
    }
    v9 = v115;
    LODWORD(ContextCount) = v119;
  }
LABEL_26:
  v37 = *(_DWORD *)a8;
  *((_DWORD *)a8 + 34) = v25;
  *((_DWORD *)a8 + 35) = ContextCount - 1;
  *(_DWORD *)a8 = v37 & 0xFFFFFBFF | ((unsigned int)ContextCount > 1 ? 0x400 : 0) | 0x800;
  if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*((_QWORD *)this[2] + 2) + 16LL)) )
  {
    if ( v42 )
    {
      v39 = v124;
      v124->PrivateDriverDataSize = v41;
      v39->pPrivateDriverData = (PVOID)(v42 + 8);
    }
    *((_QWORD *)a8 + 3) = v42;
  }
  if ( *((_DWORD *)a8 + 30) != 5 )
  {
    v43 = WdLogNewEntry5_WdAssertion(v39, v38, v40, v41);
    *(_QWORD *)(v43 + 24) = 1441LL;
    WdLogEvent5_WdAssertion(v43);
  }
  if ( v124->pDmaBuffer )
  {
    v44 = WdLogNewEntry5_WdAssertion(v39, v38, v40, v41);
    *(_QWORD *)(v44 + 24) = 1446LL;
    WdLogEvent5_WdAssertion(v44);
  }
  v45 = v9 + v10;
  v46 = *((_QWORD *)this[2] + 2);
  LOBYTE(v46) = *(_BYTE *)(*(_QWORD *)(v46 + 16) + 2242LL);
  v47 = (unsigned __int8)(a5 + v45);
  if ( !(_BYTE)v46 )
    v47 = v45;
  v120 = v47;
  if ( (unsigned __int8)v47 > 8u )
  {
    v48 = WdLogNewEntry5_WdAssertion(v46, v45, v40, v41);
    *(_QWORD *)(v48 + 24) = 1464LL;
    WdLogEvent5_WdAssertion(v48);
  }
  v49 = 0;
  v114 = 0;
  v50 = 0LL;
  v51 = *((_BYTE *)a8 + 348) != 0 ? 432LL : 416LL;
  if ( a2->PresentPlaneCount )
  {
    do
    {
      v52 = a2->ppPresentPlanes[v50];
      LayerIndex = v52->LayerIndex;
      if ( (v52->InputFlags.Value & 1) != 0 )
      {
        *((_BYTE *)a8 + v51) |= 1 << LayerIndex;
      }
      else
      {
        v54 = this[2];
        v55 = v54[225];
        if ( v55 == *(_QWORD *)(v54[2] + 16LL) )
          PlaneAllocation = ADAPTER_DISPLAY::GetPlaneAllocation(
                              *(ADAPTER_DISPLAY **)(v55 + 2280),
                              a2->VidPnSourceId,
                              LayerIndex,
                              v41);
        else
          PlaneAllocation = 0LL;
        if ( PlaneAllocation )
          *((_BYTE *)a8 + v51 + 1) |= 1 << LayerIndex;
      }
      v50 = (unsigned int)(v50 + 1);
    }
    while ( (unsigned int)v50 < a2->PresentPlaneCount );
    v49 = 0;
  }
  v57 = 0;
  v118 = 0;
  if ( a2->PresentPlaneCount )
  {
    while ( 1 )
    {
      v58 = v57;
      v59 = 8LL * v49;
      v60 = a2->ppPresentPlanes[v57];
      v121 = v60;
      v61 = v60->LayerIndex;
      v130[v59] = v61;
      v130[v59 + 1] = v60->InputFlags.Value & 1;
      v62 = this[2];
      if ( (v60->InputFlags.Value & 1) != 0 )
        break;
      v93 = v62[225];
      VidPnSourceId = a2->VidPnSourceId;
      if ( v93 == *(_QWORD *)(v62[2] + 16LL) )
        v95 = ADAPTER_DISPLAY::GetPlaneAllocation(
                *(ADAPTER_DISPLAY **)(v93 + 2280),
                VidPnSourceId,
                (unsigned int)v61,
                v41);
      else
        v95 = 0LL;
      v96 = (unsigned int)v61;
      if ( !v95 )
      {
        if ( ((unsigned __int8)(1 << v61) & *((_BYTE *)a8 + v51 + 1)) != 0 )
        {
          v98 = WdLogNewEntry5_WdAssertion((unsigned int)v61, VidPnSourceId, v40, v41);
          *(_QWORD *)(v98 + 24) = 1665LL;
          WdLogEvent5_WdAssertion(v98);
        }
        if ( *((_QWORD *)v126 + v58) )
        {
          v99 = WdLogNewEntry5_WdAssertion(v96, VidPnSourceId, v40, v41);
          *(_QWORD *)(v99 + 24) = 1666LL;
          WdLogEvent5_WdAssertion(v99);
        }
        v49 = v114;
        goto LABEL_107;
      }
      if ( ((unsigned __int8)(1 << v61) & *((_BYTE *)a8 + v51 + 1)) == 0 )
      {
        v97 = WdLogNewEntry5_WdAssertion((unsigned int)v61, VidPnSourceId, v40, v41);
        *(_QWORD *)(v97 + 24) = 1648LL;
        WdLogEvent5_WdAssertion(v97);
      }
      v49 = v114;
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this[2] + 225) + 192LL) + 64LL) + 40LL) + 28LL) >= 0x4002u )
      {
        *(_QWORD *)&v130[v59 + 2] = 0LL;
        v130[v59 + 4] &= 0xFFFFFFE0;
        *(_QWORD *)&v130[v59 + 6] = 0LL;
LABEL_101:
        v114 = ++v49;
      }
LABEL_107:
      v57 = v118 + 1;
      v118 = v57;
      if ( v57 >= a2->PresentPlaneCount )
      {
        LODWORD(ContextCount) = v119;
        goto LABEL_109;
      }
    }
    v63 = *(_BYTE *)(*(_QWORD *)(v62[2] + 16LL) + 2242LL) == 0;
    v64 = *(_DWORD *)((char *)a8 + v51);
    if ( v63 )
      v65 = (unsigned __int8)v64;
    else
      v65 = (unsigned __int8)v64 | (unsigned int)*((unsigned __int8 *)a8 + v51 + 1);
    v66 = (unsigned int)v61;
    if ( ((1 << v61) & (unsigned int)v65) != 0 )
    {
      v68 = (v65 & ((1 << v61) - 1) & 0x55555555) + ((((unsigned int)v65 & ((1 << v61) - 1)) >> 1) & 0x55555555);
      v65 = v68 & 0x33333333;
      v66 = (((unsigned int)v65 + ((v68 >> 2) & 0x33333333)) >> 4)
          + (((_DWORD)v65 + ((v68 >> 2) & 0x33333333)) & 0xF0F0F0F);
      v67 = (unsigned int)v66 + WORD1(v66);
    }
    else
    {
      v67 = 0xFFFFFFFFLL;
    }
    v117 = v67;
    if ( (unsigned int)v67 >= (unsigned __int8)v120 )
    {
      v69 = WdLogNewEntry5_WdAssertion(v66, v65, v40, v41);
      *(_QWORD *)(v69 + 24) = 1536LL;
      WdLogEvent5_WdAssertion(v69);
    }
    if ( (unsigned int)v67 >= 8 )
    {
      v70 = WdLogNewEntry5_WdAssertion(v66, v65, v40, v41);
      *(_QWORD *)(v70 + 24) = 1543LL;
      WdLogEvent5_WdAssertion(v70);
    }
    v71 = *((_QWORD *)v126 + v61);
    v123 = v71;
    if ( !v71 )
    {
      v72 = WdLogNewEntry5_WdAssertion(v126, v65, 0LL, v41);
      *(_QWORD *)(v72 + 24) = 1554LL;
      WdLogEvent5_WdAssertion(v72);
      v71 = v123;
    }
    v73 = (unsigned int)v67;
    if ( *((_BYTE *)a8 + 348) )
      v74 = (char *)a8 + 48 * v67 + *((_DWORD *)a8 + 109) * ((8 * *((_DWORD *)a8 + 110) + 167) & 0xFFFFFFF8) + 456;
    else
      v74 = (char *)a8 + 64 * (unsigned __int64)(unsigned int)v67 + 432;
    *(_QWORD *)v74 = *(_QWORD *)(*(_QWORD *)(v71 + 48) + 16LL);
    if ( *((_BYTE *)a8 + 348) )
      v75 = (char *)a8
          + 48 * (unsigned int)v67
          + *((_DWORD *)a8 + 109) * ((8 * *((_DWORD *)a8 + 110) + 167) & 0xFFFFFFF8)
          + 448;
    else
      v75 = (char *)a8 + 64 * (unsigned __int64)(unsigned int)v67 + 480;
    *(_QWORD *)v75 = this[23];
    if ( *((_BYTE *)a8 + 348) )
    {
      v76 = 48 * ((unsigned int)v67 + 1LL);
      v77 = (char *)a8 + *((_DWORD *)a8 + 109) * ((8 * *((_DWORD *)a8 + 110) + 167) & 0xFFFFFFF8) + 432;
    }
    else
    {
      v76 = (__int64)a8 + 424;
      v77 = (char *)((unsigned __int64)(unsigned int)v67 << 6);
    }
    v78 = VIDMM_EXPORT::VidMmReferencePrimaryAllocationForSubmission(
            *(VIDMM_EXPORT **)(*((_QWORD *)this[2] + 2) + 432LL),
            *((struct VIDMM_DEVICE **)this[2] + 74),
            *(struct _VIDMM_MULTI_ALLOC **)(v71 + 24),
            (struct VIDMM_ALLOC **)&v77[v76]);
    v81 = v78;
    if ( v78 < 0 )
    {
      v112 = (_QWORD *)WdLogNewEntry5_WdError(v80, v79);
      v112[4] = v123;
      v112[3] = this;
      v112[5] = v81;
      WdLogEvent5_WdError(v112);
LABEL_116:
      if ( (int)v81 < 0 )
        goto LABEL_117;
      goto LABEL_127;
    }
    v82 = v123;
    (*(void (__fastcall **)(_QWORD, _QWORD, int *, __int64 *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this[2] + 2) + 432LL)
                                                                         + 8LL)
                                                             + 216LL))(
      *(_QWORD *)(*((_QWORD *)this[2] + 2) + 440LL),
      *(_QWORD *)(*(_QWORD *)(v123 + 48) + 8LL),
      &v116,
      &v125);
    v83 = 0LL;
    if ( *((_BYTE *)a8 + 348) )
      v84 = (__int64)a8 + 48 * v73 + *((_DWORD *)a8 + 109) * ((8 * *((_DWORD *)a8 + 110) + 167) & 0xFFFFFFF8) + 472;
    else
      v84 = (__int64)a8 + 64 * v73 + 440;
    *(_QWORD *)v84 = v125;
    if ( *((_BYTE *)a8 + 348) )
    {
      v84 = 6 * v73;
      *(_WORD *)((char *)a8 + 48 * v73 + *((_DWORD *)a8 + 109) * ((8 * *((_DWORD *)a8 + 110) + 167) & 0xFFFFFFF8) + 464) = v116;
    }
    else
    {
      *((_DWORD *)a8 + 16 * v73 + 119) ^= (*((_DWORD *)a8 + 16 * v73 + 119) ^ (v116 << 17)) & 0x3E0000;
    }
    v85 = *(_QWORD *)(v82 + 40);
    if ( v85 )
      v86 = (*(_DWORD *)(v85 + 4) >> 3) & 1;
    else
      v86 = 0;
    if ( *((_BYTE *)a8 + 348) )
    {
      LOBYTE(v84) = v86 != 0;
      *((_BYTE *)a8 + 48 * v73 + *((_DWORD *)a8 + 109) * ((8 * *((_DWORD *)a8 + 110) + 167) & 0xFFFFFFF8) + 488) = v86 != 0;
    }
    else
    {
      *((_DWORD *)a8 + 16 * v73 + 119) = *((_DWORD *)a8 + 16 * v73 + 119) & 0xFF7FFFFF | (v86 << 23);
    }
    v87 = v121;
    if ( *((_BYTE *)a8 + 348)
      && (v84 = v117,
          *(_DWORD *)((char *)a8 + v117 * ((8 * *((_DWORD *)a8 + 110) + 167) & 0xFFFFFFF8) + 472) = v121->MaxImmediateFlipLine,
          *((_BYTE *)a8 + 348)) )
    {
      v88 = (struct VIDSCH_SUBMIT_DATA_BASE *)((char *)a8
                                             + (unsigned int)v84 * ((8 * *((_DWORD *)a8 + 110) + 167) & 0xFFFFFFF8)
                                             + 576);
    }
    else
    {
      v88 = (struct VIDSCH_SUBMIT_DATA_BASE *)((char *)a8 + 64 * v73 + 448);
    }
    pPlaneAttributes = v87->pPlaneAttributes;
    if ( pPlaneAttributes->SrcRect.right <= pPlaneAttributes->SrcRect.left )
    {
      v90 = WdLogNewEntry5_WdAssertion(pPlaneAttributes, v84, v87, 0LL);
      *(_QWORD *)(v90 + 24) = 1624LL;
      WdLogEvent5_WdAssertion(v90);
      v87 = v121;
    }
    v91 = (DXGCONTEXT *)v87->pPlaneAttributes;
    if ( *((_DWORD *)v91 + 4) <= *((_DWORD *)v91 + 2) )
    {
      v92 = WdLogNewEntry5_WdAssertion(v91, v84, v87, v83);
      *(_QWORD *)(v92 + 24) = 1625LL;
      WdLogEvent5_WdAssertion(v92);
      v87 = v121;
    }
    DXGCONTEXT::ConvertThunkOverlayToPackedAttributes3(v91, v88, v87->pPlaneAttributes, v83);
    v49 = v114;
    *(_QWORD *)&v130[v59 + 2] = *(_QWORD *)(v82 + 32);
    v130[v59 + 4] ^= (v130[v59 + 4] ^ v116) & 0x1F;
    *(_QWORD *)&v130[v59 + 6] = v125;
    goto LABEL_101;
  }
LABEL_109:
  v100 = v124;
  v128[0] = a2->VidPnSourceId;
  v129 = v130;
  v128[1] = v49;
  v124->pAllocationList = (DXGK_ALLOCATIONLIST *)v128;
  LODWORD(v81) = ADAPTER_RENDER::DdiPresent(*((ADAPTER_RENDER **)this[2] + 2), this[23], v100);
  if ( (int)v81 >= 0 )
  {
    v105 = 0;
    if ( !(_DWORD)ContextCount )
      goto LABEL_116;
    v106 = v127;
    while ( 1 )
    {
      CurrentThread = KeGetCurrentThread();
      if ( *((struct _KTHREAD **)*v106 + 48) != CurrentThread )
      {
        v108 = WdLogNewEntry5_WdAssertion(CurrentThread, v101, v103, v104);
        *(_QWORD *)(v108 + 24) = 1705LL;
        WdLogEvent5_WdAssertion(v108);
      }
      LODWORD(v81) = (*(__int64 (__fastcall **)(_QWORD, struct VIDSCH_SUBMIT_DATA_BASE *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this[2] + 2) + 408LL) + 8LL)
                                                                                         + 344LL))(
                       *((_QWORD *)*v106 + 29),
                       a8);
      if ( (int)v81 < 0 )
        break;
      *(_DWORD *)a8 &= ~0x800u;
      ++v105;
      ++v106;
      if ( v105 >= (unsigned int)ContextCount )
        goto LABEL_116;
    }
  }
LABEL_117:
  if ( (_BYTE)v120 )
  {
    v109 = 0LL;
    v110 = (struct VIDMM_ALLOC **)((char *)a8 + 424);
    v111 = (unsigned __int8)v120;
    do
    {
      if ( *((_BYTE *)a8 + 348) )
        v102 = (struct VIDMM_ALLOC **)((char *)a8
                                     + *((_DWORD *)a8 + 109) * ((8 * *((_DWORD *)a8 + 110) + 167) & 0xFFFFFFF8)
                                     + v109
                                     + 480);
      else
        v102 = v110;
      if ( *v102 )
        VIDMM_EXPORT::VidMmUnreferencePrimaryAllocation(
          *(VIDMM_EXPORT **)(*((_QWORD *)this[2] + 2) + 432LL),
          *((struct VIDMM_DEVICE **)this[2] + 74),
          *((_DWORD *)a8 + 34),
          *v102);
      v109 += 48LL;
      v110 += 8;
      --v111;
    }
    while ( v111 );
  }
  v113 = WdLogNewEntry5_WdError(v102, v101);
  *(_QWORD *)(v113 + 24) = this;
  *(_QWORD *)(v113 + 32) = (int)v81;
  WdLogEvent5_WdError(v113);
LABEL_127:
  if ( v122 )
    CRefCountedBuffer::RefCountedBufferRelease(v122);
  return (unsigned int)v81;
}
