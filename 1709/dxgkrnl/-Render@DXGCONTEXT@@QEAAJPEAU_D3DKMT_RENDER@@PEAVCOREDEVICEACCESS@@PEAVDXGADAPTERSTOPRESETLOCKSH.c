/*
 * XREFs of ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@@Z @ 0x1C00C1D40
 * Callers:
 *     ?DxgkCddGdiCommand@@YAJPEAU_D3DKMT_RENDER@@@Z @ 0x1C00BFD00 (-DxgkCddGdiCommand@@YAJPEAU_D3DKMT_RENDER@@@Z.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C01A4544 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     DxgkRender @ 0x1C01BDFB0 (DxgkRender.c)
 * Callees:
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0001A40 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001B00 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0001D2C (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0001E90 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0002890 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0002900 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z @ 0x1C0008C80 (-IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z.c)
 *     ?DisableDdiRenderAllocationList@DXGCONTEXT@@QEAAEXZ @ 0x1C0008E90 (-DisableDdiRenderAllocationList@DXGCONTEXT@@QEAAEXZ.c)
 *     ?GetRenderHwQueue@DXGCONTEXT@@QEBAPEAU_VIDSCH_CONTEXT@@XZ @ 0x1C0008EC0 (-GetRenderHwQueue@DXGCONTEXT@@QEBAPEAU_VIDSCH_CONTEXT@@XZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C0008EE0 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C001557C (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0016740 (memmove.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     McTemplateK0p @ 0x1C00204D4 (McTemplateK0p.c)
 *     TraceDxgkPatchLocationList @ 0x1C0026D2C (TraceDxgkPatchLocationList.c)
 *     ?VidMmUnreferenceDmaBuffer@VIDMM_EXPORT@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z @ 0x1C0029060 (-VidMmUnreferenceDmaBuffer@VIDMM_EXPORT@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z.c)
 *     McTemplateK0ppxppttqddddddddq @ 0x1C0029160 (McTemplateK0ppxppttqddddddddq.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAVDXGADAPTER@@I@Z @ 0x1C00CD300 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z @ 0x1C016F668 (-WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DdiRender@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDER@@@Z @ 0x1C017B6DC (-DdiRender@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDER@@@Z.c)
 *     ?DdiRenderKm@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDER@@@Z @ 0x1C017B9B8 (-DdiRenderKm@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDER@@@Z.c)
 */

__int64 __fastcall DXGCONTEXT::Render(
        DXGCONTEXT *this,
        struct _D3DKMT_RENDER *a2,
        struct COREDEVICEACCESS *a3,
        struct DXGADAPTERSTOPRESETLOCKSHARED *a4,
        struct DXGCONTEXT **a5,
        struct DXGALLOCATION **a6)
{
  struct COREDEVICEACCESS *v7; // r15
  ULONG BroadcastContextCount; // ebx
  struct _D3DKMT_RENDER *v9; // r13
  signed int v10; // ebx
  D3DKMT_RENDERFLAGS Flags; // eax
  int v12; // ecx
  int v13; // eax
  __int64 v14; // rbx
  __int64 v15; // rax
  char *pNewCommandBuffer; // rcx
  __int64 v18; // r8
  __int64 v19; // rax
  struct _SLIST_ENTRY *v20; // rbx
  bool v21; // zf
  struct _VIDMM_DMA_BUFFER *v22; // r9
  __int64 v23; // rdx
  int v24; // r14d
  int v25; // r15d
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rsi
  __int64 v33; // rax
  __int64 v34; // rsi
  int v35; // eax
  __int64 v36; // r14
  int v37; // eax
  __int64 v38; // rax
  __int64 v39; // rax
  D3DKMT_RENDERFLAGS v40; // eax
  const EVENT_DESCRIPTOR *v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rsi
  __int64 v44; // rcx
  PSLIST_ENTRY v45; // r14
  __int64 v46; // r8
  int v47; // eax
  int v48; // edx
  unsigned int v49; // eax
  __int64 v50; // rcx
  __int64 v51; // rdx
  int v52; // eax
  __int64 v53; // r8
  int v54; // eax
  __int64 *v55; // r15
  D3DDDI_ALLOCATIONLIST *pNewAllocationList; // r12
  __int64 v57; // rcx
  __int64 v58; // r13
  struct DXGPROCESS *Current; // rax
  char *v60; // rsi
  __int64 v61; // rcx
  __int64 v62; // r8
  int v63; // r9d
  __int64 v64; // r15
  char *v65; // rcx
  __int64 v66; // rax
  __int64 v67; // rcx
  struct DXGADAPTER *v68; // rsi
  struct DXGGLOBAL *Global; // rax
  size_t v70; // r8
  void *v71; // rcx
  void *v72; // rdx
  __int64 v73; // r8
  __int64 v74; // rcx
  __int64 v75; // r15
  int v76; // eax
  __int64 v77; // rax
  __int64 v78; // r12
  __int64 CurrentProcess; // rax
  __int64 v80; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v82; // rsi
  __int64 *ThreadProperty; // rax
  __int64 *v84; // r15
  __int64 v85; // r13
  __int64 v86; // rax
  __int64 v87; // rcx
  __int64 v88; // r8
  int v89; // r9d
  __int64 v90; // rcx
  int v91; // r12d
  __int64 v92; // rsi
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v94; // rax
  int CurrentProcessSessionId; // r15d
  __int64 ThreadWin32Thread; // rax
  __int64 v97; // r15
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // r8
  _QWORD *v101; // rax
  unsigned __int8 v102; // cl
  _QWORD *v103; // rax
  __int64 v104; // r12
  _QWORD *v105; // rax
  struct _VIDMM_DMA_BUFFER *v106; // rcx
  __int64 v107; // rcx
  __int64 v108; // rax
  __int64 v109; // rcx
  __int64 v110; // r8
  __int64 v111; // rdx
  __int64 v112; // r8
  __int64 v113; // rcx
  __int64 v114; // rsi
  int v115; // eax
  int v116; // r12d
  int v117; // r13d
  __int64 v118; // rax
  __int64 v119; // r8
  __int64 v120; // rax
  __int64 v121; // r9
  int v122; // ecx
  int v123; // eax
  unsigned int v124; // ecx
  struct _VIDMM_DMA_BUFFER *v125; // rax
  int v126; // r13d
  __int64 v127; // rsi
  struct _KTHREAD *v128; // rcx
  struct DXGCONTEXT **v129; // r12
  __int64 v130; // rax
  struct DXGCONTEXT *v131; // rcx
  __int64 v132; // rcx
  int v133; // eax
  __int64 v134; // rdx
  __int64 v135; // r12
  PSLIST_HEADER v136; // rsi
  union _SLIST_HEADER *v137; // rcx
  __int64 v138; // rbx
  __int64 v139; // rax
  __int64 v140; // rbx
  struct DXGCONTEXT **v141; // rsi
  struct _VIDSCH_CONTEXT *RenderHwQueue; // rax
  __int64 v143; // rbx
  __int64 v144; // rax
  __int64 v145; // rax
  int v146; // eax
  __int64 v147; // rdx
  __int64 v148; // r8
  __int64 v149; // rax
  __int64 v150; // rdx
  __int64 v151; // rcx
  __int64 v152; // r8
  __int64 v153; // rax
  __int64 v154; // rax
  __int64 v155; // rax
  int v156; // [rsp+20h] [rbp-100h]
  struct DXGK_PRESENT_PARAMS *v157; // [rsp+30h] [rbp-F0h]
  struct VIDSCH_SUBMIT_DATA_BASE *v158; // [rsp+38h] [rbp-E8h]
  struct _VIDMM_DMA_BUFFER *v159; // [rsp+A0h] [rbp-80h] BYREF
  unsigned __int8 v160; // [rsp+A8h] [rbp-78h]
  unsigned int AllocationCount; // [rsp+ACh] [rbp-74h]
  int v162; // [rsp+B0h] [rbp-70h]
  struct _SLIST_ENTRY *v163; // [rsp+B8h] [rbp-68h] BYREF
  UINT v164; // [rsp+C0h] [rbp-60h] BYREF
  int v165; // [rsp+C4h] [rbp-5Ch]
  struct _D3DKMT_RENDER *v166; // [rsp+C8h] [rbp-58h]
  struct _VIDMM_DMA_BUFFER *v167; // [rsp+D0h] [rbp-50h]
  struct DXGPROCESS *v168; // [rsp+D8h] [rbp-48h] BYREF
  __int64 v169; // [rsp+E0h] [rbp-40h]
  void *v170; // [rsp+E8h] [rbp-38h] BYREF
  __int64 v171; // [rsp+F0h] [rbp-30h] BYREF
  struct COREDEVICEACCESS *v172; // [rsp+F8h] [rbp-28h]
  LARGE_INTEGER v173; // [rsp+100h] [rbp-20h] BYREF
  __int64 CurrentIrql; // [rsp+108h] [rbp-18h]
  __int64 v175; // [rsp+110h] [rbp-10h]
  struct DXGCONTEXT **v176; // [rsp+118h] [rbp-8h]
  struct _DXGKARG_RENDER Src; // [rsp+120h] [rbp+0h] BYREF
  char *v178; // [rsp+190h] [rbp+70h] BYREF
  UINT CommandLength; // [rsp+198h] [rbp+78h]
  void *pDmaBuffer; // [rsp+1A0h] [rbp+80h]
  __int64 v181; // [rsp+1A8h] [rbp+88h]
  __int64 DmaSize; // [rsp+1B0h] [rbp+90h]
  void *v183; // [rsp+1B8h] [rbp+98h]
  __int64 v184; // [rsp+1C0h] [rbp+A0h]
  DXGK_ALLOCATIONLIST *pAllocationList; // [rsp+1C8h] [rbp+A8h]
  UINT AllocationListSize; // [rsp+1D0h] [rbp+B0h]
  UINT MultipassOffset; // [rsp+1D4h] [rbp+B4h]
  struct DXGALLOCATION **v188; // [rsp+1E0h] [rbp+C0h]
  PSLIST_HEADER SListHead; // [rsp+1E8h] [rbp+C8h]
  struct DXGADAPTERSTOPRESETLOCKSHARED *v190; // [rsp+1F0h] [rbp+D0h]
  __int64 v191; // [rsp+1F8h] [rbp+D8h]
  __int64 v192; // [rsp+200h] [rbp+E0h]
  __int64 v193; // [rsp+208h] [rbp+E8h]
  __int64 v194; // [rsp+210h] [rbp+F0h]
  struct _SLIST_ENTRY *v195[3]; // [rsp+218h] [rbp+F8h] BYREF
  struct _D3DKMT_PRESENTHISTORYTOKEN v196; // [rsp+230h] [rbp+110h] BYREF
  char v197[8]; // [rsp+670h] [rbp+550h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+678h] [rbp+558h] BYREF

  v7 = a3;
  BroadcastContextCount = a2->BroadcastContextCount;
  v9 = a2;
  v176 = a5;
  v10 = BroadcastContextCount + 1;
  v188 = a6;
  Flags = a2->Flags;
  v190 = a4;
  v12 = (*(_BYTE *)&Flags & 8) << 12;
  v172 = a3;
  v166 = a2;
  v160 = 1;
  v165 = v12 | 0x100;
  LODWORD(v163) = v12 | 0x100;
  v162 = v10;
  if ( (*(_BYTE *)&Flags & 0x10) != 0 )
  {
    v165 = v12 | 0x1A0;
    LODWORD(v163) = v12 | 0x1A0;
    v13 = DXGCONTEXT::WaitForQueuedPresentLimit(this, 0, 1u, a3);
    v14 = v13;
    if ( v13 < 0 )
    {
      v15 = WdLogNewEntry5_WdEvent();
      *(_QWORD *)(v15 + 24) = this;
      *(_QWORD *)(v15 + 32) = v14;
      WdLogEvent5_WdEvent(v15);
      return (unsigned int)v14;
    }
    v10 = v162;
  }
  if ( (*(_DWORD *)&v9->Flags & 0x20) != 0 )
    pNewCommandBuffer = (char *)v9->pNewCommandBuffer;
  else
    pNewCommandBuffer = (char *)*((_QWORD *)this + 7);
  Src.pCommand = &pNewCommandBuffer[v9->CommandOffset];
  Src.CommandLength = v9->CommandLength;
  memset(&Src.pDmaBuffer, 0, 0x60uLL);
  v19 = v10;
  v20 = v163;
  v175 = v19;
  while ( 1 )
  {
    v21 = *((_BYTE *)this + 401) == 0;
    v159 = 0LL;
    if ( !v21 )
    {
      v22 = 0LL;
      v159 = 0LL;
      goto LABEL_33;
    }
    ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(*((_QWORD *)this + 2) + 104LL));
    v24 = 3;
    if ( *((_DWORD *)this + 18) > 3u )
      v24 = *((_DWORD *)this + 18);
    if ( !*((_QWORD *)this + 28) )
    {
      v25 = *((_DWORD *)this + 26);
      LODWORD(v158) = v25;
      LODWORD(v157) = v24;
      LOBYTE(v156) = 1;
      v26 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, DXGCONTEXT *, int, _DWORD, struct DXGK_PRESENT_PARAMS *, struct VIDSCH_SUBMIT_DATA_BASE *, _DWORD, _DWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 528LL) + 8LL) + 432LL))(
              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 536LL),
              *((unsigned int *)this + 90),
              *(_QWORD *)(*((_QWORD *)this + 2) + 592LL),
              this,
              v156,
              *((_DWORD *)this + 48),
              v157,
              v158,
              *((_DWORD *)this + 49),
              *((_DWORD *)this + 50));
      *((_QWORD *)this + 28) = v26;
      if ( !v26 )
      {
        v29 = WdLogNewEntry5_WdWarning(0LL, v27, v28);
        *(_QWORD *)(v29 + 24) = this;
        *(_QWORD *)(v29 + 32) = -1073741801LL;
        WdLogEvent5_WdWarning(v29);
        LODWORD(v32) = -1073741801;
LABEL_20:
        v33 = WdLogNewEntry5_WdWarning(v30, v23, v31);
        *(_QWORD *)(v33 + 24) = this;
        WdLogEvent5_WdWarning(v33);
        goto LABEL_31;
      }
      LODWORD(v32) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                            + 16LL)
                                                                                + 528LL)
                                                                    + 8LL)
                                                        + 440LL))(v26);
      if ( (int)v32 < 0 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 528LL) + 8LL)
                                       + 448LL))(*((_QWORD *)this + 28));
        *((_QWORD *)this + 28) = 0LL;
      }
      else
      {
        *((_DWORD *)this + 51) = v24;
        *((_DWORD *)this + 52) = v25;
      }
      if ( (int)v32 < 0 )
        goto LABEL_20;
      v7 = v172;
    }
    v34 = *((_QWORD *)this + 28);
    LOBYTE(v23) = 1;
    v35 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, struct _VIDMM_DMA_BUFFER **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 528LL) + 8LL)
                                                                                           + 488LL))(
            v34,
            v23,
            0LL,
            &v159);
    v36 = v35;
    if ( v35 != -1071775486 )
    {
      if ( v35 < 0 )
      {
        v39 = WdLogNewEntry5_WdEvent();
        *(_QWORD *)(v39 + 24) = this;
        *(_QWORD *)(v39 + 32) = v36;
        WdLogEvent5_WdEvent(v39);
      }
LABEL_30:
      LODWORD(v32) = v36;
      goto LABEL_31;
    }
    if ( !v7 )
      goto LABEL_30;
    if ( *((_BYTE *)v7 + 80) )
      COREACCESS::Release((struct COREDEVICEACCESS *)((char *)v7 + 40));
    COREACCESS::Release((struct COREDEVICEACCESS *)((char *)v7 + 8));
    LODWORD(v36) = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, struct _VIDMM_DMA_BUFFER **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 528LL) + 8LL) + 488LL))(
                     v34,
                     0LL,
                     0LL,
                     &v159);
    v37 = COREDEVICEACCESS::AcquireShared(v7);
    v32 = v37;
    if ( v37 >= 0 )
      goto LABEL_30;
    v38 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v38 + 24) = this;
    *(_QWORD *)(v38 + 32) = v32;
    WdLogEvent5_WdEvent(v38);
    COREDEVICEACCESS::AcquireSharedUncheck(v7);
LABEL_31:
    if ( (int)v32 < 0 )
    {
      v155 = WdLogNewEntry5_WdEvent();
      *(_QWORD *)(v155 + 32) = (int)v32;
      *(_QWORD *)(v155 + 24) = this;
      WdLogEvent5_WdEvent(v155);
      return (unsigned int)v32;
    }
    v22 = v159;
LABEL_33:
    if ( !bTracingEnabled )
      goto LABEL_43;
    v40 = v9->Flags;
    if ( (*(_BYTE *)&v40 & 0x10) != 0 )
    {
      v193 = 0LL;
      v194 = 0LL;
      v191 = 0LL;
      v192 = 0LL;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
      {
        HIDWORD(v158) = 0;
        HIDWORD(v157) = 0;
        McTemplateK0ppxppttqddddddddq(0LL, 0LL, v18, 0LL, v22);
      }
    }
    else
    {
      if ( (*(_BYTE *)&v40 & 0x20) != 0 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
          goto LABEL_43;
        v41 = (const EVENT_DESCRIPTOR *)&EventRenderKm;
      }
      else
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
          goto LABEL_43;
        v41 = (const EVENT_DESCRIPTOR *)&EventRender;
      }
      McTemplateK0p(&DxgkControlGuid_Context, v41, v18, v22);
    }
LABEL_43:
    v164 = 0;
    v173.QuadPart = 0LL;
    v42 = *((_QWORD *)this + 2);
    v171 = 0LL;
    v163 = 0LL;
    v43 = *(_QWORD *)(v42 + 16);
    v195[1] = (struct _SLIST_ENTRY *)v43;
    ++*(_DWORD *)(v43 + 1124);
    SListHead = (PSLIST_HEADER)(v43 + 1104);
    v45 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v43 + 1104));
    if ( !v45 )
    {
      ++*(_DWORD *)(v43 + 1128);
      v45 = (PSLIST_ENTRY)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v43 + 1152))(
                            *(unsigned int *)(v43 + 1140),
                            *(unsigned int *)(v43 + 1148),
                            *(unsigned int *)(v43 + 1144),
                            v43 + 1104);
    }
    v195[0] = v45;
    if ( !v45 )
    {
      v154 = WdLogNewEntry5_WdLowResource(v44);
      *(_QWORD *)(v154 + 24) = 561LL;
      WdLogEvent5_WdLowResource(v154);
      CVidSchSubmitData::~CVidSchSubmitData(v195);
      return 3221225495LL;
    }
    v46 = *(_QWORD *)(v43 + 16);
    v47 = *(_DWORD *)(v46 + 1968);
    if ( v47 < 0x2000 )
      v48 = 1;
    else
      v48 = *(_DWORD *)(v46 + 248);
    if ( v47 >= 0x2000 || *(_BYTE *)(v46 + 2252) )
      v49 = *(_DWORD *)(v46 + 2176) * (48 * v48 + ((8 * v48 + 175) & 0xFFFFFFF8)) + 8 * (v48 + 57);
    else
      v49 = 1152;
    memset(v45, 0, v49);
    v50 = *(_QWORD *)(v43 + 16);
    v51 = *(unsigned int *)(v50 + 1968);
    if ( (int)v51 < 0x2000 )
      v52 = 1;
    else
      v52 = *(_DWORD *)(v50 + 248);
    LOBYTE(v51) = (int)v51 >= 0x2000 || *(_BYTE *)(v50 + 2252);
    v53 = *(unsigned int *)(v50 + 2176);
    *((_BYTE *)&v45[21].Next + 12) = v51;
    if ( (_BYTE)v51 )
    {
      LODWORD(v45[28].Next) = v52;
      v51 = (unsigned int)(8 * v52);
      *((_DWORD *)&v45[27].Next + 3) = v53;
      HIDWORD(v45[28].Next) = v53 * (48 * v52 + ((v51 + 175) & 0xFFFFFFF8)) + 16;
      v54 = v53 * (48 * v52 + ((v51 + 175) & 0xFFFFFFF8)) + 456;
      *((_DWORD *)&v45[26].Next + 2) = v54;
      *((_DWORD *)&v45[26].Next + 3) = v51 + v54;
    }
    if ( (*((_DWORD *)this + 54) & 1) == 0
      || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 2248LL) & 2) == 0
      || (*(_DWORD *)&v9->Flags & 0x20) != 0 )
    {
      v55 = &v171;
      if ( !*((_BYTE *)this + 398) )
        v55 = 0LL;
      if ( (*(_DWORD *)&v9->Flags & 0x20) != 0 )
        pNewAllocationList = v9->pNewAllocationList;
      else
        pNewAllocationList = (D3DDDI_ALLOCATIONLIST *)*((_QWORD *)this + 11);
      v57 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      v58 = *(_QWORD *)(v57 + 528);
      AllocationCount = v166->AllocationCount;
      v167 = v159;
      Current = DXGPROCESS::GetCurrent(v57, v51);
      v168 = Current;
      if ( Current )
      {
        v60 = (char *)Current + 136;
        if ( *((struct _KTHREAD **)Current + 18) == KeGetCurrentThread() )
        {
          v168 = 0LL;
        }
        else
        {
          KeEnterCriticalRegion();
          if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v60, 0LL) )
          {
            if ( bTracingEnabled )
            {
              v63 = *((_DWORD *)v60 + 4);
              if ( v63 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                McTemplateK0q(v61, &EventBlockThread, v62, v63);
            }
            ExAcquirePushLockExclusiveEx(v60, 0LL);
          }
          *((_QWORD *)v60 + 1) = KeGetCurrentThread();
        }
      }
      v64 = (*(int (__fastcall **)(struct _VIDMM_DMA_BUFFER *, D3DDDI_ALLOCATIONLIST *, _QWORD, _QWORD, int, UINT *, LARGE_INTEGER *, __int64 *, struct DXGPROCESS **, struct _SLIST_ENTRY **, PSLIST_ENTRY, struct DXGALLOCATION **))(*(_QWORD *)(v58 + 8) + 568LL))(
              v167,
              pNewAllocationList,
              AllocationCount,
              v160,
              v162,
              &v164,
              &v173,
              v55,
              &v168,
              &v163,
              v45 + 12,
              v188);
      if ( v168 )
      {
        v65 = (char *)v168 + 136;
        *((_QWORD *)v168 + 18) = 0LL;
        ExReleasePushLockExclusiveEx(v65, 0LL);
        KeLeaveCriticalRegion();
      }
      if ( (int)v64 < 0 )
      {
        (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                           + 528LL)
                                                                               + 8LL)
                                                                   + 496LL))(
          v159,
          0LL);
        v159 = 0LL;
        v153 = WdLogNewEntry5_WdWarning(v151, v150, v152);
        *(_QWORD *)(v153 + 24) = this;
        *(_QWORD *)(v153 + 32) = v64;
        WdLogEvent5_WdWarning(v153);
        CVidSchSubmitData::~CVidSchSubmitData(v195);
        return (unsigned int)v64;
      }
      v9 = v166;
    }
    v66 = *((_QWORD *)this + 2);
    v170 = 0LL;
    (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, void **, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v66 + 16)
                                                                                                 + 528LL)
                                                                                     + 8LL)
                                                                         + 504LL))(
      v159,
      &v170,
      v53);
    Src.pDmaBuffer = v170;
    Src.DmaSize = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                                + 528LL)
                                                                                    + 8LL)
                                                                        + 528LL))(v159);
    if ( !DXGCONTEXT::DisableDdiRenderAllocationList(this) || (*(_DWORD *)&v9->Flags & 0x20) != 0 )
    {
      Src.pAllocationList = (DXGK_ALLOCATIONLIST *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 528LL) + 8LL) + 552LL))(v159);
      Src.AllocationListSize = v9->AllocationCount;
      Src.pPatchLocationListIn = (D3DDDI_PATCHLOCATIONLIST *)*((_QWORD *)this + 15);
      Src.PatchLocationListInSize = v9->PatchLocationCount;
      Src.pPatchLocationListOut = (D3DDDI_PATCHLOCATIONLIST *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 528LL) + 8LL) + 544LL))(v159);
      Src.PatchLocationListOutSize = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 528LL) + 8LL)
                                                                                           + 536LL))(v159);
      v67 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      v68 = *(struct DXGADAPTER **)(v67 + 16);
      Global = DXGGLOBAL::GetGlobal(v67);
      if ( DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext((struct DXGGLOBAL *)((char *)Global + 1108), v68) )
      {
        memmove(*((void **)this + 8), Src.pCommand, *((_QWORD *)this + 6));
        v70 = *((_QWORD *)this + 14);
        v71 = (void *)*((_QWORD *)this + 16);
        Src.pCommand = (const void *)*((_QWORD *)this + 8);
        memmove(v71, Src.pPatchLocationListIn, v70);
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
    v72 = (void *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                                + 528LL)
                                                                                    + 8LL)
                                                                        + 560LL))(v159);
    v73 = *((unsigned int *)this + 50);
    Src.DmaBufferSegmentId = v164;
    Src.DmaBufferPhysicalAddress = v173;
    v74 = (unsigned int)v9->Flags;
    Src.pDmaBufferPrivateData = v72;
    Src.DmaBufferPrivateDataSize = v73;
    if ( (v74 & 0x20) == 0 )
    {
      if ( (*((_DWORD *)this + 54) & 1) != 0
        && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 2248LL) & 4) != 0 )
      {
        LODWORD(v75) = 0;
        goto LABEL_148;
      }
      v76 = ADAPTER_RENDER::DdiRender(*(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL), *((void **)this + 23), &Src);
LABEL_147:
      LODWORD(v75) = v76;
      goto LABEL_148;
    }
    if ( !*((_BYTE *)this + 398) )
    {
      v76 = ADAPTER_RENDER::DdiRenderKm(*(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL), *((void **)this + 23), &Src);
      goto LABEL_147;
    }
    v178 = (char *)v9->pNewCommandBuffer + v9->CommandOffset;
    CommandLength = v9->CommandLength;
    v184 = 0LL;
    pDmaBuffer = Src.pDmaBuffer;
    v181 = v171;
    DmaSize = Src.DmaSize;
    pAllocationList = Src.pAllocationList;
    AllocationListSize = Src.AllocationListSize;
    MultipassOffset = Src.MultipassOffset;
    v167 = (struct _VIDMM_DMA_BUFFER *)*((_QWORD *)this + 23);
    v77 = *((_QWORD *)this + 2);
    v183 = v72;
    LODWORD(v184) = v73;
    v78 = *(_QWORD *)(v77 + 16);
    v169 = v78;
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v74, &EventProfilerEnter, v73, 5066);
    CurrentProcess = PsGetCurrentProcess(v74, v72);
    ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v80);
    v82 = ProcessDxgProcess;
    if ( ProcessDxgProcess )
    {
      if ( (*(_BYTE *)(ProcessDxgProcess + 307) & 4) != 0 )
      {
        ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
        v84 = ThreadProperty;
        if ( ThreadProperty )
        {
          ObfDereferenceObject(ThreadProperty);
          v82 = *v84;
        }
      }
    }
    v85 = v82 + 112;
    if ( !v82 )
      v85 = 0LL;
    AllocationCount = 0;
    if ( v85 && *(struct _KTHREAD **)(v85 + 8) == KeGetCurrentThread() )
    {
      v86 = WdLogNewEntry5_WdAssertion(0LL);
      *(_QWORD *)(v86 + 24) = 1214LL;
      WdLogEvent5_WdAssertion(v86);
    }
    if ( v82 )
    {
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v85, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v89 = *(_DWORD *)(v85 + 16);
          if ( v89 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q(v87, &EventBlockThread, v88, v89);
        }
        ExAcquirePushLockExclusiveEx(v85, 0LL);
      }
      *(_QWORD *)(v85 + 8) = KeGetCurrentThread();
      AllocationCount = 2;
    }
    DXGADAPTER::AcquireDdiSync(*(_QWORD *)(v78 + 16), 1);
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v78 + 16) + 3924LL));
    v91 = 0;
    CurrentIrql = KeGetCurrentIrql();
    v92 = 0LL;
    if ( (unsigned __int8)CurrentIrql < 2u )
    {
      CurrentThread = KeGetCurrentThread();
      if ( !CurrentThread )
      {
        v94 = WdLogNewEntry5_WdAssertion(v90);
        *(_QWORD *)(v94 + 24) = 94LL;
        WdLogEvent5_WdAssertion(v94);
      }
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v90);
      if ( CurrentProcessSessionId
        && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId
        && !IsThreadCrossSessionAttached()
        && (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) != 0
        && *(_QWORD *)ThreadWin32Thread )
      {
        v92 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
        if ( v92 )
          v91 = *(_DWORD *)(v92 + 136);
      }
      else
      {
        v92 = 0LL;
      }
    }
    v97 = v169;
    DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
      (DXGVALIDATIONPROCESSATTACH *)v197,
      *(struct DXGADAPTER **)(v169 + 16));
    v75 = (*(int (__fastcall **)(struct _VIDMM_DMA_BUFFER *, char **))(*(_QWORD *)(v97 + 16) + 800LL))(v167, &v178);
    if ( v197[0] )
      KeUnstackDetachProcess(&ApcState);
    if ( (_BYTE)CurrentIrql != KeGetCurrentIrql() )
    {
      v101 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v99, v98, v100);
      v101[5] = v169;
      v101[6] = (unsigned __int8)CurrentIrql;
      v101[3] = 275LL;
      v101[4] = 16LL;
      v102 = KeGetCurrentIrql();
      v101[7] = v102;
      WdLogEvent5_WdCriticalError(v101);
    }
    if ( v92 && *(_DWORD *)(v92 + 136) != v91 )
    {
      v103 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v99, v98, v100);
      v103[3] = 275LL;
      v103[4] = 25LL;
      v103[5] = *(int *)(v92 + 136);
      v103[6] = v91;
      v103[7] = 0LL;
      WdLogEvent5_WdCriticalError(v103);
    }
    v104 = v169;
    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v169 + 16) + 3924LL));
    v105 = (_QWORD *)WdLogNewEntry5_WdTrace(v99, v98);
    v106 = v167;
    v105[3] = v75;
    v105[4] = v106;
    v105[5] = pDmaBuffer;
    v105[6] = (unsigned int)DmaSize;
    v107 = (__int64)pAllocationList;
    v105[7] = pAllocationList;
    if ( (_DWORD)v75 )
    {
      if ( (unsigned int)(v75 + 1073741816) > 0xF || (v107 = 32801LL, !_bittest((const int *)&v107, v75 + 1073741816)) )
      {
        if ( (_DWORD)v75 != -1073741592 && (_DWORD)v75 != -1071775743 && (_DWORD)v75 != -1071775232 )
        {
          v108 = WdLogNewEntry5_WdError(v107);
          *(_QWORD *)(v108 + 24) = v75;
          WdLogEvent5_WdError(v108);
        }
      }
    }
    DXGADAPTER::ReleaseDdiSync(*(DXGADAPTER **)(v104 + 16));
    if ( AllocationCount == 2 )
    {
      *(_QWORD *)(v85 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v85, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v109, &EventProfilerExit, v110, 5066);
    Src.pDmaBuffer = pDmaBuffer;
    Src.pDmaBufferPrivateData = v183;
    Src.MultipassOffset = MultipassOffset;
LABEL_148:
    (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, void *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                       + 528LL)
                                                                           + 8LL)
                                                               + 512LL))(
      v159,
      v72);
    v113 = 0x80000000LL;
    if ( (int)(v75 + 0x80000000) >= 0 && (_DWORD)v75 != -1071775743 )
    {
      if ( v162 > 0 )
      {
        v138 = (unsigned int)v162;
        do
        {
          VIDMM_EXPORT::VidMmUnreferenceDmaBuffer(
            *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 528LL),
            v159);
          (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                             + 528LL)
                                                                                 + 8LL)
                                                                     + 496LL))(
            v159,
            0LL);
          --v138;
        }
        while ( v138 );
      }
      v159 = 0LL;
      v139 = WdLogNewEntry5_WdWarning(v113, v111, v112);
      *(_QWORD *)(v139 + 32) = (int)v75;
      *(_QWORD *)(v139 + 24) = this;
      WdLogEvent5_WdWarning(v139);
      CVidSchSubmitData::~CVidSchSubmitData(v195);
      return (unsigned int)v75;
    }
    LODWORD(v114) = 0;
    v115 = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                         + 528LL)
                                                                             + 8LL)
                                                                 + 560LL))(v159);
    v116 = LODWORD(Src.pDmaBufferPrivateData) - v115;
    v117 = LODWORD(Src.pDmaBuffer) - (_DWORD)v170;
    if ( DXGCONTEXT::DisableDdiRenderAllocationList(this) )
    {
      v119 = 0LL;
    }
    else
    {
      v118 = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                           + 528LL)
                                                                               + 8LL)
                                                                   + 544LL))(v159);
      v114 = ((__int64)Src.pPatchLocationListOut - v118) / 24;
      v119 = v166->AllocationCount;
      AllocationCount = v166->AllocationCount;
      if ( (qword_1C005F010 & 0x10) != 0 )
      {
        v120 = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                             + 528LL)
                                                                                 + 8LL)
                                                                     + 544LL))(v159);
        TraceDxgkPatchLocationList((__int64)this, (__int64)v159, v114, v120);
        v119 = AllocationCount;
      }
    }
    v45->Next = v20;
    if ( *((_BYTE *)this + 398) )
    {
      LODWORD(v45->Next) |= 0x8000000u;
      *((_QWORD *)&v45[2].Next + 1) = v171;
    }
    v121 = 0LL;
    if ( (v165 & 0x20) != 0 )
    {
      v122 = 0;
      if ( (_DWORD)v75 == -1071775743 )
        v122 = 64;
      v123 = 2048;
      v124 = (__int64)v45->Next & 0xFFFFFBBF | v122 & 0xFFFFFBFF;
      if ( v162 > 1 )
        v123 = 3072;
      LODWORD(v45->Next) = v123 | v124;
      if ( *(_QWORD *)(*((_QWORD *)this + 2) + 1672LL) != *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) )
        HIDWORD(v45[7].Next) = 0;
    }
    v125 = v159;
    *((_DWORD *)&v45[4].Next + 3) = v116;
    *((_DWORD *)&v45[4].Next + 2) = 0;
    *((_QWORD *)&v45->Next + 1) = v125;
    HIDWORD(v45[3].Next) = v117;
    LODWORD(v45[3].Next) = 0;
    *((_DWORD *)&v45[3].Next + 3) = v119;
    *((_DWORD *)&v45[3].Next + 2) = 0;
    HIDWORD(v45[4].Next) = v114;
    LODWORD(v45[4].Next) = 0;
    if ( v163 )
    {
      *((_DWORD *)&v45[21].Next + 2) = 1;
      v45[21].Next = (struct _SLIST_ENTRY *)&v163;
    }
    else
    {
      v45[21].Next = 0LL;
      *((_DWORD *)&v45[21].Next + 2) = 0;
    }
    v126 = 0;
    v127 = 0LL;
    if ( v175 > 0 )
      break;
LABEL_174:
    v136 = SListHead;
    v137 = SListHead;
    v160 = 0;
    ++*((_DWORD *)&SListHead[1].HeaderX64 + 3);
    if ( ExQueryDepthSList(v137) < LOWORD(v136[1].Alignment) )
    {
      ExpInterlockedPushEntrySList(v136, v45);
    }
    else
    {
      ++LODWORD(v136[2].Alignment);
      ((void (__fastcall *)(PSLIST_ENTRY, PSLIST_HEADER))v136[3].Region)(v45, v136);
    }
    if ( (_DWORD)v75 != -1071775743 )
    {
      if ( (*(_DWORD *)&v166->Flags & 0x10) != 0 )
      {
        v196.Token.Flip.FenceValue = v166->PresentHistoryToken;
        v145 = *((_QWORD *)this + 2);
        v196.Model = D3DKMT_PM_REDIRECTED_VISTABLT;
        v146 = SubmitPresentHistoryToken(
                 &v196,
                 v172,
                 v190,
                 0LL,
                 0,
                 0LL,
                 0LL,
                 0LL,
                 this,
                 *(struct DXGADAPTER **)(*(_QWORD *)(v145 + 16) + 16LL),
                 0);
        v75 = v146;
        if ( (int)(v146 + 0x80000000) >= 0 && v146 != -1073741130 )
        {
          v149 = WdLogNewEntry5_WdWarning(0x80000000LL, v147, v148);
          *(_QWORD *)(v149 + 24) = this;
          *(_QWORD *)(v149 + 32) = v75;
          WdLogEvent5_WdWarning(v149);
          LODWORD(v75) = 0;
        }
      }
      return (unsigned int)v75;
    }
    v9 = v166;
    v7 = v172;
  }
  while ( 1 )
  {
    v128 = KeGetCurrentThread();
    v129 = v176;
    if ( *((struct _KTHREAD **)v176[v127] + 52) != v128 )
    {
      v130 = WdLogNewEntry5_WdAssertion(v128);
      *(_QWORD *)(v130 + 24) = 829LL;
      WdLogEvent5_WdAssertion(v130);
    }
    v131 = v129[v127];
    v132 = (*((_DWORD *)v131 + 91) & 0x10) != 0 ? *((_QWORD *)v131 + 33) : *((_QWORD *)v131 + 29);
    v133 = (*(__int64 (__fastcall **)(__int64, PSLIST_ENTRY, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 504LL)
                                                                                          + 8LL)
                                                                              + 344LL))(
             v132,
             v45,
             v119,
             v121);
    v135 = v133;
    if ( v133 < 0 )
      break;
    LODWORD(v45->Next) &= ~0x800u;
    ++v126;
    if ( ++v127 >= v175 )
      goto LABEL_174;
  }
  v140 = v126;
  if ( v126 >= 0 )
  {
    v141 = v176;
    do
    {
      RenderHwQueue = DXGCONTEXT::GetRenderHwQueue(v141[v140]);
      (*(void (__fastcall **)(struct _VIDSCH_CONTEXT *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                       + 504LL)
                                                                           + 8LL)
                                                               + 352LL))(
        RenderHwQueue,
        0LL);
      --v140;
    }
    while ( v140 >= 0 );
  }
  if ( v126 < v162 )
  {
    v143 = (unsigned int)(v162 - v126);
    do
    {
      VIDMM_EXPORT::VidMmUnreferenceDmaBuffer(
        *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 528LL),
        v159);
      (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                         + 528LL)
                                                                             + 8LL)
                                                                 + 496LL))(
        v159,
        0LL);
      --v143;
    }
    while ( v143 );
  }
  v159 = 0LL;
  v144 = WdLogNewEntry5_WdWarning(0LL, v134, v119);
  *(_QWORD *)(v144 + 24) = this;
  *(_QWORD *)(v144 + 32) = v135;
  WdLogEvent5_WdWarning(v144);
  CVidSchSubmitData::~CVidSchSubmitData(v195);
  return (unsigned int)v135;
}
