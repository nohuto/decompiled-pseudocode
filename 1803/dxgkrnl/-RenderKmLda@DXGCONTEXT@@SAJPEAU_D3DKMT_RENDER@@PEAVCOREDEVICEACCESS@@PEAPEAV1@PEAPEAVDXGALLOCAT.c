/*
 * XREFs of ?RenderKmLda@DXGCONTEXT@@SAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCATION@@@Z @ 0x1C01BF3F4
 * Callers:
 *     ?DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@@Z @ 0x1C00CE9F0 (-DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@@Z.c)
 * Callees:
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C00092DC (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0016650 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?VidMmReferenceDmaBuffer@VIDMM_EXPORT@@QEAAJPEAU_VIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEAKPEAT_LARGE_INTEGER@@PEA_KPEAPEAUVIDMM_ALLOC@@PEAU_VIDMM_PRIMARIES_REFERENCES@@PEAPEAVDXGALLOCATION@@@Z @ 0x1C0024554 (-VidMmReferenceDmaBuffer@VIDMM_EXPORT@@QEAAJPEAU_VIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@I.c)
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C002486C (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     McTemplateK0p @ 0x1C0027764 (McTemplateK0p.c)
 *     ?VidMmUnreferenceDmaBuffer@VIDMM_EXPORT@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z @ 0x1C0033C50 (-VidMmUnreferenceDmaBuffer@VIDMM_EXPORT@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z.c)
 *     ??1?$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAA@XZ @ 0x1C00D4248 (--1-$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00E8320 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00E8360 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C010E944 (-AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z.c)
 *     ?DdiRenderGdi@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDERGDI@@@Z @ 0x1C0146970 (-DdiRenderGdi@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDERGDI@@@Z.c)
 */

__int64 __fastcall DXGCONTEXT::RenderKmLda(
        struct _D3DKMT_RENDER *a1,
        struct COREDEVICEACCESS *a2,
        struct DXGCONTEXT **a3,
        struct DXGALLOCATION **a4)
{
  struct DXGCONTEXT *v4; // rax
  struct _D3DKMT_RENDER *v5; // r13
  __int64 v6; // r10
  struct DXGPROCESS *Current; // rax
  unsigned int AllocationCount; // edi
  struct _D3DDDI_ALLOCATIONLIST *v9; // r14
  ULONG BroadcastContextCount; // r15d
  int v11; // r15d
  struct _D3DDDI_ALLOCATIONLIST *PoolWithTag; // r14
  __int64 v13; // rdi
  unsigned int v14; // edi
  struct DXGALLOCATION **v15; // rsi
  struct DXGALLOCATION **v16; // rsi
  __int64 v17; // r12
  __int64 v18; // rdi
  __int64 v19; // r12
  struct DXGCONTEXT *v20; // r15
  struct DXGALLOCATION **v21; // rax
  D3DKMT_HANDLE hAllocation; // edi
  __int64 v23; // rax
  __int64 v24; // r8
  int v25; // ecx
  struct _EX_RUNDOWN_REF *v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rdx
  struct _VIDMM_DMA_BUFFER *v30; // rbx
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  const EVENT_DESCRIPTOR *v35; // rdx
  __int64 v36; // rcx
  VIDMM_EXPORT *v37; // rsi
  __int64 v38; // rax
  void *v39; // r13
  UINT v40; // r12d
  DXGK_ALLOCATIONLIST *v41; // r14
  UINT v42; // r15d
  void *v43; // rdi
  UINT v44; // esi
  void *v45; // rdx
  int v46; // eax
  VIDMM_EXPORT *v47; // rsi
  __int64 v48; // rcx
  int v49; // eax
  struct _SLIST_ENTRY *v50; // r9
  int v51; // r8d
  int v52; // edx
  int v53; // eax
  int v54; // eax
  struct VIDMM_ALLOC **v55; // rcx
  __int64 v56; // r13
  int v57; // eax
  _QWORD *v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // rax
  __int64 v64; // rbx
  struct DXGCONTEXT **v65; // r14
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  struct DXGALLOCATION **v72; // [rsp+58h] [rbp-A8h]
  struct _VIDMM_DMA_BUFFER *v73; // [rsp+60h] [rbp-A0h] BYREF
  UINT i; // [rsp+68h] [rbp-98h]
  int v75; // [rsp+6Ch] [rbp-94h]
  struct DXGALLOCATION **v76; // [rsp+70h] [rbp-90h]
  struct _D3DDDI_ALLOCATIONLIST *v77; // [rsp+78h] [rbp-88h]
  struct _D3DKMT_RENDER *v78; // [rsp+80h] [rbp-80h]
  struct _EX_RUNDOWN_REF *v79; // [rsp+88h] [rbp-78h] BYREF
  struct DXGPROCESS *v80; // [rsp+90h] [rbp-70h]
  void *v81; // [rsp+98h] [rbp-68h] BYREF
  struct VIDMM_ALLOC *v82; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v83; // [rsp+A8h] [rbp-58h]
  struct DXGCONTEXT *v84; // [rsp+B0h] [rbp-50h]
  ADAPTER_RENDER *v85; // [rsp+B8h] [rbp-48h]
  VIDMM_EXPORT *v86; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v87; // [rsp+C8h] [rbp-38h] BYREF
  struct DXGCONTEXT **v88; // [rsp+D0h] [rbp-30h]
  struct _SLIST_ENTRY *v89[2]; // [rsp+D8h] [rbp-28h] BYREF
  unsigned int v90; // [rsp+E8h] [rbp-18h] BYREF
  struct DXGALLOCATION **v91; // [rsp+F0h] [rbp-10h]
  struct COREDEVICEACCESS *v92; // [rsp+F8h] [rbp-8h]
  struct _SLIST_ENTRY *v93; // [rsp+100h] [rbp+0h]
  __int64 v94; // [rsp+108h] [rbp+8h]
  __int64 v95; // [rsp+110h] [rbp+10h]
  _DXGKARG_RENDERGDI v96; // [rsp+120h] [rbp+20h] BYREF
  union _LARGE_INTEGER v97; // [rsp+170h] [rbp+70h] BYREF
  struct DXGALLOCATION **v98; // [rsp+180h] [rbp+80h] BYREF
  char v99; // [rsp+188h] [rbp+88h] BYREF
  unsigned int v100; // [rsp+208h] [rbp+108h]
  _QWORD v101[12]; // [rsp+220h] [rbp+120h] BYREF
  struct _D3DDDI_ALLOCATIONLIST *v102; // [rsp+280h] [rbp+180h] BYREF
  char v103; // [rsp+288h] [rbp+188h] BYREF
  unsigned int v104; // [rsp+308h] [rbp+208h]

  v4 = *a3;
  v5 = a1;
  v78 = a1;
  v91 = a4;
  v88 = a3;
  v6 = *((_QWORD *)v4 + 2);
  v92 = a2;
  v85 = *(ADAPTER_RENDER **)(v6 + 16);
  v86 = (VIDMM_EXPORT *)*((_QWORD *)v85 + 68);
  v94 = *((_QWORD *)v85 + 65);
  Current = DXGPROCESS::GetCurrent((__int64)v85, (__int64)a2);
  AllocationCount = v5->AllocationCount;
  v9 = 0LL;
  BroadcastContextCount = v5->BroadcastContextCount;
  v104 = 0;
  v11 = BroadcastContextCount + 1;
  v80 = Current;
  v77 = 0LL;
  v102 = 0LL;
  if ( AllocationCount <= 0x10 )
  {
    PoolWithTag = (struct _D3DDDI_ALLOCATIONLIST *)&v103;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / AllocationCount < 8 )
      goto LABEL_7;
    PoolWithTag = (struct _D3DDDI_ALLOCATIONLIST *)ExAllocatePoolWithTag(PagedPool, 8LL * AllocationCount, 0x4B677844u);
  }
  v102 = PoolWithTag;
  v77 = PoolWithTag;
  v104 = AllocationCount;
  if ( !PoolWithTag )
  {
LABEL_8:
    LODWORD(v13) = -1073741801;
    goto LABEL_57;
  }
  memset(PoolWithTag, 0, 8LL * AllocationCount);
  v9 = v102;
  v77 = v102;
LABEL_7:
  if ( !v9 )
    goto LABEL_8;
  v14 = v5->AllocationCount;
  v15 = 0LL;
  v100 = 0;
  v76 = 0LL;
  v98 = 0LL;
  if ( v14 <= 0x10 )
  {
    v16 = (struct DXGALLOCATION **)&v99;
    goto LABEL_13;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / v14 >= 8 )
  {
    v16 = (struct DXGALLOCATION **)ExAllocatePoolWithTag(PagedPool, 8LL * v14, 0x4B677844u);
LABEL_13:
    v98 = v16;
    v76 = v16;
    v100 = v14;
    if ( !v16 )
    {
LABEL_16:
      LODWORD(v13) = -1073741801;
      goto LABEL_56;
    }
    memset(v16, 0, 8LL * v14);
    v15 = v98;
    v76 = v98;
  }
  if ( !v15 )
    goto LABEL_16;
  LODWORD(v17) = 0;
  v75 = 0;
  v95 = v11;
  if ( v11 <= 0 )
    goto LABEL_55;
  v18 = 0LL;
  v83 = 0LL;
  while ( 2 )
  {
    v73 = (struct _VIDMM_DMA_BUFFER *)(((*(_DWORD *)&v5->Flags & 8) << 12) | 0x100u);
    memset(v101, 0, sizeof(v101));
    v19 = 0LL;
    v20 = v88[v18];
    v84 = v20;
    for ( i = *((_DWORD *)v20 + 90); (unsigned int)v19 < v5->AllocationCount; v19 = (unsigned int)(v19 + 1) )
    {
      v21 = v91;
      v9[v19] = v5->pNewAllocationList[v19];
      v15[v19] = v21[v19];
      if ( v18 )
      {
        hAllocation = v5->pNewAllocationList[v19].hAllocation;
        DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)v80 + 208));
        v23 = (hAllocation >> 6) & 0xFFFFFF;
        if ( (unsigned int)v23 < *((_DWORD *)v80 + 62)
          && (v24 = *((_QWORD *)v80 + 29),
              v25 = *(_DWORD *)(v24 + 16 * v23 + 8),
              ((hAllocation >> 25) & 0x60) == (*(_BYTE *)(v24 + 16 * v23 + 8) & 0x60))
          && (v25 & 0x2000) == 0
          && (v25 & 0x1F) == 5 )
        {
          v26 = *(struct _EX_RUNDOWN_REF **)(v24 + 16LL * (unsigned int)v23);
        }
        else
        {
          v26 = 0LL;
        }
        DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v79, v26);
        ExReleasePushLockSharedEx((char *)v80 + 208, 0LL);
        KeLeaveCriticalRegion();
        LODWORD(v13) = -1073741811;
        if ( !v79 )
        {
          v59 = (_QWORD *)WdLogNewEntry5_WdError(v27);
          v59[3] = 1047LL;
          goto LABEL_60;
        }
        v28 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v20 + 2) + 16LL) + 16LL);
        if ( *(_QWORD *)(*(_QWORD *)(v79[1].Count + 16) + 16LL) != v28 )
        {
          v59 = (_QWORD *)WdLogNewEntry5_WdError(v28);
          v59[3] = *((_QWORD *)v20 + 2);
          v59[4] = v79;
          v59[5] = -1073741811LL;
LABEL_60:
          WdLogEvent5_WdError(v59);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v79);
          goto LABEL_56;
        }
        v29 = *(_QWORD *)(v79[5].Count + 24);
        if ( v29 )
        {
          do
          {
            if ( ((*(_DWORD *)(v29 + 72) >> 12) & 0x3F) == i )
              break;
            v29 = *(_QWORD *)(v29 + 64);
          }
          while ( v29 );
          if ( v29 )
          {
            v9[v19].hAllocation = *(_DWORD *)(v29 + 16);
            v15[v19] = (struct DXGALLOCATION *)v29;
          }
        }
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v79);
        v18 = v83;
      }
    }
    v30 = v73;
    i = HIDWORD(v101[9]);
    do
    {
      v73 = 0LL;
      v31 = DXGCONTEXT::AcquireDmaBuffer(v20, &v73, v92, 0);
      v13 = v31;
      if ( v31 < 0 )
      {
        v71 = WdLogNewEntry5_WdEvent(v33, v32);
        *(_QWORD *)(v71 + 24) = v20;
        *(_QWORD *)(v71 + 32) = v13;
        WdLogEvent5_WdEvent(v71);
        goto LABEL_56;
      }
      if ( bTracingEnabled )
      {
        if ( (*(_DWORD *)&v5->Flags & 0x20) != 0 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
            goto LABEL_45;
          v35 = (const EVENT_DESCRIPTOR *)&EventRenderKm;
        }
        else
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
            goto LABEL_45;
          v35 = &EventRender;
        }
        McTemplateK0p(&DxgkControlGuid_Context, v35, v34, v73);
      }
LABEL_45:
      v89[1] = (struct _SLIST_ENTRY *)v85;
      v82 = 0LL;
      v89[0] = 0LL;
      CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v89);
      v93 = v89[0];
      if ( !v89[0] )
      {
        v70 = WdLogNewEntry5_WdLowResource(v36);
        *(_QWORD *)(v70 + 24) = 1126LL;
        WdLogEvent5_WdLowResource(v70);
        LODWORD(v13) = -1073741801;
        goto LABEL_69;
      }
      v72 = v15;
      v37 = v86;
      v13 = (int)VIDMM_EXPORT::VidMmReferenceDmaBuffer(
                   v86,
                   v73,
                   v9,
                   v5->AllocationCount,
                   1,
                   1,
                   &v90,
                   &v97,
                   &v87,
                   &v82,
                   (struct _VIDMM_PRIMARIES_REFERENCES *)&v89[0][12],
                   v72);
      v38 = *((_QWORD *)v37 + 1);
      if ( (int)v13 < 0 )
      {
        (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(v38 + 496))(v73, 0LL);
        v73 = 0LL;
        goto LABEL_66;
      }
      v81 = 0LL;
      (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, void **))(v38 + 504))(v73, &v81);
      v39 = v81;
      v40 = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*((_QWORD *)v37 + 1) + 528LL))(v73);
      v41 = (DXGK_ALLOCATIONLIST *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*((_QWORD *)v37 + 1) + 552LL))(v73);
      v42 = v78->AllocationCount;
      v43 = (void *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*((_QWORD *)v37 + 1) + 560LL))(v73);
      v44 = *((_DWORD *)v84 + 50);
      v96.pCommand = (char *)v78->pNewCommandBuffer + v78->CommandOffset;
      v96.CommandLength = v78->CommandLength;
      memset(&v96.pDmaBuffer, 0, 0x38uLL);
      v96.AllocationListSize = v42;
      v20 = v84;
      v96.DmaBufferGpuVirtualAddress = v87;
      v96.pDmaBuffer = v39;
      v45 = (void *)*((_QWORD *)v84 + 23);
      v96.DmaSize = v40;
      v96.pDmaBufferPrivateData = v43;
      v96.DmaBufferPrivateDataSize = v44;
      v96.pAllocationList = v41;
      v96.MultipassOffset = i;
      v46 = ADAPTER_RENDER::DdiRenderGdi(v85, v45, &v96);
      v47 = v86;
      v101[0] = v96.pDmaBuffer;
      v101[2] = v96.pDmaBufferPrivateData;
      v48 = *((_QWORD *)v86 + 1);
      v17 = v46;
      i = v96.MultipassOffset;
      (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(v48 + 512))(v73);
      if ( (int)(v17 + 0x80000000) >= 0 && (_DWORD)v17 != -1071775743 )
      {
        VIDMM_EXPORT::VidMmUnreferenceDmaBuffer(v47, v73);
        (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*((_QWORD *)v47 + 1) + 496LL))(v73, 0LL);
        v73 = 0LL;
        v63 = WdLogNewEntry5_WdWarning(v61, v60, v62);
        *(_QWORD *)(v63 + 24) = v20;
        *(_QWORD *)(v63 + 32) = v17;
        WdLogEvent5_WdWarning(v63);
        LODWORD(v13) = v17;
        goto LABEL_69;
      }
      v49 = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*((_QWORD *)v47 + 1) + 560LL))(v73);
      v50 = v93;
      v51 = v49;
      v52 = LODWORD(v101[0]) - (_DWORD)v81;
      v53 = v101[2];
      v93->Next = (struct _SLIST_ENTRY *)v30;
      LODWORD(v50->Next) |= 0x8000000u;
      *((_QWORD *)&v50[2].Next + 1) = v87;
      *((_QWORD *)&v50->Next + 1) = v73;
      HIDWORD(v50[3].Next) = v52;
      LODWORD(v50[3].Next) = 0;
      *((_QWORD *)&v50[3].Next + 1) = 0LL;
      v50[4].Next = 0LL;
      *((_DWORD *)&v50[4].Next + 3) = v53 - v51;
      *((_DWORD *)&v50[4].Next + 2) = 0;
      if ( v82 )
      {
        v54 = 1;
        v55 = &v82;
      }
      else
      {
        v54 = 0;
        v55 = 0LL;
      }
      v56 = v94;
      v50[21].Next = (struct _SLIST_ENTRY *)v55;
      *((_DWORD *)&v50[21].Next + 2) = v54;
      v57 = (*(__int64 (__fastcall **)(_QWORD, struct _SLIST_ENTRY *))(*(_QWORD *)(v56 + 8) + 432LL))(
              *((_QWORD *)v20 + 29),
              v50);
      v13 = v57;
      if ( v57 < 0 )
      {
        v64 = v75;
        if ( v75 >= 0 )
        {
          v65 = v88;
          do
            (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(v56 + 8) + 448LL))(*((_QWORD *)v65[v64--] + 29), 0LL);
          while ( v64 >= 0 );
        }
        VIDMM_EXPORT::VidMmUnreferenceDmaBuffer(v47, v73);
        (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*((_QWORD *)v47 + 1) + 496LL))(v73, 0LL);
        v73 = 0LL;
LABEL_66:
        v69 = WdLogNewEntry5_WdWarning(v67, v66, v68);
        *(_QWORD *)(v69 + 24) = v20;
        *(_QWORD *)(v69 + 32) = v13;
        WdLogEvent5_WdWarning(v69);
LABEL_69:
        CVidSchSubmitData::~CVidSchSubmitData(v89);
        goto LABEL_56;
      }
      CVidSchSubmitData::~CVidSchSubmitData(v89);
      v15 = v76;
      v9 = v77;
      v5 = v78;
    }
    while ( (_DWORD)v17 == -1071775743 );
    ++v75;
    v18 = v83 + 1;
    v83 = v18;
    if ( v18 < v95 )
      continue;
    break;
  }
LABEL_55:
  LODWORD(v13) = v17;
LABEL_56:
  PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>((PVOID *)&v98);
LABEL_57:
  PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>((PVOID *)&v102);
  return (unsigned int)v13;
}
