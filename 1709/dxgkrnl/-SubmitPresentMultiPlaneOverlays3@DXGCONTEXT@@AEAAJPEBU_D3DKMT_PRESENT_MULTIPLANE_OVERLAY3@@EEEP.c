/*
 * XREFs of ?SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEPEBVDXGALLOCATIONREFERENCE@@PEAEPEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAPEAV1@@Z @ 0x1C01D1F50
 * Callers:
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C01D07FC (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0002160 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetImplicitHwQueue@DXGCONTEXT@@QEBAPEAU_VIDSCH_CONTEXT@@XZ @ 0x1C0008E24 (-GetImplicitHwQueue@DXGCONTEXT@@QEBAPEAU_VIDSCH_CONTEXT@@XZ.c)
 *     ?VidMmReferencePrimaryAllocationForSubmission@VIDMM_EXPORT@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_ALLOC@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00149A0 (-VidMmReferencePrimaryAllocationForSubmission@VIDMM_EXPORT@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MU.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C001D458 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ?VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@KPEAUVIDMM_ALLOC@@H@Z @ 0x1C00290D0 (-VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@KPEAUVIDMM_ALLOC@@H@Z.c)
 *     ?DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z @ 0x1C00FED50 (-DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z.c)
 *     ??1?$PagedPoolZeroedArray@U_DXGK_PRESENTALLOCATIONINFO@@$03@@QEAA@XZ @ 0x1C010026C (--1-$PagedPoolZeroedArray@U_DXGK_PRESENTALLOCATIONINFO@@$03@@QEAA@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_DXGK_PRESENTALLOCATIONINFO@@$03@@QEAAPEAU_DXGK_PRESENTALLOCATIONINFO@@I@Z @ 0x1C010028C (-AllocateElements@-$PagedPoolZeroedArray@U_DXGK_PRESENTALLOCATIONINFO@@$03@@QEAAPEAU_DXGK_PRESEN.c)
 *     ?SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K@Z @ 0x1C01B7D00 (-SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K@Z.c)
 *     ?ConvertThunkOverlayToPackedAttributes3@DXGCONTEXT@@AEAAXPEAU_VIDSCH_LAYER_ATTRIBUTE@@AEBU_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@@Z @ 0x1C01D0044 (-ConvertThunkOverlayToPackedAttributes3@DXGCONTEXT@@AEAAXPEAU_VIDSCH_LAYER_ATTRIBUTE@@AEBU_D3DKM.c)
 *     ?ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@PEBU_D3DKMT_MULTIPLANE_OVERLAY3@@PEAPEAVCRefCountedBuffer@@@Z @ 0x1C01D1E68 (-ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@PEBU_D3DKMT_MULTIPLANE_OVERLAY3@@PEAPEAVCRefCo.c)
 */

__int64 __fastcall DXGCONTEXT::SubmitPresentMultiPlaneOverlays3(
        DXGCONTEXT *this,
        const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        unsigned __int8 a5,
        const struct DXGALLOCATIONREFERENCE *a6,
        unsigned __int8 *a7,
        struct _DXGKARG_PRESENT *a8,
        struct VIDSCH_SUBMIT_DATA_BASE *a9,
        struct DXGCONTEXT **a10)
{
  unsigned __int8 v10; // di
  const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *v12; // r13
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 ContextCount; // r12
  _QWORD *v20; // rax
  __int64 v21; // rdi
  unsigned int v22; // edx
  struct DXGADAPTER *v23; // r10
  int v24; // r14d
  struct DXGCONTEXT **v25; // rcx
  int v26; // r8d
  unsigned int PresentPlaneCount; // r8d
  __int64 v28; // rcx
  const struct _D3DKMT_MULTIPLANE_OVERLAY3 *v29; // rdx
  int v30; // eax
  __int64 v31; // rcx
  int v32; // ecx
  CRefCountedBuffer *v33; // rcx
  UINT v34; // r9d
  struct _DXGKARG_PRESENT *v35; // rdx
  __int64 v36; // rax
  struct _DXGKARG_PRESENT *v37; // r14
  __int64 v38; // rax
  int v39; // edx
  __int64 LayerIndex; // rcx
  int v41; // r15d
  __int64 v42; // rax
  unsigned int v43; // r10d
  __int64 v44; // r8
  __int64 v45; // r9
  D3DKMT_MULTIPLANE_OVERLAY3 *v46; // rdx
  int v47; // edx
  int v48; // eax
  UINT v49; // eax
  __int64 v50; // r14
  unsigned __int64 v51; // rdi
  __int64 v52; // r8
  int v53; // eax
  int v54; // edx
  int v55; // edx
  __int64 v56; // r14
  unsigned int v57; // edx
  unsigned int v58; // r14d
  __int64 v59; // rax
  __int64 v60; // rax
  unsigned int v61; // r15d
  struct DXGCONTEXT **v62; // r8
  __int64 v63; // r10
  __int64 v64; // rax
  struct VIDSCH_SUBMIT_DATA_BASE *v65; // rdx
  __int64 v66; // r8
  struct VIDSCH_SUBMIT_DATA_BASE *v67; // rdx
  struct VIDMM_ALLOC **v68; // r9
  int v69; // eax
  __int64 v70; // rcx
  unsigned __int8 IsDxgmms2; // al
  __int64 v72; // r10
  __int64 v73; // rdi
  int v74; // r8d
  char *v75; // rdx
  __int64 v76; // rax
  int v77; // r8d
  int v78; // ecx
  __int64 v79; // rax
  D3DKMT_MULTIPLANE_OVERLAY3 *v80; // rdx
  struct _VIDSCH_LAYER_ATTRIBUTE *v81; // rdi
  const D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *pPlaneAttributes; // rcx
  __int64 v83; // rax
  DXGCONTEXT *v84; // rcx
  __int64 v85; // rax
  int v86; // eax
  __int64 v87; // rax
  __int64 v88; // rax
  __int64 v89; // rax
  _QWORD *v90; // rax
  __int64 v91; // rdx
  __int64 v92; // rcx
  unsigned int v93; // r15d
  D3DKMT_MULTIPLANE_OVERLAY3 *v94; // rdi
  __int64 v95; // rax
  UINT DirtyRectCount; // ecx
  __int64 Elements; // rax
  __int64 v98; // r8
  unsigned int v99; // edi
  struct DXGCONTEXT **v100; // r13
  __int64 v101; // r14
  __int64 v102; // r15
  __int64 v103; // rcx
  char *v104; // rax
  __int16 v105; // dx
  DXGK_ALLOCATIONLIST *v106; // rax
  __int64 v107; // rax
  __int64 v108; // r8
  __int64 v109; // r9
  unsigned int v110; // r14d
  DXGCONTEXT **v111; // r15
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v113; // rax
  struct _VIDSCH_CONTEXT *ImplicitHwQueue; // rax
  __int64 v115; // rdx
  unsigned int v116; // r13d
  unsigned int i; // r14d
  unsigned int j; // r15d
  int v119; // edx
  struct VIDMM_ALLOC **v120; // rdx
  __int64 v121; // rax
  unsigned int v124; // [rsp+34h] [rbp-CCh]
  D3DKMT_MULTIPLANE_OVERLAY3 *v126; // [rsp+38h] [rbp-C8h]
  int v127; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v128; // [rsp+44h] [rbp-BCh]
  int v129; // [rsp+48h] [rbp-B8h]
  UINT v130; // [rsp+4Ch] [rbp-B4h]
  __int64 v131; // [rsp+50h] [rbp-B0h]
  struct _DXGKARG_PRESENT *v132; // [rsp+58h] [rbp-A8h]
  const struct DXGALLOCATIONREFERENCE *v133; // [rsp+60h] [rbp-A0h]
  struct DXGCONTEXT **v134; // [rsp+68h] [rbp-98h]
  CRefCountedBuffer *v135; // [rsp+70h] [rbp-90h] BYREF
  int v136; // [rsp+78h] [rbp-88h]
  __int64 v137; // [rsp+80h] [rbp-80h] BYREF
  struct DXGCONTEXT **v138; // [rsp+88h] [rbp-78h]
  DXGK_ALLOCATIONLIST *v139; // [rsp+90h] [rbp-70h]
  _QWORD v140[12]; // [rsp+A0h] [rbp-60h] BYREF
  PVOID v141[17]; // [rsp+100h] [rbp+0h] BYREF
  int v142; // [rsp+188h] [rbp+88h]
  _DWORD v143[2]; // [rsp+190h] [rbp+90h] BYREF
  __int64 v144; // [rsp+198h] [rbp+98h]
  _BYTE v145[8]; // [rsp+1A0h] [rbp+A0h]
  _QWORD v146[37]; // [rsp+1A8h] [rbp+A8h]

  v10 = a4;
  v12 = a2;
  v133 = a6;
  v132 = a8;
  v134 = a10;
  if ( !a3 && !a4 && !a5 )
  {
    v14 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v14 + 24) = 1397LL;
    WdLogEvent5_WdAssertion(v14);
  }
  v15 = a5 + v10 + (unsigned int)a3;
  if ( (unsigned int)v15 > v12->PresentPlaneCount )
  {
    v16 = WdLogNewEntry5_WdAssertion(v15);
    *(_QWORD *)(v16 + 24) = 1400LL;
    WdLogEvent5_WdAssertion(v16);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    v18 = WdLogNewEntry5_WdAssertion(v17);
    *(_QWORD *)(v18 + 24) = 1401LL;
    WdLogEvent5_WdAssertion(v18);
  }
  ContextCount = v12->ContextCount;
  if ( (unsigned int)ContextCount > 0x40 )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdError(v17);
    LODWORD(v21) = -1073741811;
    v20[4] = ContextCount;
    v20[5] = 64LL;
    v20[6] = -1073741811LL;
LABEL_11:
    v20[3] = this;
LABEL_12:
    WdLogEvent5_WdError(v20);
    return (unsigned int)v21;
  }
  v22 = 1;
  v23 = *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
  v128 = *((_DWORD *)v23 + 544);
  v24 = *((_DWORD *)*a10 + 89);
  if ( (unsigned int)ContextCount > 1 )
  {
    v25 = v134 + 1;
    while ( 1 )
    {
      v26 = *((_DWORD *)*v25 + 89);
      if ( (v26 & v24) != 0 )
        break;
      v24 |= v26;
      ++v22;
      ++v25;
      if ( v22 >= (unsigned int)ContextCount )
        goto LABEL_17;
    }
    v20 = (_QWORD *)WdLogNewEntry5_WdError(v25);
    LODWORD(v21) = -1073741811;
    v20[4] = -1073741811LL;
    goto LABEL_11;
  }
LABEL_17:
  PresentPlaneCount = v12->PresentPlaneCount;
  v135 = 0LL;
  v28 = 0LL;
  if ( PresentPlaneCount )
  {
    while ( 1 )
    {
      v29 = v12->ppPresentPlanes[v28];
      if ( (v29->InputFlags.Value & 1) != 0 && !v29->LayerIndex )
        break;
      v28 = (unsigned int)(v28 + 1);
      if ( (unsigned int)v28 >= PresentPlaneCount )
        goto LABEL_26;
    }
    v30 = ReadPresentPrivateDriverData(v23, v29, &v135);
    v21 = v30;
    if ( v30 < 0 )
    {
      v20 = (_QWORD *)WdLogNewEntry5_WdError(v31);
      v20[3] = v21;
      goto LABEL_12;
    }
    v10 = a4;
LABEL_26:
    v12 = a2;
  }
  *((_DWORD *)a9 + 35) = ContextCount;
  *((_DWORD *)a9 + 34) = v24;
  v32 = 2048;
  if ( (unsigned int)ContextCount > 1 )
    v32 = 3072;
  *(_DWORD *)a9 = *(_DWORD *)a9 & 0xFFFFFBFF | v32;
  if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    v33 = v135;
    if ( v135 )
    {
      v35 = v132;
      v132->PrivateDriverDataSize = v34;
      v35->pPrivateDriverData = (char *)v33 + 8;
    }
    *((_QWORD *)a9 + 3) = v135;
  }
  if ( *((_DWORD *)a9 + 30) != 5 )
  {
    v36 = WdLogNewEntry5_WdAssertion(v33);
    *(_QWORD *)(v36 + 24) = 1488LL;
    WdLogEvent5_WdAssertion(v36);
  }
  v37 = v132;
  if ( v132->pDmaBuffer )
  {
    v38 = WdLogNewEntry5_WdAssertion(v33);
    *(_QWORD *)(v38 + 24) = 1493LL;
    WdLogEvent5_WdAssertion(v38);
  }
  v39 = (unsigned __int8)(v10 + a3);
  LayerIndex = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  LOBYTE(LayerIndex) = *(_BYTE *)(*(_QWORD *)(LayerIndex + 16) + 2266LL);
  v41 = (unsigned __int8)(a5 + v10 + a3);
  if ( !(_BYTE)LayerIndex )
    v41 = v39;
  v129 = v41;
  if ( (unsigned __int8)v41 > 0xAu )
  {
    v42 = WdLogNewEntry5_WdAssertion(LayerIndex);
    *(_QWORD *)(v42 + 24) = 1511LL;
    WdLogEvent5_WdAssertion(v42);
  }
  v43 = 0;
  v124 = 0;
  v44 = 0LL;
  v45 = *((_BYTE *)a9 + 348) != 0 ? 440LL : 424LL;
  v139 = (DXGK_ALLOCATIONLIST *)v45;
  if ( v12->PresentPlaneCount )
  {
    while ( 1 )
    {
      v46 = v12->ppPresentPlanes[v44];
      LayerIndex = v46->LayerIndex;
      if ( (v46->InputFlags.Value & 1) != 0 )
        break;
      if ( a7[LayerIndex] )
      {
        v47 = *(_DWORD *)((char *)a9 + v45);
        v48 = (v47 ^ (v47 | (1024 << LayerIndex))) & 0xFFC00;
        goto LABEL_46;
      }
LABEL_47:
      v44 = (unsigned int)(v44 + 1);
      if ( (unsigned int)v44 >= v12->PresentPlaneCount )
        goto LABEL_48;
    }
    v47 = *(_DWORD *)((char *)a9 + v45);
    v48 = ((unsigned __int16)v47 ^ (unsigned __int16)(v47 | (1 << LayerIndex))) & 0x3FF;
LABEL_46:
    *(_DWORD *)((char *)a9 + v45) = v47 ^ v48;
    goto LABEL_47;
  }
LABEL_48:
  v49 = 0;
  v130 = 0;
  if ( !v12->PresentPlaneCount )
  {
LABEL_114:
    v141[0] = 0LL;
    v142 = 0;
    v93 = v128;
    if ( v128 >= 2 )
    {
      LODWORD(v140[0]) = v12->VidPnSourceId;
      v140[1] = v143;
      HIDWORD(v140[0]) = v43;
    }
    else
    {
      _mm_lfence();
      v94 = *v12->ppPresentPlanes;
      if ( (v94->InputFlags.Value & 1) == 0 )
      {
        v95 = WdLogNewEntry5_WdAssertion(LayerIndex);
        *(_QWORD *)(v95 + 24) = 1747LL;
        WdLogEvent5_WdAssertion(v95);
      }
      v37->Flags.Value &= ~0x1000u;
      DirtyRectCount = v94->pPlaneAttributes->DirtyRectCount;
      v37->SubRectCnt = DirtyRectCount;
      if ( DirtyRectCount )
        v37->pDstSubRects = v94->pPlaneAttributes->pDirtyRects;
      if ( (unsigned int)ContextCount > 1 )
      {
        Elements = PagedPoolZeroedArray<_DXGK_PRESENTALLOCATIONINFO,4>::AllocateElements(v141, ContextCount);
        v139 = (DXGK_ALLOCATIONLIST *)Elements;
        if ( Elements )
        {
          v99 = 0;
          v100 = v134;
          v101 = Elements + 16;
          while ( 1 )
          {
            v102 = *((_QWORD *)v133 + v93 * v99);
            v103 = (*(_DWORD *)(v102 + 72) >> 12) & 0x3F;
            if ( (_DWORD)v103 != *((_DWORD *)*v100 + 90) )
              break;
            *(_QWORD *)(v101 - 16) = *(_QWORD *)(v102 + 32);
            LOBYTE(v98) = *((_BYTE *)this + 399);
            *(_QWORD *)(v101 - 8) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 528LL) + 8LL)
                                                                                               + 248LL))(
                                      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 536LL),
                                      *(_QWORD *)(v102 + 24),
                                      v98,
                                      *((unsigned int *)*v100 + 90));
            if ( *((_BYTE *)a9 + 348) )
              v104 = (char *)a9
                   + 48 * v99 * *((_DWORD *)a9 + 111)
                   + *((_DWORD *)a9 + 111) * ((8 * *((_DWORD *)a9 + 112) + 175) & 0xFFFFFFF8)
                   + 480;
            else
              v104 = (char *)a9 + 448;
            *(_QWORD *)v101 = *(_QWORD *)v104;
            if ( *((_BYTE *)a9 + 348) )
              v105 = *(_WORD *)((char *)a9
                              + 48 * v99 * *((_DWORD *)a9 + 111)
                              + *((_DWORD *)a9 + 111) * ((8 * *((_DWORD *)a9 + 112) + 175) & 0xFFFFFFF8)
                              + 472);
            else
              v105 = (*((_DWORD *)a9 + 121) >> 17) & 0x1F;
            v93 = v128;
            ++v99;
            *(_WORD *)(v101 + 8) = v105;
            ++v100;
            v101 += 32LL;
            if ( v99 >= (unsigned int)ContextCount )
            {
              v106 = v139;
              v37 = v132;
              v132->NumSrcAllocations = ContextCount;
              goto LABEL_139;
            }
          }
          v107 = WdLogNewEntry5_WdError(v103);
          *(_QWORD *)(v107 + 24) = v102;
          WdLogEvent5_WdError(v107);
          LODWORD(v21) = -1073741811;
        }
        else
        {
          LODWORD(v21) = -1073741801;
        }
        PagedPoolZeroedArray<_DXGK_PRESENTALLOCATIONINFO,4>::~PagedPoolZeroedArray<_DXGK_PRESENTALLOCATIONINFO,4>(v141);
        goto LABEL_150;
      }
      if ( *((_BYTE *)this + 398) )
      {
        memset(v140, 0, sizeof(v140));
        LOBYTE(v108) = *((_BYTE *)this + 399);
        v109 = *((unsigned int *)this + 90);
        v140[4] = v144;
        v140[5] = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 528LL)
                                                                                          + 8LL)
                                                                              + 248LL))(
                    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 536LL),
                    *(_QWORD *)(*(_QWORD *)v133 + 24LL),
                    v108,
                    v109);
        v140[6] = v146[0];
        LOWORD(v140[7]) = v145[0] & 0x1F;
      }
      else
      {
        memset(v140, 0, 0x48uLL);
        v140[3] = v144;
        v140[5] = v146[0];
        LODWORD(v140[4]) = v140[4] & 0xFFFFFFC0 | (2 * (v145[0] & 0x1F));
      }
    }
    v106 = (DXGK_ALLOCATIONLIST *)v140;
LABEL_139:
    v37->pAllocationList = v106;
    LODWORD(v21) = ADAPTER_RENDER::DdiPresent(
                     *(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL),
                     *((_QWORD *)this + 23),
                     v37);
    if ( (int)v21 >= 0 )
    {
      v110 = 0;
      if ( (_DWORD)ContextCount )
      {
        v111 = v134;
        do
        {
          CurrentThread = KeGetCurrentThread();
          if ( *((struct _KTHREAD **)*v111 + 52) != CurrentThread )
          {
            v113 = WdLogNewEntry5_WdAssertion(CurrentThread);
            *(_QWORD *)(v113 + 24) = 1865LL;
            WdLogEvent5_WdAssertion(v113);
          }
          if ( (*((_DWORD *)this + 91) & 0x10) != 0 )
            DXGCONTEXT::SynchronizeImplicitQueueWithRenderQueues(this, 0LL, 0);
          ImplicitHwQueue = DXGCONTEXT::GetImplicitHwQueue(*v111);
          LODWORD(v21) = (*(__int64 (__fastcall **)(struct _VIDSCH_CONTEXT *, struct VIDSCH_SUBMIT_DATA_BASE *))(*(_QWORD *)(v115 + 8) + 344LL))(
                           ImplicitHwQueue,
                           a9);
          if ( (int)v21 < 0 )
            break;
          *(_DWORD *)a9 &= ~0x800u;
          ++v110;
          ++v111;
        }
        while ( v110 < (unsigned int)ContextCount );
      }
    }
    PagedPoolZeroedArray<_DXGK_PRESENTALLOCATIONINFO,4>::~PagedPoolZeroedArray<_DXGK_PRESENTALLOCATIONINFO,4>(v141);
    goto LABEL_149;
  }
  while ( 1 )
  {
    v50 = v49;
    v51 = 32LL * v43;
    v126 = v12->ppPresentPlanes[v49];
    v52 = v126->LayerIndex;
    v143[v51 / 4] = v52;
    v53 = v126->InputFlags.Value & 1;
    v136 = v52;
    v143[v51 / 4 + 1] = v53;
    if ( (v126->InputFlags.Value & 1) != 0 )
      break;
    v86 = *(_DWORD *)((char *)a9 + v45) >> 10;
    LayerIndex = (unsigned int)v52;
    if ( a7[v52] )
    {
      if ( (v86 & (1 << v52) & 0x3FF) == 0 )
      {
        v87 = WdLogNewEntry5_WdAssertion((unsigned int)v52);
        *(_QWORD *)(v87 + 24) = 1708LL;
        WdLogEvent5_WdAssertion(v87);
        v43 = v124;
      }
      LayerIndex = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1672LL) + 192LL) + 64LL);
      if ( *(_DWORD *)(*(_QWORD *)(LayerIndex + 40) + 28LL) >= 0x4002u )
      {
        *(_QWORD *)&v145[v51 - 8] = 0LL;
        *(_DWORD *)&v145[v51] &= 0xFFFFFFE0;
        v146[v51 / 8] = 0LL;
        v124 = v43 + 1;
      }
    }
    else
    {
      if ( (v86 & (1 << v52) & 0x3FF) != 0 )
      {
        v88 = WdLogNewEntry5_WdAssertion((unsigned int)v52);
        *(_QWORD *)(v88 + 24) = 1725LL;
        WdLogEvent5_WdAssertion(v88);
      }
      if ( *((_QWORD *)v133 + v50) )
      {
        v89 = WdLogNewEntry5_WdAssertion(LayerIndex);
        *(_QWORD *)(v89 + 24) = 1726LL;
        WdLogEvent5_WdAssertion(v89);
      }
    }
LABEL_101:
    v43 = v124;
    v49 = v130 + 1;
    v130 = v49;
    if ( v49 >= v12->PresentPlaneCount )
    {
      v37 = v132;
      goto LABEL_114;
    }
    v45 = (__int64)v139;
  }
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 2266LL) )
    v54 = *(_DWORD *)((char *)a9 + v45) | (*(_DWORD *)((char *)a9 + v45) >> 10);
  else
    v54 = *(_DWORD *)((char *)a9 + v45);
  LayerIndex = (unsigned int)v52;
  v55 = v54 & 0x3FF;
  if ( (v55 & (1 << v52)) != 0 )
  {
    v57 = (v55 & ((1 << v52) - 1) & 0x55555555) + (((v55 & (unsigned int)((1 << v52) - 1)) >> 1) & 0x55555555);
    LayerIndex = v57 & 0x33333333;
    v58 = ((LayerIndex + ((v57 >> 2) & 0x33333333)) & 0xF0F0F0F)
        + ((((unsigned int)LayerIndex + ((v57 >> 2) & 0x33333333)) >> 4) & 0xF0F0F0F);
    v56 = (v58 & 0xFF00FF) + (v58 >> 8);
  }
  else
  {
    v56 = 0xFFFFFFFFLL;
  }
  if ( (unsigned int)v56 >= (unsigned __int8)v41 )
  {
    v59 = WdLogNewEntry5_WdAssertion(LayerIndex);
    *(_QWORD *)(v59 + 24) = 1583LL;
    WdLogEvent5_WdAssertion(v59);
  }
  if ( (unsigned int)v56 >= 0xA )
  {
    v60 = WdLogNewEntry5_WdAssertion(LayerIndex);
    *(_QWORD *)(v60 + 24) = 1590LL;
    WdLogEvent5_WdAssertion(v60);
  }
  v61 = 0;
  if ( !(_DWORD)ContextCount )
  {
LABEL_100:
    LOBYTE(v41) = v129;
    goto LABEL_101;
  }
  v62 = v134;
  v138 = v134;
  while ( 1 )
  {
    v63 = *((_QWORD *)v133 + v136 + v128 * v61);
    v131 = v63;
    if ( !v63 )
    {
      v64 = WdLogNewEntry5_WdAssertion(v133);
      *(_QWORD *)(v64 + 24) = 1604LL;
      WdLogEvent5_WdAssertion(v64);
      v63 = v131;
      v62 = v138;
    }
    v65 = *((_BYTE *)a9 + 348)
        ? (struct VIDSCH_SUBMIT_DATA_BASE *)((char *)a9
                                           + 48 * (unsigned int)v56
                                           + 48 * v61 * *((_DWORD *)a9 + 111)
                                           + *((_DWORD *)a9 + 111) * ((8 * *((_DWORD *)a9 + 112) + 175) & 0xFFFFFFF8)
                                           + 464)
        : (struct VIDSCH_SUBMIT_DATA_BASE *)((char *)a9 + 64 * v56 + 8 * (unsigned int)v56 + 440);
    *(_QWORD *)v65 = *(_QWORD *)(*(_QWORD *)(v63 + 48) + 16LL);
    v66 = *((_QWORD *)*v62 + 23);
    v67 = *((_BYTE *)a9 + 348)
        ? (struct VIDSCH_SUBMIT_DATA_BASE *)((char *)a9
                                           + 48 * (unsigned int)v56
                                           + 48 * v61 * *((_DWORD *)a9 + 111)
                                           + *((_DWORD *)a9 + 111) * ((8 * *((_DWORD *)a9 + 112) + 175) & 0xFFFFFFF8)
                                           + 456)
        : (struct VIDSCH_SUBMIT_DATA_BASE *)((char *)a9 + 64 * v56 + 8 * (unsigned int)v56 + 496);
    *(_QWORD *)v67 = v66;
    v68 = *((_BYTE *)a9 + 348)
        ? (struct VIDMM_ALLOC **)((char *)a9
                                + 48 * (unsigned int)v56
                                + 48 * v61 * *((_DWORD *)a9 + 111)
                                + *((_DWORD *)a9 + 111) * ((8 * *((_DWORD *)a9 + 112) + 175) & 0xFFFFFFF8)
                                + 488)
        : (struct VIDMM_ALLOC **)((char *)a9 + 72 * (unsigned int)v56 + 432);
    v69 = VIDMM_EXPORT::VidMmReferencePrimaryAllocationForSubmission(
            *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 528LL),
            *(struct VIDMM_DEVICE **)(*((_QWORD *)this + 2) + 592LL),
            *(struct _VIDMM_MULTI_ALLOC **)(v63 + 24),
            v68);
    v21 = v69;
    if ( v69 < 0 )
      break;
    IsDxgmms2 = DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL));
    v73 = v131;
    if ( IsDxgmms2 )
    {
      v137 = -1LL;
      v74 = 0xFFFF;
      v127 = 0xFFFF;
    }
    else
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, int *, __int64 *))(*(_QWORD *)(*(_QWORD *)(v72 + 528) + 8LL) + 216LL))(
        *(_QWORD *)(v72 + 536),
        *(_QWORD *)(*(_QWORD *)(v131 + 48) + 8LL),
        &v127,
        &v137);
      v74 = v127;
    }
    if ( *((_BYTE *)a9 + 348) )
      *(_WORD *)((char *)a9
               + 48 * (unsigned int)v56
               + 48 * v61 * *((_DWORD *)a9 + 111)
               + *((_DWORD *)a9 + 111) * ((8 * *((_DWORD *)a9 + 112) + 175) & 0xFFFFFFF8)
               + 472) = v74;
    else
      *((_DWORD *)a9 + 18 * v56 + 121) ^= (*((_DWORD *)a9 + 18 * v56 + 121) ^ (v74 << 17)) & 0x3E0000;
    if ( *((_BYTE *)a9 + 348) )
      v75 = (char *)a9
          + 48 * (unsigned int)v56
          + 48 * v61 * *((_DWORD *)a9 + 111)
          + *((_DWORD *)a9 + 111) * ((8 * *((_DWORD *)a9 + 112) + 175) & 0xFFFFFFF8)
          + 480;
    else
      v75 = (char *)a9 + 64 * v56 + 8 * v56 + 448;
    *(_QWORD *)v75 = v137;
    v76 = *(_QWORD *)(v73 + 40);
    if ( v76 )
      v77 = (*(_DWORD *)(v76 + 4) >> 3) & 1;
    else
      v77 = 0;
    if ( *((_BYTE *)a9 + 348) )
    {
      v78 = *((_DWORD *)a9 + 111);
      v79 = v78 * ((8 * *((_DWORD *)a9 + 112) + 175) & 0xFFFFFFF8);
      LayerIndex = 6LL * ((unsigned int)v56 + v61 * v78);
      *((_BYTE *)a9 + 8 * LayerIndex + v79 + 496) = v77;
    }
    else
    {
      LayerIndex = 9 * v56;
      *((_DWORD *)a9 + 18 * v56 + 121) = *((_DWORD *)a9 + 18 * v56 + 121) & 0xFF7FFFFF | (v77 << 23);
    }
    if ( !v61 )
    {
      v80 = v126;
      if ( *((_BYTE *)a9 + 348)
        && (*(_DWORD *)((char *)a9 + (unsigned int)v56 * ((8 * *((_DWORD *)a9 + 112) + 175) & 0xFFFFFFF8) + 480) = v126->MaxImmediateFlipLine,
            *((_BYTE *)a9 + 348)) )
      {
        v81 = (struct VIDSCH_SUBMIT_DATA_BASE *)((char *)a9
                                               + (unsigned int)v56 * ((8 * *((_DWORD *)a9 + 112) + 175) & 0xFFFFFFF8)
                                               + 584);
      }
      else
      {
        v81 = (struct VIDSCH_SUBMIT_DATA_BASE *)((char *)a9 + 64 * v56 + 8 * (unsigned int)v56 + 456);
      }
      pPlaneAttributes = v126->pPlaneAttributes;
      if ( pPlaneAttributes->SrcRect.right <= pPlaneAttributes->SrcRect.left )
      {
        v83 = WdLogNewEntry5_WdAssertion(pPlaneAttributes);
        *(_QWORD *)(v83 + 24) = 1683LL;
        WdLogEvent5_WdAssertion(v83);
        v80 = v126;
      }
      v84 = (DXGCONTEXT *)v80->pPlaneAttributes;
      if ( *((_DWORD *)v84 + 4) <= *((_DWORD *)v84 + 2) )
      {
        v85 = WdLogNewEntry5_WdAssertion(v84);
        *(_QWORD *)(v85 + 24) = 1684LL;
        WdLogEvent5_WdAssertion(v85);
        v80 = v126;
      }
      DXGCONTEXT::ConvertThunkOverlayToPackedAttributes3(v84, v81, v80->pPlaneAttributes);
      LayerIndex = 32LL * v124;
      *(_QWORD *)&v145[LayerIndex - 8] = *(_QWORD *)(v131 + 32);
      *(_DWORD *)&v145[LayerIndex] ^= ((unsigned __int8)v127 ^ (unsigned __int8)*(_DWORD *)&v145[LayerIndex]) & 0x1F;
      ++v124;
      *(_QWORD *)((char *)v146 + LayerIndex) = v137;
    }
    ++v61;
    v62 = ++v138;
    if ( v61 >= (unsigned int)ContextCount )
      goto LABEL_100;
  }
  v90 = (_QWORD *)WdLogNewEntry5_WdError(v70);
  v91 = v131;
  v90[3] = this;
  v90[4] = v91;
  v90[5] = v21;
  WdLogEvent5_WdError(v90);
LABEL_149:
  if ( (int)v21 < 0 )
  {
LABEL_150:
    v116 = (unsigned __int8)v129;
    for ( i = 0; i < v116; ++i )
    {
      for ( j = 0; j < (unsigned int)ContextCount; ++j )
      {
        if ( *((_BYTE *)a9 + 348) )
        {
          v119 = *((_DWORD *)a9 + 111);
          v92 = v119 * ((8 * *((_DWORD *)a9 + 112) + 175) & 0xFFFFFFF8);
          v120 = (struct VIDMM_ALLOC **)((char *)a9 + 48 * i + 48 * j * v119 + v92 + 488);
        }
        else
        {
          v120 = (struct VIDMM_ALLOC **)((char *)a9 + 72 * i + 432);
        }
        if ( *v120 )
          VIDMM_EXPORT::VidMmUnreferencePrimaryAllocation(
            *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 528LL),
            *(struct VIDMM_GLOBAL **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 536LL),
            *((_DWORD *)a9 + 34),
            *v120);
      }
    }
    v121 = WdLogNewEntry5_WdError(v92);
    *(_QWORD *)(v121 + 32) = (int)v21;
    *(_QWORD *)(v121 + 24) = this;
    WdLogEvent5_WdError(v121);
  }
  if ( v135 )
    CRefCountedBuffer::RefCountedBufferRelease(v135);
  return (unsigned int)v21;
}
