/*
 * XREFs of ?RenderKmLda@DXGCONTEXT@@SAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCATION@@@Z @ 0x1C01A3BD4
 * Callers:
 *     ?DxgkCddGdiCommand@@YAJPEAU_D3DKMT_RENDER@@@Z @ 0x1C0093F70 (-DxgkCddGdiCommand@@YAJPEAU_D3DKMT_RENDER@@@Z.c)
 * Callees:
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C0004AD0 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C0004B20 (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006E30 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     Template_p @ 0x1C0013458 (Template_p.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?VidMmReferenceDmaBuffer@VIDMM_EXPORT@@QEAAJPEAU_VIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEAKPEAT_LARGE_INTEGER@@PEA_KPEAPEAUVIDMM_ALLOC@@PEAU_VIDMM_PRIMARIES_REFERENCES@@PEAPEAVDXGALLOCATION@@@Z @ 0x1C00209E8 (-VidMmReferenceDmaBuffer@VIDMM_EXPORT@@QEAAJPEAU_VIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@I.c)
 *     ?VidMmUnreferenceDmaBuffer@VIDMM_EXPORT@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z @ 0x1C0038E00 (-VidMmUnreferenceDmaBuffer@VIDMM_EXPORT@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z.c)
 *     ??1?$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ @ 0x1C0097FE0 (--1-$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ.c)
 *     ?AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C00B9EE0 (-AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00CCDB0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00CCDF0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?DdiRenderGdi@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDERGDI@@@Z @ 0x1C016BED0 (-DdiRenderGdi@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDERGDI@@@Z.c)
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
  struct DXGCONTEXT *v21; // r15
  __int64 v22; // r12
  struct DXGALLOCATION **v23; // rax
  D3DKMT_HANDLE hAllocation; // edi
  unsigned int v25; // ecx
  __int64 v26; // r8
  int v27; // edx
  struct _EX_RUNDOWN_REF *v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r9
  __int64 v32; // r8
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdx
  struct _SLIST_ENTRY *v36; // rbx
  int v37; // eax
  __int64 v38; // rcx
  __int64 v39; // r8
  const EVENT_DESCRIPTOR *v40; // rdx
  __int64 v41; // rcx
  VIDMM_EXPORT *v42; // rsi
  int v43; // eax
  bool v44; // sf
  __int64 v45; // rax
  void *v46; // r13
  UINT v47; // r12d
  DXGK_ALLOCATIONLIST *v48; // r14
  UINT v49; // r15d
  void *v50; // rdi
  UINT v51; // esi
  void *v52; // rdx
  int v53; // eax
  VIDMM_EXPORT *v54; // rsi
  __int64 v55; // rcx
  int v56; // eax
  struct _SLIST_ENTRY *v57; // r9
  int v58; // r8d
  int v59; // edx
  int v60; // eax
  __int64 v61; // r13
  int v62; // eax
  _QWORD *v63; // rax
  __int64 v64; // rdx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v71; // rax
  __int64 v72; // rbx
  struct DXGCONTEXT **v73; // r14
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rax
  struct DXGALLOCATION **v82; // [rsp+58h] [rbp-A8h]
  struct _VIDMM_DMA_BUFFER *v83; // [rsp+60h] [rbp-A0h] BYREF
  UINT MultipassOffset; // [rsp+68h] [rbp-98h]
  int v85; // [rsp+6Ch] [rbp-94h]
  struct DXGALLOCATION **v86; // [rsp+70h] [rbp-90h]
  struct _D3DDDI_ALLOCATIONLIST *v87; // [rsp+78h] [rbp-88h]
  struct _D3DKMT_RENDER *v88; // [rsp+80h] [rbp-80h]
  struct _EX_RUNDOWN_REF *v89; // [rsp+88h] [rbp-78h] BYREF
  struct DXGPROCESS *v90; // [rsp+90h] [rbp-70h]
  void *v91; // [rsp+98h] [rbp-68h] BYREF
  struct VIDMM_ALLOC *v92; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v93; // [rsp+A8h] [rbp-58h]
  struct _SLIST_ENTRY *v94[2]; // [rsp+B0h] [rbp-50h] BYREF
  struct DXGCONTEXT *v95; // [rsp+C0h] [rbp-40h]
  ADAPTER_RENDER *v96; // [rsp+C8h] [rbp-38h]
  VIDMM_EXPORT *v97; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v98; // [rsp+D8h] [rbp-28h] BYREF
  struct DXGCONTEXT **v99; // [rsp+E0h] [rbp-20h]
  unsigned int v100; // [rsp+E8h] [rbp-18h] BYREF
  struct DXGALLOCATION **v101; // [rsp+F0h] [rbp-10h]
  struct _SLIST_ENTRY *v102; // [rsp+F8h] [rbp-8h]
  struct COREDEVICEACCESS *v103; // [rsp+100h] [rbp+0h]
  __int64 v104; // [rsp+108h] [rbp+8h]
  __int64 v105; // [rsp+110h] [rbp+10h]
  _DXGKARG_RENDERGDI v106; // [rsp+120h] [rbp+20h] BYREF
  union _LARGE_INTEGER v107; // [rsp+170h] [rbp+70h] BYREF
  struct DXGALLOCATION **v108; // [rsp+180h] [rbp+80h] BYREF
  char v109; // [rsp+188h] [rbp+88h] BYREF
  int v110; // [rsp+208h] [rbp+108h]
  _QWORD v111[12]; // [rsp+220h] [rbp+120h] BYREF
  struct _D3DDDI_ALLOCATIONLIST *v112; // [rsp+280h] [rbp+180h] BYREF
  char v113; // [rsp+288h] [rbp+188h] BYREF
  int v114; // [rsp+308h] [rbp+208h]

  v4 = *a3;
  v5 = a1;
  v88 = a1;
  v6 = a3;
  v101 = a4;
  v99 = a3;
  v7 = *((_QWORD *)v4 + 2);
  v103 = a2;
  v96 = *(ADAPTER_RENDER **)(v7 + 16);
  v97 = (VIDMM_EXPORT *)*((_QWORD *)v96 + 54);
  v104 = *((_QWORD *)v96 + 51);
  Current = DXGPROCESS::GetCurrent((__int64)v96);
  BroadcastContextCount = v5->BroadcastContextCount;
  v10 = 0LL;
  v114 = 0;
  v11 = BroadcastContextCount + 1;
  AllocationCount = v5->AllocationCount;
  v90 = Current;
  v87 = 0LL;
  v112 = 0LL;
  if ( (unsigned int)AllocationCount <= 0x10 )
  {
    PoolWithTag = (struct _D3DDDI_ALLOCATIONLIST *)&v113;
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
  v112 = PoolWithTag;
  v87 = PoolWithTag;
  v114 = AllocationCount;
  if ( !PoolWithTag )
  {
LABEL_8:
    LODWORD(v14) = -1073741801;
    goto LABEL_71;
  }
  memset(PoolWithTag, 0, 8 * AllocationCount);
  v10 = v112;
  v87 = v112;
LABEL_7:
  if ( !v10 )
    goto LABEL_8;
  v15 = v5->AllocationCount;
  v16 = 0LL;
  v110 = 0;
  v86 = 0LL;
  v108 = 0LL;
  if ( (unsigned int)v15 <= 0x10 )
  {
    v17 = (struct DXGALLOCATION **)&v109;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v15 < 8 )
      goto LABEL_15;
    v17 = (struct DXGALLOCATION **)ExAllocatePoolWithTag(PagedPool, 8LL * (unsigned int)v15, 0x4B677844u);
  }
  v108 = v17;
  v86 = v17;
  v110 = v15;
  if ( !v17 )
  {
LABEL_16:
    LODWORD(v14) = -1073741801;
    goto LABEL_70;
  }
  memset(v17, 0, 8 * v15);
  v16 = v108;
  v86 = v108;
LABEL_15:
  if ( !v16 )
    goto LABEL_16;
  LODWORD(v18) = 0;
  v85 = 0;
  v19 = v11;
  v20 = 0LL;
  v105 = v19;
  v93 = 0LL;
  if ( v19 <= 0 )
  {
LABEL_69:
    LODWORD(v14) = v18;
    goto LABEL_70;
  }
LABEL_18:
  LODWORD(v102) = ((*(_DWORD *)&v5->Flags & 8) << 12) | 0x100;
  memset(v111, 0, sizeof(v111));
  v21 = v6[v20];
  v22 = 0LL;
  v95 = v21;
  MultipassOffset = *((_DWORD *)v21 + 86);
  if ( !v5->AllocationCount )
  {
LABEL_36:
    v36 = v102;
    MultipassOffset = HIDWORD(v111[9]);
    while ( 1 )
    {
      v83 = 0LL;
      v37 = DXGCONTEXT::AcquireDmaBuffer(v21, &v83, v103, 0);
      v14 = v37;
      if ( v37 < 0 )
      {
        v80 = WdLogNewEntry5_WdEvent(v38);
        *(_QWORD *)(v80 + 24) = v21;
        *(_QWORD *)(v80 + 32) = v14;
        WdLogEvent5_WdEvent(v80);
        goto LABEL_70;
      }
      if ( !bTracingEnabled )
        goto LABEL_45;
      if ( (*(_DWORD *)&v5->Flags & 0x20) != 0 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          v40 = (const EVENT_DESCRIPTOR *)&EventRenderKm;
LABEL_44:
          Template_p(v38, v40, v39, v83);
        }
      }
      else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        v40 = &EventRender;
        goto LABEL_44;
      }
LABEL_45:
      v94[1] = (struct _SLIST_ENTRY *)v96;
      v92 = 0LL;
      v94[0] = 0LL;
      CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v94);
      if ( !v94[0] )
      {
        v79 = WdLogNewEntry5_WdLowResource(v41);
        *(_QWORD *)(v79 + 24) = 1080LL;
        WdLogEvent5_WdLowResource(v79);
        LODWORD(v14) = -1073741801;
        goto LABEL_67;
      }
      v82 = v16;
      v42 = v97;
      v43 = VIDMM_EXPORT::VidMmReferenceDmaBuffer(
              v97,
              v83,
              v10,
              v5->AllocationCount,
              1,
              1,
              &v100,
              &v107,
              &v98,
              &v92,
              (struct _VIDMM_PRIMARIES_REFERENCES *)&v94[0][12],
              v82);
      v44 = v43 < 0;
      v14 = v43;
      v45 = *((_QWORD *)v42 + 1);
      if ( v44 )
      {
        (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(v45 + 496))(v83, 0LL);
        v83 = 0LL;
        goto LABEL_64;
      }
      v91 = 0LL;
      (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, void **))(v45 + 504))(v83, &v91);
      v46 = v91;
      v47 = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*((_QWORD *)v42 + 1) + 528LL))(v83);
      v48 = (DXGK_ALLOCATIONLIST *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*((_QWORD *)v42 + 1) + 552LL))(v83);
      v49 = v88->AllocationCount;
      v50 = (void *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*((_QWORD *)v42 + 1) + 560LL))(v83);
      v51 = *((_DWORD *)v95 + 50);
      v106.pCommand = (char *)v88->pNewCommandBuffer + v88->CommandOffset;
      v106.CommandLength = v88->CommandLength;
      memset(&v106.pDmaBuffer, 0, 0x38uLL);
      v106.AllocationListSize = v49;
      v21 = v95;
      v106.DmaBufferGpuVirtualAddress = v98;
      v106.pDmaBuffer = v46;
      v52 = (void *)*((_QWORD *)v95 + 23);
      v106.DmaSize = v47;
      v106.pDmaBufferPrivateData = v50;
      v106.DmaBufferPrivateDataSize = v51;
      v106.pAllocationList = v48;
      v106.MultipassOffset = MultipassOffset;
      v53 = ADAPTER_RENDER::DdiRenderGdi(v96, v52, &v106);
      v54 = v97;
      v111[0] = v106.pDmaBuffer;
      v111[2] = v106.pDmaBufferPrivateData;
      v55 = *((_QWORD *)v97 + 1);
      v18 = v53;
      MultipassOffset = v106.MultipassOffset;
      (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(v55 + 512))(v83);
      if ( (int)(v18 + 0x80000000) >= 0 && (_DWORD)v18 != -1071775743 )
      {
        VIDMM_EXPORT::VidMmUnreferenceDmaBuffer(v54, v83);
        (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*((_QWORD *)v54 + 1) + 496LL))(v83, 0LL);
        v83 = 0LL;
        v71 = WdLogNewEntry5_WdWarning(v68, v67, v69, v70);
        *(_QWORD *)(v71 + 24) = v21;
        *(_QWORD *)(v71 + 32) = v18;
        WdLogEvent5_WdWarning(v71);
        LODWORD(v14) = v18;
        goto LABEL_67;
      }
      v56 = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*((_QWORD *)v54 + 1) + 560LL))(v83);
      v57 = v94[0];
      v58 = v56;
      v59 = LODWORD(v111[0]) - (_DWORD)v91;
      v60 = v111[2];
      v94[0]->Next = v36;
      LODWORD(v57->Next) |= 0x8000000u;
      *((_QWORD *)&v57[2].Next + 1) = v98;
      *((_QWORD *)&v57->Next + 1) = v83;
      HIDWORD(v57[3].Next) = v59;
      LODWORD(v57[3].Next) = 0;
      *((_QWORD *)&v57[3].Next + 1) = 0LL;
      v57[4].Next = 0LL;
      *((_DWORD *)&v57[4].Next + 3) = v60 - v58;
      *((_DWORD *)&v57[4].Next + 2) = 0;
      if ( v92 )
      {
        *((_DWORD *)&v57[21].Next + 2) = 1;
        v57[21].Next = (struct _SLIST_ENTRY *)&v92;
      }
      else
      {
        v57[21].Next = 0LL;
        *((_DWORD *)&v57[21].Next + 2) = 0;
      }
      v61 = v104;
      v62 = (*(__int64 (__fastcall **)(_QWORD, struct _SLIST_ENTRY *))(*(_QWORD *)(v104 + 8) + 344LL))(
              *((_QWORD *)v21 + 29),
              v57);
      v14 = v62;
      if ( v62 < 0 )
      {
        v72 = v85;
        if ( v85 >= 0 )
        {
          v73 = v99;
          do
            (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(v61 + 8) + 352LL))(*((_QWORD *)v73[v72--] + 29), 0LL);
          while ( v72 >= 0 );
        }
        VIDMM_EXPORT::VidMmUnreferenceDmaBuffer(v54, v83);
        (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*((_QWORD *)v54 + 1) + 496LL))(v83, 0LL);
        v83 = 0LL;
LABEL_64:
        v78 = WdLogNewEntry5_WdWarning(v75, v74, v76, v77);
        *(_QWORD *)(v78 + 24) = v21;
        *(_QWORD *)(v78 + 32) = v14;
        WdLogEvent5_WdWarning(v78);
LABEL_67:
        CVidSchSubmitData::~CVidSchSubmitData(v94);
        goto LABEL_70;
      }
      CVidSchSubmitData::~CVidSchSubmitData(v94);
      v16 = v86;
      v10 = v87;
      v5 = v88;
      if ( (_DWORD)v18 != -1071775743 )
      {
        ++v85;
        v20 = v93 + 1;
        v93 = v20;
        if ( v20 >= v105 )
          goto LABEL_69;
        v6 = v99;
        goto LABEL_18;
      }
    }
  }
  while ( 1 )
  {
    v23 = v101;
    v10[v22] = v5->pNewAllocationList[v22];
    v16[v22] = v23[v22];
    if ( !v20 )
      goto LABEL_35;
    hAllocation = v5->pNewAllocationList[v22].hAllocation;
    DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)v90 + 168));
    v25 = (hAllocation >> 6) & 0xFFFFFF;
    if ( v25 < *((_DWORD *)v90 + 52)
      && (v26 = *((_QWORD *)v90 + 24),
          v27 = *(_DWORD *)(v26 + 16LL * v25 + 8),
          ((hAllocation >> 26) & 0x30) == (*(_BYTE *)(v26 + 16LL * v25 + 8) & 0x30))
      && (v27 & 0x1000) == 0
      && (v27 & 0xF) != 0
      && (*(_BYTE *)(v26 + 16LL * v25 + 8) & 0xF) == 5 )
    {
      v28 = *(struct _EX_RUNDOWN_REF **)(v26 + 16LL * v25);
    }
    else
    {
      v28 = 0LL;
    }
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v89, v28);
    ExReleasePushLockSharedEx((char *)v90 + 168, 0LL);
    KeLeaveCriticalRegion();
    LODWORD(v14) = -1073741811;
    if ( !v89 )
      break;
    v32 = *(_QWORD *)(v89[1].Count + 16);
    v33 = *(_QWORD *)(*((_QWORD *)v21 + 2) + 16LL);
    v34 = *(_QWORD *)(v33 + 16);
    if ( *(_QWORD *)(v32 + 16) != v34 )
    {
      v63 = (_QWORD *)WdLogNewEntry5_WdError(v34, v33);
      v63[3] = *((_QWORD *)v21 + 2);
      v63[4] = v89;
      v63[5] = -1073741811LL;
      goto LABEL_58;
    }
    v35 = *(_QWORD *)(v89[5].Count + 24);
    if ( v35 )
    {
      do
      {
        if ( ((*(_DWORD *)(v35 + 72) >> 12) & 0x3F) == MultipassOffset )
          break;
        v35 = *(_QWORD *)(v35 + 64);
      }
      while ( v35 );
      if ( v35 )
      {
        v10[v22].hAllocation = *(_DWORD *)(v35 + 16);
        v16[v22] = (struct DXGALLOCATION *)v35;
      }
    }
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v89, v35, v32, v31);
    v20 = v93;
LABEL_35:
    v22 = (unsigned int)(v22 + 1);
    if ( (unsigned int)v22 >= v5->AllocationCount )
      goto LABEL_36;
  }
  v63 = (_QWORD *)WdLogNewEntry5_WdError(v30, v29);
  v63[3] = 1001LL;
LABEL_58:
  WdLogEvent5_WdError(v63);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v89, v64, v65, v66);
LABEL_70:
  PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>((PVOID *)&v108);
LABEL_71:
  PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>((PVOID *)&v112);
  return (unsigned int)v14;
}
