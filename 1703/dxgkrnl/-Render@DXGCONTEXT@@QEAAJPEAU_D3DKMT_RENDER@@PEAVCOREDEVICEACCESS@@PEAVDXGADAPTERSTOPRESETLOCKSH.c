/*
 * XREFs of ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@@Z @ 0x1C00BCAF0
 * Callers:
 *     ?DxgkCddGdiCommand@@YAJPEAU_D3DKMT_RENDER@@@Z @ 0x1C0093F70 (-DxgkCddGdiCommand@@YAJPEAU_D3DKMT_RENDER@@@Z.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C018FD24 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     DxgkRender @ 0x1C01A43F0 (DxgkRender.c)
 * Callees:
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C0004AD0 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?DisableDdiRenderAllocationList@DXGCONTEXT@@QEAAEXZ @ 0x1C0004C30 (-DisableDdiRenderAllocationList@DXGCONTEXT@@QEAAEXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0005450 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000590C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0005BF0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0006330 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C00063B0 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z @ 0x1C000D924 (-IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z.c)
 *     Template_p @ 0x1C0013458 (Template_p.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     TraceDxgkPatchLocationList @ 0x1C0035F1C (TraceDxgkPatchLocationList.c)
 *     ?VidMmUnreferenceDmaBuffer@VIDMM_EXPORT@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z @ 0x1C0038E00 (-VidMmUnreferenceDmaBuffer@VIDMM_EXPORT@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z.c)
 *     Template_ppxppttqddddddddq @ 0x1C0038EF8 (Template_ppxppttqddddddddq.c)
 *     ?SubmitPresentHistoryToken@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00BDE10 (-SubmitPresentHistoryToken@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCES.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z @ 0x1C016B93C (-WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DdiRender@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDER@@@Z @ 0x1C0177DBC (-DdiRender@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDER@@@Z.c)
 *     ?DdiRenderKm@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDER@@@Z @ 0x1C0178098 (-DdiRenderKm@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDER@@@Z.c)
 */

__int64 __fastcall DXGCONTEXT::Render(
        DXGCONTEXT *this,
        struct _D3DKMT_RENDER *a2,
        struct COREDEVICEACCESS *a3,
        struct DXGADAPTERSTOPRESETLOCKSHARED *a4,
        struct DXGCONTEXT **a5,
        struct DXGALLOCATION **a6)
{
  struct COREDEVICEACCESS *v7; // r12
  signed int v8; // ebx
  struct _D3DKMT_RENDER *v9; // r13
  D3DKMT_RENDERFLAGS Flags; // eax
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rax
  char *pNewCommandBuffer; // rcx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rax
  struct _SLIST_ENTRY *v20; // rbx
  int v21; // r12d
  struct _VIDMM_DMA_BUFFER *v22; // r9
  __int64 v23; // rdx
  int v24; // r15d
  int v25; // r14d
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rsi
  __int64 v35; // rax
  __int64 v36; // rsi
  int v37; // eax
  __int64 v38; // r14
  int v39; // eax
  __int64 v40; // rax
  __int64 v41; // rax
  D3DKMT_RENDERFLAGS v42; // eax
  const EVENT_DESCRIPTOR *v43; // rdx
  __int64 v44; // rax
  __int64 v45; // r14
  __int64 v46; // rcx
  PSLIST_ENTRY v47; // rsi
  __int64 v48; // rdx
  int v49; // r8d
  unsigned int v50; // eax
  __int64 v51; // rax
  int v52; // ecx
  __int64 v53; // r8
  bool v54; // cl
  __int64 v55; // r9
  int v56; // eax
  __int64 *v57; // r15
  D3DDDI_ALLOCATIONLIST *pNewAllocationList; // r12
  __int64 v59; // r13
  struct DXGPROCESS *Current; // rax
  char *v61; // r14
  __int64 v62; // rcx
  __int64 v63; // r8
  int v64; // r9d
  __int64 v65; // r15
  char *v66; // rcx
  __int64 v67; // rax
  __int64 v68; // rdx
  __int64 v69; // r8
  __int64 v70; // r9
  struct DXGADAPTER *v71; // r14
  char *v72; // rcx
  __int64 v73; // rax
  size_t v74; // r8
  void *v75; // rcx
  void *v76; // rdx
  __int64 v77; // r8
  __int64 v78; // rcx
  __int64 v79; // r15
  int v80; // eax
  __int64 v81; // rax
  __int64 v82; // r15
  __int64 CurrentProcess; // rax
  __int64 v84; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // r9
  __int64 v90; // r14
  __int64 *ThreadProperty; // rax
  __int64 v92; // r13
  __int64 v93; // rax
  __int64 v94; // rcx
  __int64 v95; // r8
  int v96; // r9d
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // r8
  __int64 v100; // r9
  __int64 v101; // r14
  struct _KTHREAD *CurrentThread; // r14
  __int64 v103; // rax
  int CurrentProcessSessionId; // r15d
  __int64 ThreadWin32Thread; // rax
  __int64 v106; // r15
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // r8
  __int64 v110; // r9
  _QWORD *v111; // rax
  unsigned __int8 v112; // cl
  _QWORD *v113; // rax
  __int64 v114; // r12
  _QWORD *v115; // rax
  __int64 v116; // rdx
  struct _VIDMM_DMA_BUFFER *v117; // rcx
  __int64 v118; // rcx
  __int64 v119; // rax
  __int64 v120; // rcx
  __int64 v121; // r8
  __int64 v122; // rdx
  __int64 v123; // r8
  __int64 v124; // r9
  __int64 v125; // rcx
  __int64 v126; // r14
  int v127; // eax
  int v128; // r12d
  int v129; // r13d
  __int64 v130; // rdx
  __int64 v131; // rax
  __int64 v132; // r8
  __int64 v133; // rax
  __int64 v134; // r9
  int v135; // ecx
  int v136; // eax
  unsigned int v137; // ecx
  int v138; // r12d
  __int64 v139; // r14
  struct _KTHREAD *v140; // rcx
  struct DXGCONTEXT **v141; // r13
  __int64 v142; // rax
  int v143; // eax
  __int64 v144; // rcx
  __int64 v145; // r13
  PSLIST_HEADER v146; // r14
  union _SLIST_HEADER *v147; // rcx
  __int64 v148; // rbx
  __int64 v149; // rax
  __int64 v150; // rbx
  struct DXGCONTEXT **v151; // rsi
  __int64 v152; // rbx
  __int64 v153; // rax
  UINT64 PresentHistoryToken; // rax
  int v155; // eax
  __int64 v156; // rdx
  __int64 v157; // r8
  __int64 v158; // r9
  __int64 v159; // rax
  __int64 v160; // rdx
  __int64 v161; // rcx
  __int64 v162; // r8
  __int64 v163; // r9
  __int64 v164; // rax
  __int64 v165; // rax
  __int64 v166; // rax
  int v167; // [rsp+20h] [rbp-100h]
  struct _VIDMM_DMA_BUFFER *v168; // [rsp+A0h] [rbp-80h] BYREF
  unsigned __int8 v169; // [rsp+A8h] [rbp-78h]
  unsigned int AllocationCount; // [rsp+ACh] [rbp-74h]
  int v171; // [rsp+B0h] [rbp-70h]
  struct _SLIST_ENTRY *v172; // [rsp+B8h] [rbp-68h] BYREF
  UINT v173; // [rsp+C0h] [rbp-60h] BYREF
  int v174; // [rsp+C4h] [rbp-5Ch]
  struct _D3DKMT_RENDER *v175; // [rsp+C8h] [rbp-58h]
  struct _VIDMM_DMA_BUFFER *v176; // [rsp+D0h] [rbp-50h]
  struct DXGPROCESS *v177; // [rsp+D8h] [rbp-48h] BYREF
  __int64 v178; // [rsp+E0h] [rbp-40h]
  void *v179; // [rsp+E8h] [rbp-38h] BYREF
  __int64 v180; // [rsp+F0h] [rbp-30h] BYREF
  LARGE_INTEGER v181; // [rsp+F8h] [rbp-28h] BYREF
  __int64 CurrentIrql; // [rsp+100h] [rbp-20h]
  __int64 v183; // [rsp+108h] [rbp-18h]
  struct DXGCONTEXT **v184; // [rsp+110h] [rbp-10h]
  struct COREDEVICEACCESS *v185; // [rsp+118h] [rbp-8h]
  struct _DXGKARG_RENDER Src; // [rsp+120h] [rbp+0h] BYREF
  char *v187; // [rsp+190h] [rbp+70h] BYREF
  UINT CommandLength; // [rsp+198h] [rbp+78h]
  void *pDmaBuffer; // [rsp+1A0h] [rbp+80h]
  __int64 v190; // [rsp+1A8h] [rbp+88h]
  __int64 DmaSize; // [rsp+1B0h] [rbp+90h]
  void *v192; // [rsp+1B8h] [rbp+98h]
  __int64 v193; // [rsp+1C0h] [rbp+A0h]
  DXGK_ALLOCATIONLIST *pAllocationList; // [rsp+1C8h] [rbp+A8h]
  UINT AllocationListSize; // [rsp+1D0h] [rbp+B0h]
  UINT MultipassOffset; // [rsp+1D4h] [rbp+B4h]
  struct DXGALLOCATION **v197; // [rsp+1E0h] [rbp+C0h]
  PSLIST_HEADER SListHead; // [rsp+1E8h] [rbp+C8h]
  struct DXGADAPTERSTOPRESETLOCKSHARED *v199; // [rsp+1F0h] [rbp+D0h]
  __int64 v200; // [rsp+1F8h] [rbp+D8h]
  __int64 v201; // [rsp+200h] [rbp+E0h]
  __int64 v202; // [rsp+208h] [rbp+E8h]
  __int64 v203; // [rsp+210h] [rbp+F0h]
  struct _SLIST_ENTRY *v204[3]; // [rsp+218h] [rbp+F8h] BYREF
  struct _D3DKMT_PRESENTHISTORYTOKEN v205; // [rsp+230h] [rbp+110h] BYREF
  char v206[8]; // [rsp+670h] [rbp+550h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+678h] [rbp+558h] BYREF

  v7 = a3;
  v8 = a2->BroadcastContextCount + 1;
  v197 = a6;
  v9 = a2;
  Flags = a2->Flags;
  v199 = a4;
  v185 = a3;
  v175 = a2;
  v184 = a5;
  v169 = 1;
  v174 = ((*(_BYTE *)&Flags & 8) << 12) | 0x100;
  LODWORD(v172) = v174;
  v171 = v8;
  if ( (*(_BYTE *)&Flags & 0x10) != 0 )
  {
    v174 = ((*(_BYTE *)&Flags & 8) << 12) | 0x1A0;
    LODWORD(v172) = v174;
    v11 = DXGCONTEXT::WaitForQueuedPresentLimit(this, 0, 1u, a3);
    v13 = v11;
    if ( v11 < 0 )
    {
      v14 = WdLogNewEntry5_WdEvent(v12);
      *(_QWORD *)(v14 + 24) = this;
      *(_QWORD *)(v14 + 32) = v13;
      WdLogEvent5_WdEvent(v14);
      return (unsigned int)v13;
    }
    v8 = v171;
  }
  if ( (*(_DWORD *)&v9->Flags & 0x20) != 0 )
    pNewCommandBuffer = (char *)v9->pNewCommandBuffer;
  else
    pNewCommandBuffer = (char *)*((_QWORD *)this + 7);
  Src.pCommand = &pNewCommandBuffer[v9->CommandOffset];
  Src.CommandLength = v9->CommandLength;
  memset(&Src.pDmaBuffer, 0, 0x60uLL);
  v19 = v8;
  v20 = v172;
  v183 = v19;
  while ( 1 )
  {
    v168 = 0LL;
    if ( *((_BYTE *)this + 369) )
    {
      v21 = 0;
      v22 = 0LL;
      v168 = 0LL;
      goto LABEL_32;
    }
    ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(*((_QWORD *)this + 2) + 104LL));
    v24 = *((_DWORD *)this + 26);
    v25 = 3;
    if ( *((_DWORD *)this + 18) > 3u )
      v25 = *((_DWORD *)this + 18);
    if ( !*((_QWORD *)this + 28) )
    {
      LOBYTE(v167) = 1;
      v26 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, DXGCONTEXT *, int, _DWORD, int, int, _DWORD, _DWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 432LL) + 8LL) + 432LL))(
              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 440LL),
              *((unsigned int *)this + 86),
              *(_QWORD *)(*((_QWORD *)this + 2) + 592LL),
              this,
              v167,
              *((_DWORD *)this + 48),
              v25,
              v24,
              *((_DWORD *)this + 49),
              *((_DWORD *)this + 50));
      *((_QWORD *)this + 28) = v26;
      if ( !v26 )
      {
        v30 = WdLogNewEntry5_WdWarning(0LL, v27, v28, v29);
        *(_QWORD *)(v30 + 24) = this;
        *(_QWORD *)(v30 + 32) = -1073741801LL;
        WdLogEvent5_WdWarning(v30);
        LODWORD(v34) = -1073741801;
LABEL_20:
        v35 = WdLogNewEntry5_WdWarning(v31, v23, v32, v33);
        *(_QWORD *)(v35 + 24) = this;
        WdLogEvent5_WdWarning(v35);
        goto LABEL_30;
      }
      LODWORD(v34) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                            + 16LL)
                                                                                + 432LL)
                                                                    + 8LL)
                                                        + 440LL))(v26);
      if ( (int)v34 < 0 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 432LL) + 8LL)
                                       + 448LL))(*((_QWORD *)this + 28));
        *((_QWORD *)this + 28) = 0LL;
      }
      else
      {
        *((_DWORD *)this + 51) = v25;
        *((_DWORD *)this + 52) = v24;
      }
      if ( (int)v34 < 0 )
        goto LABEL_20;
    }
    v36 = *((_QWORD *)this + 28);
    LOBYTE(v23) = 1;
    v37 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, struct _VIDMM_DMA_BUFFER **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 432LL) + 8LL)
                                                                                           + 488LL))(
            v36,
            v23,
            0LL,
            &v168);
    v38 = v37;
    if ( v37 != -1071775486 )
    {
      if ( v37 < 0 )
      {
        v41 = WdLogNewEntry5_WdEvent(v17);
        *(_QWORD *)(v41 + 24) = this;
        *(_QWORD *)(v41 + 32) = v38;
        WdLogEvent5_WdEvent(v41);
      }
LABEL_29:
      LODWORD(v34) = v38;
      goto LABEL_30;
    }
    if ( !v7 )
      goto LABEL_29;
    if ( *((_BYTE *)v7 + 80) )
      COREACCESS::Release((struct COREDEVICEACCESS *)((char *)v7 + 40));
    COREACCESS::Release((struct COREDEVICEACCESS *)((char *)v7 + 8));
    LODWORD(v38) = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, struct _VIDMM_DMA_BUFFER **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 432LL) + 8LL) + 488LL))(
                     v36,
                     0LL,
                     0LL,
                     &v168);
    v39 = COREDEVICEACCESS::AcquireShared(v7);
    v34 = v39;
    if ( v39 >= 0 )
      goto LABEL_29;
    v40 = WdLogNewEntry5_WdEvent(v17);
    *(_QWORD *)(v40 + 24) = this;
    *(_QWORD *)(v40 + 32) = v34;
    WdLogEvent5_WdEvent(v40);
LABEL_30:
    if ( (int)v34 < 0 )
    {
      v166 = WdLogNewEntry5_WdEvent(v17);
      *(_QWORD *)(v166 + 32) = (int)v34;
      *(_QWORD *)(v166 + 24) = this;
      WdLogEvent5_WdEvent(v166);
      return (unsigned int)v34;
    }
    v22 = v168;
    v21 = 0;
LABEL_32:
    if ( !bTracingEnabled )
      goto LABEL_42;
    v42 = v9->Flags;
    if ( (*(_BYTE *)&v42 & 0x10) != 0 )
    {
      v202 = 0LL;
      v203 = 0LL;
      v200 = 0LL;
      v201 = 0LL;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
        Template_ppxppttqddddddddq(0LL, 0LL, v18, 0LL, v22);
    }
    else
    {
      if ( (*(_BYTE *)&v42 & 0x20) != 0 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
          goto LABEL_42;
        v43 = (const EVENT_DESCRIPTOR *)&EventRenderKm;
      }
      else
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
          goto LABEL_42;
        v43 = &EventRender;
      }
      Template_p(v17, v43, v18, v22);
    }
LABEL_42:
    v173 = 0;
    v181.QuadPart = 0LL;
    v44 = *((_QWORD *)this + 2);
    v180 = 0LL;
    v172 = 0LL;
    v45 = *(_QWORD *)(v44 + 16);
    v204[1] = (struct _SLIST_ENTRY *)v45;
    ++*(_DWORD *)(v45 + 1028);
    SListHead = (PSLIST_HEADER)(v45 + 1008);
    v47 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v45 + 1008));
    if ( !v47 )
    {
      ++*(_DWORD *)(v45 + 1032);
      v47 = (PSLIST_ENTRY)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v45 + 1056))(
                            *(unsigned int *)(v45 + 1044),
                            *(unsigned int *)(v45 + 1052),
                            *(unsigned int *)(v45 + 1048),
                            v45 + 1008);
    }
    v204[0] = v47;
    if ( !v47 )
    {
      v165 = WdLogNewEntry5_WdLowResource(v46);
      *(_QWORD *)(v165 + 24) = 556LL;
      WdLogEvent5_WdLowResource(v165);
      CVidSchSubmitData::~CVidSchSubmitData(v204);
      return 3221225495LL;
    }
    v48 = *(_QWORD *)(v45 + 16);
    if ( *(int *)(v48 + 1944) < 0x2000 )
      v49 = 1;
    else
      v49 = *(_DWORD *)(v48 + 248);
    if ( *(int *)(v48 + 1944) >= 0x2000 || *(_BYTE *)(v48 + 2228) )
      v50 = *(_DWORD *)(v48 + 2152) * (48 * v49 + ((8 * v49 + 167) & 0xFFFFFFF8)) + 8 * (v49 + 56);
    else
      v50 = 936;
    memset(v47, 0, v50);
    v51 = *(_QWORD *)(v45 + 16);
    v52 = *(_DWORD *)(v51 + 1944);
    if ( v52 < 0x2000 )
      v53 = 1LL;
    else
      v53 = *(unsigned int *)(v51 + 248);
    v54 = v52 >= 0x2000 || *(_BYTE *)(v51 + 2228);
    v55 = *(unsigned int *)(v51 + 2152);
    *((_BYTE *)&v47[21].Next + 12) = v54;
    if ( v54 )
    {
      HIDWORD(v47[27].Next) = v55;
      *((_DWORD *)&v47[27].Next + 2) = v53;
      *((_DWORD *)&v47[27].Next + 3) = v55 * (48 * v53 + ((8 * v53 + 167) & 0xFFFFFFF8)) + 16;
      v56 = v55 * (48 * v53 + ((8 * v53 + 167) & 0xFFFFFFF8)) + 448;
      LODWORD(v47[26].Next) = v56;
      HIDWORD(v47[26].Next) = 8 * v53 + v56;
    }
    if ( (*((_DWORD *)this + 54) & 1) == 0
      || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 2224LL) & 2) == 0
      || (*(_DWORD *)&v9->Flags & 0x20) != 0 )
    {
      v57 = &v180;
      if ( !*((_BYTE *)this + 366) )
        v57 = 0LL;
      if ( (*(_DWORD *)&v9->Flags & 0x20) != 0 )
        pNewAllocationList = v9->pNewAllocationList;
      else
        pNewAllocationList = (D3DDDI_ALLOCATIONLIST *)*((_QWORD *)this + 11);
      v59 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 432LL);
      AllocationCount = v175->AllocationCount;
      v176 = v168;
      Current = DXGPROCESS::GetCurrent();
      v177 = Current;
      if ( Current )
      {
        v61 = (char *)Current + 112;
        if ( *((struct _KTHREAD **)Current + 15) == KeGetCurrentThread() )
        {
          v177 = 0LL;
        }
        else
        {
          KeEnterCriticalRegion();
          if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v61, 0LL) )
          {
            if ( bTracingEnabled )
            {
              v64 = *((_DWORD *)v61 + 4);
              if ( v64 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                Template_q(v62, &EventBlockThread, v63, v64);
            }
            ExAcquirePushLockExclusiveEx(v61, 0LL);
          }
          *((_QWORD *)v61 + 1) = KeGetCurrentThread();
        }
      }
      v65 = (*(int (__fastcall **)(struct _VIDMM_DMA_BUFFER *, D3DDDI_ALLOCATIONLIST *, _QWORD, _QWORD, int, UINT *, LARGE_INTEGER *, __int64 *, struct DXGPROCESS **, struct _SLIST_ENTRY **, PSLIST_ENTRY, struct DXGALLOCATION **))(*(_QWORD *)(v59 + 8) + 568LL))(
              v176,
              pNewAllocationList,
              AllocationCount,
              v169,
              v171,
              &v173,
              &v181,
              v57,
              &v177,
              &v172,
              v47 + 12,
              v197);
      v21 = 0;
      if ( v177 )
      {
        v66 = (char *)v177 + 112;
        *((_QWORD *)v177 + 15) = 0LL;
        ExReleasePushLockExclusiveEx(v66, 0LL);
        KeLeaveCriticalRegion();
      }
      if ( (int)v65 < 0 )
      {
        (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                           + 432LL)
                                                                               + 8LL)
                                                                   + 496LL))(
          v168,
          0LL);
        v168 = 0LL;
        v164 = WdLogNewEntry5_WdWarning(v161, v160, v162, v163);
        *(_QWORD *)(v164 + 24) = this;
        *(_QWORD *)(v164 + 32) = v65;
        WdLogEvent5_WdWarning(v164);
        CVidSchSubmitData::~CVidSchSubmitData(v204);
        return (unsigned int)v65;
      }
      v9 = v175;
    }
    v67 = *((_QWORD *)this + 2);
    v179 = 0LL;
    (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, void **, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v67 + 16) + 432LL)
                                                                                              + 8LL)
                                                                                  + 504LL))(
      v168,
      &v179,
      v53,
      v55);
    Src.pDmaBuffer = v179;
    Src.DmaSize = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                                + 432LL)
                                                                                    + 8LL)
                                                                        + 528LL))(v168);
    if ( !DXGCONTEXT::DisableDdiRenderAllocationList(this) || (*(_DWORD *)&v9->Flags & 0x20) != 0 )
    {
      Src.pAllocationList = (DXGK_ALLOCATIONLIST *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 432LL) + 8LL) + 552LL))(v168);
      Src.AllocationListSize = v9->AllocationCount;
      Src.pPatchLocationListIn = (D3DDDI_PATCHLOCATIONLIST *)*((_QWORD *)this + 15);
      Src.PatchLocationListInSize = v9->PatchLocationCount;
      Src.pPatchLocationListOut = (D3DDDI_PATCHLOCATIONLIST *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 432LL) + 8LL) + 544LL))(v168);
      Src.PatchLocationListOutSize = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 432LL) + 8LL)
                                                                                           + 536LL))(v168);
      v71 = *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
      v72 = (char *)DXGGLOBAL::m_pGlobal;
      if ( !DXGGLOBAL::m_pGlobal )
      {
        v73 = WdLogNewEntry5_WdAssertion(0LL, v68, v69, v70);
        *(_QWORD *)(v73 + 24) = 1815LL;
        WdLogEvent5_WdAssertion(v73);
        v72 = (char *)DXGGLOBAL::m_pGlobal;
      }
      if ( DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext((DXGVALIDATION *)(v72 + 1108), v71) )
      {
        memmove(*((void **)this + 8), Src.pCommand, *((_QWORD *)this + 6));
        v74 = *((_QWORD *)this + 14);
        v75 = (void *)*((_QWORD *)this + 16);
        Src.pCommand = (const void *)*((_QWORD *)this + 8);
        memmove(v75, Src.pPatchLocationListIn, v74);
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
    v76 = (void *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                                + 432LL)
                                                                                    + 8LL)
                                                                        + 560LL))(v168);
    v77 = *((unsigned int *)this + 50);
    Src.DmaBufferSegmentId = v173;
    Src.DmaBufferPhysicalAddress = v181;
    v78 = (unsigned int)v9->Flags;
    Src.pDmaBufferPrivateData = v76;
    Src.DmaBufferPrivateDataSize = v77;
    if ( (v78 & 0x20) == 0 )
    {
      if ( (*((_DWORD *)this + 54) & 1) != 0
        && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 2224LL) & 4) != 0 )
      {
        LODWORD(v79) = 0;
        goto LABEL_150;
      }
      v80 = ADAPTER_RENDER::DdiRender(*(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL), *((void **)this + 23), &Src);
LABEL_149:
      LODWORD(v79) = v80;
      goto LABEL_150;
    }
    if ( !*((_BYTE *)this + 366) )
    {
      v80 = ADAPTER_RENDER::DdiRenderKm(*(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL), *((void **)this + 23), &Src);
      goto LABEL_149;
    }
    v187 = (char *)v9->pNewCommandBuffer + v9->CommandOffset;
    CommandLength = v9->CommandLength;
    v193 = 0LL;
    pDmaBuffer = Src.pDmaBuffer;
    v190 = v180;
    DmaSize = Src.DmaSize;
    pAllocationList = Src.pAllocationList;
    AllocationListSize = Src.AllocationListSize;
    MultipassOffset = Src.MultipassOffset;
    v176 = (struct _VIDMM_DMA_BUFFER *)*((_QWORD *)this + 23);
    v81 = *((_QWORD *)this + 2);
    v192 = v76;
    LODWORD(v193) = v77;
    v82 = *(_QWORD *)(v81 + 16);
    v178 = v82;
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v78, &EventProfilerEnter, v77, 5066);
    CurrentProcess = PsGetCurrentProcess(v78);
    ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v84);
    v90 = ProcessDxgProcess;
    if ( ProcessDxgProcess )
    {
      if ( (*(_BYTE *)(ProcessDxgProcess + 275) & 2) != 0 )
      {
        ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
        if ( ThreadProperty )
          v90 = *ThreadProperty;
      }
    }
    AllocationCount = 0;
    v92 = v90 + 88;
    if ( !v90 )
      v92 = 0LL;
    if ( v92 && *(struct _KTHREAD **)(v92 + 8) == KeGetCurrentThread() )
    {
      v93 = WdLogNewEntry5_WdAssertion(v87, v86, v88, v89);
      *(_QWORD *)(v93 + 24) = 1167LL;
      WdLogEvent5_WdAssertion(v93);
    }
    if ( v90 )
    {
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v92, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v96 = *(_DWORD *)(v92 + 16);
          if ( v96 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            Template_q(v94, &EventBlockThread, v95, v96);
        }
        ExAcquirePushLockExclusiveEx(v92, 0LL);
      }
      *(_QWORD *)(v92 + 8) = KeGetCurrentThread();
      AllocationCount = 2;
    }
    DXGADAPTER::AcquireDdiSync(*(_QWORD *)(v82 + 16), 1);
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v82 + 16) + 3892LL));
    CurrentIrql = KeGetCurrentIrql();
    v101 = 0LL;
    if ( (unsigned __int8)CurrentIrql < 2u )
    {
      CurrentThread = KeGetCurrentThread();
      if ( !CurrentThread )
      {
        v103 = WdLogNewEntry5_WdAssertion(v98, v97, v99, v100);
        *(_QWORD *)(v103 + 24) = 94LL;
        WdLogEvent5_WdAssertion(v103);
      }
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v98, v97, v99, v100);
      if ( CurrentProcessSessionId
        && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId
        && (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) != 0
        && *(_QWORD *)ThreadWin32Thread )
      {
        v101 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
        if ( v101 )
          v21 = *(_DWORD *)(v101 + 136);
      }
      else
      {
        v101 = 0LL;
      }
    }
    v106 = v178;
    DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
      (DXGVALIDATIONPROCESSATTACH *)v206,
      *(struct DXGADAPTER **)(v178 + 16));
    v79 = (*(int (__fastcall **)(struct _VIDMM_DMA_BUFFER *, char **))(*(_QWORD *)(v106 + 16) + 800LL))(v176, &v187);
    if ( v206[0] )
      KeUnstackDetachProcess(&ApcState);
    if ( (_BYTE)CurrentIrql != KeGetCurrentIrql() )
    {
      v111 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v108, v107, v109);
      v111[5] = v178;
      v111[6] = (unsigned __int8)CurrentIrql;
      v111[3] = 275LL;
      v111[4] = 16LL;
      v112 = KeGetCurrentIrql();
      v111[7] = v112;
      WdLogEvent5_WdCriticalError(v111);
    }
    if ( v101 && *(_DWORD *)(v101 + 136) != v21 )
    {
      v113 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v108, v107, v109);
      v113[3] = 275LL;
      v113[4] = 25LL;
      v113[5] = *(int *)(v101 + 136);
      v113[6] = v21;
      v113[7] = 0LL;
      WdLogEvent5_WdCriticalError(v113);
    }
    v114 = v178;
    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v178 + 16) + 3892LL));
    v115 = (_QWORD *)WdLogNewEntry5_WdTrace(v108, v107, v109, v110);
    v117 = v176;
    v115[3] = v79;
    v115[4] = v117;
    v115[5] = pDmaBuffer;
    v115[6] = (unsigned int)DmaSize;
    v118 = (__int64)pAllocationList;
    v115[7] = pAllocationList;
    if ( (unsigned int)(v79 + 1073741816) > 0xF || (v118 = 32801LL, !_bittest((const int *)&v118, v79 + 1073741816)) )
    {
      if ( (_DWORD)v79 != -1073741592 && (_DWORD)v79 != -1071775743 && (_DWORD)v79 != -1071775232 && (_DWORD)v79 )
      {
        v119 = WdLogNewEntry5_WdError(v118, v116);
        *(_QWORD *)(v119 + 24) = v79;
        WdLogEvent5_WdError(v119);
      }
    }
    DXGADAPTER::ReleaseDdiSync(*(DXGADAPTER **)(v114 + 16));
    if ( AllocationCount == 1 )
    {
      ExReleasePushLockSharedEx(v92, 0LL);
      KeLeaveCriticalRegion();
    }
    else if ( AllocationCount == 2 )
    {
      *(_QWORD *)(v92 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v92, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v120, &EventProfilerExit, v121, 5066);
    Src.pDmaBuffer = pDmaBuffer;
    Src.pDmaBufferPrivateData = v192;
    Src.MultipassOffset = MultipassOffset;
LABEL_150:
    (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, void *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                       + 432LL)
                                                                           + 8LL)
                                                               + 512LL))(
      v168,
      v76);
    v125 = 0x80000000LL;
    if ( (int)(v79 + 0x80000000) >= 0 && (_DWORD)v79 != -1071775743 )
    {
      if ( v171 > 0 )
      {
        v148 = (unsigned int)v171;
        do
        {
          VIDMM_EXPORT::VidMmUnreferenceDmaBuffer(
            *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 432LL),
            v168);
          (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                             + 432LL)
                                                                                 + 8LL)
                                                                     + 496LL))(
            v168,
            0LL);
          --v148;
        }
        while ( v148 );
      }
      v168 = 0LL;
      v149 = WdLogNewEntry5_WdWarning(v125, v122, v123, v124);
      *(_QWORD *)(v149 + 32) = (int)v79;
      *(_QWORD *)(v149 + 24) = this;
      WdLogEvent5_WdWarning(v149);
      CVidSchSubmitData::~CVidSchSubmitData(v204);
      return (unsigned int)v79;
    }
    LODWORD(v126) = 0;
    v127 = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                         + 432LL)
                                                                             + 8LL)
                                                                 + 560LL))(v168);
    v128 = LODWORD(Src.pDmaBufferPrivateData) - v127;
    v129 = LODWORD(Src.pDmaBuffer) - (_DWORD)v179;
    if ( DXGCONTEXT::DisableDdiRenderAllocationList(this) )
    {
      v132 = 0LL;
    }
    else
    {
      v131 = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                           + 432LL)
                                                                               + 8LL)
                                                                   + 544LL))(v168);
      v130 = (unsigned __int128)(((__int128)Src.pPatchLocationListOut - v131) * 0x2AAAAAAAAAAAAAABLL) >> 64;
      v126 = ((__int64)Src.pPatchLocationListOut - v131) / 24;
      v132 = v175->AllocationCount;
      AllocationCount = v175->AllocationCount;
      if ( (qword_1C006E790 & 0x10) != 0 )
      {
        v133 = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                             + 432LL)
                                                                                 + 8LL)
                                                                     + 544LL))(v168);
        TraceDxgkPatchLocationList((__int64)this, (__int64)v168, v126, v133);
        v132 = AllocationCount;
      }
    }
    v47->Next = v20;
    if ( *((_BYTE *)this + 366) )
    {
      LODWORD(v47->Next) |= 0x8000000u;
      *((_QWORD *)&v47[2].Next + 1) = v180;
    }
    v134 = 0LL;
    if ( (v174 & 0x20) != 0 )
    {
      v135 = 0;
      if ( (_DWORD)v79 == -1071775743 )
        v135 = 64;
      v136 = 0;
      v137 = (__int64)v47->Next & 0xFFFFFBBF | v135 & 0xFFFFFBFF;
      if ( v171 > 1 )
        v136 = 1024;
      LODWORD(v47->Next) = v136 | v137 | 0x800;
      v130 = *((_QWORD *)this + 2);
      if ( *(_QWORD *)(v130 + 1800) != *(_QWORD *)(*(_QWORD *)(v130 + 16) + 16LL) )
        HIDWORD(v47[7].Next) = 0;
    }
    *((_QWORD *)&v47->Next + 1) = v168;
    HIDWORD(v47[3].Next) = v129;
    LODWORD(v47[3].Next) = 0;
    *((_DWORD *)&v47[3].Next + 3) = v132;
    *((_DWORD *)&v47[3].Next + 2) = 0;
    HIDWORD(v47[4].Next) = v126;
    LODWORD(v47[4].Next) = 0;
    *((_DWORD *)&v47[4].Next + 3) = v128;
    *((_DWORD *)&v47[4].Next + 2) = 0;
    if ( v172 )
    {
      *((_DWORD *)&v47[21].Next + 2) = 1;
      v47[21].Next = (struct _SLIST_ENTRY *)&v172;
    }
    else
    {
      v47[21].Next = 0LL;
      *((_DWORD *)&v47[21].Next + 2) = 0;
    }
    v138 = 0;
    v139 = 0LL;
    if ( v183 > 0 )
      break;
LABEL_173:
    v146 = SListHead;
    v147 = SListHead;
    v169 = 0;
    ++*((_DWORD *)&SListHead[1].HeaderX64 + 3);
    if ( ExQueryDepthSList(v147) < LOWORD(v146[1].Alignment) )
    {
      ExpInterlockedPushEntrySList(v146, v47);
    }
    else
    {
      ++LODWORD(v146[2].Alignment);
      ((void (__fastcall *)(PSLIST_ENTRY, PSLIST_HEADER))v146[3].Region)(v47, v146);
    }
    if ( (_DWORD)v79 != -1071775743 )
    {
      if ( (*(_DWORD *)&v175->Flags & 0x10) != 0 )
      {
        PresentHistoryToken = v175->PresentHistoryToken;
        v205.Model = D3DKMT_PM_REDIRECTED_VISTABLT;
        v205.Token.Flip.FenceValue = PresentHistoryToken;
        v155 = DXGCONTEXT::SubmitPresentHistoryToken(this, &v205, v185, v199, 0LL, 0, 0LL, 0LL, 0LL);
        v79 = v155;
        if ( (int)(v155 + 0x80000000) >= 0 && v155 != -1073741130 )
        {
          v159 = WdLogNewEntry5_WdWarning(0x80000000LL, v156, v157, v158);
          *(_QWORD *)(v159 + 24) = this;
          *(_QWORD *)(v159 + 32) = v79;
          WdLogEvent5_WdWarning(v159);
          LODWORD(v79) = 0;
        }
      }
      return (unsigned int)v79;
    }
    v9 = v175;
    v7 = v185;
  }
  while ( 1 )
  {
    v140 = KeGetCurrentThread();
    v141 = v184;
    if ( *((struct _KTHREAD **)v184[v139] + 48) != v140 )
    {
      v142 = WdLogNewEntry5_WdAssertion(v140, v130, v132, v134);
      *(_QWORD *)(v142 + 24) = 824LL;
      WdLogEvent5_WdAssertion(v142);
    }
    v143 = (*(__int64 (__fastcall **)(_QWORD, PSLIST_ENTRY, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 408LL)
                                                                                         + 8LL)
                                                                             + 344LL))(
             *((_QWORD *)v141[v139] + 29),
             v47,
             v132,
             v134);
    v145 = v143;
    if ( v143 < 0 )
      break;
    LODWORD(v47->Next) &= ~0x800u;
    ++v138;
    if ( ++v139 >= v183 )
      goto LABEL_173;
  }
  v150 = v138;
  if ( v138 >= 0 )
  {
    v151 = v184;
    do
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 408LL)
                                                         + 8LL)
                                             + 352LL))(
        *((_QWORD *)v151[v150--] + 29),
        0LL);
    while ( v150 >= 0 );
  }
  if ( v138 < v171 )
  {
    v152 = (unsigned int)(v171 - v138);
    do
    {
      VIDMM_EXPORT::VidMmUnreferenceDmaBuffer(
        *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 432LL),
        v168);
      (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                         + 432LL)
                                                                             + 8LL)
                                                                 + 496LL))(
        v168,
        0LL);
      --v152;
    }
    while ( v152 );
  }
  v168 = 0LL;
  v153 = WdLogNewEntry5_WdWarning(v144, v130, v132, v134);
  *(_QWORD *)(v153 + 24) = this;
  *(_QWORD *)(v153 + 32) = v145;
  WdLogEvent5_WdWarning(v153);
  CVidSchSubmitData::~CVidSchSubmitData(v204);
  return (unsigned int)v145;
}
