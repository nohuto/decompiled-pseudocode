/*
 * XREFs of ?SubmitPresentWithDmaBuffer@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAVDXGALLOCATION@@1PEAU_DXGKARG_PRESENT@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00C3AC0
 * Callers:
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00C4D00 (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG.c)
 * Callees:
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0001A40 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0002160 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0002890 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0002900 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?GetRenderHwQueue@DXGCONTEXT@@QEBAPEAU_VIDSCH_CONTEXT@@XZ @ 0x1C0008EC0 (-GetRenderHwQueue@DXGCONTEXT@@QEBAPEAU_VIDSCH_CONTEXT@@XZ.c)
 *     ?VidMmReferencePrimaryAllocationForSubmission@VIDMM_EXPORT@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_ALLOC@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00149A0 (-VidMmReferencePrimaryAllocationForSubmission@VIDMM_EXPORT@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MU.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C001557C (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     TraceDxgkPatchLocationList @ 0x1C0026D2C (TraceDxgkPatchLocationList.c)
 *     ?VidMmUnreferenceDmaBuffer@VIDMM_EXPORT@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z @ 0x1C0029060 (-VidMmUnreferenceDmaBuffer@VIDMM_EXPORT@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z.c)
 *     ?VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@KPEAUVIDMM_ALLOC@@H@Z @ 0x1C00290D0 (-VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@KPEAUVIDMM_ALLOC@@H@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C016F500 (-AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z.c)
 */

__int64 __fastcall DXGCONTEXT::SubmitPresentWithDmaBuffer(
        UINT *this,
        const struct _D3DKMT_PRESENT *a2,
        struct DXGALLOCATION *a3,
        struct DXGALLOCATION *a4,
        struct _DXGKARG_PRESENT *a5,
        struct _VIDMM_DMA_BUFFER *a6,
        struct VIDSCH_SUBMIT_DATA_BASE *a7,
        struct COREDEVICEACCESS *a8)
{
  struct _VIDMM_DMA_BUFFER *v8; // rsi
  struct COREDEVICEACCESS *v10; // rcx
  struct DXGALLOCATION *v11; // r12
  struct _DXGK_PRESENTFLAGS::$39B5E91464CC7478F36F75826127ACBA::$425066DE2CBEB6B5ED4C7449D399EBDF Value; // eax
  __int64 v13; // rax
  __int64 v15; // rcx
  __int64 v16; // r13
  __int64 v17; // rax
  int v18; // eax
  int v19; // eax
  __int64 v20; // rax
  unsigned __int8 IsDxgmms2; // al
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r13
  char *v25; // r15
  D3DGPU_VIRTUAL_ADDRESS *v26; // r12
  struct DXGPROCESS *Current; // rax
  char *v28; // rbx
  __int64 v29; // rcx
  __int64 v30; // r8
  int v31; // r9d
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  char *v35; // rcx
  char v36; // r12
  struct _DXGKARG_PRESENT *v37; // rsi
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // r8
  struct DXGALLOCATION *v41; // r15
  __int64 v42; // rbx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // r13
  __int64 CurrentProcess; // rax
  __int64 v48; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v50; // rcx
  __int64 v51; // rbx
  __int64 *ThreadProperty; // rax
  __int64 *v53; // rsi
  __int64 v54; // r15
  __int64 v55; // rax
  __int64 v56; // rcx
  __int64 v57; // r8
  int v58; // r9d
  __int64 v59; // rcx
  unsigned __int8 CurrentIrql; // r12
  __int64 v61; // rbx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v63; // rax
  int CurrentProcessSessionId; // ebx
  __int64 ThreadWin32Thread; // rax
  int v66; // esi
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  _QWORD *v70; // rax
  unsigned __int8 v71; // cl
  _QWORD *v72; // rax
  __int64 v73; // rsi
  _QWORD *v74; // rax
  struct _DXGKARG_PRESENT *v75; // r12
  __int64 v76; // rcx
  __int64 DmaSize; // rcx
  __int64 v78; // rax
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // rbx
  _QWORD *v83; // rax
  __int64 v84; // rcx
  __int64 v85; // rax
  struct _VIDSCH_CONTEXT *RenderHwQueue; // rax
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // rax
  __int64 v90; // rax
  __int64 v91; // rcx
  __int64 v92; // rcx
  __int64 v93; // rax
  __int64 v94; // rcx
  int v95; // eax
  char *v96; // rcx
  __int64 v97; // rax
  unsigned int v98; // esi
  int v99; // r15d
  __int64 v100; // rcx
  __int64 v101; // r8
  __int64 v102; // rax
  __int64 v103; // rcx
  __int64 v104; // rax
  __int64 v105; // rbx
  __int64 v106; // rcx
  __int64 v107; // rax
  __int64 v108; // rax
  __int64 v109; // rax
  __int64 v110; // rax
  int v111; // eax
  bool v112; // zf
  char *v113; // rcx
  __int64 v114; // rsi
  unsigned int *v115; // rsi
  struct VIDMM_ALLOC **v116; // r15
  __int64 v117; // rax
  __int64 v118; // rax
  __int64 v119; // rcx
  __int64 v120; // rax
  char *v121; // r9
  __int64 v122; // rax
  int v123; // ecx
  char *v124; // r8
  __int64 v125; // rax
  __int64 v126; // rax
  struct _VIDSCH_CONTEXT *v127; // rax
  __int64 v128; // rdx
  int v129; // ebx
  __int64 v130; // rax
  _QWORD *v131; // rax
  struct _VIDSCH_CONTEXT *v132; // rax
  __int64 v133; // rdx
  __int64 v134; // rax
  __int64 v135; // rax
  struct _VIDMM_DMA_BUFFER *v136; // r8
  unsigned int v137; // ebx
  char *v138; // rsi
  struct VIDMM_ALLOC *v139; // r9
  char v140; // [rsp+70h] [rbp-90h]
  struct _VIDMM_DMA_BUFFER *v141; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int8 v142; // [rsp+80h] [rbp-80h]
  int v143; // [rsp+84h] [rbp-7Ch]
  int v144; // [rsp+88h] [rbp-78h] BYREF
  char *v145; // [rsp+90h] [rbp-70h] BYREF
  struct DXGALLOCATION *v146; // [rsp+98h] [rbp-68h]
  struct DXGALLOCATION *v147; // [rsp+A0h] [rbp-60h]
  UINT v148; // [rsp+A8h] [rbp-58h] BYREF
  __int16 v149; // [rsp+ACh] [rbp-54h] BYREF
  struct DXGPROCESS *v150; // [rsp+B0h] [rbp-50h] BYREF
  struct _DXGKARG_PRESENT *v151; // [rsp+B8h] [rbp-48h]
  D3DGPU_VIRTUAL_ADDRESS v152; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v153; // [rsp+C8h] [rbp-38h]
  __int64 v154; // [rsp+D0h] [rbp-30h]
  LARGE_INTEGER v155; // [rsp+D8h] [rbp-28h] BYREF
  struct COREDEVICEACCESS *v156; // [rsp+E0h] [rbp-20h]
  char v157[8]; // [rsp+E8h] [rbp-18h] BYREF
  char v158[8]; // [rsp+F0h] [rbp-10h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+F8h] [rbp-8h] BYREF
  int v160; // [rsp+128h] [rbp+28h] BYREF
  int v161; // [rsp+12Ch] [rbp+2Ch]
  int v162; // [rsp+130h] [rbp+30h]
  int v163; // [rsp+134h] [rbp+34h]
  int v164; // [rsp+138h] [rbp+38h]
  __int64 v165; // [rsp+13Ch] [rbp+3Ch] BYREF
  int v166; // [rsp+144h] [rbp+44h]
  struct DXGALLOCATION *v167; // [rsp+148h] [rbp+48h]
  struct DXGALLOCATION *v168; // [rsp+150h] [rbp+50h]
  _QWORD v169[12]; // [rsp+160h] [rbp+60h] BYREF

  v8 = a6;
  v10 = a8;
  v11 = a3;
  Value = (struct _DXGK_PRESENTFLAGS::$39B5E91464CC7478F36F75826127ACBA::$425066DE2CBEB6B5ED4C7449D399EBDF)a5->Flags.Value;
  v147 = a4;
  v146 = a3;
  v151 = a5;
  v141 = a6;
  v156 = a8;
  v142 = 1;
  v140 = 0;
  a5->MultipassOffset = 0;
  if ( (*(_BYTE *)&Value & 4) != 0 && !a3 )
  {
    v13 = WdLogNewEntry5_WdError(a8);
    *(_QWORD *)(v13 + 24) = 7844LL;
    WdLogEvent5_WdError(v13);
    return 3221225473LL;
  }
  while ( 1 )
  {
    v145 = 0LL;
    if ( !v8 )
    {
      LODWORD(v16) = DXGCONTEXT::AcquireDmaBuffer((DXGCONTEXT *)this, &v141, v10, 0);
      if ( (int)v16 < 0 )
      {
        v130 = WdLogNewEntry5_WdError(v15);
        *(_QWORD *)(v130 + 24) = this;
        WdLogEvent5_WdError(v130);
        goto LABEL_185;
      }
      v8 = v141;
      if ( !v141 )
      {
        v17 = WdLogNewEntry5_WdAssertion(v15);
        *(_QWORD *)(v17 + 24) = 7871LL;
        WdLogEvent5_WdAssertion(v17);
        v8 = v141;
      }
      a4 = v147;
    }
    v161 &= 2u;
    v160 = 0;
    if ( v11 )
      v18 = *((_DWORD *)v11 + 4);
    else
      v18 = 0;
    v163 &= 2u;
    v162 = v18;
    if ( a4 )
      v19 = *((_DWORD *)a4 + 4);
    else
      v19 = 0;
    v164 = v19;
    v166 = 0;
    v167 = v11;
    v165 = v165 & 2 | 1;
    v20 = *((_QWORD *)this + 2);
    v168 = a4;
    v152 = 0LL;
    IsDxgmms2 = DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(v20 + 16) + 16LL));
    v24 = *(_QWORD *)(v22 + 528);
    v25 = (char *)&v165 + 4;
    v26 = &v152;
    if ( !IsDxgmms2 )
      v25 = 0LL;
    if ( !*((_BYTE *)this + 398) )
      v26 = 0LL;
    Current = DXGPROCESS::GetCurrent(v23, v22);
    v150 = Current;
    if ( Current )
    {
      v28 = (char *)Current + 136;
      if ( *((struct _KTHREAD **)Current + 18) == KeGetCurrentThread() )
      {
        v150 = 0LL;
      }
      else
      {
        KeEnterCriticalRegion();
        if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v28, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v31 = *((_DWORD *)v28 + 4);
            if ( v31 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0q(v29, &EventBlockThread, v30, v31);
          }
          ExAcquirePushLockExclusiveEx(v28, 0LL);
        }
        *((_QWORD *)v28 + 1) = KeGetCurrentThread();
      }
    }
    v16 = (*(int (__fastcall **)(struct _VIDMM_DMA_BUFFER *, int *, __int64, _QWORD, int, UINT *, LARGE_INTEGER *, D3DGPU_VIRTUAL_ADDRESS *, struct DXGPROCESS **, char *, char *, char *))(*(_QWORD *)(v24 + 8) + 568LL))(
            v8,
            &v160,
            3LL,
            v142,
            1,
            &v148,
            &v155,
            v26,
            &v150,
            v157,
            (char *)a7 + 192,
            v25);
    if ( v150 )
    {
      v35 = (char *)v150 + 136;
      *((_QWORD *)v150 + 18) = 0LL;
      ExReleasePushLockExclusiveEx(v35, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( (int)v16 < 0 )
    {
      v135 = WdLogNewEntry5_WdWarning(v33, v32, v34);
      *(_QWORD *)(v135 + 24) = this;
      *(_QWORD *)(v135 + 32) = v16;
      WdLogEvent5_WdWarning(v135);
      goto LABEL_185;
    }
    v36 = 1;
    v140 = 1;
    (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, char **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                        + 528LL)
                                                                            + 8LL)
                                                                + 504LL))(
      v141,
      &v145);
    v37 = v151;
    v151->pDmaBuffer = v145;
    v37->DmaSize = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                                 + 528LL)
                                                                                     + 8LL)
                                                                         + 528LL))(v141);
    v37->pDmaBufferPrivateData = (void *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 528LL) + 8LL)
                                                                                               + 560LL))(v141);
    v37->DmaBufferPrivateDataSize = this[50];
    v37->DmaBufferSegmentId = v148;
    v37->DmaBufferPhysicalAddress = v155;
    *(_DWORD *)a7 &= ~0x8000000u;
    if ( *((_BYTE *)this + 398) )
    {
      *(_DWORD *)a7 |= 0x8000000u;
      memset(v169, 0, sizeof(v169));
      v38 = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                          + 528LL)
                                                                              + 8LL)
                                                                  + 552LL))(v141);
      v41 = v146;
      v42 = v38;
      v43 = *(_QWORD *)(v38 + 24);
      v169[4] = v43;
      if ( v146 )
        v169[5] = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 528LL)
                                                                                        + 8LL)
                                                                            + 248LL))(
                    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 536LL),
                    *((_QWORD *)v146 + 3),
                    *((unsigned __int8 *)this + 399),
                    this[90]);
      if ( (v37->Flags.Value & 4) != 0 )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD, __int16 *, _QWORD *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                            + 528LL)
                                                                                + 8LL)
                                                                    + 216LL))(
          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 536LL),
          *(_QWORD *)(*((_QWORD *)v41 + 6) + 8LL),
          &v149,
          &v169[6]);
        LOWORD(v169[7]) = v149;
      }
      else if ( v147 )
      {
        v44 = *((unsigned __int8 *)this + 399);
        v45 = this[90];
        v169[8] = *(_QWORD *)(v42 + 48);
        v169[9] = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 528LL)
                                                                                          + 8LL)
                                                                              + 248LL))(
                    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 536LL),
                    *((_QWORD *)v147 + 3),
                    v44,
                    v45);
        if ( !v169[9] )
        {
          v131 = (_QWORD *)WdLogNewEntry5_WdError(v43);
          LODWORD(v16) = -1073741811;
          v131[3] = this;
          v131[4] = -1073741811LL;
          v131[5] = 8012LL;
          WdLogEvent5_WdError(v131);
          goto LABEL_186;
        }
      }
      v37->DmaBufferGpuVirtualAddress = v152;
      v37->pAllocationList = (DXGK_ALLOCATIONLIST *)v169;
      v37->pPatchLocationListOut = 0LL;
      v37->PatchLocationListOutSize = 0;
    }
    else
    {
      v37->pAllocationList = (DXGK_ALLOCATIONLIST *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 528LL) + 8LL) + 552LL))(v141);
      v37->pPatchLocationListOut = (D3DDDI_PATCHLOCATIONLIST *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 528LL) + 8LL) + 544LL))(v141);
      v37->PatchLocationListOutSize = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 528LL) + 8LL)
                                                                                            + 536LL))(v141);
    }
    v154 = *((_QWORD *)this + 23);
    v46 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    v153 = v46;
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v43, &EventProfilerEnter, v40, 5031);
    CurrentProcess = PsGetCurrentProcess(v43, v39);
    ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v48);
    v51 = ProcessDxgProcess;
    if ( ProcessDxgProcess )
    {
      if ( (*(_BYTE *)(ProcessDxgProcess + 307) & 4) != 0 )
      {
        ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
        v53 = ThreadProperty;
        if ( ThreadProperty )
        {
          ObfDereferenceObject(ThreadProperty);
          v51 = *v53;
        }
      }
    }
    v143 = 0;
    v54 = v51 + 112;
    if ( !v51 )
      v54 = 0LL;
    if ( v54 && *(struct _KTHREAD **)(v54 + 8) == KeGetCurrentThread() )
    {
      v55 = WdLogNewEntry5_WdAssertion(v50);
      *(_QWORD *)(v55 + 24) = 1214LL;
      WdLogEvent5_WdAssertion(v55);
    }
    if ( v51 )
    {
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v54, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v58 = *(_DWORD *)(v54 + 16);
          if ( v58 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q(v56, &EventBlockThread, v57, v58);
        }
        ExAcquirePushLockExclusiveEx(v54, 0LL);
      }
      *(_QWORD *)(v54 + 8) = KeGetCurrentThread();
      v143 = 2;
    }
    DXGADAPTER::AcquireDdiSync(*(_QWORD *)(v46 + 16), 1);
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v46 + 16) + 3924LL));
    CurrentIrql = KeGetCurrentIrql();
    v61 = 0LL;
    if ( CurrentIrql < 2u )
    {
      CurrentThread = KeGetCurrentThread();
      if ( !CurrentThread )
      {
        v63 = WdLogNewEntry5_WdAssertion(v59);
        *(_QWORD *)(v63 + 24) = 94LL;
        WdLogEvent5_WdAssertion(v63);
      }
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v59);
      if ( CurrentProcessSessionId
        && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId
        && !IsThreadCrossSessionAttached()
        && (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) != 0
        && *(_QWORD *)ThreadWin32Thread )
      {
        v61 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
        if ( v61 )
        {
          v66 = *(_DWORD *)(v61 + 136);
          goto LABEL_73;
        }
      }
      else
      {
        v61 = 0LL;
      }
    }
    v66 = 0;
LABEL_73:
    DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
      (DXGVALIDATIONPROCESSATTACH *)v158,
      *(struct DXGADAPTER **)(v46 + 16));
    v16 = (*(int (__fastcall **)(__int64, struct _DXGKARG_PRESENT *))(*(_QWORD *)(v46 + 16) + 608LL))(v154, v151);
    if ( v158[0] )
      KeUnstackDetachProcess(&ApcState);
    if ( CurrentIrql != KeGetCurrentIrql() )
    {
      v70 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v68, v67, v69);
      v70[5] = v153;
      v70[6] = CurrentIrql;
      v70[3] = 275LL;
      v70[4] = 16LL;
      v71 = KeGetCurrentIrql();
      v70[7] = v71;
      WdLogEvent5_WdCriticalError(v70);
    }
    if ( v61 && *(_DWORD *)(v61 + 136) != v66 )
    {
      v72 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v68, v67, v69);
      v72[3] = 275LL;
      v72[4] = 25LL;
      v72[5] = *(int *)(v61 + 136);
      v72[6] = v66;
      v72[7] = 0LL;
      WdLogEvent5_WdCriticalError(v72);
    }
    v73 = v153;
    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v153 + 16) + 3924LL));
    v74 = (_QWORD *)WdLogNewEntry5_WdTrace(v68, v67);
    v75 = v151;
    v76 = v154;
    v74[3] = v16;
    v74[4] = v76;
    v74[5] = v75->SubRectCnt;
    v74[6] = v75->pDmaBuffer;
    DmaSize = v75->DmaSize;
    v74[7] = DmaSize;
    if ( (_DWORD)v16 )
    {
      if ( (_DWORD)v16 != -1073741674 )
      {
        if ( (unsigned int)(v16 + 1073741816) > 0x15
          || (DmaSize = 2129921LL, !_bittest((const int *)&DmaSize, v16 + 1073741816)) )
        {
          if ( (_DWORD)v16 != -1073741670
            && (_DWORD)v16 != -1071775743
            && (_DWORD)v16 != -1071775736
            && (_DWORD)v16 != -1071775232 )
          {
            v78 = WdLogNewEntry5_WdError(DmaSize);
            *(_QWORD *)(v78 + 24) = v16;
            WdLogEvent5_WdError(v78);
          }
        }
      }
    }
    DXGADAPTER::ReleaseDdiSync(*(DXGADAPTER **)(v73 + 16));
    LODWORD(v82) = 0;
    if ( v143 == 2 )
    {
      *(_QWORD *)(v54 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v54, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v80, &EventProfilerExit, v81, 5031);
    if ( *((_BYTE *)this + 398) && (v75->pPatchLocationListOut || v75->PatchLocationListOutSize) )
    {
      v83 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v80, v79, v81);
      v83[3] = 275LL;
      v83[4] = 9LL;
      v83[5] = v75;
      v83[6] = 0LL;
      v83[7] = 0LL;
      WdLogEvent5_WdCriticalError(v83);
    }
    (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                               + 528LL)
                                                                   + 8LL)
                                                       + 512LL))(v141);
    if ( (_DWORD)v16 == -1071775743 )
    {
      if ( (v75->Flags.Value & 4) != 0 )
      {
        v85 = WdLogNewEntry5_WdError(v84);
        *(_QWORD *)(v85 + 24) = this;
        WdLogEvent5_WdError(v85);
        LODWORD(v16) = -1073741823;
LABEL_101:
        RenderHwQueue = DXGCONTEXT::GetRenderHwQueue((DXGCONTEXT *)this);
        (*(void (__fastcall **)(struct _VIDSCH_CONTEXT *, _QWORD))(v87 + 352))(RenderHwQueue, 0LL);
        if ( (_DWORD)v16 == -1071775736 )
        {
          v89 = WdLogNewEntry5_WdEvent();
          *(_QWORD *)(v89 + 24) = this;
          *(_QWORD *)(v89 + 32) = -1071775736LL;
          WdLogEvent5_WdEvent(v89);
        }
        else
        {
          v134 = WdLogNewEntry5_WdError(v88);
          *(_QWORD *)(v134 + 32) = (int)v16;
          *(_QWORD *)(v134 + 24) = this;
          WdLogEvent5_WdError(v134);
        }
        goto LABEL_185;
      }
    }
    else if ( (int)v16 < 0 )
    {
      goto LABEL_101;
    }
    if ( *((_BYTE *)this + 398) )
    {
      if ( v75->pAllocationList != (DXGK_ALLOCATIONLIST *)v169 )
      {
        v90 = WdLogNewEntry5_WdAssertion(v84);
        *(_QWORD *)(v90 + 24) = 8111LL;
LABEL_109:
        WdLogEvent5_WdAssertion(v90);
      }
    }
    else if ( v75->pAllocationList != (DXGK_ALLOCATIONLIST *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 528LL) + 8LL) + 552LL))(v141) )
    {
      v90 = WdLogNewEntry5_WdAssertion(v91);
      *(_QWORD *)(v90 + 24) = 8115LL;
      goto LABEL_109;
    }
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                            + 504LL)
                                                                + 8LL)
                                                    + 480LL))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                        + 512LL))
      && v75->pDmaBuffer <= v145 )
    {
      v93 = WdLogNewEntry5_WdAssertion(v92);
      *(_QWORD *)(v93 + 24) = 8129LL;
      WdLogEvent5_WdAssertion(v93);
    }
    v94 = (*(unsigned int (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                             + 528LL)
                                                                                 + 8LL)
                                                                     + 528LL))(v141);
    v95 = (int)v145;
    v96 = &v145[v94];
    if ( v75->pDmaBuffer > v96 )
    {
      v97 = WdLogNewEntry5_WdAssertion(v96);
      *(_QWORD *)(v97 + 24) = 8130LL;
      WdLogEvent5_WdAssertion(v97);
      v95 = (int)v145;
    }
    v98 = LODWORD(v75->pDmaBuffer) - v95;
    v99 = LODWORD(v75->pDmaBufferPrivateData)
        - (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                        + 528LL)
                                                                            + 8LL)
                                                                + 560LL))(v141);
    if ( (*(unsigned int (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                            + 528LL)
                                                                                + 8LL)
                                                                    + 528LL))(v141) < v98 )
    {
      v102 = WdLogNewEntry5_WdAssertion(v100);
      *(_QWORD *)(v102 + 24) = 8137LL;
      WdLogEvent5_WdAssertion(v102);
    }
    if ( !*((_BYTE *)this + 398) )
    {
      if ( v75->pPatchLocationListOut < (D3DDDI_PATCHLOCATIONLIST *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 528LL) + 8LL) + 544LL))(v141) )
      {
        v104 = WdLogNewEntry5_WdAssertion(v103);
        *(_QWORD *)(v104 + 24) = 8149LL;
        WdLogEvent5_WdAssertion(v104);
      }
      v105 = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                           + 528LL)
                                                                               + 8LL)
                                                                   + 544LL))(v141);
      v106 = (*(unsigned int (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                                + 528LL)
                                                                                    + 8LL)
                                                                        + 536LL))(v141);
      if ( v75->pPatchLocationListOut > (D3DDDI_PATCHLOCATIONLIST *)(v105 + 24 * v106) )
      {
        v107 = WdLogNewEntry5_WdAssertion(v106);
        *(_QWORD *)(v107 + 24) = 8150LL;
        WdLogEvent5_WdAssertion(v107);
      }
      v82 = ((__int64)v75->pPatchLocationListOut
           - (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                           + 528LL)
                                                                               + 8LL)
                                                                   + 544LL))(v141))
          / 24;
      if ( (*(unsigned int (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                              + 528LL)
                                                                                  + 8LL)
                                                                      + 536LL))(v141) < (unsigned int)v82 )
      {
        v108 = WdLogNewEntry5_WdAssertion(v100);
        *(_QWORD *)(v108 + 24) = 8160LL;
        WdLogEvent5_WdAssertion(v108);
      }
      if ( (qword_1C005F010 & 0x10) != 0 )
      {
        v109 = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                             + 528LL)
                                                                                 + 8LL)
                                                                     + 544LL))(v141);
        TraceDxgkPatchLocationList((__int64)this, (__int64)v141, v82, v109);
      }
    }
    if ( !v98
      && !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                            + 504LL)
                                                                + 8LL)
                                                    + 480LL))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                        + 512LL)) )
    {
      v110 = WdLogNewEntry5_WdAssertion(v100);
      *(_QWORD *)(v110 + 24) = 8175LL;
      WdLogEvent5_WdAssertion(v110);
    }
    v111 = *(_DWORD *)a7;
    if ( (*(_DWORD *)a7 & 0x20) != 0 && (_DWORD)v16 == -1071775743 )
    {
      v112 = bTracingEnabled == 0;
      *(_DWORD *)a7 = v111 | 0x40;
      if ( !v112 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v100, &EventPerformanceWarning, v101, 1);
    }
    else
    {
      *(_DWORD *)a7 = v111 & 0xFFFFFFBF;
    }
    *((_QWORD *)a7 + 1) = v141;
    *((_DWORD *)a7 + 12) = 0;
    *((_DWORD *)a7 + 14) = 0;
    *((_DWORD *)a7 + 16) = 0;
    *((_DWORD *)a7 + 18) = 0;
    *((_DWORD *)a7 + 13) = v98;
    *((_DWORD *)a7 + 15) = 3;
    *((_DWORD *)a7 + 17) = v82;
    *((_DWORD *)a7 + 19) = v99;
    if ( *((_BYTE *)this + 398) )
    {
      *((_DWORD *)a7 + 20) = v99;
      *((_DWORD *)a7 + 19) = v75->DmaBufferPrivateDataSize;
    }
    v113 = (char *)*((unsigned __int8 *)a7 + 348);
    v114 = 440LL;
    if ( !(_BYTE)v113 )
      v114 = 424LL;
    v115 = (unsigned int *)((char *)a7 + v114);
    v116 = (_BYTE)v113
         ? (struct VIDMM_ALLOC **)((char *)a7
                                 + *((_DWORD *)a7 + 111) * ((8 * *((_DWORD *)a7 + 112) + 175) & 0xFFFFFFF8)
                                 + 488)
         : (struct VIDMM_ALLOC **)((char *)a7 + 432);
    if ( *((_DWORD *)a7 + 30) == 4 )
    {
      v11 = v146;
      if ( !v146 )
      {
        v117 = WdLogNewEntry5_WdAssertion(v113);
        *(_QWORD *)(v117 + 24) = 8211LL;
        WdLogEvent5_WdAssertion(v117);
      }
      if ( (*(_DWORD *)a7 & 0x40) != 0 )
      {
        v118 = WdLogNewEntry5_WdAssertion(v113);
        *(_QWORD *)(v118 + 24) = 8212LL;
        WdLogEvent5_WdAssertion(v118);
      }
      *v115 = *v115 & 0xFFFFFC00 | 1;
      if ( (int)VIDMM_EXPORT::VidMmReferencePrimaryAllocationForSubmission(
                  *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 528LL),
                  *(struct VIDMM_DEVICE **)(*((_QWORD *)this + 2) + 592LL),
                  *((struct _VIDMM_MULTI_ALLOC **)v11 + 3),
                  v116) < 0 )
      {
        v120 = WdLogNewEntry5_WdAssertion(v119);
        *(_QWORD *)(v120 + 24) = 8231LL;
        WdLogEvent5_WdAssertion(v120);
      }
      if ( *((_BYTE *)a7 + 348) )
        v121 = (char *)a7 + *((_DWORD *)a7 + 111) * ((8 * *((_DWORD *)a7 + 112) + 175) & 0xFFFFFFF8) + 480;
      else
        v121 = (char *)a7 + 448;
      (*(void (__fastcall **)(_QWORD, _QWORD, int *, char *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                                + 16LL)
                                                                                    + 528LL)
                                                                        + 8LL)
                                                            + 216LL))(
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 536LL),
        *(_QWORD *)(*((_QWORD *)v11 + 6) + 8LL),
        &v144,
        v121);
      if ( *((_BYTE *)a7 + 348) )
        *(_WORD *)((char *)a7 + *((_DWORD *)a7 + 111) * ((8 * *((_DWORD *)a7 + 112) + 175) & 0xFFFFFFF8) + 472) = v144;
      else
        *((_DWORD *)a7 + 121) ^= (*((_DWORD *)a7 + 121) ^ (v144 << 17)) & 0x3E0000;
      v122 = *((_QWORD *)v11 + 5);
      if ( v122 )
        v123 = (*(_DWORD *)(v122 + 4) >> 3) & 1;
      else
        v123 = 0;
      if ( *((_BYTE *)a7 + 348) )
        *((_BYTE *)a7 + *((_DWORD *)a7 + 111) * ((8 * *((_DWORD *)a7 + 112) + 175) & 0xFFFFFFF8) + 496) = v123;
      else
        *((_DWORD *)a7 + 121) = (v123 << 23) | *((_DWORD *)a7 + 121) & 0xFF7FFFFF;
      if ( *((_BYTE *)a7 + 348) )
        v124 = (char *)a7 + *((_DWORD *)a7 + 111) * ((8 * *((_DWORD *)a7 + 112) + 175) & 0xFFFFFFF8) + 464;
      else
        v124 = (char *)a7 + 440;
      *(_QWORD *)v124 = *(_QWORD *)(*((_QWORD *)v11 + 6) + 16LL);
      if ( *((_BYTE *)a7 + 348) )
        v113 = (char *)a7 + *((_DWORD *)a7 + 111) * ((8 * *((_DWORD *)a7 + 112) + 175) & 0xFFFFFFF8) + 456;
      else
        v113 = (char *)a7 + 496;
      *(_QWORD *)v113 = *((_QWORD *)this + 23);
      if ( *((_BYTE *)a7 + 348) )
        *((_DWORD *)a7 + 120) = -1;
    }
    else
    {
      if ( (*v115 & 0x3FF) != 0 )
      {
        v125 = WdLogNewEntry5_WdAssertion(v113);
        *(_QWORD *)(v125 + 24) = 8269LL;
        WdLogEvent5_WdAssertion(v125);
      }
      v11 = v146;
    }
    if ( *((struct _KTHREAD **)this + 52) != KeGetCurrentThread() )
    {
      v126 = WdLogNewEntry5_WdAssertion(v113);
      *(_QWORD *)(v126 + 24) = 8272LL;
      WdLogEvent5_WdAssertion(v126);
    }
    v127 = DXGCONTEXT::GetRenderHwQueue((DXGCONTEXT *)this);
    v129 = (*(__int64 (__fastcall **)(struct _VIDSCH_CONTEXT *, struct VIDSCH_SUBMIT_DATA_BASE *))(*(_QWORD *)(v128 + 8)
                                                                                                 + 344LL))(
             v127,
             a7);
    if ( v129 < 0 )
      break;
    v141 = 0LL;
    v8 = 0LL;
    v142 = 0;
    if ( (_DWORD)v16 != -1071775743 )
      return (unsigned int)v16;
    a4 = v147;
    v10 = v156;
  }
  v132 = DXGCONTEXT::GetRenderHwQueue((DXGCONTEXT *)this);
  (*(void (__fastcall **)(struct _VIDSCH_CONTEXT *, _QWORD))(v133 + 352))(v132, 0LL);
  if ( (*v115 & 0x3FF) != 0 && *v116 )
    VIDMM_EXPORT::VidMmUnreferencePrimaryAllocation(
      *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 528LL),
      *(struct VIDMM_GLOBAL **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 536LL),
      *((_DWORD *)a7 + 34),
      *v116);
  LODWORD(v16) = v129;
LABEL_185:
  v36 = v140;
LABEL_186:
  if ( v141 )
  {
    if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
    {
      v137 = 0;
      if ( *((_DWORD *)a7 + 48) )
      {
        do
        {
          v138 = (char *)a7 + 8 * v137;
          v139 = (struct VIDMM_ALLOC *)*((_QWORD *)v138 + 25);
          if ( v139 )
          {
            VIDMM_EXPORT::VidMmUnreferencePrimaryAllocation(
              *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 528LL),
              *(struct VIDMM_GLOBAL **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 536LL),
              0,
              v139);
            *((_QWORD *)v138 + 25) = 0LL;
          }
          ++v137;
        }
        while ( v137 < *((_DWORD *)a7 + 48) );
        v136 = v141;
      }
    }
    if ( v36 )
    {
      VIDMM_EXPORT::VidMmUnreferenceDmaBuffer(
        *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 528LL),
        v136);
      v136 = v141;
    }
    (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                       + 528LL)
                                                                           + 8LL)
                                                               + 496LL))(
      v136,
      0LL);
  }
  return (unsigned int)v16;
}
