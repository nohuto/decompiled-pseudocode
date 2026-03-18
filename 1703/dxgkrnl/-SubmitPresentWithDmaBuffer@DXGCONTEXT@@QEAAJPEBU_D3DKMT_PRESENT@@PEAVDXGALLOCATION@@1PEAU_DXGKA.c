/*
 * XREFs of ?SubmitPresentWithDmaBuffer@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAVDXGALLOCATION@@1PEAU_DXGKARG_PRESENT@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00B24D0
 * Callers:
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00B2DA0 (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG.c)
 * Callees:
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0005450 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0005D94 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0006330 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C00063B0 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?VidMmReferencePrimaryAllocationForSubmission@VIDMM_EXPORT@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_ALLOC@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0013A14 (-VidMmReferencePrimaryAllocationForSubmission@VIDMM_EXPORT@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MU.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     TraceDxgkPatchLocationList @ 0x1C0035F1C (TraceDxgkPatchLocationList.c)
 *     ?VidMmUnreferenceDmaBuffer@VIDMM_EXPORT@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z @ 0x1C0038E00 (-VidMmUnreferenceDmaBuffer@VIDMM_EXPORT@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z.c)
 *     ?VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@KPEAUVIDMM_ALLOC@@H@Z @ 0x1C0038E6C (-VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@KPEAUVIDMM_ALLOC@@H@Z.c)
 *     ?AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C00B9EE0 (-AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
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
  struct _VIDMM_DMA_BUFFER *v8; // rbx
  struct COREDEVICEACCESS *v10; // rcx
  struct DXGALLOCATION *v11; // rdi
  struct DXGALLOCATION *v12; // r13
  struct _DXGK_PRESENTFLAGS::$39B5E91464CC7478F36F75826127ACBA::$425066DE2CBEB6B5ED4C7449D399EBDF Value; // eax
  int v14; // eax
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rdx
  D3DGPU_VIRTUAL_ADDRESS *v18; // r8
  D3DGPU_VIRTUAL_ADDRESS *v19; // r12
  __int64 v20; // r13
  struct DXGPROCESS *Current; // rax
  char *v22; // rdi
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // r12
  char *v30; // rcx
  char v31; // r13
  __int64 v32; // rax
  __int64 v33; // r8
  struct DXGALLOCATION *v34; // r11
  __int64 v35; // rbx
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rdx
  int v41; // edi
  __int64 v42; // r12
  __int64 CurrentProcess; // rax
  __int64 v44; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rbx
  __int64 v51; // r13
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rdi
  _QWORD *v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 DmaSize; // rcx
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // r9
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // r9
  int v86; // eax
  char *v87; // rcx
  unsigned int v88; // edi
  int v89; // r13d
  char *v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // r8
  __int64 v93; // r9
  __int64 v94; // r9
  __int64 v95; // rbx
  int v96; // eax
  char v97; // al
  char *v98; // rcx
  char *v99; // rdi
  struct VIDMM_ALLOC **v100; // r13
  __int64 v101; // rax
  int v102; // ebx
  __int64 v104; // rax
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // r8
  __int64 v108; // r9
  __int64 v109; // rax
  int v110; // r9d
  __int64 *ThreadProperty; // rax
  __int64 v112; // rax
  int v113; // r9d
  __int64 v114; // rax
  _QWORD *v115; // rax
  unsigned __int8 v116; // cl
  _QWORD *v117; // rax
  __int64 v118; // rax
  _QWORD *v119; // rax
  __int64 v120; // rax
  __int64 v121; // rdx
  __int64 v122; // rcx
  __int64 v123; // rax
  __int64 v124; // rax
  __int64 v125; // rdx
  __int64 v126; // rcx
  __int64 v127; // r8
  __int64 v128; // r9
  __int64 v129; // rax
  __int64 v130; // rax
  __int64 v131; // rax
  __int64 v132; // rdx
  __int64 v133; // rcx
  __int64 v134; // r8
  __int64 v135; // r9
  __int64 v136; // rax
  __int64 v137; // rbx
  __int64 v138; // rcx
  __int64 v139; // r8
  __int64 v140; // r9
  __int64 v141; // rax
  __int64 v142; // r9
  __int64 v143; // rax
  __int64 v144; // rax
  __int64 v145; // r9
  __int64 v146; // rax
  bool v147; // zf
  struct DXGALLOCATION *v148; // rbx
  __int64 v149; // rax
  __int64 v150; // rax
  __int64 v151; // rdx
  __int64 v152; // rcx
  __int64 v153; // r8
  __int64 v154; // r9
  __int64 v155; // rax
  char *v156; // r9
  __int64 v157; // rax
  int v158; // edx
  char *v159; // r8
  __int64 v160; // rax
  __int64 v161; // rax
  _QWORD *v162; // rax
  __int64 v163; // rax
  __int64 v164; // rax
  struct _VIDMM_DMA_BUFFER *v165; // r8
  __int64 v166; // rbx
  char *v167; // rdi
  struct VIDMM_ALLOC *v168; // r9
  char v169; // [rsp+70h] [rbp-90h]
  struct _VIDMM_DMA_BUFFER *v170; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int8 v171; // [rsp+80h] [rbp-80h]
  char *v172; // [rsp+88h] [rbp-78h]
  int v173; // [rsp+90h] [rbp-70h] BYREF
  char *v174; // [rsp+98h] [rbp-68h] BYREF
  struct DXGALLOCATION *v175; // [rsp+A0h] [rbp-60h]
  UINT v176; // [rsp+A8h] [rbp-58h] BYREF
  __int16 v177; // [rsp+ACh] [rbp-54h] BYREF
  struct DXGPROCESS *v178; // [rsp+B0h] [rbp-50h] BYREF
  struct DXGALLOCATION *v179; // [rsp+B8h] [rbp-48h]
  D3DGPU_VIRTUAL_ADDRESS v180; // [rsp+C0h] [rbp-40h] BYREF
  __int64 CurrentIrql; // [rsp+C8h] [rbp-38h]
  __int64 v182; // [rsp+D0h] [rbp-30h]
  __int64 v183; // [rsp+D8h] [rbp-28h]
  LARGE_INTEGER v184; // [rsp+E0h] [rbp-20h] BYREF
  struct COREDEVICEACCESS *v185; // [rsp+E8h] [rbp-18h]
  char v186[8]; // [rsp+F0h] [rbp-10h] BYREF
  char v187[8]; // [rsp+F8h] [rbp-8h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+100h] [rbp+0h] BYREF
  int v189; // [rsp+130h] [rbp+30h] BYREF
  int v190; // [rsp+134h] [rbp+34h]
  int v191; // [rsp+138h] [rbp+38h]
  int v192; // [rsp+13Ch] [rbp+3Ch]
  int v193; // [rsp+140h] [rbp+40h]
  __int64 v194; // [rsp+144h] [rbp+44h] BYREF
  int v195; // [rsp+14Ch] [rbp+4Ch]
  struct DXGALLOCATION *v196; // [rsp+150h] [rbp+50h]
  struct DXGALLOCATION *v197; // [rsp+158h] [rbp+58h]
  _QWORD v198[12]; // [rsp+160h] [rbp+60h] BYREF

  v8 = a6;
  v10 = a8;
  v11 = a4;
  v12 = a3;
  v185 = a8;
  v179 = a4;
  v175 = a3;
  v170 = a6;
  Value = (struct _DXGK_PRESENTFLAGS::$39B5E91464CC7478F36F75826127ACBA::$425066DE2CBEB6B5ED4C7449D399EBDF)a5->Flags.Value;
  v171 = 1;
  v169 = 0;
  a5->MultipassOffset = 0;
  if ( (*(_BYTE *)&Value & 4) != 0 && !a3 )
  {
    v104 = WdLogNewEntry5_WdError(a8, a2);
    *(_QWORD *)(v104 + 24) = 7131LL;
    WdLogEvent5_WdError(v104);
    return 3221225473LL;
  }
  while ( 1 )
  {
    v174 = 0LL;
    if ( !v8 )
    {
      LODWORD(v29) = DXGCONTEXT::AcquireDmaBuffer((DXGCONTEXT *)this, &v170, v10, 0);
      if ( (int)v29 < 0 )
      {
        v161 = WdLogNewEntry5_WdError(v106, v105);
        *(_QWORD *)(v161 + 24) = this;
        WdLogEvent5_WdError(v161);
        goto LABEL_198;
      }
      v8 = v170;
      if ( !v170 )
      {
        v109 = WdLogNewEntry5_WdAssertion(v106, v105, v107, v108);
        *(_QWORD *)(v109 + 24) = 7158LL;
        WdLogEvent5_WdAssertion(v109);
        v8 = v170;
      }
    }
    v190 &= 2u;
    v189 = 0;
    if ( v12 )
      v14 = *((_DWORD *)v12 + 4);
    else
      v14 = 0;
    v192 &= 2u;
    v191 = v14;
    if ( v11 )
      v15 = *((_DWORD *)v11 + 4);
    else
      v15 = 0;
    v193 = v15;
    v195 = 0;
    v196 = v12;
    v194 = v194 & 2 | 1;
    v16 = *((_QWORD *)this + 2);
    v197 = v11;
    v180 = 0LL;
    if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(v16 + 16) + 16LL)) )
      v172 = (char *)&v194 + 4;
    else
      v172 = (char *)v18;
    if ( *((_BYTE *)this + 366) )
      v19 = &v180;
    else
      v19 = v18;
    v20 = *(_QWORD *)(v17 + 432);
    Current = DXGPROCESS::GetCurrent();
    v178 = Current;
    if ( Current )
    {
      v22 = (char *)Current + 112;
      if ( *((struct _KTHREAD **)Current + 15) == KeGetCurrentThread() )
      {
        v178 = 0LL;
      }
      else
      {
        KeEnterCriticalRegion();
        if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v22, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v110 = *((_DWORD *)v22 + 4);
            if ( v110 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              Template_q(v23, &EventBlockThread, v24, v110);
          }
          ExAcquirePushLockExclusiveEx(v22, 0LL);
        }
        *((_QWORD *)v22 + 1) = KeGetCurrentThread();
      }
      v11 = v179;
    }
    v29 = (*(int (__fastcall **)(struct _VIDMM_DMA_BUFFER *, int *, __int64, _QWORD, int, UINT *, LARGE_INTEGER *, D3DGPU_VIRTUAL_ADDRESS *, struct DXGPROCESS **, char *, char *, char *))(*(_QWORD *)(v20 + 8) + 568LL))(
            v8,
            &v189,
            3LL,
            v171,
            1,
            &v176,
            &v184,
            v19,
            &v178,
            v186,
            (char *)a7 + 192,
            v172);
    if ( v178 )
    {
      v30 = (char *)v178 + 112;
      *((_QWORD *)v178 + 15) = 0LL;
      ExReleasePushLockExclusiveEx(v30, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( (int)v29 < 0 )
    {
      v164 = WdLogNewEntry5_WdWarning(v26, v25, v27, v28);
      *(_QWORD *)(v164 + 24) = this;
      *(_QWORD *)(v164 + 32) = v29;
      WdLogEvent5_WdWarning(v164);
      goto LABEL_198;
    }
    v31 = 1;
    v169 = 1;
    (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, char **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                        + 432LL)
                                                                            + 8LL)
                                                                + 504LL))(
      v170,
      &v174);
    a5->pDmaBuffer = v174;
    a5->DmaSize = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                                + 432LL)
                                                                                    + 8LL)
                                                                        + 528LL))(v170);
    a5->pDmaBufferPrivateData = (void *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 432LL) + 8LL)
                                                                                              + 560LL))(v170);
    a5->DmaBufferPrivateDataSize = this[50];
    a5->DmaBufferSegmentId = v176;
    a5->DmaBufferPhysicalAddress = v184;
    *(_DWORD *)a7 &= ~0x8000000u;
    if ( *((_BYTE *)this + 366) )
    {
      *(_DWORD *)a7 |= 0x8000000u;
      memset(v198, 0, sizeof(v198));
      v32 = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                          + 432LL)
                                                                              + 8LL)
                                                                  + 552LL))(v170);
      v34 = v175;
      v35 = v32;
      v36 = *(_QWORD *)(v32 + 24);
      v198[4] = v36;
      if ( v175 )
      {
        v37 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                                + 432LL)
                                                                                    + 8LL)
                                                                        + 248LL))(
                *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 440LL),
                *((_QWORD *)v175 + 3),
                *((unsigned __int8 *)this + 367),
                this[86]);
        v34 = v175;
        v198[5] = v37;
      }
      if ( (a5->Flags.Value & 4) != 0 )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD, __int16 *, _QWORD *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                            + 432LL)
                                                                                + 8LL)
                                                                    + 216LL))(
          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 440LL),
          *(_QWORD *)(*((_QWORD *)v34 + 6) + 8LL),
          &v177,
          &v198[6]);
        LOWORD(v198[7]) = v177;
      }
      else if ( v11 )
      {
        v38 = *((unsigned __int8 *)this + 367);
        v39 = this[86];
        v198[8] = *(_QWORD *)(v35 + 48);
        v198[9] = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 432LL)
                                                                                          + 8LL)
                                                                              + 248LL))(
                    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 440LL),
                    *((_QWORD *)v11 + 3),
                    v38,
                    v39);
        if ( !v198[9] )
        {
          v162 = (_QWORD *)WdLogNewEntry5_WdError(v36, v40);
          LODWORD(v29) = -1073741811;
          v162[3] = this;
          v162[4] = -1073741811LL;
          v162[5] = 7299LL;
          WdLogEvent5_WdError(v162);
          goto LABEL_199;
        }
      }
      v41 = 0;
      a5->DmaBufferGpuVirtualAddress = v180;
      a5->pAllocationList = (DXGK_ALLOCATIONLIST *)v198;
      a5->pPatchLocationListOut = 0LL;
      a5->PatchLocationListOutSize = 0;
    }
    else
    {
      a5->pAllocationList = (DXGK_ALLOCATIONLIST *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 432LL) + 8LL) + 552LL))(v170);
      a5->pPatchLocationListOut = (D3DDDI_PATCHLOCATIONLIST *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 432LL) + 8LL) + 544LL))(v170);
      a5->PatchLocationListOutSize = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 432LL) + 8LL)
                                                                                           + 536LL))(v170);
      v41 = 0;
    }
    v183 = *((_QWORD *)this + 23);
    v42 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    v182 = v42;
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v36, &EventProfilerEnter, v33, 5031);
    CurrentProcess = PsGetCurrentProcess();
    ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v44);
    v50 = ProcessDxgProcess;
    if ( ProcessDxgProcess )
    {
      if ( (*(_BYTE *)(ProcessDxgProcess + 275) & 2) != 0 )
      {
        ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
        if ( ThreadProperty )
          v50 = *ThreadProperty;
      }
    }
    if ( v50 )
      v51 = v50 + 88;
    else
      v51 = 0LL;
    LODWORD(v172) = 0;
    if ( v51 && *(struct _KTHREAD **)(v51 + 8) == KeGetCurrentThread() )
    {
      v112 = WdLogNewEntry5_WdAssertion(v47, v46, v48, v49);
      *(_QWORD *)(v112 + 24) = 1167LL;
      WdLogEvent5_WdAssertion(v112);
    }
    if ( v50 )
    {
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v51, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v113 = *(_DWORD *)(v51 + 16);
          if ( v113 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            Template_q(v52, &EventBlockThread, v53, v113);
        }
        ExAcquirePushLockExclusiveEx(v51, 0LL);
      }
      *(_QWORD *)(v51 + 8) = KeGetCurrentThread();
      LODWORD(v172) = 2;
    }
    DXGADAPTER::AcquireDdiSync(*(_QWORD *)(v42 + 16), 1);
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v42 + 16) + 3892LL));
    CurrentIrql = KeGetCurrentIrql();
    v58 = 0LL;
    if ( (unsigned __int8)CurrentIrql < 2u )
    {
      CurrentThread = KeGetCurrentThread();
      if ( !CurrentThread )
      {
        v114 = WdLogNewEntry5_WdAssertion(v55, v54, v56, v57);
        *(_QWORD *)(v114 + 24) = 94LL;
        WdLogEvent5_WdAssertion(v114);
      }
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v55, v54, v56, v57);
      if ( CurrentProcessSessionId
        && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId
        && (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) != 0
        && *(_QWORD *)ThreadWin32Thread )
      {
        v58 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
        if ( v58 )
          v41 = *(_DWORD *)(v58 + 136);
        else
          v41 = 0;
      }
      else
      {
        v41 = 0;
        v58 = 0LL;
      }
    }
    DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
      (DXGVALIDATIONPROCESSATTACH *)v187,
      *(struct DXGADAPTER **)(v42 + 16));
    v29 = (*(int (__fastcall **)(__int64, struct _DXGKARG_PRESENT *))(*(_QWORD *)(v42 + 16) + 608LL))(v183, a5);
    if ( v187[0] )
      KeUnstackDetachProcess(&ApcState);
    if ( (_BYTE)CurrentIrql != KeGetCurrentIrql() )
    {
      v115 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v63, v62, v64);
      v115[5] = v182;
      v115[6] = (unsigned __int8)CurrentIrql;
      v115[3] = 275LL;
      v115[4] = 16LL;
      v116 = KeGetCurrentIrql();
      v115[7] = v116;
      WdLogEvent5_WdCriticalError(v115);
    }
    if ( v58 && *(_DWORD *)(v58 + 136) != v41 )
    {
      v117 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v63, v62, v64);
      v117[3] = 275LL;
      v117[4] = 25LL;
      v117[5] = *(int *)(v58 + 136);
      v117[6] = v41;
      v117[7] = 0LL;
      WdLogEvent5_WdCriticalError(v117);
    }
    v66 = v182;
    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v182 + 16) + 3892LL));
    v67 = (_QWORD *)WdLogNewEntry5_WdTrace(v63, v62, v64, v65);
    v69 = v183;
    v67[3] = v29;
    v67[4] = v69;
    v67[5] = a5->SubRectCnt;
    v67[6] = a5->pDmaBuffer;
    DmaSize = a5->DmaSize;
    v67[7] = DmaSize;
    if ( (_DWORD)v29 )
    {
      if ( (int)v29 > -1073741670 )
      {
        if ( (_DWORD)v29 != -1071775743 && (_DWORD)v29 != -1071775736 && (_DWORD)v29 != -1071775232 )
        {
LABEL_133:
          v118 = WdLogNewEntry5_WdError(DmaSize, v68);
          *(_QWORD *)(v118 + 24) = v29;
          WdLogEvent5_WdError(v118);
        }
      }
      else if ( (_DWORD)v29 != -1073741670
             && (_DWORD)v29 != -1073741816
             && (_DWORD)v29 != -1073741801
             && (_DWORD)v29 != -1073741795
             && (_DWORD)v29 != -1073741674 )
      {
        goto LABEL_133;
      }
    }
    DXGADAPTER::ReleaseDdiSync(*(DXGADAPTER **)(v66 + 16));
    if ( (_DWORD)v172 == 1 )
    {
      ExReleasePushLockSharedEx(v51, 0LL);
      goto LABEL_57;
    }
    if ( (_DWORD)v172 == 2 )
    {
      *(_QWORD *)(v51 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v51, 0LL);
LABEL_57:
      KeLeaveCriticalRegion();
    }
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v72, &EventProfilerExit, v73, 5031);
    if ( *((_BYTE *)this + 366) && (a5->pPatchLocationListOut || a5->PatchLocationListOutSize) )
    {
      v119 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v72, v71, v73);
      v119[3] = 275LL;
      v119[4] = 9LL;
      v119[5] = a5;
      v119[6] = 0LL;
      v119[7] = 0LL;
      WdLogEvent5_WdCriticalError(v119);
    }
    (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                               + 432LL)
                                                                   + 8LL)
                                                       + 512LL))(v170);
    if ( (_DWORD)v29 == -1071775743 )
    {
      if ( (a5->Flags.Value & 4) != 0 )
      {
        v120 = WdLogNewEntry5_WdError(v75, v74);
        *(_QWORD *)(v120 + 24) = this;
        WdLogEvent5_WdError(v120);
        LODWORD(v29) = -1073741823;
LABEL_140:
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                       + 408LL)
                                                           + 8LL)
                                               + 352LL))(
          *((_QWORD *)this + 29),
          0LL);
        if ( (_DWORD)v29 == -1071775736 )
        {
          v123 = WdLogNewEntry5_WdEvent(v122);
          *(_QWORD *)(v123 + 24) = this;
          *(_QWORD *)(v123 + 32) = -1071775736LL;
          WdLogEvent5_WdEvent(v123);
        }
        else
        {
          v163 = WdLogNewEntry5_WdError(v122, v121);
          *(_QWORD *)(v163 + 32) = (int)v29;
          *(_QWORD *)(v163 + 24) = this;
          WdLogEvent5_WdError(v163);
        }
        goto LABEL_198;
      }
    }
    else if ( (int)v29 < 0 )
    {
      goto LABEL_140;
    }
    if ( !*((_BYTE *)this + 366) )
    {
      if ( a5->pAllocationList == (DXGK_ALLOCATIONLIST *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 432LL) + 8LL) + 552LL))(v170) )
        goto LABEL_66;
      v124 = WdLogNewEntry5_WdAssertion(v126, v125, v127, v128);
      *(_QWORD *)(v124 + 24) = 7402LL;
LABEL_145:
      WdLogEvent5_WdAssertion(v124);
      goto LABEL_66;
    }
    if ( a5->pAllocationList != (DXGK_ALLOCATIONLIST *)v198 )
    {
      v124 = WdLogNewEntry5_WdAssertion(v75, v74, v76, v77);
      *(_QWORD *)(v124 + 24) = 7398LL;
      goto LABEL_145;
    }
LABEL_66:
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                            + 408LL)
                                                                + 8LL)
                                                    + 480LL))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                        + 416LL))
      && a5->pDmaBuffer <= v174 )
    {
      v129 = WdLogNewEntry5_WdAssertion(v79, v78, v80, v81);
      *(_QWORD *)(v129 + 24) = 7416LL;
      WdLogEvent5_WdAssertion(v129);
    }
    v83 = (*(unsigned int (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                             + 432LL)
                                                                                 + 8LL)
                                                                     + 528LL))(v170);
    v86 = (int)v174;
    v87 = &v174[v83];
    if ( a5->pDmaBuffer > v87 )
    {
      v130 = WdLogNewEntry5_WdAssertion(v87, v82, v84, v85);
      *(_QWORD *)(v130 + 24) = 7417LL;
      WdLogEvent5_WdAssertion(v130);
      v86 = (int)v174;
    }
    v88 = LODWORD(a5->pDmaBuffer) - v86;
    v89 = LODWORD(a5->pDmaBufferPrivateData)
        - (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                        + 432LL)
                                                                            + 8LL)
                                                                + 560LL))(v170);
    if ( (*(unsigned int (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                            + 432LL)
                                                                                + 8LL)
                                                                    + 528LL))(v170) < v88 )
    {
      v131 = WdLogNewEntry5_WdAssertion(v91, v90, v92, v93);
      *(_QWORD *)(v131 + 24) = 7424LL;
      WdLogEvent5_WdAssertion(v131);
    }
    if ( *((_BYTE *)this + 366) )
    {
      v94 = 0LL;
      LODWORD(v95) = 0;
    }
    else
    {
      if ( a5->pPatchLocationListOut < (D3DDDI_PATCHLOCATIONLIST *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 432LL) + 8LL) + 544LL))(v170) )
      {
        v136 = WdLogNewEntry5_WdAssertion(v133, v132, v134, v135);
        *(_QWORD *)(v136 + 24) = 7436LL;
        WdLogEvent5_WdAssertion(v136);
      }
      v137 = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                           + 432LL)
                                                                               + 8LL)
                                                                   + 544LL))(v170);
      v138 = (*(unsigned int (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                                + 432LL)
                                                                                    + 8LL)
                                                                        + 536LL))(v170);
      if ( a5->pPatchLocationListOut > (D3DDDI_PATCHLOCATIONLIST *)(v137 + 24 * v138) )
      {
        v141 = WdLogNewEntry5_WdAssertion(v138, 3 * v138, v139, v140);
        *(_QWORD *)(v141 + 24) = 7437LL;
        WdLogEvent5_WdAssertion(v141);
      }
      v95 = ((__int64)a5->pPatchLocationListOut
           - (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                           + 432LL)
                                                                               + 8LL)
                                                                   + 544LL))(v170))
          / 24;
      if ( (*(unsigned int (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                              + 432LL)
                                                                                  + 8LL)
                                                                      + 536LL))(v170) < (unsigned int)v95 )
      {
        v143 = WdLogNewEntry5_WdAssertion(v91, v90, v92, v142);
        *(_QWORD *)(v143 + 24) = 7447LL;
        WdLogEvent5_WdAssertion(v143);
      }
      if ( (qword_1C006E790 & 0x10) != 0 )
      {
        v144 = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                             + 432LL)
                                                                                 + 8LL)
                                                                     + 544LL))(v170);
        TraceDxgkPatchLocationList((__int64)this, (__int64)v170, v95, v144);
      }
      v94 = 0LL;
    }
    if ( !v88 )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                              + 408LL)
                                                                  + 8LL)
                                                      + 480LL))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                          + 416LL)) )
      {
        v146 = WdLogNewEntry5_WdAssertion(v91, v90, v92, v145);
        *(_QWORD *)(v146 + 24) = 7462LL;
        WdLogEvent5_WdAssertion(v146);
      }
      v94 = 0LL;
    }
    v96 = *(_DWORD *)a7;
    if ( (*(_DWORD *)a7 & 0x20) != 0 && (_DWORD)v29 == -1071775743 )
    {
      v147 = bTracingEnabled == 0;
      *(_DWORD *)a7 = v96 | 0x40;
      if ( !v147 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        Template_q(v91, &EventPerformanceWarning, v92, 1);
        v94 = 0LL;
      }
    }
    else
    {
      *(_DWORD *)a7 = v96 & 0xFFFFFFBF;
    }
    *((_QWORD *)a7 + 1) = v170;
    *((_DWORD *)a7 + 13) = v88;
    *((_DWORD *)a7 + 12) = 0;
    *((_DWORD *)a7 + 15) = 3;
    *((_DWORD *)a7 + 14) = 0;
    *((_DWORD *)a7 + 17) = v95;
    *((_DWORD *)a7 + 16) = 0;
    *((_DWORD *)a7 + 19) = v89;
    *((_DWORD *)a7 + 18) = 0;
    if ( *((_BYTE *)this + 366) )
    {
      *((_DWORD *)a7 + 20) = v89;
      *((_DWORD *)a7 + 19) = a5->DmaBufferPrivateDataSize;
    }
    v97 = *((_BYTE *)a7 + 348);
    v98 = (char *)(v97 ? 432LL : 416LL);
    v99 = &v98[(_QWORD)a7];
    v100 = v97
         ? (struct VIDMM_ALLOC **)((char *)a7
                                 + *((_DWORD *)a7 + 109) * ((8 * *((_DWORD *)a7 + 110) + 167) & 0xFFFFFFF8)
                                 + 480)
         : (struct VIDMM_ALLOC **)((char *)a7 + 424);
    if ( *((_DWORD *)a7 + 30) == 4 )
    {
      v148 = v175;
      if ( !v175 )
      {
        v149 = WdLogNewEntry5_WdAssertion(v98, v90, v92, 0LL);
        *(_QWORD *)(v149 + 24) = 7498LL;
        WdLogEvent5_WdAssertion(v149);
      }
      if ( (*(_DWORD *)a7 & 0x40) != 0 )
      {
        v150 = WdLogNewEntry5_WdAssertion(v98, v90, v92, v94);
        *(_QWORD *)(v150 + 24) = 7499LL;
        WdLogEvent5_WdAssertion(v150);
      }
      *v99 = 1;
      if ( (int)VIDMM_EXPORT::VidMmReferencePrimaryAllocationForSubmission(
                  *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 432LL),
                  *(struct VIDMM_DEVICE **)(*((_QWORD *)this + 2) + 592LL),
                  *((struct _VIDMM_MULTI_ALLOC **)v148 + 3),
                  v100) < 0 )
      {
        v155 = WdLogNewEntry5_WdAssertion(v152, v151, v153, v154);
        *(_QWORD *)(v155 + 24) = 7518LL;
        WdLogEvent5_WdAssertion(v155);
      }
      if ( *((_BYTE *)a7 + 348) )
        v156 = (char *)a7 + *((_DWORD *)a7 + 109) * ((8 * *((_DWORD *)a7 + 110) + 167) & 0xFFFFFFF8) + 472;
      else
        v156 = (char *)a7 + 440;
      (*(void (__fastcall **)(_QWORD, _QWORD, int *, char *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                                + 16LL)
                                                                                    + 432LL)
                                                                        + 8LL)
                                                            + 216LL))(
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 440LL),
        *(_QWORD *)(*((_QWORD *)v148 + 6) + 8LL),
        &v173,
        v156);
      if ( *((_BYTE *)a7 + 348) )
        *(_WORD *)((char *)a7 + *((_DWORD *)a7 + 109) * ((8 * *((_DWORD *)a7 + 110) + 167) & 0xFFFFFFF8) + 464) = v173;
      else
        *((_DWORD *)a7 + 119) ^= (*((_DWORD *)a7 + 119) ^ (v173 << 17)) & 0x3E0000;
      v157 = *((_QWORD *)v148 + 5);
      if ( v157 )
      {
        v158 = (*(_DWORD *)(v157 + 4) >> 3) & 1;
      }
      else
      {
        v94 = 0LL;
        v158 = 0;
      }
      if ( *((_BYTE *)a7 + 348) )
        *((_BYTE *)a7 + *((_DWORD *)a7 + 109) * ((8 * *((_DWORD *)a7 + 110) + 167) & 0xFFFFFFF8) + 488) = v158 != 0;
      else
        *((_DWORD *)a7 + 119) = (v158 << 23) | *((_DWORD *)a7 + 119) & 0xFF7FFFFF;
      v90 = (char *)a7 + 432;
      if ( *((_BYTE *)a7 + 348) )
        v159 = (char *)a7 + *((_DWORD *)a7 + 109) * ((8 * *((_DWORD *)a7 + 110) + 167) & 0xFFFFFFF8) + 456;
      else
        v159 = (char *)a7 + 432;
      *(_QWORD *)v159 = *(_QWORD *)(*((_QWORD *)v148 + 6) + 16LL);
      v92 = *((_QWORD *)this + 23);
      if ( *((_BYTE *)a7 + 348) )
        v98 = (char *)a7 + *((_DWORD *)a7 + 109) * ((8 * *((_DWORD *)a7 + 110) + 167) & 0xFFFFFFF8) + 448;
      else
        v98 = (char *)a7 + 480;
      *(_QWORD *)v98 = v92;
      if ( *((_BYTE *)a7 + 348) )
        *((_DWORD *)a7 + 118) = -1;
    }
    else if ( (unsigned __int8)*(_DWORD *)v99 )
    {
      v160 = WdLogNewEntry5_WdAssertion(v98, v90, v92, 0LL);
      *(_QWORD *)(v160 + 24) = 7556LL;
      WdLogEvent5_WdAssertion(v160);
    }
    if ( *((struct _KTHREAD **)this + 48) != KeGetCurrentThread() )
    {
      v101 = WdLogNewEntry5_WdAssertion(v98, v90, v92, v94);
      *(_QWORD *)(v101 + 24) = 7559LL;
      WdLogEvent5_WdAssertion(v101);
    }
    v102 = (*(__int64 (__fastcall **)(_QWORD, struct VIDSCH_SUBMIT_DATA_BASE *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 408LL)
                                                                                           + 8LL)
                                                                               + 344LL))(
             *((_QWORD *)this + 29),
             a7);
    if ( v102 < 0 )
      break;
    v8 = 0LL;
    v170 = 0LL;
    v171 = 0;
    if ( (_DWORD)v29 != -1071775743 )
      return (unsigned int)v29;
    v11 = v179;
    v12 = v175;
    v10 = v185;
  }
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 408LL)
                                                     + 8LL)
                                         + 352LL))(
    *((_QWORD *)this + 29),
    0LL);
  if ( (unsigned __int8)*(_DWORD *)v99 && *v100 )
    VIDMM_EXPORT::VidMmUnreferencePrimaryAllocation(
      *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 432LL),
      *(struct VIDMM_DEVICE **)(*((_QWORD *)this + 2) + 592LL),
      *((_DWORD *)a7 + 34),
      *v100);
  LODWORD(v29) = v102;
LABEL_198:
  v31 = v169;
LABEL_199:
  if ( v170 )
  {
    if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
    {
      v166 = 0LL;
      if ( *((_DWORD *)a7 + 48) )
      {
        do
        {
          v167 = (char *)a7 + 8 * v166;
          v168 = (struct VIDMM_ALLOC *)*((_QWORD *)v167 + 25);
          if ( v168 )
          {
            VIDMM_EXPORT::VidMmUnreferencePrimaryAllocation(
              *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 432LL),
              *(struct VIDMM_DEVICE **)(*((_QWORD *)this + 2) + 592LL),
              0,
              v168);
            *((_QWORD *)v167 + 25) = 0LL;
          }
          v166 = (unsigned int)(v166 + 1);
        }
        while ( (unsigned int)v166 < *((_DWORD *)a7 + 48) );
        v165 = v170;
      }
    }
    if ( v31 )
    {
      VIDMM_EXPORT::VidMmUnreferenceDmaBuffer(
        *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 432LL),
        v165);
      v165 = v170;
    }
    (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                       + 432LL)
                                                                           + 8LL)
                                                               + 496LL))(
      v165,
      0LL);
  }
  return (unsigned int)v29;
}
