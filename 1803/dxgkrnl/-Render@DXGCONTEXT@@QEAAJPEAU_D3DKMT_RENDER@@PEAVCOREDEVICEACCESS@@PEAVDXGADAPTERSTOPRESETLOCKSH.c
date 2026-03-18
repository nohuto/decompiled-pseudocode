/*
 * XREFs of ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAVDXGHWQUEUE@@_K@Z @ 0x1C00FEAF0
 * Callers:
 *     DxgkRender @ 0x1C0099050 (DxgkRender.c)
 *     ?DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@@Z @ 0x1C00CE9F0 (-DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@@Z.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C0195B0C (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C00024F0 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z @ 0x1C0007014 (-IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C00092DC (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C001552C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0015700 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0015880 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C00161C0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0016230 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?DisableDdiRenderAllocationList@DXGCONTEXT@@QEAAEXZ @ 0x1C0016D60 (-DisableDdiRenderAllocationList@DXGCONTEXT@@QEAAEXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C001B400 (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     McTemplateK0p @ 0x1C0027764 (McTemplateK0p.c)
 *     TraceDxgkPatchLocationList @ 0x1C0031170 (TraceDxgkPatchLocationList.c)
 *     ?VidMmUnreferenceDmaBuffer@VIDMM_EXPORT@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z @ 0x1C0033C50 (-VidMmUnreferenceDmaBuffer@VIDMM_EXPORT@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z.c)
 *     McTemplateK0ppxppttqddddddddq @ 0x1C0033F48 (McTemplateK0ppxppttqddddddddq.c)
 *     ?DdiRenderKm@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDER@@@Z @ 0x1C009B214 (-DdiRenderKm@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDER@@@Z.c)
 *     ?DdiRender@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDER@@@Z @ 0x1C009B4E0 (-DdiRender@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDER@@@Z.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@@Z @ 0x1C00CB880 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z @ 0x1C0145EA4 (-WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z.c)
 */

__int64 __fastcall DXGCONTEXT::Render(
        DXGCONTEXT *this,
        struct _D3DKMT_RENDER *a2,
        struct COREDEVICEACCESS *a3,
        struct DXGADAPTERSTOPRESETLOCKSHARED *a4,
        struct DXGCONTEXT **a5,
        struct DXGALLOCATION **a6,
        struct DXGHWQUEUE *a7,
        unsigned __int64 a8)
{
  __int64 v9; // r12
  ULONG BroadcastContextCount; // ebx
  struct COREDEVICEACCESS *v11; // r15
  signed int v12; // ebx
  struct _D3DKMT_RENDER *v13; // r13
  D3DKMT_RENDERFLAGS Flags; // eax
  unsigned int v15; // ecx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // rax
  char *pNewCommandBuffer; // rcx
  __int64 v23; // r8
  __int64 v24; // rax
  struct _VIDMM_DMA_BUFFER *v25; // rbx
  bool v26; // zf
  struct _VIDMM_DMA_BUFFER *v27; // r9
  __int64 v28; // rdx
  int v29; // r14d
  int v30; // r15d
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rsi
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rsi
  int v42; // eax
  __int64 v43; // r14
  int v44; // eax
  __int64 v45; // rax
  __int64 v46; // rax
  D3DKMT_RENDERFLAGS v47; // eax
  const EVENT_DESCRIPTOR *v48; // rdx
  __int64 v49; // rax
  __int64 v50; // r15
  __int64 v51; // rcx
  PSLIST_ENTRY v52; // r14
  __int64 v53; // r8
  int v54; // eax
  int v55; // edx
  unsigned int v56; // eax
  __int64 v57; // rcx
  int v58; // edx
  int v59; // eax
  bool v60; // dl
  __int64 v61; // r8
  int v62; // edx
  int v63; // eax
  __int64 v64; // rdx
  D3DKMT_RENDERFLAGS v65; // eax
  __int64 *v66; // r15
  D3DDDI_ALLOCATIONLIST *pNewAllocationList; // r12
  __int64 v68; // r13
  struct DXGPROCESS *Current; // rax
  char *v70; // rsi
  __int64 v71; // rcx
  __int64 v72; // r8
  int v73; // r9d
  __int64 v74; // r12
  char *v75; // rcx
  __int64 v76; // rax
  __int64 v77; // rcx
  struct DXGADAPTER *v78; // rsi
  struct DXGGLOBAL *Global; // rax
  size_t v80; // r8
  void *v81; // rcx
  void *v82; // rdx
  __int64 v83; // r8
  __int64 v84; // rcx
  __int64 v85; // r8
  int v86; // eax
  __int64 v87; // rax
  __int64 v88; // r13
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v93; // rcx
  __int64 v94; // rsi
  __int64 *ThreadProperty; // rax
  __int64 *v96; // r15
  __int64 v97; // r15
  __int64 v98; // rax
  __int64 v99; // rcx
  __int64 v100; // r8
  int v101; // r9d
  __int64 v102; // rcx
  __int64 v103; // rsi
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v105; // rax
  int CurrentProcessSessionId; // r12d
  __int64 ThreadWin32Thread; // rax
  int v108; // r13d
  __int64 v109; // r12
  __int64 v110; // rdx
  __int64 v111; // rcx
  __int64 v112; // r8
  __int64 v113; // r9
  _QWORD *v114; // rax
  unsigned __int8 v115; // cl
  _QWORD *v116; // rax
  __int64 v117; // r13
  _QWORD *v118; // rax
  struct _VIDMM_DMA_BUFFER *v119; // rcx
  __int64 v120; // rcx
  __int64 v121; // rax
  __int64 v122; // rcx
  __int64 v123; // r8
  __int64 v124; // rdx
  __int64 v125; // r8
  __int64 v126; // rcx
  __int64 v127; // rsi
  int v128; // eax
  int v129; // r15d
  int v130; // r13d
  __int64 v131; // rax
  __int64 v132; // rax
  __int64 v133; // r9
  int v134; // ecx
  int v135; // eax
  unsigned int v136; // ecx
  int v137; // eax
  struct _SLIST_ENTRY *v138; // rcx
  bool v139; // cc
  int v140; // r13d
  __int64 v141; // rsi
  struct _KTHREAD *v142; // rcx
  struct DXGCONTEXT **v143; // rdx
  __int64 v144; // rax
  struct DXGHWQUEUE *v145; // rax
  int v146; // eax
  __int64 v147; // rdx
  __int64 v148; // rcx
  int v149; // r15d
  PSLIST_ENTRY v150; // r14
  __int64 v151; // rsi
  union _SLIST_HEADER *v152; // rcx
  __int64 v153; // rbx
  __int64 v154; // rax
  __int64 v155; // rbx
  struct DXGCONTEXT **v156; // rsi
  __int64 v157; // rbx
  __int64 v158; // rax
  UINT64 PresentHistoryToken; // rax
  int v160; // eax
  __int64 v161; // rdx
  __int64 v162; // r8
  __int64 v163; // rax
  __int64 v164; // rdx
  __int64 v165; // rcx
  __int64 v166; // r8
  __int64 v167; // rax
  __int64 v168; // rax
  __int64 v169; // rax
  int v170; // [rsp+20h] [rbp-100h]
  struct DXGK_PRESENT_PARAMS *v171; // [rsp+30h] [rbp-F0h]
  struct VIDSCH_SUBMIT_DATA_BASE *v172; // [rsp+38h] [rbp-E8h]
  struct _VIDMM_DMA_BUFFER *v173; // [rsp+A0h] [rbp-80h] BYREF
  unsigned __int8 v174; // [rsp+A8h] [rbp-78h]
  unsigned int AllocationCount; // [rsp+ACh] [rbp-74h]
  int v176; // [rsp+B0h] [rbp-70h]
  UINT v177; // [rsp+B4h] [rbp-6Ch] BYREF
  int v178; // [rsp+B8h] [rbp-68h]
  struct _D3DKMT_RENDER *v179; // [rsp+C0h] [rbp-60h]
  struct _VIDMM_DMA_BUFFER *v180; // [rsp+C8h] [rbp-58h]
  struct DXGPROCESS *v181; // [rsp+D0h] [rbp-50h] BYREF
  __int64 v182; // [rsp+D8h] [rbp-48h]
  void *v183; // [rsp+E0h] [rbp-40h] BYREF
  __int64 v184; // [rsp+E8h] [rbp-38h] BYREF
  __int64 v185; // [rsp+F0h] [rbp-30h] BYREF
  struct DXGCONTEXT **v186; // [rsp+F8h] [rbp-28h]
  struct COREDEVICEACCESS *v187; // [rsp+100h] [rbp-20h]
  PSLIST_ENTRY ListEntry; // [rsp+108h] [rbp-18h] BYREF
  __int64 v189; // [rsp+110h] [rbp-10h]
  LARGE_INTEGER v190; // [rsp+118h] [rbp-8h] BYREF
  __int64 CurrentIrql; // [rsp+120h] [rbp+0h]
  __int64 v192; // [rsp+128h] [rbp+8h]
  struct DXGHWQUEUE *v193; // [rsp+130h] [rbp+10h]
  struct _DXGKARG_RENDER Src; // [rsp+140h] [rbp+20h] BYREF
  char *v195; // [rsp+1B0h] [rbp+90h] BYREF
  UINT CommandLength; // [rsp+1B8h] [rbp+98h]
  void *pDmaBuffer; // [rsp+1C0h] [rbp+A0h]
  __int64 v198; // [rsp+1C8h] [rbp+A8h]
  __int64 DmaSize; // [rsp+1D0h] [rbp+B0h]
  void *v200; // [rsp+1D8h] [rbp+B8h]
  __int64 v201; // [rsp+1E0h] [rbp+C0h]
  DXGK_ALLOCATIONLIST *pAllocationList; // [rsp+1E8h] [rbp+C8h]
  UINT AllocationListSize; // [rsp+1F0h] [rbp+D0h]
  UINT MultipassOffset; // [rsp+1F4h] [rbp+D4h]
  int v205; // [rsp+200h] [rbp+E0h] BYREF
  __int64 v206; // [rsp+208h] [rbp+E8h]
  int v207; // [rsp+210h] [rbp+F0h]
  struct DXGALLOCATION **v208; // [rsp+218h] [rbp+F8h]
  struct DXGADAPTERSTOPRESETLOCKSHARED *v209; // [rsp+220h] [rbp+100h]
  __int64 v210; // [rsp+228h] [rbp+108h]
  __int64 v211; // [rsp+230h] [rbp+110h]
  __int64 v212; // [rsp+238h] [rbp+118h]
  __int64 v213; // [rsp+240h] [rbp+120h]
  struct _D3DKMT_PRESENTHISTORYTOKEN v214; // [rsp+250h] [rbp+130h] BYREF
  char v215[8]; // [rsp+690h] [rbp+570h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+698h] [rbp+578h] BYREF

  LODWORD(v9) = 0;
  BroadcastContextCount = a2->BroadcastContextCount;
  v11 = a3;
  v208 = a6;
  v12 = BroadcastContextCount + 1;
  v13 = a2;
  v186 = a5;
  v193 = a7;
  Flags = a2->Flags;
  v15 = (*(_BYTE *)&Flags & 8) << 12;
  v209 = a4;
  v187 = a3;
  v179 = a2;
  v174 = 1;
  v178 = v15 | 0x100;
  v173 = (struct _VIDMM_DMA_BUFFER *)(v15 | 0x100LL);
  v176 = v12;
  if ( (*(_BYTE *)&Flags & 0x10) != 0 )
  {
    v178 = v15 | 0x1A0;
    LODWORD(v173) = v15 | 0x1A0;
    v16 = DXGCONTEXT::WaitForQueuedPresentLimit(this, 0, 1u, a3);
    v19 = v16;
    if ( v16 < 0 )
    {
      v20 = WdLogNewEntry5_WdEvent(v18, v17);
      *(_QWORD *)(v20 + 24) = this;
      *(_QWORD *)(v20 + 32) = v19;
      WdLogEvent5_WdEvent(v20);
      return (unsigned int)v19;
    }
    v12 = v176;
  }
  if ( (*(_DWORD *)&v13->Flags & 0x20) != 0 )
    pNewCommandBuffer = (char *)v13->pNewCommandBuffer;
  else
    pNewCommandBuffer = (char *)*((_QWORD *)this + 7);
  Src.pCommand = &pNewCommandBuffer[v13->CommandOffset];
  Src.CommandLength = v13->CommandLength;
  memset(&Src.pDmaBuffer, 0, 0x60uLL);
  v24 = v12;
  v25 = v173;
  v192 = v24;
  while ( 1 )
  {
    v26 = *((_BYTE *)this + 401) == 0;
    v173 = 0LL;
    if ( !v26 )
    {
      v27 = 0LL;
      v173 = 0LL;
      goto LABEL_33;
    }
    ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(*((_QWORD *)this + 2) + 104LL));
    v29 = 3;
    if ( *((_DWORD *)this + 18) > 3u )
      v29 = *((_DWORD *)this + 18);
    if ( !*((_QWORD *)this + 28) )
    {
      v30 = *((_DWORD *)this + 26);
      LODWORD(v172) = v30;
      LODWORD(v171) = v29;
      LOBYTE(v170) = 1;
      v31 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, DXGCONTEXT *, int, _DWORD, struct DXGK_PRESENT_PARAMS *, struct VIDSCH_SUBMIT_DATA_BASE *, _DWORD, _DWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL) + 8LL) + 432LL))(
              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 552LL),
              *((unsigned int *)this + 90),
              *(_QWORD *)(*((_QWORD *)this + 2) + 608LL),
              this,
              v170,
              *((_DWORD *)this + 48),
              v171,
              v172,
              *((_DWORD *)this + 49),
              *((_DWORD *)this + 50));
      *((_QWORD *)this + 28) = v31;
      if ( !v31 )
      {
        v34 = WdLogNewEntry5_WdWarning(v32, 0LL, v33);
        *(_QWORD *)(v34 + 24) = this;
        *(_QWORD *)(v34 + 32) = -1073741801LL;
        WdLogEvent5_WdWarning(v34);
        LODWORD(v37) = -1073741801;
LABEL_20:
        v38 = WdLogNewEntry5_WdWarning(v35, v28, v36);
        *(_QWORD *)(v38 + 24) = this;
        WdLogEvent5_WdWarning(v38);
        goto LABEL_31;
      }
      LODWORD(v37) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                            + 16LL)
                                                                                + 544LL)
                                                                    + 8LL)
                                                        + 440LL))(v31);
      if ( (int)v37 < 0 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL) + 8LL)
                                       + 448LL))(*((_QWORD *)this + 28));
        *((_QWORD *)this + 28) = 0LL;
      }
      else
      {
        *((_DWORD *)this + 51) = v29;
        *((_DWORD *)this + 52) = v30;
      }
      if ( (int)v37 < 0 )
        goto LABEL_20;
      v11 = v187;
    }
    v41 = *((_QWORD *)this + 28);
    LOBYTE(v28) = 1;
    v42 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, struct _VIDMM_DMA_BUFFER **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL) + 8LL)
                                                                                           + 488LL))(
            v41,
            v28,
            0LL,
            &v173);
    v43 = v42;
    if ( v42 != -1071775486 )
    {
      if ( v42 < 0 )
      {
        v46 = WdLogNewEntry5_WdEvent(v40, v39);
        *(_QWORD *)(v46 + 24) = this;
        *(_QWORD *)(v46 + 32) = v43;
        WdLogEvent5_WdEvent(v46);
      }
LABEL_30:
      LODWORD(v37) = v43;
      goto LABEL_31;
    }
    if ( !v11 )
      goto LABEL_30;
    if ( *((_BYTE *)v11 + 80) )
      COREACCESS::Release((struct _KTHREAD ***)v11 + 5);
    COREACCESS::Release((struct _KTHREAD ***)v11 + 1);
    LODWORD(v43) = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, struct _VIDMM_DMA_BUFFER **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL) + 8LL) + 488LL))(
                     v41,
                     0LL,
                     0LL,
                     &v173);
    v44 = COREDEVICEACCESS::AcquireShared(v11);
    v37 = v44;
    if ( v44 >= 0 )
      goto LABEL_30;
    v45 = WdLogNewEntry5_WdEvent(v40, v39);
    *(_QWORD *)(v45 + 24) = this;
    *(_QWORD *)(v45 + 32) = v37;
    WdLogEvent5_WdEvent(v45);
    COREDEVICEACCESS::AcquireSharedUncheck(v11);
LABEL_31:
    if ( (int)v37 < 0 )
    {
      v169 = WdLogNewEntry5_WdEvent(v40, v39);
      *(_QWORD *)(v169 + 32) = (int)v37;
      *(_QWORD *)(v169 + 24) = this;
      WdLogEvent5_WdEvent(v169);
      return (unsigned int)v37;
    }
    v27 = v173;
LABEL_33:
    if ( !bTracingEnabled )
      goto LABEL_43;
    v47 = v13->Flags;
    if ( (*(_BYTE *)&v47 & 0x10) != 0 )
    {
      v212 = 0LL;
      v213 = 0LL;
      v207 = 0;
      v210 = 0LL;
      v211 = 0LL;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
      {
        HIDWORD(v172) = 0;
        HIDWORD(v171) = 0;
        McTemplateK0ppxppttqddddddddq(0LL, 0LL, 0LL, 0LL, v27);
      }
    }
    else
    {
      if ( (*(_BYTE *)&v47 & 0x20) != 0 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
          goto LABEL_43;
        v48 = (const EVENT_DESCRIPTOR *)&EventRenderKm;
      }
      else
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
          goto LABEL_43;
        v48 = (const EVENT_DESCRIPTOR *)&EventRender;
      }
      McTemplateK0p(&DxgkControlGuid_Context, v48, v23, v27);
    }
LABEL_43:
    v177 = 0;
    v190.QuadPart = 0LL;
    v49 = *((_QWORD *)this + 2);
    v184 = 0LL;
    v185 = 0LL;
    v50 = *(_QWORD *)(v49 + 16);
    v189 = v50;
    ++*(_DWORD *)(v50 + 1140);
    v52 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v50 + 1120));
    if ( !v52 )
    {
      ++*(_DWORD *)(v50 + 1144);
      v52 = (PSLIST_ENTRY)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v50 + 1168))(
                            *(unsigned int *)(v50 + 1156),
                            *(unsigned int *)(v50 + 1164),
                            *(unsigned int *)(v50 + 1160),
                            v50 + 1120);
    }
    ListEntry = v52;
    if ( !v52 )
    {
      v168 = WdLogNewEntry5_WdLowResource(v51);
      *(_QWORD *)(v168 + 24) = 576LL;
      WdLogEvent5_WdLowResource(v168);
      CVidSchSubmitData::~CVidSchSubmitData(&ListEntry);
      return 3221225495LL;
    }
    v53 = *(_QWORD *)(v50 + 16);
    v54 = *(_DWORD *)(v53 + 2104);
    if ( v54 < 0x2000 )
      v55 = 1;
    else
      v55 = *(_DWORD *)(v53 + 248);
    if ( v54 >= 0x2000 || *(_BYTE *)(v53 + 2396) )
      v56 = *(_DWORD *)(v53 + 2312) * (48 * v55 + ((8 * v55 + 175) & 0xFFFFFFF8)) + 8 * (v55 + 64);
    else
      v56 = 1280;
    memset(v52, 0, v56);
    v57 = *(_QWORD *)(v189 + 16);
    v58 = *(_DWORD *)(v57 + 2104);
    if ( v58 < 0x2000 )
      v59 = 1;
    else
      v59 = *(_DWORD *)(v57 + 248);
    v60 = v58 >= 0x2000 || *(_BYTE *)(v57 + 2396);
    v61 = *(unsigned int *)(v57 + 2312);
    *((_BYTE *)&v52[21].Next + 12) = v60;
    if ( v60 )
    {
      *((_DWORD *)&v52[31].Next + 2) = v59;
      v62 = 8 * v59;
      HIDWORD(v52[31].Next) = v61;
      v57 = (unsigned int)v61 * (48 * v59 + ((8 * v59 + 175) & 0xFFFFFFF8)) + 16;
      *((_DWORD *)&v52[31].Next + 3) = v57;
      v63 = v61 * (48 * v59 + ((8 * v59 + 175) & 0xFFFFFFF8)) + 512;
      LODWORD(v52[30].Next) = v63;
      HIDWORD(v52[30].Next) = v62 + v63;
    }
    if ( (*((_DWORD *)this + 54) & 1) != 0
      && (v64 = *((_QWORD *)this + 2),
          v57 = *(_QWORD *)(*(_QWORD *)(v64 + 16) + 16LL),
          (*(_DWORD *)(v57 + 2392) & 2) != 0) )
    {
      v65 = v13->Flags;
      if ( (*(_BYTE *)&v65 & 0x20) == 0 )
        goto LABEL_85;
    }
    else
    {
      v65 = v13->Flags;
      v64 = *((_QWORD *)this + 2);
    }
    v66 = &v184;
    if ( !*((_BYTE *)this + 398) )
      v66 = 0LL;
    if ( (*(_BYTE *)&v65 & 0x20) != 0 )
      pNewAllocationList = v13->pNewAllocationList;
    else
      pNewAllocationList = (D3DDDI_ALLOCATIONLIST *)*((_QWORD *)this + 11);
    v68 = *(_QWORD *)(*(_QWORD *)(v64 + 16) + 544LL);
    AllocationCount = v179->AllocationCount;
    v180 = v173;
    Current = DXGPROCESS::GetCurrent(v57, v64);
    v181 = Current;
    if ( Current )
    {
      v70 = (char *)Current + 144;
      if ( *((struct _KTHREAD **)Current + 19) == KeGetCurrentThread() )
      {
        v181 = 0LL;
      }
      else
      {
        KeEnterCriticalRegion();
        if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v70, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v73 = *((_DWORD *)v70 + 4);
            if ( v73 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0q(v71, &EventBlockThread, v72, v73);
          }
          ExAcquirePushLockExclusiveEx(v70, 0LL);
        }
        *((_QWORD *)v70 + 1) = KeGetCurrentThread();
      }
    }
    v74 = (*(int (__fastcall **)(struct _VIDMM_DMA_BUFFER *, D3DDDI_ALLOCATIONLIST *, _QWORD, _QWORD, int, UINT *, LARGE_INTEGER *, __int64 *, struct DXGPROCESS **, __int64 *, PSLIST_ENTRY, struct DXGALLOCATION **))(*(_QWORD *)(v68 + 8) + 568LL))(
            v180,
            pNewAllocationList,
            AllocationCount,
            v174,
            v176,
            &v177,
            &v190,
            v66,
            &v181,
            &v185,
            v52 + 12,
            v208);
    if ( v181 )
    {
      v75 = (char *)v181 + 144;
      *((_QWORD *)v181 + 19) = 0LL;
      ExReleasePushLockExclusiveEx(v75, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( (int)v74 < 0 )
    {
      (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                         + 544LL)
                                                                             + 8LL)
                                                                 + 496LL))(
        v173,
        0LL);
      v173 = 0LL;
      v167 = WdLogNewEntry5_WdWarning(v165, v164, v166);
      *(_QWORD *)(v167 + 24) = this;
      *(_QWORD *)(v167 + 32) = v74;
      WdLogEvent5_WdWarning(v167);
      CVidSchSubmitData::~CVidSchSubmitData(&ListEntry);
      return (unsigned int)v74;
    }
    v13 = v179;
    LODWORD(v9) = 0;
LABEL_85:
    v76 = *((_QWORD *)this + 2);
    v183 = 0LL;
    (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, void **, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v76 + 16)
                                                                                                 + 544LL)
                                                                                     + 8LL)
                                                                         + 504LL))(
      v173,
      &v183,
      v61);
    Src.pDmaBuffer = v183;
    Src.DmaSize = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                                + 544LL)
                                                                                    + 8LL)
                                                                        + 528LL))(v173);
    if ( !DXGCONTEXT::DisableDdiRenderAllocationList(this) || (*(_DWORD *)&v13->Flags & 0x20) != 0 )
    {
      Src.pAllocationList = (DXGK_ALLOCATIONLIST *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL) + 8LL) + 552LL))(v173);
      Src.AllocationListSize = v13->AllocationCount;
      Src.pPatchLocationListIn = (D3DDDI_PATCHLOCATIONLIST *)*((_QWORD *)this + 15);
      Src.PatchLocationListInSize = v13->PatchLocationCount;
      Src.pPatchLocationListOut = (D3DDDI_PATCHLOCATIONLIST *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL) + 8LL) + 544LL))(v173);
      Src.PatchLocationListOutSize = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL) + 8LL)
                                                                                           + 536LL))(v173);
      v77 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      v78 = *(struct DXGADAPTER **)(v77 + 16);
      Global = DXGGLOBAL::GetGlobal(v77);
      if ( DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext((struct DXGGLOBAL *)((char *)Global + 1188), v78) )
      {
        memmove(*((void **)this + 8), Src.pCommand, *((_QWORD *)this + 6));
        v80 = *((_QWORD *)this + 14);
        v81 = (void *)*((_QWORD *)this + 16);
        Src.pCommand = (const void *)*((_QWORD *)this + 8);
        memmove(v81, Src.pPatchLocationListIn, v80);
        Src.pPatchLocationListIn = (D3DDDI_PATCHLOCATIONLIST *)*((_QWORD *)this + 16);
      }
    }
    else
    {
      Src.pAllocationList = 0LL;
      Src.AllocationListSize = 0;
      Src.pPatchLocationListIn = 0LL;
      Src.PatchLocationListInSize = 0;
      Src.pPatchLocationListOut = 0LL;
      Src.PatchLocationListOutSize = 0;
    }
    v82 = (void *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                                + 544LL)
                                                                                    + 8LL)
                                                                        + 560LL))(v173);
    v83 = *((unsigned int *)this + 50);
    Src.DmaBufferSegmentId = v177;
    Src.DmaBufferPhysicalAddress = v190;
    v84 = (unsigned int)v13->Flags;
    Src.pDmaBufferPrivateData = v82;
    Src.DmaBufferPrivateDataSize = v83;
    if ( (v84 & 0x20) != 0 )
    {
      if ( !*((_BYTE *)this + 398) )
      {
        v86 = ADAPTER_RENDER::DdiRenderKm(
                *(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL),
                *((void **)this + 23),
                &Src);
        goto LABEL_149;
      }
      v195 = (char *)v13->pNewCommandBuffer + v13->CommandOffset;
      CommandLength = v13->CommandLength;
      v201 = 0LL;
      pDmaBuffer = Src.pDmaBuffer;
      v198 = v184;
      DmaSize = Src.DmaSize;
      pAllocationList = Src.pAllocationList;
      AllocationListSize = Src.AllocationListSize;
      MultipassOffset = Src.MultipassOffset;
      v180 = (struct _VIDMM_DMA_BUFFER *)*((_QWORD *)this + 23);
      v87 = *((_QWORD *)this + 2);
      v200 = v82;
      LODWORD(v201) = v83;
      v206 = 0LL;
      v88 = *(_QWORD *)(v87 + 16);
      v182 = v88;
      v205 = 5066;
      if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v84, &EventProfilerEnter, v83, 5066);
      DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v205, 5066);
      CurrentProcess = PsGetCurrentProcess(v90, v89);
      ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
      v94 = ProcessDxgProcess;
      if ( ProcessDxgProcess )
      {
        if ( (*(_BYTE *)(ProcessDxgProcess + 323) & 4) != 0 )
        {
          ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
          v96 = ThreadProperty;
          if ( ThreadProperty )
          {
            ObfDereferenceObject(ThreadProperty);
            v94 = *v96;
          }
        }
      }
      AllocationCount = 0;
      v97 = v94 + 120;
      if ( !v94 )
        v97 = 0LL;
      if ( v97 && *(struct _KTHREAD **)(v97 + 8) == KeGetCurrentThread() )
      {
        v98 = WdLogNewEntry5_WdAssertion(v93);
        *(_QWORD *)(v98 + 24) = 1306LL;
        WdLogEvent5_WdAssertion(v98);
      }
      if ( v94 )
      {
        KeEnterCriticalRegion();
        if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v97, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v101 = *(_DWORD *)(v97 + 16);
            if ( v101 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0q(v99, &EventBlockThread, v100, v101);
          }
          ExAcquirePushLockExclusiveEx(v97, 0LL);
        }
        *(_QWORD *)(v97 + 8) = KeGetCurrentThread();
        AllocationCount = 2;
      }
      DXGADAPTER::AcquireDdiSync(*(_QWORD *)(v88 + 16), 1);
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v88 + 16) + 4168LL));
      CurrentIrql = KeGetCurrentIrql();
      v103 = 0LL;
      if ( (unsigned __int8)CurrentIrql < 2u )
      {
        CurrentThread = KeGetCurrentThread();
        if ( !CurrentThread )
        {
          v105 = WdLogNewEntry5_WdAssertion(v102);
          *(_QWORD *)(v105 + 24) = 94LL;
          WdLogEvent5_WdAssertion(v105);
        }
        CurrentProcessSessionId = PsGetCurrentProcessSessionId(v102);
        if ( CurrentProcessSessionId
          && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId
          && !IsThreadCrossSessionAttached()
          && (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) != 0
          && *(_QWORD *)ThreadWin32Thread )
        {
          v103 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
          if ( v103 )
          {
            v108 = *(_DWORD *)(v103 + 136);
LABEL_128:
            v109 = v182;
            DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
              (DXGVALIDATIONPROCESSATTACH *)v215,
              *(struct DXGADAPTER **)(v182 + 16));
            v9 = (*(int (__fastcall **)(struct _VIDMM_DMA_BUFFER *, char **))(*(_QWORD *)(v109 + 16) + 800LL))(
                   v180,
                   &v195);
            if ( v215[0] )
              KeUnstackDetachProcess(&ApcState);
            if ( (_BYTE)CurrentIrql != KeGetCurrentIrql() )
            {
              v114 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v111);
              v114[5] = v182;
              v114[6] = (unsigned __int8)CurrentIrql;
              v114[3] = 275LL;
              v114[4] = 16LL;
              v115 = KeGetCurrentIrql();
              v114[7] = v115;
              WdLogEvent5_WdCriticalError(v114);
            }
            if ( v103 && *(_DWORD *)(v103 + 136) != v108 )
            {
              v116 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v111);
              v116[3] = 275LL;
              v116[4] = 38LL;
              v116[5] = *(int *)(v103 + 136);
              v116[6] = v108;
              v116[7] = 0LL;
              WdLogEvent5_WdCriticalError(v116);
            }
            v117 = v182;
            _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v182 + 16) + 4168LL));
            v118 = (_QWORD *)WdLogNewEntry5_WdTrace(v111, v110, v112, v113);
            v119 = v180;
            v118[3] = v9;
            v118[4] = v119;
            v118[5] = pDmaBuffer;
            v118[6] = (unsigned int)DmaSize;
            v120 = (__int64)pAllocationList;
            v118[7] = pAllocationList;
            if ( (_DWORD)v9 )
            {
              if ( (_DWORD)v9 != -1071775743 )
              {
                if ( (unsigned int)(v9 + 1073741816) > 0xF
                  || (v120 = 32801LL, !_bittest((const int *)&v120, v9 + 1073741816)) )
                {
                  if ( (_DWORD)v9 != -1073741592 && (_DWORD)v9 != -1071775232 )
                  {
                    v121 = WdLogNewEntry5_WdError(v120);
                    *(_QWORD *)(v121 + 24) = v9;
                    WdLogEvent5_WdError(v121);
                  }
                }
              }
            }
            DXGADAPTER::ReleaseDdiSync(*(DXGADAPTER **)(v117 + 16));
            if ( AllocationCount == 2 )
            {
              *(_QWORD *)(v97 + 8) = 0LL;
              ExReleasePushLockExclusiveEx(v97, 0LL);
              KeLeaveCriticalRegion();
            }
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v205);
            if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
              McTemplateK0q(v122, &EventProfilerExit, v123, v205);
            Src.pDmaBuffer = pDmaBuffer;
            Src.pDmaBufferPrivateData = v200;
            Src.MultipassOffset = MultipassOffset;
            goto LABEL_150;
          }
        }
        else
        {
          v103 = 0LL;
        }
      }
      v108 = 0;
      goto LABEL_128;
    }
    v85 = *((_QWORD *)this + 2);
    if ( (*((_DWORD *)this + 54) & 1) == 0 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v85 + 16) + 16LL) + 2392LL) & 4) == 0 )
    {
      v86 = ADAPTER_RENDER::DdiRender(*(ADAPTER_RENDER **)(v85 + 16), *((void **)this + 23), &Src);
LABEL_149:
      LODWORD(v9) = v86;
    }
LABEL_150:
    (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, void *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                       + 544LL)
                                                                           + 8LL)
                                                               + 512LL))(
      v173,
      v82);
    v126 = 0x80000000LL;
    if ( (int)(v9 + 0x80000000) >= 0 && (_DWORD)v9 != -1071775743 )
    {
      if ( v176 > 0 )
      {
        v153 = (unsigned int)v176;
        do
        {
          VIDMM_EXPORT::VidMmUnreferenceDmaBuffer(
            *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL),
            v173);
          (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                             + 544LL)
                                                                                 + 8LL)
                                                                     + 496LL))(
            v173,
            0LL);
          --v153;
        }
        while ( v153 );
      }
      v173 = 0LL;
      v154 = WdLogNewEntry5_WdWarning(v126, v124, v125);
      *(_QWORD *)(v154 + 32) = (int)v9;
      *(_QWORD *)(v154 + 24) = this;
      WdLogEvent5_WdWarning(v154);
      CVidSchSubmitData::~CVidSchSubmitData(&ListEntry);
      return (unsigned int)v9;
    }
    LODWORD(v127) = 0;
    v128 = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                         + 544LL)
                                                                             + 8LL)
                                                                 + 560LL))(v173);
    v129 = LODWORD(Src.pDmaBufferPrivateData) - v128;
    v130 = LODWORD(Src.pDmaBuffer) - (_DWORD)v183;
    if ( DXGCONTEXT::DisableDdiRenderAllocationList(this) )
    {
      v23 = 0LL;
    }
    else
    {
      v131 = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                           + 544LL)
                                                                               + 8LL)
                                                                   + 544LL))(v173);
      v127 = ((__int64)Src.pPatchLocationListOut - v131) / 24;
      v23 = v179->AllocationCount;
      AllocationCount = v179->AllocationCount;
      if ( (qword_1C0079010 & 0x10) != 0 )
      {
        v132 = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                             + 544LL)
                                                                                 + 8LL)
                                                                     + 544LL))(v173);
        TraceDxgkPatchLocationList((__int64)this, (__int64)v173, v127, v132);
        v23 = AllocationCount;
      }
    }
    v52->Next = (struct _SLIST_ENTRY *)v25;
    if ( *((_BYTE *)this + 398) )
    {
      LODWORD(v52->Next) |= 0x8000000u;
      *((_QWORD *)&v52[2].Next + 1) = v184;
    }
    v133 = 0LL;
    if ( (v178 & 0x20) != 0 )
    {
      v134 = 0;
      if ( (_DWORD)v9 == -1071775743 )
        v134 = 64;
      v135 = 2048;
      v136 = (__int64)v52->Next & 0xFFFFFBBF | v134 & 0xFFFFFBFF;
      if ( v176 > 1 )
        v135 = 3072;
      LODWORD(v52->Next) = v135 | v136;
      if ( *(_QWORD *)(*((_QWORD *)this + 2) + 1688LL) != *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) )
        HIDWORD(v52[7].Next) = 0;
    }
    *((_QWORD *)&v52->Next + 1) = v173;
    HIDWORD(v52[3].Next) = v130;
    LODWORD(v52[3].Next) = 0;
    *((_DWORD *)&v52[3].Next + 3) = v23;
    *((_DWORD *)&v52[3].Next + 2) = 0;
    HIDWORD(v52[4].Next) = v127;
    LODWORD(v52[4].Next) = 0;
    *((_DWORD *)&v52[4].Next + 3) = v129;
    *((_DWORD *)&v52[4].Next + 2) = 0;
    if ( v185 )
    {
      v137 = 1;
      v138 = (struct _SLIST_ENTRY *)&v185;
    }
    else
    {
      v137 = 0;
      v138 = 0LL;
    }
    v139 = v192 <= 0;
    v140 = 0;
    v52[21].Next = v138;
    v141 = 0LL;
    *((_DWORD *)&v52[21].Next + 2) = v137;
    if ( !v139 )
      break;
LABEL_176:
    v150 = ListEntry;
    v174 = 0;
    if ( ListEntry )
    {
      v151 = v189 + 1120;
      v152 = (union _SLIST_HEADER *)(v189 + 1120);
      ++*(_DWORD *)(v189 + 1148);
      if ( ExQueryDepthSList(v152) < *(_WORD *)(v151 + 16) )
      {
        ExpInterlockedPushEntrySList((PSLIST_HEADER)v151, ListEntry);
      }
      else
      {
        ++*(_DWORD *)(v151 + 32);
        (*(void (__fastcall **)(PSLIST_ENTRY, __int64))(v151 + 56))(v150, v151);
      }
    }
    if ( (_DWORD)v9 != -1071775743 )
    {
      if ( (*(_DWORD *)&v179->Flags & 0x10) != 0 )
      {
        PresentHistoryToken = v179->PresentHistoryToken;
        v214.Model = D3DKMT_PM_REDIRECTED_VISTABLT;
        v214.Token.Flip.FenceValue = PresentHistoryToken;
        v160 = SubmitPresentHistoryToken(&v214, v187, v209, 0LL, 0, 0LL, 0LL, 0LL, this, 0LL);
        v9 = v160;
        if ( (int)(v160 + 0x80000000) >= 0 && v160 != -1073741130 )
        {
          v163 = WdLogNewEntry5_WdWarning(0x80000000LL, v161, v162);
          *(_QWORD *)(v163 + 24) = this;
          *(_QWORD *)(v163 + 32) = v9;
          WdLogEvent5_WdWarning(v163);
          LODWORD(v9) = 0;
        }
      }
      return (unsigned int)v9;
    }
    v13 = v179;
    LODWORD(v9) = 0;
    v11 = v187;
  }
  while ( 1 )
  {
    v142 = KeGetCurrentThread();
    v143 = v186;
    if ( *((struct _KTHREAD **)v186[v141] + 52) != v142 )
    {
      v144 = WdLogNewEntry5_WdAssertion(v142);
      *(_QWORD *)(v144 + 24) = 844LL;
      WdLogEvent5_WdAssertion(v144);
      v143 = v186;
    }
    v145 = v193;
    if ( v193 )
    {
      *((_QWORD *)&v52[29].Next + 1) = a8;
      v146 = (*(__int64 (__fastcall **)(_QWORD, PSLIST_ENTRY, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 520LL)
                                                                                           + 8LL)
                                                                               + 440LL))(
               *((_QWORD *)v145 + 5),
               v52,
               v23,
               v133);
    }
    else
    {
      v146 = (*(__int64 (__fastcall **)(_QWORD, PSLIST_ENTRY, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 520LL)
                                                                                           + 8LL)
                                                                               + 432LL))(
               *((_QWORD *)v143[v141] + 29),
               v52,
               v23,
               v133);
    }
    v149 = v146;
    if ( v146 < 0 )
      break;
    LODWORD(v52->Next) &= ~0x800u;
    ++v140;
    if ( ++v141 >= v192 )
      goto LABEL_176;
  }
  if ( !v193 )
  {
    v155 = v140;
    if ( v140 >= 0 )
    {
      v156 = v186;
      do
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                       + 520LL)
                                                           + 8LL)
                                               + 448LL))(
          *((_QWORD *)v156[v155--] + 29),
          0LL);
      while ( v155 >= 0 );
    }
  }
  if ( v140 < v176 )
  {
    v157 = (unsigned int)(v176 - v140);
    do
    {
      VIDMM_EXPORT::VidMmUnreferenceDmaBuffer(
        *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL),
        v173);
      (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                         + 544LL)
                                                                             + 8LL)
                                                                 + 496LL))(
        v173,
        0LL);
      --v157;
    }
    while ( v157 );
  }
  v173 = 0LL;
  v158 = WdLogNewEntry5_WdWarning(v148, v147, v23);
  *(_QWORD *)(v158 + 32) = v149;
  *(_QWORD *)(v158 + 24) = this;
  WdLogEvent5_WdWarning(v158);
  CVidSchSubmitData::~CVidSchSubmitData(&ListEntry);
  return (unsigned int)v149;
}
