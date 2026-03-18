/*
 * XREFs of ?RenderKmLda@DXGCONTEXT@@SAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCATION@@@Z @ 0x1C01BD78C
 * Callers:
 *     ?DxgkCddGdiCommand@@YAJPEAU_D3DKMT_RENDER@@@Z @ 0x1C00BFD00 (-DxgkCddGdiCommand@@YAJPEAU_D3DKMT_RENDER@@@Z.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002CE0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetRenderHwQueue@DXGCONTEXT@@QEBAPEAU_VIDSCH_CONTEXT@@XZ @ 0x1C0008EC0 (-GetRenderHwQueue@DXGCONTEXT@@QEBAPEAU_VIDSCH_CONTEXT@@XZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C0008EE0 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C0008F30 (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?VidMmReferenceDmaBuffer@VIDMM_EXPORT@@QEAAJPEAU_VIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEAKPEAT_LARGE_INTEGER@@PEA_KPEAPEAUVIDMM_ALLOC@@PEAU_VIDMM_PRIMARIES_REFERENCES@@PEAPEAVDXGALLOCATION@@@Z @ 0x1C001DC78 (-VidMmReferenceDmaBuffer@VIDMM_EXPORT@@QEAAJPEAU_VIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@I.c)
 *     McTemplateK0p @ 0x1C00204D4 (McTemplateK0p.c)
 *     ?VidMmUnreferenceDmaBuffer@VIDMM_EXPORT@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z @ 0x1C0029060 (-VidMmUnreferenceDmaBuffer@VIDMM_EXPORT@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0086DD0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0086E10 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1?$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ @ 0x1C00E75F0 (--1-$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ.c)
 *     ?AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C016F500 (-AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z.c)
 *     ?DdiRenderGdi@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDERGDI@@@Z @ 0x1C016FAD0 (-DdiRenderGdi@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDERGDI@@@Z.c)
 */

__int64 __fastcall DXGCONTEXT::RenderKmLda(
        struct _D3DKMT_RENDER *a1,
        struct COREDEVICEACCESS *a2,
        struct DXGCONTEXT **a3,
        struct DXGALLOCATION **a4)
{
  struct DXGCONTEXT *v4; // rax
  struct _D3DKMT_RENDER *v5; // r13
  struct DXGCONTEXT **v6; // r15
  __int64 v7; // r10
  struct DXGPROCESS *Current; // rax
  ULONG BroadcastContextCount; // edi
  struct _D3DDDI_ALLOCATIONLIST *v10; // r14
  signed int v11; // edi
  unsigned __int64 AllocationCount; // rbx
  struct _D3DDDI_ALLOCATIONLIST *PoolWithTag; // r14
  __int64 v14; // rdi
  unsigned __int64 v15; // rbx
  struct DXGALLOCATION **v16; // rsi
  struct DXGALLOCATION **v17; // rsi
  __int64 v18; // r12
  __int64 v19; // rax
  __int64 v20; // rdi
  DXGCONTEXT *v21; // r15
  __int64 v22; // r12
  struct DXGALLOCATION **v23; // rax
  D3DKMT_HANDLE hAllocation; // edi
  __int64 v25; // rax
  __int64 v26; // r8
  int v27; // edx
  struct _EX_RUNDOWN_REF *v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rdx
  struct _SLIST_ENTRY *v32; // rbx
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  const EVENT_DESCRIPTOR *v38; // rdx
  __int64 v39; // rcx
  VIDMM_EXPORT *v40; // rsi
  int v41; // eax
  bool v42; // sf
  __int64 v43; // rax
  void *v44; // r13
  UINT v45; // r12d
  DXGK_ALLOCATIONLIST *v46; // r14
  UINT v47; // r15d
  void *v48; // rdi
  UINT v49; // esi
  __int64 v50; // rdx
  int v51; // eax
  VIDMM_EXPORT *v52; // rsi
  __int64 v53; // rcx
  int v54; // eax
  struct _SLIST_ENTRY *v55; // r9
  int v56; // r8d
  int v57; // edx
  int v58; // eax
  struct _VIDSCH_CONTEXT *RenderHwQueue; // rax
  __int64 v60; // r13
  __int64 v61; // r9
  int v62; // eax
  _QWORD *v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // rax
  __int64 v68; // rbx
  struct DXGCONTEXT **v69; // r14
  struct _VIDSCH_CONTEXT *v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  struct DXGALLOCATION **v78; // [rsp+58h] [rbp-A8h]
  struct _VIDMM_DMA_BUFFER *v79; // [rsp+60h] [rbp-A0h] BYREF
  UINT MultipassOffset; // [rsp+68h] [rbp-98h]
  int v81; // [rsp+6Ch] [rbp-94h]
  struct DXGALLOCATION **v82; // [rsp+70h] [rbp-90h]
  struct _D3DDDI_ALLOCATIONLIST *v83; // [rsp+78h] [rbp-88h]
  struct _D3DKMT_RENDER *v84; // [rsp+80h] [rbp-80h]
  struct _EX_RUNDOWN_REF *v85; // [rsp+88h] [rbp-78h] BYREF
  struct DXGPROCESS *v86; // [rsp+90h] [rbp-70h]
  void *v87; // [rsp+98h] [rbp-68h] BYREF
  struct VIDMM_ALLOC *v88; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v89; // [rsp+A8h] [rbp-58h]
  struct _SLIST_ENTRY *v90[2]; // [rsp+B0h] [rbp-50h] BYREF
  DXGCONTEXT *v91; // [rsp+C0h] [rbp-40h]
  ADAPTER_RENDER *v92; // [rsp+C8h] [rbp-38h]
  VIDMM_EXPORT *v93; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v94; // [rsp+D8h] [rbp-28h] BYREF
  struct DXGCONTEXT **v95; // [rsp+E0h] [rbp-20h]
  unsigned int v96; // [rsp+E8h] [rbp-18h] BYREF
  struct DXGALLOCATION **v97; // [rsp+F0h] [rbp-10h]
  struct _SLIST_ENTRY *v98; // [rsp+F8h] [rbp-8h]
  struct COREDEVICEACCESS *v99; // [rsp+100h] [rbp+0h]
  __int64 v100; // [rsp+108h] [rbp+8h]
  __int64 v101; // [rsp+110h] [rbp+10h]
  _DXGKARG_RENDERGDI v102; // [rsp+120h] [rbp+20h] BYREF
  union _LARGE_INTEGER v103; // [rsp+170h] [rbp+70h] BYREF
  struct DXGALLOCATION **v104; // [rsp+180h] [rbp+80h] BYREF
  char v105; // [rsp+188h] [rbp+88h] BYREF
  int v106; // [rsp+208h] [rbp+108h]
  _QWORD v107[12]; // [rsp+220h] [rbp+120h] BYREF
  struct _D3DDDI_ALLOCATIONLIST *v108; // [rsp+280h] [rbp+180h] BYREF
  char v109; // [rsp+288h] [rbp+188h] BYREF
  int v110; // [rsp+308h] [rbp+208h]

  v4 = *a3;
  v5 = a1;
  v84 = a1;
  v6 = a3;
  v97 = a4;
  v95 = a3;
  v7 = *((_QWORD *)v4 + 2);
  v99 = a2;
  v92 = *(ADAPTER_RENDER **)(v7 + 16);
  v93 = (VIDMM_EXPORT *)*((_QWORD *)v92 + 66);
  v100 = *((_QWORD *)v92 + 63);
  Current = DXGPROCESS::GetCurrent((__int64)v92, (__int64)a2);
  BroadcastContextCount = v5->BroadcastContextCount;
  v10 = 0LL;
  v110 = 0;
  v11 = BroadcastContextCount + 1;
  AllocationCount = v5->AllocationCount;
  v86 = Current;
  v83 = 0LL;
  v108 = 0LL;
  if ( (unsigned int)AllocationCount <= 0x10 )
  {
    PoolWithTag = (struct _D3DDDI_ALLOCATIONLIST *)&v109;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / AllocationCount < 8 )
      goto LABEL_7;
    PoolWithTag = (struct _D3DDDI_ALLOCATIONLIST *)ExAllocatePoolWithTag(
                                                     PagedPool,
                                                     8LL * (unsigned int)AllocationCount,
                                                     0x4B677844u);
  }
  v108 = PoolWithTag;
  v83 = PoolWithTag;
  v110 = AllocationCount;
  if ( !PoolWithTag )
  {
LABEL_8:
    LODWORD(v14) = -1073741801;
    goto LABEL_71;
  }
  memset(PoolWithTag, 0, 8 * AllocationCount);
  v10 = v108;
  v83 = v108;
LABEL_7:
  if ( !v10 )
    goto LABEL_8;
  v15 = v5->AllocationCount;
  v16 = 0LL;
  v106 = 0;
  v82 = 0LL;
  v104 = 0LL;
  if ( (unsigned int)v15 <= 0x10 )
  {
    v17 = (struct DXGALLOCATION **)&v105;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v15 < 8 )
      goto LABEL_15;
    v17 = (struct DXGALLOCATION **)ExAllocatePoolWithTag(PagedPool, 8LL * (unsigned int)v15, 0x4B677844u);
  }
  v104 = v17;
  v82 = v17;
  v106 = v15;
  if ( !v17 )
  {
LABEL_16:
    LODWORD(v14) = -1073741801;
    goto LABEL_70;
  }
  memset(v17, 0, 8 * v15);
  v16 = v104;
  v82 = v104;
LABEL_15:
  if ( !v16 )
    goto LABEL_16;
  LODWORD(v18) = 0;
  v81 = 0;
  v19 = v11;
  v20 = 0LL;
  v101 = v19;
  v89 = 0LL;
  if ( v19 <= 0 )
  {
LABEL_69:
    LODWORD(v14) = v18;
    goto LABEL_70;
  }
LABEL_18:
  LODWORD(v98) = ((*(_DWORD *)&v5->Flags & 8) << 12) | 0x100;
  memset(v107, 0, sizeof(v107));
  v21 = v6[v20];
  v22 = 0LL;
  v91 = v21;
  MultipassOffset = *((_DWORD *)v21 + 90);
  if ( !v5->AllocationCount )
  {
LABEL_36:
    v32 = v98;
    MultipassOffset = HIDWORD(v107[9]);
    while ( 1 )
    {
      v79 = 0LL;
      v33 = DXGCONTEXT::AcquireDmaBuffer(v21, &v79, v99, 0);
      v14 = v33;
      if ( v33 < 0 )
      {
        v76 = WdLogNewEntry5_WdEvent(v35, v34, v36, v37);
        *(_QWORD *)(v76 + 24) = v21;
        *(_QWORD *)(v76 + 32) = v14;
        WdLogEvent5_WdEvent(v76);
        goto LABEL_70;
      }
      if ( !bTracingEnabled )
        goto LABEL_45;
      if ( (*(_DWORD *)&v5->Flags & 0x20) != 0 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          v38 = (const EVENT_DESCRIPTOR *)&EventRenderKm;
LABEL_44:
          McTemplateK0p(&DxgkControlGuid_Context, v38, v36, v79);
        }
      }
      else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        v38 = &EventRender;
        goto LABEL_44;
      }
LABEL_45:
      v90[1] = (struct _SLIST_ENTRY *)v92;
      v88 = 0LL;
      v90[0] = 0LL;
      CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v90);
      if ( !v90[0] )
      {
        v75 = WdLogNewEntry5_WdLowResource(v39);
        *(_QWORD *)(v75 + 24) = 1095LL;
        WdLogEvent5_WdLowResource(v75);
        LODWORD(v14) = -1073741801;
        goto LABEL_67;
      }
      v78 = v16;
      v40 = v93;
      v41 = VIDMM_EXPORT::VidMmReferenceDmaBuffer(
              v93,
              v79,
              v10,
              v5->AllocationCount,
              1,
              1,
              &v96,
              &v103,
              &v94,
              &v88,
              (struct _VIDMM_PRIMARIES_REFERENCES *)&v90[0][12],
              v78);
      v42 = v41 < 0;
      v14 = v41;
      v43 = *((_QWORD *)v40 + 1);
      if ( v42 )
      {
        (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(v43 + 496))(v79, 0LL);
        v79 = 0LL;
        goto LABEL_64;
      }
      v87 = 0LL;
      (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, void **))(v43 + 504))(v79, &v87);
      v44 = v87;
      v45 = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*((_QWORD *)v40 + 1) + 528LL))(v79);
      v46 = (DXGK_ALLOCATIONLIST *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*((_QWORD *)v40 + 1) + 552LL))(v79);
      v47 = v84->AllocationCount;
      v48 = (void *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*((_QWORD *)v40 + 1) + 560LL))(v79);
      v49 = *((_DWORD *)v91 + 50);
      v102.pCommand = (char *)v84->pNewCommandBuffer + v84->CommandOffset;
      v102.CommandLength = v84->CommandLength;
      memset(&v102.pDmaBuffer, 0, 0x38uLL);
      v102.AllocationListSize = v47;
      v21 = v91;
      v102.DmaBufferGpuVirtualAddress = v94;
      v102.pDmaBuffer = v44;
      v50 = *((_QWORD *)v91 + 23);
      v102.DmaSize = v45;
      v102.pDmaBufferPrivateData = v48;
      v102.DmaBufferPrivateDataSize = v49;
      v102.pAllocationList = v46;
      v102.MultipassOffset = MultipassOffset;
      v51 = ADAPTER_RENDER::DdiRenderGdi(v92, v50, &v102);
      v52 = v93;
      v107[0] = v102.pDmaBuffer;
      v107[2] = v102.pDmaBufferPrivateData;
      v53 = *((_QWORD *)v93 + 1);
      v18 = v51;
      MultipassOffset = v102.MultipassOffset;
      (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(v53 + 512))(v79);
      if ( (int)(v18 + 0x80000000) >= 0 && (_DWORD)v18 != -1071775743 )
      {
        VIDMM_EXPORT::VidMmUnreferenceDmaBuffer(v52, v79);
        (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*((_QWORD *)v52 + 1) + 496LL))(v79, 0LL);
        v79 = 0LL;
        v67 = WdLogNewEntry5_WdWarning(v65, v64, v66);
        *(_QWORD *)(v67 + 24) = v21;
        *(_QWORD *)(v67 + 32) = v18;
        WdLogEvent5_WdWarning(v67);
        LODWORD(v14) = v18;
        goto LABEL_67;
      }
      v54 = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*((_QWORD *)v52 + 1) + 560LL))(v79);
      v55 = v90[0];
      v56 = v54;
      v57 = LODWORD(v107[0]) - (_DWORD)v87;
      v58 = v107[2];
      v90[0]->Next = v32;
      LODWORD(v55->Next) |= 0x8000000u;
      *((_QWORD *)&v55[2].Next + 1) = v94;
      *((_QWORD *)&v55->Next + 1) = v79;
      HIDWORD(v55[3].Next) = v57;
      LODWORD(v55[3].Next) = 0;
      *((_QWORD *)&v55[3].Next + 1) = 0LL;
      v55[4].Next = 0LL;
      *((_DWORD *)&v55[4].Next + 3) = v58 - v56;
      *((_DWORD *)&v55[4].Next + 2) = 0;
      if ( v88 )
      {
        *((_DWORD *)&v55[21].Next + 2) = 1;
        v55[21].Next = (struct _SLIST_ENTRY *)&v88;
      }
      else
      {
        v55[21].Next = 0LL;
        *((_DWORD *)&v55[21].Next + 2) = 0;
      }
      RenderHwQueue = DXGCONTEXT::GetRenderHwQueue(v21);
      v60 = v100;
      v62 = (*(__int64 (__fastcall **)(struct _VIDSCH_CONTEXT *, __int64))(*(_QWORD *)(v100 + 8) + 344LL))(
              RenderHwQueue,
              v61);
      v14 = v62;
      if ( v62 < 0 )
      {
        v68 = v81;
        if ( v81 >= 0 )
        {
          v69 = v95;
          do
          {
            v70 = DXGCONTEXT::GetRenderHwQueue(v69[v68]);
            (*(void (__fastcall **)(struct _VIDSCH_CONTEXT *, _QWORD))(*(_QWORD *)(v60 + 8) + 352LL))(v70, 0LL);
            --v68;
          }
          while ( v68 >= 0 );
        }
        VIDMM_EXPORT::VidMmUnreferenceDmaBuffer(v52, v79);
        (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*((_QWORD *)v52 + 1) + 496LL))(v79, 0LL);
        v79 = 0LL;
LABEL_64:
        v74 = WdLogNewEntry5_WdWarning(v72, v71, v73);
        *(_QWORD *)(v74 + 24) = v21;
        *(_QWORD *)(v74 + 32) = v14;
        WdLogEvent5_WdWarning(v74);
LABEL_67:
        CVidSchSubmitData::~CVidSchSubmitData(v90);
        goto LABEL_70;
      }
      CVidSchSubmitData::~CVidSchSubmitData(v90);
      v16 = v82;
      v10 = v83;
      v5 = v84;
      if ( (_DWORD)v18 != -1071775743 )
      {
        ++v81;
        v20 = v89 + 1;
        v89 = v20;
        if ( v20 >= v101 )
          goto LABEL_69;
        v6 = v95;
        goto LABEL_18;
      }
    }
  }
  while ( 1 )
  {
    v23 = v97;
    v10[v22] = v5->pNewAllocationList[v22];
    v16[v22] = v23[v22];
    if ( !v20 )
      goto LABEL_35;
    hAllocation = v5->pNewAllocationList[v22].hAllocation;
    DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)v86 + 200));
    v25 = (hAllocation >> 6) & 0xFFFFFF;
    if ( (unsigned int)v25 < *((_DWORD *)v86 + 60)
      && (v26 = *((_QWORD *)v86 + 28),
          v27 = *(_DWORD *)(v26 + 16 * v25 + 8),
          ((hAllocation >> 25) & 0x60) == (*(_BYTE *)(v26 + 16 * v25 + 8) & 0x60))
      && (v27 & 0x2000) == 0
      && (v27 & 0x1F) != 0
      && (*(_BYTE *)(v26 + 16LL * (unsigned int)v25 + 8) & 0x1F) == 5 )
    {
      v28 = *(struct _EX_RUNDOWN_REF **)(v26 + 16LL * (unsigned int)v25);
    }
    else
    {
      v28 = 0LL;
    }
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v85, v28);
    ExReleasePushLockSharedEx((char *)v86 + 200, 0LL);
    KeLeaveCriticalRegion();
    LODWORD(v14) = -1073741811;
    if ( !v85 )
      break;
    v30 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v21 + 2) + 16LL) + 16LL);
    if ( *(_QWORD *)(*(_QWORD *)(v85[1].Count + 16) + 16LL) != v30 )
    {
      v63 = (_QWORD *)WdLogNewEntry5_WdError(v30);
      v63[3] = *((_QWORD *)v21 + 2);
      v63[4] = v85;
      v63[5] = -1073741811LL;
      goto LABEL_58;
    }
    v31 = *(_QWORD *)(v85[5].Count + 24);
    if ( v31 )
    {
      do
      {
        if ( ((*(_DWORD *)(v31 + 72) >> 12) & 0x3F) == MultipassOffset )
          break;
        v31 = *(_QWORD *)(v31 + 64);
      }
      while ( v31 );
      if ( v31 )
      {
        v10[v22].hAllocation = *(_DWORD *)(v31 + 16);
        v16[v22] = (struct DXGALLOCATION *)v31;
      }
    }
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v85);
    v20 = v89;
LABEL_35:
    v22 = (unsigned int)(v22 + 1);
    if ( (unsigned int)v22 >= v5->AllocationCount )
      goto LABEL_36;
  }
  v63 = (_QWORD *)WdLogNewEntry5_WdError(v29);
  v63[3] = 1016LL;
LABEL_58:
  WdLogEvent5_WdError(v63);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v85);
LABEL_70:
  PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>((PVOID *)&v104);
LABEL_71:
  PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>((PVOID *)&v108);
  return (unsigned int)v14;
}
