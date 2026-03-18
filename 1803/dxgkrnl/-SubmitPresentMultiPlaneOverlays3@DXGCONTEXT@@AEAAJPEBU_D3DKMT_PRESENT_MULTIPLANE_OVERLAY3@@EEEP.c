/*
 * XREFs of ?SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEPEBVDXGALLOCATIONREFERENCE@@PEAEPEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAPEAV1@@Z @ 0x1C01DA37C
 * Callers:
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C01D8C08 (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0015AA8 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C0023A00 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ??1?$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAA@XZ @ 0x1C00D4248 (--1-$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAA@XZ.c)
 *     ?DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z @ 0x1C010EAD8 (-DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z.c)
 *     ?SubmitCommandToImplicitQueue@DXGCONTEXT@@QEAAJPEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0145C2C (-SubmitCommandToImplicitQueue@DXGCONTEXT@@QEAAJPEAUVIDSCH_SUBMIT_DATA_BASE@@@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_DXGK_PRESENTALLOCATIONINFO@@$03@@QEAAPEAU_DXGK_PRESENTALLOCATIONINFO@@I@Z @ 0x1C01B031C (-AllocateElements@-$PagedPoolZeroedArray@U_DXGK_PRESENTALLOCATIONINFO@@$03@@QEAAPEAU_DXGK_PRESEN.c)
 *     ?SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K@Z @ 0x1C01B467C (-SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K@Z.c)
 *     ?ConvertThunkOverlayToPackedAttributes3@DXGCONTEXT@@AEAAXPEAU_VIDSCH_LAYER_ATTRIBUTE@@AEBU_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@@Z @ 0x1C01D843C (-ConvertThunkOverlayToPackedAttributes3@DXGCONTEXT@@AEAAXPEAU_VIDSCH_LAYER_ATTRIBUTE@@AEBU_D3DKM.c)
 *     ?ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@PEBU_D3DKMT_MULTIPLANE_OVERLAY3@@PEAPEAVCRefCountedBuffer@@@Z @ 0x1C01DA294 (-ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@PEBU_D3DKMT_MULTIPLANE_OVERLAY3@@PEAPEAVCRefCo.c)
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
  unsigned __int8 v10; // r13
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
  int v24; // edi
  struct DXGCONTEXT **v25; // rcx
  int v26; // r8d
  CRefCountedBuffer *v27; // rbx
  __int64 v28; // rcx
  unsigned int PresentPlaneCount; // r8d
  const struct _D3DKMT_MULTIPLANE_OVERLAY3 *v30; // rdx
  int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // rbx
  __int64 v34; // rax
  int v36; // ecx
  unsigned __int8 IsDxgmms2; // al
  __int64 v38; // rcx
  UINT v39; // r9d
  struct _DXGKARG_PRESENT *v40; // rdi
  __int64 v41; // rax
  __int64 v42; // rax
  unsigned __int8 v43; // r14
  __int64 v44; // rcx
  int v45; // eax
  __int64 v46; // rax
  __int64 v47; // rcx
  const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *v48; // r9
  __int64 v49; // r8
  unsigned int v50; // eax
  __int64 v51; // r10
  D3DKMT_MULTIPLANE_OVERLAY3 *v52; // rdx
  __int64 LayerIndex; // rcx
  int v54; // edx
  int v55; // eax
  __int64 v56; // rdx
  unsigned __int64 v57; // rdi
  __int64 v58; // r14
  D3DKMT_MULTIPLANE_OVERLAY3 *v59; // r13
  __int64 v60; // r11
  int v61; // eax
  unsigned int v62; // edx
  __int64 v63; // rcx
  int v64; // edx
  unsigned int v65; // edi
  unsigned int v66; // ecx
  unsigned int v67; // edx
  __int64 v68; // rax
  __int64 v69; // rax
  unsigned int v70; // r11d
  struct DXGCONTEXT **v71; // r13
  struct CRefCountedBuffer *v72; // r9
  __int64 v73; // rax
  char *v74; // r14
  char *v75; // rdx
  __int64 v76; // r10
  char *v77; // rdx
  char *v78; // r9
  __int64 v79; // r13
  int v80; // eax
  __int64 v81; // rcx
  unsigned __int8 v82; // al
  __int64 v83; // r10
  struct CRefCountedBuffer *v84; // rdi
  int v85; // r8d
  unsigned int v86; // r11d
  __int64 *v87; // rdx
  __int64 v88; // rcx
  bool v89; // al
  __int64 v90; // r8
  int v91; // ecx
  __int64 v92; // rax
  struct _VIDSCH_LAYER_ATTRIBUTE *v93; // rdi
  D3DKMT_MULTIPLANE_OVERLAY3 *v94; // r13
  const struct _D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *pPlaneAttributes; // r8
  __int64 v96; // rax
  __int64 v97; // rax
  unsigned __int64 v98; // rcx
  unsigned __int8 *v99; // rcx
  __int64 v100; // rax
  __int64 v101; // rax
  __int64 v102; // rax
  _QWORD *v103; // rax
  __int64 v104; // rcx
  D3DKMT_MULTIPLANE_OVERLAY3 *v105; // rdi
  __int64 v106; // rax
  struct _DXGKARG_PRESENT *v107; // r13
  UINT DirtyRectCount; // ecx
  _QWORD *Elements; // rax
  char *v110; // r8
  DXGK_ALLOCATIONLIST *v111; // r14
  UINT v112; // edi
  struct DXGCONTEXT **v113; // rdx
  char *v114; // r12
  __int64 v115; // r13
  __int64 v116; // rcx
  char *v117; // rax
  __int16 v118; // dx
  __int64 v119; // rax
  __int64 v120; // r8
  __int64 v121; // r9
  void *v122; // rdx
  ADAPTER_RENDER *v123; // rcx
  unsigned int v124; // r14d
  DXGCONTEXT **v125; // r13
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v127; // rax
  unsigned int v128; // r13d
  unsigned int v129; // r14d
  UINT v130; // eax
  UINT v131; // r12d
  int v132; // edx
  char *v133; // rdx
  __int64 v134; // rax
  unsigned int v136; // [rsp+34h] [rbp-CCh]
  unsigned int v137; // [rsp+38h] [rbp-C8h]
  unsigned int v138; // [rsp+3Ch] [rbp-C4h]
  UINT v139; // [rsp+40h] [rbp-C0h]
  struct CRefCountedBuffer *v140; // [rsp+48h] [rbp-B8h] BYREF
  const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *v141; // [rsp+50h] [rbp-B0h]
  int v142; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v143; // [rsp+5Ch] [rbp-A4h]
  struct _DXGKARG_PRESENT *v144; // [rsp+60h] [rbp-A0h]
  int v145; // [rsp+68h] [rbp-98h]
  int v146; // [rsp+6Ch] [rbp-94h]
  struct DXGCONTEXT **v147; // [rsp+70h] [rbp-90h]
  const struct DXGALLOCATIONREFERENCE *v148; // [rsp+78h] [rbp-88h]
  struct DXGCONTEXT **v149; // [rsp+80h] [rbp-80h]
  int v150; // [rsp+88h] [rbp-78h]
  __int64 v151; // [rsp+90h] [rbp-70h] BYREF
  D3DKMT_MULTIPLANE_OVERLAY3 *v152; // [rsp+98h] [rbp-68h]
  __int64 v153; // [rsp+A0h] [rbp-60h]
  _QWORD v154[12]; // [rsp+B0h] [rbp-50h] BYREF
  PVOID v155[17]; // [rsp+110h] [rbp+10h] BYREF
  int v156; // [rsp+198h] [rbp+98h]
  _DWORD v157[2]; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v158; // [rsp+1A8h] [rbp+A8h]
  _BYTE v159[8]; // [rsp+1B0h] [rbp+B0h]
  _QWORD v160[37]; // [rsp+1B8h] [rbp+B8h]

  v10 = a4;
  v144 = a8;
  v148 = a6;
  v149 = a10;
  v141 = a2;
  if ( !a3 && !a4 && !a5 )
  {
    v14 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v14 + 24) = 1364LL;
    WdLogEvent5_WdAssertion(v14);
  }
  v15 = a5 + v10 + (unsigned int)a3;
  if ( (unsigned int)v15 > a2->PresentPlaneCount )
  {
    v16 = WdLogNewEntry5_WdAssertion(v15);
    *(_QWORD *)(v16 + 24) = 1367LL;
    WdLogEvent5_WdAssertion(v16);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    v18 = WdLogNewEntry5_WdAssertion(v17);
    *(_QWORD *)(v18 + 24) = 1368LL;
    WdLogEvent5_WdAssertion(v18);
  }
  ContextCount = a2->ContextCount;
  v139 = ContextCount;
  if ( (unsigned int)ContextCount > 0x40 )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdError(v17);
    LODWORD(v21) = -1073741811;
    v20[4] = ContextCount;
    v20[5] = 64LL;
    v20[6] = -1073741811LL;
    goto LABEL_11;
  }
  v22 = 1;
  v23 = *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
  v143 = *((_DWORD *)v23 + 578);
  v24 = *((_DWORD *)*v149 + 89);
  if ( (unsigned int)ContextCount > 1 )
  {
    v25 = v149 + 1;
    while ( 1 )
    {
      v26 = *((_DWORD *)*v25 + 89);
      if ( (v26 & v24) != 0 )
        break;
      v24 |= v26;
      ++v22;
      ++v25;
      if ( v22 >= (unsigned int)ContextCount )
        goto LABEL_16;
    }
    v20 = (_QWORD *)WdLogNewEntry5_WdError(v25);
    LODWORD(v21) = -1073741811;
    v20[4] = -1073741811LL;
LABEL_11:
    v20[3] = this;
    WdLogEvent5_WdError(v20);
    return (unsigned int)v21;
  }
LABEL_16:
  v27 = 0LL;
  v140 = 0LL;
  v28 = 0LL;
  PresentPlaneCount = v141->PresentPlaneCount;
  if ( PresentPlaneCount )
  {
    while ( 1 )
    {
      v30 = v141->ppPresentPlanes[v28];
      if ( (v30->InputFlags.Value & 1) != 0 && !v30->LayerIndex )
        break;
      v28 = (unsigned int)(v28 + 1);
      if ( (unsigned int)v28 >= PresentPlaneCount )
        goto LABEL_25;
    }
    v31 = ReadPresentPrivateDriverData(v23, v30, &v140);
    v33 = v31;
    if ( v31 < 0 )
    {
      v34 = WdLogNewEntry5_WdError(v32);
      *(_QWORD *)(v34 + 24) = v33;
      WdLogEvent5_WdError(v34);
      return (unsigned int)v33;
    }
    v27 = v140;
LABEL_25:
    v10 = a4;
  }
  *((_DWORD *)a9 + 35) = ContextCount;
  *((_DWORD *)a9 + 34) = v24;
  v36 = 2048;
  if ( (unsigned int)ContextCount > 1 )
    v36 = 3072;
  *(_DWORD *)a9 = *(_DWORD *)a9 & 0xFFFFFBFF | v36;
  IsDxgmms2 = DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL));
  v40 = v144;
  if ( IsDxgmms2 )
  {
    if ( v27 )
    {
      v144->PrivateDriverDataSize = v39;
      v40->pPrivateDriverData = (char *)v27 + 8;
    }
    *((_QWORD *)a9 + 3) = v27;
  }
  if ( *((_DWORD *)a9 + 30) != 5 )
  {
    v41 = WdLogNewEntry5_WdAssertion(v38);
    *(_QWORD *)(v41 + 24) = 1455LL;
    WdLogEvent5_WdAssertion(v41);
  }
  if ( v40->pDmaBuffer )
  {
    v42 = WdLogNewEntry5_WdAssertion(v38);
    *(_QWORD *)(v42 + 24) = 1460LL;
    WdLogEvent5_WdAssertion(v42);
  }
  v43 = v10 + a3;
  v44 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  LOBYTE(v44) = *(_BYTE *)(*(_QWORD *)(v44 + 16) + 2410LL);
  v45 = (unsigned __int8)(a5 + v43);
  if ( !(_BYTE)v44 )
    v45 = v43;
  v146 = v45;
  if ( (unsigned __int8)v45 > 0xAu )
  {
    v46 = WdLogNewEntry5_WdAssertion(v44);
    *(_QWORD *)(v46 + 24) = 1478LL;
    WdLogEvent5_WdAssertion(v46);
  }
  v47 = 0LL;
  v48 = v141;
  v136 = 0;
  v49 = 0LL;
  v50 = v141->PresentPlaneCount;
  v51 = *((_BYTE *)a9 + 348) != 0 ? 496LL : 472LL;
  v153 = v51;
  if ( !v50 )
    goto LABEL_48;
  do
  {
    v52 = v48->ppPresentPlanes[v49];
    LayerIndex = v52->LayerIndex;
    if ( (v52->InputFlags.Value & 1) != 0 )
    {
      v54 = *(_DWORD *)((char *)a9 + v51);
      v55 = ((unsigned __int16)v54 ^ (unsigned __int16)(v54 | (1 << LayerIndex))) & 0x3FF;
    }
    else
    {
      if ( !a7[LayerIndex] )
        goto LABEL_46;
      v54 = *(_DWORD *)((char *)a9 + v51);
      v55 = (v54 ^ (v54 | (1024 << LayerIndex))) & 0xFFC00;
    }
    *(_DWORD *)((char *)a9 + v51) = v54 ^ v55;
LABEL_46:
    v50 = v48->PresentPlaneCount;
    v49 = (unsigned int)(v49 + 1);
  }
  while ( (unsigned int)v49 < v50 );
  v47 = 0LL;
LABEL_48:
  v56 = 0LL;
  v145 = 0;
  if ( !v50 )
  {
LABEL_119:
    v155[0] = 0LL;
    v156 = 0;
    if ( v143 >= 2 )
    {
      v107 = v144;
      LODWORD(v154[0]) = v48->VidPnSourceId;
      v154[1] = v157;
      HIDWORD(v154[0]) = v47;
    }
    else
    {
      _mm_lfence();
      v105 = *v48->ppPresentPlanes;
      if ( (v105->InputFlags.Value & 1) == 0 )
      {
        v106 = WdLogNewEntry5_WdAssertion(v47);
        *(_QWORD *)(v106 + 24) = 1725LL;
        WdLogEvent5_WdAssertion(v106);
      }
      v107 = v144;
      v144->Flags.Value &= ~0x1000u;
      DirtyRectCount = v105->pPlaneAttributes->DirtyRectCount;
      v107->SubRectCnt = DirtyRectCount;
      if ( DirtyRectCount )
        v107->pDstSubRects = v105->pPlaneAttributes->pDirtyRects;
      if ( (unsigned int)ContextCount > 1 )
      {
        Elements = PagedPoolZeroedArray<_DXGK_PRESENTALLOCATIONINFO,4>::AllocateElements(v155, ContextCount);
        v111 = (DXGK_ALLOCATIONLIST *)Elements;
        if ( Elements )
        {
          v112 = 0;
          v113 = v149;
          v114 = (char *)(Elements + 2);
          v147 = v149;
          while ( 1 )
          {
            v115 = *((_QWORD *)v148 + v143 * v112);
            v116 = (*(_DWORD *)(v115 + 72) >> 12) & 0x3F;
            if ( (_DWORD)v116 != *((_DWORD *)*v113 + 90) )
              break;
            *((_QWORD *)v114 - 2) = *(_QWORD *)(v115 + 32);
            LOBYTE(v110) = *((_BYTE *)this + 399);
            *((_QWORD *)v114 - 1) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL) + 8LL)
                                                                                              + 248LL))(
                                      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 552LL),
                                      *(_QWORD *)(v115 + 24),
                                      v110,
                                      *((unsigned int *)*v113 + 90));
            v110 = (char *)a9 + 496;
            if ( *((_BYTE *)a9 + 348) )
              v117 = (char *)a9
                   + 48 * v112 * *((_DWORD *)a9 + 125)
                   + *((_DWORD *)a9 + 125) * ((8 * *((_DWORD *)a9 + 126) + 175) & 0xFFFFFFF8)
                   + 536;
            else
              v117 = (char *)a9 + 496;
            *(_QWORD *)v114 = *(_QWORD *)v117;
            if ( *((_BYTE *)a9 + 348) )
              v118 = *(_WORD *)&v110[48 * v112 * *((_DWORD *)a9 + 125)
                                   + 32
                                   + *((_DWORD *)a9 + 125) * ((8 * *((_DWORD *)a9 + 126) + 175) & 0xFFFFFFF8)];
            else
              v118 = (*((_DWORD *)a9 + 133) >> 17) & 0x1F;
            *((_WORD *)v114 + 4) = v118;
            ++v112;
            v114 += 32;
            v113 = ++v147;
            if ( v112 >= v139 )
            {
              LODWORD(ContextCount) = v139;
              v107 = v144;
              v144->NumSrcAllocations = v139;
              goto LABEL_144;
            }
          }
          v119 = WdLogNewEntry5_WdError(v116);
          *(_QWORD *)(v119 + 24) = v115;
          WdLogEvent5_WdError(v119);
          LODWORD(v21) = -1073741811;
        }
        else
        {
          LODWORD(v21) = -1073741801;
        }
        PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(v155);
        goto LABEL_157;
      }
      if ( *((_BYTE *)this + 398) )
      {
        memset(v154, 0, sizeof(v154));
        LOBYTE(v120) = *((_BYTE *)this + 399);
        v121 = *((unsigned int *)this + 90);
        v154[4] = v158;
        v154[5] = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL)
                                                                                          + 8LL)
                                                                              + 248LL))(
                    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 552LL),
                    *(_QWORD *)(*(_QWORD *)v148 + 24LL),
                    v120,
                    v121);
        v154[6] = v160[0];
        LOWORD(v154[7]) = v159[0] & 0x1F;
      }
      else
      {
        memset(v154, 0, 0x48uLL);
        v154[3] = v158;
        v154[5] = v160[0];
        LODWORD(v154[4]) = v154[4] & 0xFFFFFFC0 | (2 * (v159[0] & 0x1F));
      }
    }
    v111 = (DXGK_ALLOCATIONLIST *)v154;
LABEL_144:
    v107->pAllocationList = v111;
    v122 = 0LL;
    v123 = *(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL);
    if ( !*(_BYTE *)(*((_QWORD *)v123 + 2) + 2418LL) )
      v122 = (void *)*((_QWORD *)this + 23);
    LODWORD(v21) = ADAPTER_RENDER::DdiPresent(v123, v122, v107);
    if ( (int)v21 >= 0 )
    {
      v124 = 0;
      if ( (_DWORD)ContextCount )
      {
        v125 = v149;
        do
        {
          CurrentThread = KeGetCurrentThread();
          if ( *((struct _KTHREAD **)*v125 + 52) != CurrentThread )
          {
            v127 = WdLogNewEntry5_WdAssertion(CurrentThread);
            *(_QWORD *)(v127 + 24) = 1848LL;
            WdLogEvent5_WdAssertion(v127);
          }
          if ( (*((_DWORD *)this + 91) & 0x10) != 0 )
            DXGCONTEXT::SynchronizeImplicitQueueWithRenderQueues(this, 0LL, 0);
          LODWORD(v21) = DXGCONTEXT::SubmitCommandToImplicitQueue(*v125, a9);
          if ( (int)v21 < 0 )
            break;
          *(_DWORD *)a9 &= ~0x800u;
          ++v124;
          ++v125;
        }
        while ( v124 < (unsigned int)ContextCount );
      }
    }
    PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(v155);
    goto LABEL_156;
  }
  while ( 2 )
  {
    v57 = 32LL * (unsigned int)v47;
    v58 = (unsigned int)v56;
    v59 = v48->ppPresentPlanes[v56];
    v152 = v59;
    v60 = v59->LayerIndex;
    v157[v57 / 4] = v60;
    v61 = v59->InputFlags.Value & 1;
    v150 = v60;
    v157[v57 / 4 + 1] = v61;
    if ( (v59->InputFlags.Value & 1) == 0 )
    {
      v99 = a7;
      if ( a7[v60] )
      {
        if ( ((unsigned __int16)(*(_DWORD *)((char *)a9 + v51) >> 10) & (unsigned __int16)(1 << v60) & 0x3FF) == 0 )
        {
          v100 = WdLogNewEntry5_WdAssertion(a7);
          *(_QWORD *)(v100 + 24) = 1686LL;
          WdLogEvent5_WdAssertion(v100);
          v48 = v141;
        }
        v47 = v136;
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1688LL) + 192LL) + 64LL)
                                   + 40LL)
                       + 28LL) >= 0x4002u )
        {
          *(_QWORD *)&v159[v57 - 8] = 0LL;
          *(_DWORD *)&v159[v57] &= 0xFFFFFFE0;
          v160[v57 / 8] = 0LL;
          v47 = ++v136;
        }
        goto LABEL_116;
      }
      if ( ((unsigned __int16)(*(_DWORD *)((char *)a9 + v51) >> 10) & (unsigned __int16)(1 << v60) & 0x3FF) != 0 )
      {
        v101 = WdLogNewEntry5_WdAssertion(a7);
        *(_QWORD *)(v101 + 24) = 1703LL;
        WdLogEvent5_WdAssertion(v101);
        v48 = v141;
      }
      if ( !*((_QWORD *)v148 + v58) )
      {
LABEL_115:
        v47 = v136;
LABEL_116:
        v56 = (unsigned int)(v145 + 1);
        v145 = v56;
        if ( (unsigned int)v56 >= v48->PresentPlaneCount )
          goto LABEL_119;
        v51 = v153;
        continue;
      }
      v102 = WdLogNewEntry5_WdAssertion(v99);
      *(_QWORD *)(v102 + 24) = 1704LL;
      WdLogEvent5_WdAssertion(v102);
LABEL_114:
      v48 = v141;
      goto LABEL_115;
    }
    break;
  }
  v62 = *(_DWORD *)((char *)a9 + v51);
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 2410LL) )
    v62 = *(_DWORD *)((char *)a9 + v51) | (v62 >> 10);
  v63 = (unsigned int)v60;
  v64 = v62 & 0x3FF;
  if ( (v64 & (1 << v60)) != 0 )
  {
    v66 = (v64 & ((1 << v60) - 1) & 0x55555555) + (((v64 & (unsigned int)((1 << v60) - 1)) >> 1) & 0x55555555);
    v67 = (v66 & 0x33333333) + ((v66 >> 2) & 0x33333333);
    v63 = 252645135LL;
    v65 = (((v67 & 0xF0F0F0F) + ((v67 >> 4) & 0xF0F0F0F)) & 0xFF00FF)
        + (((v67 & 0xF0F0F0F) + ((v67 >> 4) & 0xF0F0F0F)) >> 8);
  }
  else
  {
    v65 = -1;
  }
  v138 = v65;
  if ( v65 >= (unsigned __int8)v146 )
  {
    v68 = WdLogNewEntry5_WdAssertion(v63);
    *(_QWORD *)(v68 + 24) = 1550LL;
    WdLogEvent5_WdAssertion(v68);
  }
  if ( v65 >= 0xA )
  {
    v69 = WdLogNewEntry5_WdAssertion(v63);
    *(_QWORD *)(v69 + 24) = 1557LL;
    WdLogEvent5_WdAssertion(v69);
  }
  v70 = 0;
  v137 = 0;
  if ( !(_DWORD)ContextCount )
    goto LABEL_114;
  v71 = v149;
  v147 = v149;
  while ( 1 )
  {
    v72 = (struct CRefCountedBuffer *)*((_QWORD *)v148 + v150 + v143 * v70);
    v140 = v72;
    if ( !v72 )
    {
      v73 = WdLogNewEntry5_WdAssertion(v148);
      *(_QWORD *)(v73 + 24) = 1571LL;
      WdLogEvent5_WdAssertion(v73);
      v70 = v137;
      v72 = v140;
    }
    v74 = (char *)a9 + 496;
    if ( *((_BYTE *)a9 + 348) )
      v75 = &v74[48 * v65
               + 24
               + 48 * v70 * *((_DWORD *)a9 + 125)
               + *((_DWORD *)a9 + 125) * ((8 * *((_DWORD *)a9 + 126) + 175) & 0xFFFFFFF8)];
    else
      v75 = (char *)a9 + 80 * v65 + 488;
    *(_QWORD *)v75 = *(_QWORD *)(*((_QWORD *)v72 + 6) + 16LL);
    v76 = *((_QWORD *)this + 2);
    if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v76 + 16) + 16LL) + 2418LL) )
    {
      if ( *((_BYTE *)a9 + 348) )
        v77 = &v74[48 * v65
                 + 16
                 + 48 * v70 * *((_DWORD *)a9 + 125)
                 + *((_DWORD *)a9 + 125) * ((8 * *((_DWORD *)a9 + 126) + 175) & 0xFFFFFFF8)];
      else
        v77 = (char *)a9 + 80 * v65 + 544;
      *(_QWORD *)v77 = *((_QWORD *)*v71 + 23);
      v76 = *((_QWORD *)this + 2);
    }
    if ( *((_BYTE *)a9 + 348) )
    {
      v78 = &v74[48 * v65
               + 48
               + 48 * v70 * *((_DWORD *)a9 + 125)
               + *((_DWORD *)a9 + 125) * ((8 * *((_DWORD *)a9 + 126) + 175) & 0xFFFFFFF8)];
      v79 = 80LL * v65;
    }
    else
    {
      v79 = 80LL * v65;
      v78 = (char *)a9 + v79 + 480;
    }
    v80 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v76 + 16) + 544LL)
                                                                        + 8LL)
                                                            + 408LL))(
            *(_QWORD *)(v76 + 608),
            *((_QWORD *)v140 + 3),
            v78);
    v21 = v80;
    if ( v80 < 0 )
      break;
    v82 = DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL));
    v84 = v140;
    if ( v82 )
    {
      v151 = -1LL;
      v85 = 0xFFFF;
      v142 = 0xFFFF;
    }
    else
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, int *, __int64 *))(*(_QWORD *)(*(_QWORD *)(v83 + 544) + 8LL) + 216LL))(
        *(_QWORD *)(v83 + 552),
        *(_QWORD *)(*((_QWORD *)v140 + 6) + 8LL),
        &v142,
        &v151);
      v85 = v142;
    }
    v86 = v137;
    if ( *((_BYTE *)a9 + 348) )
      *(_WORD *)((char *)a9
               + 48 * v138
               + 48 * v137 * *((_DWORD *)a9 + 125)
               + *((_DWORD *)a9 + 125) * ((8 * *((_DWORD *)a9 + 126) + 175) & 0xFFFFFFF8)
               + 528) = v85;
    else
      *(_DWORD *)((char *)a9 + v79 + 532) ^= ((v85 << 17) ^ *(_DWORD *)((char *)a9 + v79 + 532)) & 0x3E0000;
    if ( *((_BYTE *)a9 + 348) )
    {
      v74 = (char *)a9 + 496;
      v87 = (__int64 *)((char *)a9
                      + 48 * v138
                      + 48 * v137 * *((_DWORD *)a9 + 125)
                      + *((_DWORD *)a9 + 125) * ((8 * *((_DWORD *)a9 + 126) + 175) & 0xFFFFFFF8)
                      + 536);
    }
    else
    {
      v87 = (__int64 *)&v74[v79];
    }
    *v87 = v151;
    v88 = *((_QWORD *)v84 + 5);
    if ( v88 )
      v89 = (*(_DWORD *)(v88 + 4) & 8) != 0;
    else
      v89 = 0;
    if ( v89 )
      v90 = *(_QWORD *)(*(_QWORD *)(v88 + 56) + 176LL);
    else
      v90 = 0LL;
    if ( *((_BYTE *)a9 + 348) )
    {
      v91 = *((_DWORD *)v74 + 1);
      v92 = v91 * ((8 * *((_DWORD *)v74 + 2) + 175) & 0xFFFFFFF8);
      v88 = 6LL * (v138 + v137 * v91);
      *(_QWORD *)&v74[8 * v88 + 56 + v92] = v90;
    }
    else
    {
      *(_QWORD *)((char *)a9 + v79 + 552) = v90;
    }
    if ( !v137 )
    {
      if ( *((_BYTE *)a9 + 348)
        && (v88 = v138 * ((8 * *((_DWORD *)v74 + 2) + 175) & 0xFFFFFFF8),
            *(_DWORD *)&v74[v88 + 40] = v152->MaxImmediateFlipLine,
            *((_BYTE *)a9 + 348)) )
      {
        v93 = (struct _VIDSCH_LAYER_ATTRIBUTE *)&v74[v138 * ((8 * *((_DWORD *)v74 + 2) + 175) & 0xFFFFFFF8) + 144];
      }
      else
      {
        v93 = (struct VIDSCH_SUBMIT_DATA_BASE *)((char *)a9 + v79 + 504);
      }
      v94 = v152;
      pPlaneAttributes = v152->pPlaneAttributes;
      if ( pPlaneAttributes->SrcRect.right <= pPlaneAttributes->SrcRect.left )
      {
        v96 = WdLogNewEntry5_WdAssertion(v88);
        *(_QWORD *)(v96 + 24) = 1661LL;
        WdLogEvent5_WdAssertion(v96);
        pPlaneAttributes = v94->pPlaneAttributes;
      }
      if ( pPlaneAttributes->SrcRect.bottom <= pPlaneAttributes->SrcRect.top )
      {
        v97 = WdLogNewEntry5_WdAssertion(v88);
        *(_QWORD *)(v97 + 24) = 1662LL;
        WdLogEvent5_WdAssertion(v97);
        pPlaneAttributes = v94->pPlaneAttributes;
      }
      DXGCONTEXT::ConvertThunkOverlayToPackedAttributes3((DXGCONTEXT *)v88, v93, pPlaneAttributes);
      v86 = v137;
      v98 = 32LL * v136;
      *(_QWORD *)&v159[v98 - 8] = *((_QWORD *)v140 + 4);
      *(_DWORD *)&v159[v98] ^= ((unsigned __int8)v142 ^ (unsigned __int8)*(_DWORD *)&v159[v98]) & 0x1F;
      ++v136;
      v160[v98 / 8] = v151;
    }
    v70 = v86 + 1;
    v65 = v138;
    v71 = v147 + 1;
    v137 = v70;
    ++v147;
    if ( v70 >= (unsigned int)ContextCount )
      goto LABEL_114;
  }
  v103 = (_QWORD *)WdLogNewEntry5_WdError(v81);
  v103[4] = v140;
  v103[3] = this;
  v103[5] = v21;
  WdLogEvent5_WdError(v103);
LABEL_156:
  if ( (int)v21 < 0 )
  {
LABEL_157:
    v128 = (unsigned __int8)v146;
    v129 = 0;
    if ( (_BYTE)v146 )
    {
      v130 = v139;
      do
      {
        v131 = 0;
        if ( v130 )
        {
          do
          {
            if ( *((_BYTE *)a9 + 348) )
            {
              v132 = *((_DWORD *)a9 + 125);
              v104 = 48 * (v129 + v132 * v131 + 1LL);
              v133 = (char *)a9 + v104 + ((8 * *((_DWORD *)a9 + 126) + 175) & 0xFFFFFFF8) * v132 + 496;
            }
            else
            {
              v133 = (char *)a9 + 80 * v129 + 480;
            }
            if ( *(_QWORD *)v133 )
              (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                             + 544LL)
                                                                                 + 8LL)
                                                                     + 424LL))(
                *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 552LL),
                *((unsigned int *)a9 + 34),
                *(_QWORD *)v133,
                0LL);
            v130 = v139;
            ++v131;
          }
          while ( v131 < v139 );
        }
        ++v129;
      }
      while ( v129 < v128 );
    }
    v134 = WdLogNewEntry5_WdError(v104);
    *(_QWORD *)(v134 + 32) = (int)v21;
    *(_QWORD *)(v134 + 24) = this;
    WdLogEvent5_WdError(v134);
  }
  if ( v27 )
    CRefCountedBuffer::RefCountedBufferRelease(v27);
  return (unsigned int)v21;
}
