/*
 * XREFs of ?SubmitPresentLda@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@PEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C01B74A8
 * Callers:
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00C4D00 (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0002160 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetImplicitHwQueue@DXGCONTEXT@@QEBAPEAU_VIDSCH_CONTEXT@@XZ @ 0x1C0008E24 (-GetImplicitHwQueue@DXGCONTEXT@@QEBAPEAU_VIDSCH_CONTEXT@@XZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C00145BC (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?VidMmReferencePrimaryAllocationForSubmission@VIDMM_EXPORT@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_ALLOC@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00149A0 (-VidMmReferencePrimaryAllocationForSubmission@VIDMM_EXPORT@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MU.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1C001D82C (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ?VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@KPEAUVIDMM_ALLOC@@H@Z @ 0x1C00290D0 (-VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@KPEAUVIDMM_ALLOC@@H@Z.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C00799D8 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0086E10 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z @ 0x1C00FED50 (-DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z.c)
 *     ??1?$PagedPoolZeroedArray@U_DXGK_PRESENTALLOCATIONINFO@@$03@@QEAA@XZ @ 0x1C010026C (--1-$PagedPoolZeroedArray@U_DXGK_PRESENTALLOCATIONINFO@@$03@@QEAA@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_DXGK_PRESENTALLOCATIONINFO@@$03@@QEAAPEAU_DXGK_PRESENTALLOCATIONINFO@@I@Z @ 0x1C010028C (-AllocateElements@-$PagedPoolZeroedArray@U_DXGK_PRESENTALLOCATIONINFO@@$03@@QEAAPEAU_DXGK_PRESEN.c)
 *     ??1?$PagedPoolZeroedArray@PEAUVIDMM_ALLOC@@$03@@QEAA@XZ @ 0x1C01002DC (--1-$PagedPoolZeroedArray@PEAUVIDMM_ALLOC@@$03@@QEAA@XZ.c)
 *     ?SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K@Z @ 0x1C01B7D00 (-SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K@Z.c)
 */

__int64 __fastcall DXGCONTEXT::SubmitPresentLda(
        DXGCONTEXT *this,
        const struct _D3DKMT_PRESENT *a2,
        int a3,
        struct DXGCONTEXT **a4,
        struct DXGALLOCATION *a5,
        struct _DXGKARG_PRESENT *a6,
        struct VIDSCH_SUBMIT_DATA_BASE *a7)
{
  DXGCONTEXT **v7; // r12
  UINT v9; // ebx
  unsigned int v10; // r13d
  _BYTE *PoolWithTag; // r14
  __int64 v12; // rcx
  UINT v13; // r8d
  DXGK_ALLOCATIONLIST *v14; // r13
  DXGCONTEXT *v15; // rax
  unsigned int v16; // r9d
  __int64 v17; // rax
  int v18; // ebx
  struct _EX_RUNDOWN_REF *v19; // r13
  unsigned int *v20; // rdx
  __int64 v21; // rbx
  struct DXGALLOCATION **AllocationSafe; // rax
  __int64 v23; // rcx
  _QWORD *v24; // rax
  struct VIDMM_ALLOC **v25; // r8
  int v26; // r8d
  char *v27; // rdx
  ULONG_PTR Count; // rax
  int v29; // r8d
  char *v30; // r8
  char *v31; // rdx
  __int64 v32; // rbx
  char *v33; // rdx
  __int64 v34; // rbx
  __int64 v35; // rax
  struct _DXGKARG_PRESENT *v36; // r8
  UINT v37; // r13d
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // r14
  __int64 v42; // rdi
  unsigned int v44; // [rsp+30h] [rbp-198h]
  UINT v45; // [rsp+34h] [rbp-194h]
  struct _EX_RUNDOWN_REF *v46; // [rsp+38h] [rbp-190h] BYREF
  int v47; // [rsp+40h] [rbp-188h]
  UINT v48; // [rsp+44h] [rbp-184h]
  unsigned int v49; // [rsp+48h] [rbp-180h]
  DXGK_ALLOCATIONLIST *v50; // [rsp+50h] [rbp-178h]
  __int64 v51; // [rsp+58h] [rbp-170h]
  DXGPROCESS *v52; // [rsp+60h] [rbp-168h]
  struct VIDMM_ALLOC **v53; // [rsp+68h] [rbp-160h]
  struct DXGCONTEXT **v54; // [rsp+70h] [rbp-158h]
  unsigned int v55; // [rsp+78h] [rbp-150h]
  struct DXGALLOCATION *v56; // [rsp+80h] [rbp-148h]
  const struct _D3DKMT_PRESENT *v57; // [rsp+88h] [rbp-140h]
  struct _EX_RUNDOWN_REF *v58; // [rsp+90h] [rbp-138h] BYREF
  __int64 v59; // [rsp+98h] [rbp-130h]
  _BYTE *v60; // [rsp+A0h] [rbp-128h]
  DXGCONTEXT *v61; // [rsp+A8h] [rbp-120h]
  struct DXGCONTEXT **v62; // [rsp+B0h] [rbp-118h]
  struct _DXGKARG_PRESENT *v63; // [rsp+B8h] [rbp-110h]
  _BYTE *v64; // [rsp+C0h] [rbp-108h] BYREF
  _BYTE v65[32]; // [rsp+C8h] [rbp-100h] BYREF
  UINT v66; // [rsp+E8h] [rbp-E0h]
  PVOID v67[17]; // [rsp+F0h] [rbp-D8h] BYREF
  int v68; // [rsp+178h] [rbp-50h]

  v7 = a4;
  v54 = a4;
  v57 = a2;
  v61 = this;
  v62 = a4;
  v56 = a5;
  v63 = a6;
  v52 = *(DXGPROCESS **)(*((_QWORD *)this + 2) + 40LL);
  v9 = a3 + 1;
  v48 = a3 + 1;
  v10 = 0;
  v44 = 0;
  v67[0] = 0LL;
  v68 = 0;
  PagedPoolZeroedArray<_DXGK_PRESENTALLOCATIONINFO,4>::AllocateElements(v67, a3 + 1);
  v50 = (DXGK_ALLOCATIONLIST *)v67[0];
  PoolWithTag = 0LL;
  v64 = 0LL;
  v66 = 0;
  if ( v9 <= 4 )
  {
    PoolWithTag = v65;
    v64 = v65;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v9 < 8 )
      goto LABEL_7;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * v9, 0x4B677844u);
    v64 = PoolWithTag;
  }
  v66 = v9;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 8LL * v9);
    PoolWithTag = v64;
  }
LABEL_7:
  v60 = PoolWithTag;
  if ( v50 && PoolWithTag )
  {
    if ( *(_QWORD *)(*((_QWORD *)this + 2) + 1672LL) != *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)
      || DXGPROCESS::IsRemoteConnection(v52) )
    {
      *((_DWORD *)a7 + 29) = 0;
    }
    *(_DWORD *)a7 |= 0xC00u;
    *((_DWORD *)a7 + 35) = v9;
    v12 = *((_BYTE *)a7 + 348) != 0 ? 0x10 : 0;
    *(_DWORD *)((char *)a7 + v12 + 424) = *(_DWORD *)((_BYTE *)a7 + v12 + 424) & 0xFFFFFC00 | 1;
    v13 = 0;
    v14 = v50;
    while ( 1 )
    {
      v45 = v13;
      if ( v13 >= v9 )
        break;
      v59 = v13;
      v15 = v7[v13];
      v16 = *((_DWORD *)v15 + 90);
      v49 = v16;
      v46 = 0LL;
      if ( !*((_BYTE *)v15 + 398) )
      {
        v17 = WdLogNewEntry5_WdError(v12);
        *(_QWORD *)(v17 + 24) = 7588LL;
LABEL_16:
        WdLogEvent5_WdError(v17);
        v18 = -1073741811;
        goto LABEL_17;
      }
      if ( v13 )
      {
        if ( v16 <= *((_DWORD *)v7[v13 - 1] + 90) )
        {
          v17 = WdLogNewEntry5_WdError(v12);
          *(_QWORD *)(v17 + 24) = 7604LL;
          goto LABEL_16;
        }
        v20 = &v57->BroadcastSrcAllocation[v13 - 1];
        if ( v20 + 1 < v20 || (unsigned __int64)(v20 + 1) > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        v55 = *v20;
        v21 = v55;
        AllocationSafe = (struct DXGALLOCATION **)DXGPROCESS::GetAllocationSafe(
                                                    (__int64)v52,
                                                    (DXGALLOCATIONREFERENCE *)&v58,
                                                    v55);
        DXGALLOCATIONREFERENCE::MoveAssign((struct DXGALLOCATION **)&v46, AllocationSafe);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v58);
        v19 = v46;
        if ( !v46 )
        {
          v24 = (_QWORD *)WdLogNewEntry5_WdError(v23);
          v24[3] = v21;
          v18 = -1073741811;
          v24[4] = -1073741811LL;
          goto LABEL_27;
        }
        v12 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
        if ( *(_QWORD *)(*(_QWORD *)(v46[1].Count + 16) + 16LL) != *(_QWORD *)(v12 + 16) )
        {
          v24 = (_QWORD *)WdLogNewEntry5_WdError(v12);
          v24[3] = *((_QWORD *)this + 2);
          v24[4] = v19;
          v18 = -1073741811;
          v24[5] = -1073741811LL;
LABEL_27:
          WdLogEvent5_WdError(v24);
LABEL_17:
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v46);
          goto LABEL_72;
        }
        v13 = v45;
        v16 = v49;
      }
      else
      {
        v19 = (struct _EX_RUNDOWN_REF *)v56;
      }
      if ( ((LODWORD(v19[9].Count) >> 12) & 0x3F) != v16 )
      {
        v17 = WdLogNewEntry5_WdError(v12);
        *(_QWORD *)(v17 + 24) = v19;
        goto LABEL_16;
      }
      if ( *((_BYTE *)a7 + 348) )
        v25 = (struct VIDMM_ALLOC **)((char *)a7
                                    + 48 * v13 * *((_DWORD *)a7 + 111)
                                    + *((_DWORD *)a7 + 111) * ((8 * *((_DWORD *)a7 + 112) + 175) & 0xFFFFFFF8)
                                    + 488);
      else
        v25 = (struct VIDMM_ALLOC **)((char *)a7 + 432);
      v53 = v25;
      v18 = VIDMM_EXPORT::VidMmReferencePrimaryAllocationForSubmission(
              *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 528LL),
              *(struct VIDMM_DEVICE **)(*((_QWORD *)this + 2) + 592LL),
              (struct _VIDMM_MULTI_ALLOC *)v19[3].Count,
              v25);
      if ( v18 < 0 )
        goto LABEL_17;
      *(_QWORD *)&PoolWithTag[8 * v44++] = *v53;
      if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
      {
        v26 = 0xFFFF;
        v47 = 0xFFFF;
        v51 = -1LL;
      }
      else
      {
        _guard_dispatch_icall_fptr();
        v26 = v47;
      }
      if ( *((_BYTE *)a7 + 348) )
        *(_WORD *)((char *)a7
                 + 48 * v45 * *((_DWORD *)a7 + 111)
                 + *((_DWORD *)a7 + 111) * ((8 * *((_DWORD *)a7 + 112) + 175) & 0xFFFFFFF8)
                 + 472) = v26;
      else
        *((_DWORD *)a7 + 121) ^= (*((_DWORD *)a7 + 121) ^ (v26 << 17)) & 0x3E0000;
      if ( *((_BYTE *)a7 + 348) )
        v27 = (char *)a7
            + 48 * v45 * *((_DWORD *)a7 + 111)
            + *((_DWORD *)a7 + 111) * ((8 * *((_DWORD *)a7 + 112) + 175) & 0xFFFFFFF8)
            + 480;
      else
        v27 = (char *)a7 + 448;
      *(_QWORD *)v27 = v51;
      Count = v19[5].Count;
      if ( Count )
        v29 = (*(_DWORD *)(Count + 4) >> 3) & 1;
      else
        v29 = 0;
      if ( *((_BYTE *)a7 + 348) )
        *((_BYTE *)a7
        + 48 * v45 * *((_DWORD *)a7 + 111)
        + *((_DWORD *)a7 + 111) * ((8 * *((_DWORD *)a7 + 112) + 175) & 0xFFFFFFF8)
        + 496) = v29;
      else
        *((_DWORD *)a7 + 121) = (v29 << 23) | *((_DWORD *)a7 + 121) & 0xFF7FFFFF;
      v30 = (char *)a7 + 440;
      if ( *((_BYTE *)a7 + 348) )
        v31 = &v30[48 * v45 * *((_DWORD *)a7 + 111)
                 + 24
                 + *((_DWORD *)a7 + 111) * ((8 * *((_DWORD *)a7 + 112) + 175) & 0xFFFFFFF8)];
      else
        v31 = (char *)a7 + 440;
      *(_QWORD *)v31 = *(_QWORD *)(v19[6].Count + 16);
      v32 = v59;
      if ( *((_BYTE *)a7 + 348) )
        v33 = &v30[48 * v45 * *((_DWORD *)a7 + 111)
                 + 16
                 + *((_DWORD *)a7 + 111) * ((8 * *((_DWORD *)a7 + 112) + 175) & 0xFFFFFFF8)];
      else
        v33 = (char *)a7 + 496;
      *(_QWORD *)v33 = *((_QWORD *)v7[v59] + 23);
      if ( *((_BYTE *)a7 + 348) )
        *((_DWORD *)a7 + 120) = -1;
      v34 = 32 * v32;
      *(struct _EX_RUNDOWN_REF *)((char *)&v50->hDeviceSpecificAllocation + v34) = v19[4];
      v35 = _guard_dispatch_icall_fptr();
      v14 = v50;
      *(_QWORD *)((char *)&v50->8 + v34) = v35;
      *(LONGLONG *)((char *)&v14->PhysicalAddress.QuadPart + v34) = v51;
      *(_WORD *)((char *)&v14[1].hDeviceSpecificAllocation + v34) = v47;
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v46);
      v13 = v45 + 1;
      v9 = v48;
    }
    v36 = v63;
    v63->NumSrcAllocations = v9;
    v36->pAllocationList = v14;
    v18 = ADAPTER_RENDER::DdiPresent(*(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL), *((_QWORD *)this + 23), v36);
    if ( v18 >= 0 )
    {
      v37 = 0;
      if ( v48 )
      {
        do
        {
          CurrentThread = KeGetCurrentThread();
          if ( *((struct _KTHREAD **)*v7 + 52) != CurrentThread )
          {
            v39 = WdLogNewEntry5_WdAssertion(CurrentThread);
            *(_QWORD *)(v39 + 24) = 7760LL;
            WdLogEvent5_WdAssertion(v39);
          }
          if ( (*((_DWORD *)this + 91) & 0x10) != 0 )
            DXGCONTEXT::SynchronizeImplicitQueueWithRenderQueues(this, 0LL, 0);
          DXGCONTEXT::GetImplicitHwQueue(*v7);
          v18 = _guard_dispatch_icall_fptr();
          if ( v18 < 0 )
            break;
          *(_DWORD *)a7 &= ~0x800u;
          ++v37;
          ++v7;
        }
        while ( v37 < v48 );
        v7 = v54;
      }
    }
LABEL_72:
    v10 = v44;
  }
  else
  {
    v40 = WdLogNewEntry5_WdLowResource(v50);
    *(_QWORD *)(v40 + 24) = 7548LL;
    WdLogEvent5_WdLowResource(v40);
    v18 = -1073741801;
  }
  if ( v18 < 0 && v10 )
  {
    v41 = PoolWithTag - (_BYTE *)v7;
    v42 = v10;
    do
    {
      VIDMM_EXPORT::VidMmUnreferencePrimaryAllocation(
        *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 528LL),
        *(struct VIDMM_GLOBAL **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 536LL),
        1 << *((_DWORD *)*v7 + 90),
        *(DXGCONTEXT **)((char *)v7 + v41));
      ++v7;
      --v42;
    }
    while ( v42 );
  }
  PagedPoolZeroedArray<VIDMM_ALLOC *,4>::~PagedPoolZeroedArray<VIDMM_ALLOC *,4>((PVOID *)&v64);
  PagedPoolZeroedArray<_DXGK_PRESENTALLOCATIONINFO,4>::~PagedPoolZeroedArray<_DXGK_PRESENTALLOCATIONINFO,4>(v67);
  return (unsigned int)v18;
}
