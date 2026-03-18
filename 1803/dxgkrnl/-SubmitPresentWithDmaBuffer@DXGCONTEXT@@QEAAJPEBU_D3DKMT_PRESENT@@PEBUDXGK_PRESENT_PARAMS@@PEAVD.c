/*
 * XREFs of ?SubmitPresentWithDmaBuffer@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEBUDXGK_PRESENT_PARAMS@@PEAVDXGALLOCATION@@2PEAU_DXGKARG_PRESENT@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C010E280
 * Callers:
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEBUDXGK_PRESENT_PARAMS@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0100890 (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEBUDXGK_PRESENT_PARAMS@@IPEAPEAV1@PEAVDXGA.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0015AA8 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     TraceDxgkPatchLocationList @ 0x1C0031170 (TraceDxgkPatchLocationList.c)
 *     ?VidMmUnreferenceDmaBuffer@VIDMM_EXPORT@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z @ 0x1C0033C50 (-VidMmUnreferenceDmaBuffer@VIDMM_EXPORT@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C010E944 (-AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z.c)
 *     ?DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z @ 0x1C010EAD8 (-DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z.c)
 */

__int64 __fastcall DXGCONTEXT::SubmitPresentWithDmaBuffer(
        UINT *this,
        const struct _D3DKMT_PRESENT *a2,
        const struct DXGK_PRESENT_PARAMS *a3,
        struct DXGALLOCATION *a4,
        struct DXGALLOCATION *a5,
        struct _DXGKARG_PRESENT *a6,
        struct _VIDMM_DMA_BUFFER *a7,
        struct VIDSCH_SUBMIT_DATA_BASE *a8,
        struct COREDEVICEACCESS *a9)
{
  struct _VIDMM_DMA_BUFFER *v9; // rdi
  struct DXGALLOCATION *v11; // rcx
  struct DXGALLOCATION *v12; // r15
  struct COREDEVICEACCESS *v13; // rdx
  struct _DXGK_PRESENTFLAGS::$39B5E91464CC7478F36F75826127ACBA::$425066DE2CBEB6B5ED4C7449D399EBDF Value; // eax
  struct _VIDMM_DMA_BUFFER *i; // rax
  int v16; // eax
  int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  D3DGPU_VIRTUAL_ADDRESS *v21; // r12
  __int64 v22; // r13
  struct DXGPROCESS *Current; // rax
  char *v24; // r15
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r15
  char *v31; // rcx
  char v32; // r12
  unsigned int v33; // eax
  __int64 v34; // rax
  struct DXGALLOCATION *v35; // r11
  __int64 v36; // rdi
  __int64 v37; // rax
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rcx
  UINT v41; // eax
  void *v42; // r9
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rcx
  unsigned int v48; // eax
  void *pDmaBuffer; // r12
  __int64 v50; // rcx
  int v51; // eax
  char *v52; // rcx
  unsigned int v53; // r12d
  int v54; // r13d
  char *v55; // rcx
  __int64 v56; // r8
  __int64 v57; // rdi
  int v58; // eax
  char *v59; // r12
  char *v60; // r13
  __int64 v61; // rax
  int v62; // eax
  int v63; // edi
  __int64 v65; // rax
  __int64 v66; // rcx
  __int64 v67; // rax
  int v68; // r9d
  _QWORD *v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rcx
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rcx
  __int64 v78; // rax
  __int64 v79; // rdi
  __int64 v80; // rcx
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // rax
  bool v85; // zf
  __int64 v86; // rax
  __int64 v87; // rax
  struct DXGALLOCATION *v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // rax
  char *v91; // r9
  struct DXGALLOCATION *v92; // r8
  __int64 v93; // rcx
  __int64 v94; // rcx
  char *v95; // rdx
  __int64 v96; // rax
  const struct DXGK_PRESENT_PARAMS *v97; // rcx
  __int64 v98; // rax
  _QWORD *v99; // rax
  __int64 v100; // rax
  __int64 v101; // rax
  __int64 v102; // rdx
  struct _VIDMM_DMA_BUFFER *v103; // r8
  __int64 v104; // r9
  unsigned int v105; // edi
  char *v106; // r14
  __int64 v107; // r8
  char v108; // [rsp+70h] [rbp-90h]
  unsigned __int8 v109; // [rsp+71h] [rbp-8Fh]
  struct _VIDMM_DMA_BUFFER *v110; // [rsp+78h] [rbp-88h] BYREF
  struct DXGALLOCATION *v111; // [rsp+80h] [rbp-80h]
  int v112; // [rsp+88h] [rbp-78h] BYREF
  char *v113; // [rsp+90h] [rbp-70h] BYREF
  struct DXGALLOCATION *v114; // [rsp+98h] [rbp-68h]
  UINT v115; // [rsp+A0h] [rbp-60h] BYREF
  __int16 v116; // [rsp+A4h] [rbp-5Ch] BYREF
  struct DXGPROCESS *v117; // [rsp+A8h] [rbp-58h] BYREF
  char *v118; // [rsp+B0h] [rbp-50h]
  D3DGPU_VIRTUAL_ADDRESS v119; // [rsp+B8h] [rbp-48h] BYREF
  LARGE_INTEGER v120; // [rsp+C0h] [rbp-40h] BYREF
  const struct DXGK_PRESENT_PARAMS *v121; // [rsp+C8h] [rbp-38h]
  struct COREDEVICEACCESS *v122; // [rsp+D0h] [rbp-30h]
  char v123[8]; // [rsp+D8h] [rbp-28h] BYREF
  int v124; // [rsp+E0h] [rbp-20h] BYREF
  int v125; // [rsp+E4h] [rbp-1Ch]
  int v126; // [rsp+E8h] [rbp-18h]
  int v127; // [rsp+ECh] [rbp-14h]
  int v128; // [rsp+F0h] [rbp-10h]
  __int64 v129; // [rsp+F4h] [rbp-Ch] BYREF
  int v130; // [rsp+FCh] [rbp-4h]
  struct DXGALLOCATION *v131; // [rsp+100h] [rbp+0h]
  struct DXGALLOCATION *v132; // [rsp+108h] [rbp+8h]
  _QWORD v133[12]; // [rsp+110h] [rbp+10h] BYREF

  v9 = a7;
  v11 = a5;
  v12 = a4;
  v13 = a9;
  v114 = a5;
  v111 = a4;
  v121 = a3;
  v110 = a7;
  v122 = a9;
  Value = (struct _DXGK_PRESENTFLAGS::$39B5E91464CC7478F36F75826127ACBA::$425066DE2CBEB6B5ED4C7449D399EBDF)a6->Flags.Value;
  v109 = 1;
  v108 = 0;
  a6->MultipassOffset = 0;
  if ( (*(_BYTE *)&Value & 4) != 0 && !a4 )
  {
    v65 = WdLogNewEntry5_WdError(a5);
    *(_QWORD *)(v65 + 24) = 7973LL;
    WdLogEvent5_WdError(v65);
    return 3221225473LL;
  }
  for ( i = a7; ; i = 0LL )
  {
    v113 = 0LL;
    if ( !i )
    {
      LODWORD(v30) = DXGCONTEXT::AcquireDmaBuffer((DXGCONTEXT *)this, &v110, v13, 0);
      if ( (int)v30 < 0 )
      {
        v98 = WdLogNewEntry5_WdError(v66);
        *(_QWORD *)(v98 + 24) = this;
        WdLogEvent5_WdError(v98);
LABEL_144:
        v32 = v108;
        goto LABEL_145;
      }
      v9 = v110;
      v11 = v114;
      v12 = v111;
    }
    if ( !v9 )
    {
      v67 = WdLogNewEntry5_WdAssertion(v11);
      *(_QWORD *)(v67 + 24) = 8000LL;
      WdLogEvent5_WdAssertion(v67);
      v11 = v114;
      v9 = v110;
    }
    v125 &= 2u;
    v124 = 0;
    if ( v12 )
      v16 = *((_DWORD *)v12 + 4);
    else
      v16 = 0;
    v127 &= 2u;
    v126 = v16;
    if ( v11 )
      v17 = *((_DWORD *)v11 + 4);
    else
      v17 = 0;
    v128 = v17;
    v130 = 0;
    v131 = v12;
    v129 = v129 & 2 | 1;
    v18 = *((_QWORD *)this + 2);
    v132 = v11;
    v119 = 0LL;
    if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(v18 + 16) + 16LL)) )
      v118 = (char *)&v129 + 4;
    else
      v118 = 0LL;
    if ( *((_BYTE *)this + 398) )
      v21 = &v119;
    else
      v21 = 0LL;
    v22 = *(_QWORD *)(v19 + 544);
    Current = DXGPROCESS::GetCurrent(v20, v19);
    v117 = Current;
    if ( Current )
    {
      v24 = (char *)Current + 144;
      if ( *((struct _KTHREAD **)Current + 19) == KeGetCurrentThread() )
      {
        v117 = 0LL;
      }
      else
      {
        KeEnterCriticalRegion();
        if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v24, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v68 = *((_DWORD *)v24 + 4);
            if ( v68 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0q(v25, &EventBlockThread, v26, v68);
          }
          ExAcquirePushLockExclusiveEx(v24, 0LL);
        }
        *((_QWORD *)v24 + 1) = KeGetCurrentThread();
      }
    }
    v30 = (*(int (__fastcall **)(struct _VIDMM_DMA_BUFFER *, int *, __int64, _QWORD, int, UINT *, LARGE_INTEGER *, D3DGPU_VIRTUAL_ADDRESS *, struct DXGPROCESS **, char *, char *, char *))(*(_QWORD *)(v22 + 8) + 568LL))(
            v9,
            &v124,
            3LL,
            v109,
            1,
            &v115,
            &v120,
            v21,
            &v117,
            v123,
            (char *)a8 + 192,
            v118);
    if ( v117 )
    {
      v31 = (char *)v117 + 144;
      *((_QWORD *)v117 + 19) = 0LL;
      ExReleasePushLockExclusiveEx(v31, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( (int)v30 < 0 )
    {
      v101 = WdLogNewEntry5_WdWarning(v28, v27, v29);
      *(_QWORD *)(v101 + 24) = this;
      *(_QWORD *)(v101 + 32) = v30;
      WdLogEvent5_WdWarning(v101);
      goto LABEL_144;
    }
    v32 = 1;
    v108 = 1;
    (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, char **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                        + 544LL)
                                                                            + 8LL)
                                                                + 504LL))(
      v110,
      &v113);
    a6->pDmaBuffer = v113;
    a6->DmaSize = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                                + 544LL)
                                                                                    + 8LL)
                                                                        + 528LL))(v110);
    a6->pDmaBufferPrivateData = (void *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL) + 8LL)
                                                                                              + 560LL))(v110);
    a6->DmaBufferPrivateDataSize = this[50];
    a6->DmaBufferSegmentId = v115;
    a6->DmaBufferPhysicalAddress = v120;
    v33 = *(_DWORD *)a8 & 0xF7FFFFFF;
    *(_DWORD *)a8 = v33;
    if ( *((_BYTE *)this + 398) )
    {
      *(_DWORD *)a8 = v33 | 0x8000000;
      memset(v133, 0, sizeof(v133));
      v34 = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                          + 544LL)
                                                                              + 8LL)
                                                                  + 552LL))(v110);
      v35 = v111;
      v36 = v34;
      v133[4] = *(_QWORD *)(v34 + 24);
      if ( v111 )
      {
        v37 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                                + 544LL)
                                                                                    + 8LL)
                                                                        + 248LL))(
                *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 552LL),
                *((_QWORD *)v111 + 3),
                *((unsigned __int8 *)this + 399),
                this[90]);
        v35 = v111;
        v133[5] = v37;
      }
      if ( (a6->Flags.Value & 4) != 0 )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD, __int16 *, _QWORD *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                            + 544LL)
                                                                                + 8LL)
                                                                    + 216LL))(
          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 552LL),
          *(_QWORD *)(*((_QWORD *)v35 + 6) + 8LL),
          &v116,
          &v133[6]);
        LOWORD(v133[7]) = v116;
      }
      else if ( v114 )
      {
        v38 = *((unsigned __int8 *)this + 399);
        v39 = this[90];
        v133[8] = *(_QWORD *)(v36 + 48);
        v133[9] = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL)
                                                                                          + 8LL)
                                                                              + 248LL))(
                    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 552LL),
                    *((_QWORD *)v114 + 3),
                    v38,
                    v39);
        if ( !v133[9] )
        {
          v99 = (_QWORD *)WdLogNewEntry5_WdError(v40);
          LODWORD(v30) = -1073741811;
          v99[3] = this;
          v99[4] = -1073741811LL;
          v99[5] = 8141LL;
          WdLogEvent5_WdError(v99);
          goto LABEL_145;
        }
      }
      a6->DmaBufferGpuVirtualAddress = v119;
      a6->pAllocationList = (DXGK_ALLOCATIONLIST *)v133;
      v41 = 0;
      a6->pPatchLocationListOut = 0LL;
    }
    else
    {
      a6->pAllocationList = (DXGK_ALLOCATIONLIST *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL) + 8LL) + 552LL))(v110);
      a6->pPatchLocationListOut = (D3DDDI_PATCHLOCATIONLIST *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL) + 8LL) + 544LL))(v110);
      v41 = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                          + 544LL)
                                                                              + 8LL)
                                                                  + 536LL))(v110);
    }
    a6->PatchLocationListOutSize = v41;
    v42 = 0LL;
    v43 = *((_QWORD *)this + 2);
    if ( (a6->Flags.Value & 1) != 0 || !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v43 + 16) + 16LL) + 2418LL) )
      v42 = (void *)*((_QWORD *)this + 23);
    LODWORD(v30) = ADAPTER_RENDER::DdiPresent(*(ADAPTER_RENDER **)(v43 + 16), v42, a6);
    if ( *((_BYTE *)this + 398) && (a6->pPatchLocationListOut || a6->PatchLocationListOutSize) )
    {
      v69 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v44);
      v69[3] = 275LL;
      v69[4] = 9LL;
      v69[5] = a6;
      v69[6] = 0LL;
      v69[7] = 0LL;
      WdLogEvent5_WdCriticalError(v69);
    }
    (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                               + 544LL)
                                                                   + 8LL)
                                                       + 512LL))(v110);
    if ( (_DWORD)v30 == -1071775743 )
      break;
    if ( (int)v30 < 0 )
      goto LABEL_86;
LABEL_35:
    if ( *((_BYTE *)this + 398) )
    {
      if ( a6->pAllocationList != (DXGK_ALLOCATIONLIST *)v133 )
      {
        v72 = WdLogNewEntry5_WdAssertion(v46);
        *(_QWORD *)(v72 + 24) = 8248LL;
LABEL_93:
        WdLogEvent5_WdAssertion(v72);
      }
    }
    else if ( a6->pAllocationList != (DXGK_ALLOCATIONLIST *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL) + 8LL) + 552LL))(v110) )
    {
      v72 = WdLogNewEntry5_WdAssertion(v73);
      *(_QWORD *)(v72 + 24) = 8252LL;
      goto LABEL_93;
    }
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                            + 520LL)
                                                                + 8LL)
                                                    + 576LL))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                        + 528LL))
      && a6->pDmaBuffer <= v113 )
    {
      v74 = WdLogNewEntry5_WdAssertion(v47);
      *(_QWORD *)(v74 + 24) = 8266LL;
      WdLogEvent5_WdAssertion(v74);
    }
    v48 = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                        + 544LL)
                                                                            + 8LL)
                                                                + 528LL))(v110);
    pDmaBuffer = a6->pDmaBuffer;
    v50 = v48;
    v51 = (int)v113;
    v52 = &v113[v50];
    if ( a6->pDmaBuffer > v52 )
    {
      v75 = WdLogNewEntry5_WdAssertion(v52);
      *(_QWORD *)(v75 + 24) = 8267LL;
      WdLogEvent5_WdAssertion(v75);
      v51 = (int)v113;
      LODWORD(pDmaBuffer) = a6->pDmaBuffer;
    }
    v53 = (_DWORD)pDmaBuffer - v51;
    v54 = LODWORD(a6->pDmaBufferPrivateData)
        - (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                        + 544LL)
                                                                            + 8LL)
                                                                + 560LL))(v110);
    if ( (*(unsigned int (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                            + 544LL)
                                                                                + 8LL)
                                                                    + 528LL))(v110) < v53 )
    {
      v76 = WdLogNewEntry5_WdAssertion(v55);
      *(_QWORD *)(v76 + 24) = 8274LL;
      WdLogEvent5_WdAssertion(v76);
    }
    if ( *((_BYTE *)this + 398) )
    {
      LODWORD(v57) = 0;
    }
    else
    {
      if ( a6->pPatchLocationListOut < (D3DDDI_PATCHLOCATIONLIST *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL) + 8LL) + 544LL))(v110) )
      {
        v78 = WdLogNewEntry5_WdAssertion(v77);
        *(_QWORD *)(v78 + 24) = 8286LL;
        WdLogEvent5_WdAssertion(v78);
      }
      v79 = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                          + 544LL)
                                                                              + 8LL)
                                                                  + 544LL))(v110);
      v80 = (*(unsigned int (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                               + 544LL)
                                                                                   + 8LL)
                                                                       + 536LL))(v110);
      if ( a6->pPatchLocationListOut > (D3DDDI_PATCHLOCATIONLIST *)(v79 + 24 * v80) )
      {
        v81 = WdLogNewEntry5_WdAssertion(v80);
        *(_QWORD *)(v81 + 24) = 8287LL;
        WdLogEvent5_WdAssertion(v81);
      }
      v57 = ((__int64)a6->pPatchLocationListOut
           - (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                           + 544LL)
                                                                               + 8LL)
                                                                   + 544LL))(v110))
          / 24;
      if ( (*(unsigned int (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                              + 544LL)
                                                                                  + 8LL)
                                                                      + 536LL))(v110) < (unsigned int)v57 )
      {
        v82 = WdLogNewEntry5_WdAssertion(v55);
        *(_QWORD *)(v82 + 24) = 8297LL;
        WdLogEvent5_WdAssertion(v82);
      }
      if ( (qword_1C0079010 & 0x10) != 0 )
      {
        v83 = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                            + 544LL)
                                                                                + 8LL)
                                                                    + 544LL))(v110);
        TraceDxgkPatchLocationList((__int64)this, (__int64)v110, v57, v83);
      }
    }
    if ( !v53
      && !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                            + 520LL)
                                                                + 8LL)
                                                    + 576LL))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                        + 528LL)) )
    {
      v84 = WdLogNewEntry5_WdAssertion(v55);
      *(_QWORD *)(v84 + 24) = 8312LL;
      WdLogEvent5_WdAssertion(v84);
    }
    v58 = *(_DWORD *)a8;
    if ( (*(_DWORD *)a8 & 0x20) != 0 && (_DWORD)v30 == -1071775743 )
    {
      v85 = bTracingEnabled == 0;
      *(_DWORD *)a8 = v58 | 0x40;
      if ( !v85 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q((__int64)v55, &EventPerformanceWarning, v56, 1);
    }
    else
    {
      *(_DWORD *)a8 = v58 & 0xFFFFFFBF;
    }
    *((_QWORD *)a8 + 1) = v110;
    *((_DWORD *)a8 + 12) = 0;
    *((_DWORD *)a8 + 14) = 0;
    *((_DWORD *)a8 + 16) = 0;
    *((_DWORD *)a8 + 18) = 0;
    *((_DWORD *)a8 + 13) = v53;
    *((_DWORD *)a8 + 15) = 3;
    *((_DWORD *)a8 + 17) = v57;
    *((_DWORD *)a8 + 19) = v54;
    if ( *((_BYTE *)this + 398) )
    {
      *((_DWORD *)a8 + 20) = v54;
      *((_DWORD *)a8 + 19) = a6->DmaBufferPrivateDataSize;
    }
    if ( *((_BYTE *)a8 + 348) )
    {
      v59 = (char *)a8 + 496;
      v60 = (char *)a8 + *((_DWORD *)a8 + 125) * ((8 * *((_DWORD *)a8 + 126) + 175) & 0xFFFFFFF8) + 544;
    }
    else
    {
      v59 = (char *)a8 + 472;
      v60 = (char *)a8 + 480;
    }
    if ( *((_DWORD *)a8 + 30) == 4 )
    {
      if ( !v111 )
      {
        v86 = WdLogNewEntry5_WdAssertion(v55);
        *(_QWORD *)(v86 + 24) = 8348LL;
        WdLogEvent5_WdAssertion(v86);
      }
      if ( (*(_DWORD *)a8 & 0x40) != 0 )
      {
        v87 = WdLogNewEntry5_WdAssertion(v55);
        *(_QWORD *)(v87 + 24) = 8349LL;
        WdLogEvent5_WdAssertion(v87);
      }
      v88 = v111;
      *(_DWORD *)v59 = *(_DWORD *)v59 & 0xFFFFFC00 | 1;
      if ( (*(int (__fastcall **)(_QWORD, _QWORD, char *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                             + 16LL)
                                                                                 + 544LL)
                                                                     + 8LL)
                                                         + 408LL))(
             *(_QWORD *)(*((_QWORD *)this + 2) + 608LL),
             *((_QWORD *)v88 + 3),
             v60) < 0 )
      {
        v90 = WdLogNewEntry5_WdAssertion(v89);
        *(_QWORD *)(v90 + 24) = 8368LL;
        WdLogEvent5_WdAssertion(v90);
      }
      if ( *((_BYTE *)a8 + 348) )
        v91 = (char *)a8 + *((_DWORD *)a8 + 125) * ((8 * *((_DWORD *)a8 + 126) + 175) & 0xFFFFFFF8) + 536;
      else
        v91 = (char *)a8 + 496;
      (*(void (__fastcall **)(_QWORD, _QWORD, int *, char *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                                + 16LL)
                                                                                    + 544LL)
                                                                        + 8LL)
                                                            + 216LL))(
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 552LL),
        *(_QWORD *)(*((_QWORD *)v111 + 6) + 8LL),
        &v112,
        v91);
      if ( *((_BYTE *)a8 + 348) )
        *(_WORD *)((char *)a8 + *((_DWORD *)a8 + 125) * ((8 * *((_DWORD *)a8 + 126) + 175) & 0xFFFFFFF8) + 528) = v112;
      else
        *((_DWORD *)a8 + 133) ^= (*((_DWORD *)a8 + 133) ^ (v112 << 17)) & 0x3E0000;
      v92 = v111;
      v93 = *((_QWORD *)v111 + 5);
      if ( v93 && (*(_DWORD *)(v93 + 4) & 8) != 0 )
        v94 = *(_QWORD *)(*(_QWORD *)(v93 + 56) + 176LL);
      else
        v94 = 0LL;
      if ( *((_BYTE *)a8 + 348) )
        *(_QWORD *)((char *)a8 + *((_DWORD *)a8 + 125) * ((8 * *((_DWORD *)a8 + 126) + 175) & 0xFFFFFFF8) + 552) = v94;
      else
        *((_QWORD *)a8 + 69) = v94;
      if ( *((_BYTE *)a8 + 348) )
        v95 = (char *)a8 + *((_DWORD *)a8 + 125) * ((8 * *((_DWORD *)a8 + 126) + 175) & 0xFFFFFFF8) + 520;
      else
        v95 = (char *)a8 + 488;
      *(_QWORD *)v95 = *(_QWORD *)(*((_QWORD *)v92 + 6) + 16LL);
      if ( *((_BYTE *)a8 + 348) )
        v55 = (char *)a8 + *((_DWORD *)a8 + 125) * ((8 * *((_DWORD *)a8 + 126) + 175) & 0xFFFFFFF8) + 512;
      else
        v55 = (char *)a8 + 544;
      *(_QWORD *)v55 = *((_QWORD *)this + 23);
      if ( *((_BYTE *)a8 + 348) )
        *((_DWORD *)a8 + 134) = -1;
    }
    else if ( (*(_DWORD *)v59 & 0x3FF) != 0 )
    {
      v96 = WdLogNewEntry5_WdAssertion(v55);
      *(_QWORD *)(v96 + 24) = 8407LL;
      WdLogEvent5_WdAssertion(v96);
    }
    if ( *((struct _KTHREAD **)this + 52) != KeGetCurrentThread() )
    {
      v61 = WdLogNewEntry5_WdAssertion(v55);
      *(_QWORD *)(v61 + 24) = 8410LL;
      WdLogEvent5_WdAssertion(v61);
    }
    if ( (this[91] & 0x10) != 0 )
    {
      v97 = v121;
      *((_QWORD *)a8 + 59) = *((_QWORD *)v121 + 191);
      v62 = (*(__int64 (__fastcall **)(_QWORD, struct VIDSCH_SUBMIT_DATA_BASE *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 520LL)
                                                                                            + 8LL)
                                                                                + 440LL))(
              *(_QWORD *)(*((_QWORD *)v97 + 190) + 40LL),
              a8);
    }
    else
    {
      v62 = (*(__int64 (__fastcall **)(_QWORD, struct VIDSCH_SUBMIT_DATA_BASE *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 520LL)
                                                                                            + 8LL)
                                                                                + 432LL))(
              *((_QWORD *)this + 29),
              a8);
    }
    v63 = v62;
    if ( v62 < 0 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 520LL)
                                                         + 8LL)
                                             + 448LL))(
        *((_QWORD *)this + 29),
        0LL);
      if ( (*(_DWORD *)v59 & 0x3FF) != 0 && *(_QWORD *)v60 )
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                       + 544LL)
                                                                           + 8LL)
                                                               + 424LL))(
          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 552LL),
          *((unsigned int *)a8 + 34),
          *(_QWORD *)v60,
          0LL);
      LODWORD(v30) = v63;
      goto LABEL_144;
    }
    v110 = 0LL;
    v9 = 0LL;
    v109 = 0;
    if ( (_DWORD)v30 != -1071775743 )
      return (unsigned int)v30;
    v11 = v114;
    v12 = v111;
    v13 = v122;
  }
  if ( (a6->Flags.Value & 4) == 0 )
    goto LABEL_35;
  v70 = WdLogNewEntry5_WdError(v46);
  *(_QWORD *)(v70 + 24) = this;
  WdLogEvent5_WdError(v70);
  LODWORD(v30) = -1073741823;
LABEL_86:
  if ( (this[91] & 0x10) == 0 )
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 520LL)
                                                       + 8LL)
                                           + 448LL))(
      *((_QWORD *)this + 29),
      0LL);
  if ( (_DWORD)v30 == -1071775736 )
  {
    v71 = WdLogNewEntry5_WdEvent(v46, v45);
    *(_QWORD *)(v71 + 24) = this;
    *(_QWORD *)(v71 + 32) = -1071775736LL;
    WdLogEvent5_WdEvent(v71);
  }
  else
  {
    v100 = WdLogNewEntry5_WdError(v46);
    *(_QWORD *)(v100 + 24) = this;
    *(_QWORD *)(v100 + 32) = (int)v30;
    WdLogEvent5_WdError(v100);
  }
LABEL_145:
  if ( v110 )
  {
    if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
    {
      v105 = 0;
      if ( *((_DWORD *)a8 + 48) )
      {
        do
        {
          v106 = (char *)a8 + 8 * v105;
          v107 = *((_QWORD *)v106 + 25);
          if ( v107 )
          {
            (*(void (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                            + 544LL)
                                                                                + 8LL)
                                                                    + 424LL))(
              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 552LL),
              0LL,
              v107,
              0LL);
            *((_QWORD *)v106 + 25) = 0LL;
          }
          ++v105;
        }
        while ( v105 < *((_DWORD *)a8 + 48) );
        v104 = *((_QWORD *)this + 2);
        v103 = v110;
        v102 = v104;
      }
    }
    if ( v32 )
    {
      VIDMM_EXPORT::VidMmUnreferenceDmaBuffer(*(VIDMM_EXPORT **)(*(_QWORD *)(v104 + 16) + 544LL), v103);
      v102 = *((_QWORD *)this + 2);
      v103 = v110;
    }
    (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v102 + 16) + 544LL)
                                                                           + 8LL)
                                                               + 496LL))(
      v103,
      0LL);
  }
  return (unsigned int)v30;
}
