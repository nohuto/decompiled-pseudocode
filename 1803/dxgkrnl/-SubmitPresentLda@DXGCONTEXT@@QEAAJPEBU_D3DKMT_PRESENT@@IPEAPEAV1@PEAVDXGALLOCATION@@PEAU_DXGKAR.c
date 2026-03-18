/*
 * XREFs of ?SubmitPresentLda@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@PEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C01B3E20
 * Callers:
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEBUDXGK_PRESENT_PARAMS@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0100890 (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEBUDXGK_PRESENT_PARAMS@@IPEAPEAV1@PEAVDXGA.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0015AA8 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C001A57C (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1C0023E74 (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C00962E0 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ??1?$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAA@XZ @ 0x1C00D4248 (--1-$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAA@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00E8360 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z @ 0x1C010EAD8 (-DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z.c)
 *     ??1?$PagedPoolZeroedArray@PEAUVIDMM_ALLOC@@$03@@QEAA@XZ @ 0x1C01102C0 (--1-$PagedPoolZeroedArray@PEAUVIDMM_ALLOC@@$03@@QEAA@XZ.c)
 *     ?SubmitCommandToImplicitQueue@DXGCONTEXT@@QEAAJPEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0145C2C (-SubmitCommandToImplicitQueue@DXGCONTEXT@@QEAAJPEAUVIDSCH_SUBMIT_DATA_BASE@@@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_DXGK_PRESENTALLOCATIONINFO@@$03@@QEAAPEAU_DXGK_PRESENTALLOCATIONINFO@@I@Z @ 0x1C01B031C (-AllocateElements@-$PagedPoolZeroedArray@U_DXGK_PRESENTALLOCATIONINFO@@$03@@QEAAPEAU_DXGK_PRESEN.c)
 *     ?SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K@Z @ 0x1C01B467C (-SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K@Z.c)
 */

__int64 __fastcall DXGCONTEXT::SubmitPresentLda(
        struct _EX_RUNDOWN_REF *this,
        const struct _D3DKMT_PRESENT *a2,
        int a3,
        struct _EX_RUNDOWN_REF *a4,
        struct DXGALLOCATION *a5,
        struct _DXGKARG_PRESENT *a6,
        struct VIDSCH_SUBMIT_DATA_BASE *a7)
{
  DXGCONTEXT **v7; // r14
  UINT v9; // r13d
  __int64 v10; // rcx
  struct _EX_RUNDOWN_REF *PoolWithTag; // r12
  __int64 v12; // rcx
  UINT v13; // edi
  DXGCONTEXT *v14; // rax
  unsigned int v15; // r8d
  __int64 v16; // rax
  int v17; // edi
  struct _EX_RUNDOWN_REF *v18; // r13
  unsigned int *v19; // rdx
  __int64 v20; // rdi
  struct DXGALLOCATION **AllocationSafe; // rax
  __int64 v22; // rcx
  _QWORD *v23; // rax
  char *v24; // r14
  char *v25; // r8
  unsigned int v26; // edx
  int v27; // r8d
  UINT v28; // edi
  __int64 *v29; // rdx
  ULONG_PTR Count; // rcx
  bool v31; // al
  __int64 v32; // r8
  char *v33; // rdx
  char *v34; // rdx
  __int64 v35; // r14
  __int64 v36; // rax
  struct _EX_RUNDOWN_REF *v37; // rcx
  __int64 v38; // rbx
  struct _DXGKARG_PRESENT *v40; // r8
  PVOID Ptr; // r9
  ULONG_PTR v42; // rdx
  UINT v43; // r13d
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v45; // rax
  __int64 v46; // rax
  struct _EX_RUNDOWN_REF *v47; // [rsp+30h] [rbp-198h] BYREF
  UINT v48; // [rsp+38h] [rbp-190h]
  int v49; // [rsp+3Ch] [rbp-18Ch]
  UINT v50; // [rsp+40h] [rbp-188h]
  unsigned int v51; // [rsp+44h] [rbp-184h]
  unsigned int v52; // [rsp+48h] [rbp-180h]
  struct _EX_RUNDOWN_REF *v53; // [rsp+50h] [rbp-178h]
  struct _EX_RUNDOWN_REF *v54; // [rsp+58h] [rbp-170h]
  __int64 v55; // [rsp+60h] [rbp-168h]
  DXGPROCESS *v56; // [rsp+68h] [rbp-160h]
  struct _EX_RUNDOWN_REF *v57; // [rsp+70h] [rbp-158h]
  __int64 v58; // [rsp+78h] [rbp-150h]
  unsigned int v59; // [rsp+80h] [rbp-148h]
  struct DXGALLOCATION *v60; // [rsp+88h] [rbp-140h]
  const struct _D3DKMT_PRESENT *v61; // [rsp+90h] [rbp-138h]
  struct _EX_RUNDOWN_REF *v62[4]; // [rsp+98h] [rbp-130h] BYREF
  struct _DXGKARG_PRESENT *v63; // [rsp+B8h] [rbp-110h]
  struct _EX_RUNDOWN_REF *v64; // [rsp+C0h] [rbp-108h] BYREF
  _BYTE v65[32]; // [rsp+C8h] [rbp-100h] BYREF
  UINT v66; // [rsp+E8h] [rbp-E0h]
  PVOID v67[17]; // [rsp+F0h] [rbp-D8h] BYREF
  int v68; // [rsp+178h] [rbp-50h]

  v7 = (DXGCONTEXT **)a4;
  v53 = a4;
  v61 = a2;
  v62[3] = this;
  v62[2] = a4;
  v60 = a5;
  v63 = a6;
  v56 = *(DXGPROCESS **)(this[2].Count + 40);
  v9 = a3 + 1;
  v50 = a3 + 1;
  v51 = 0;
  v67[0] = 0LL;
  v68 = 0;
  PagedPoolZeroedArray<_DXGK_PRESENTALLOCATIONINFO,4>::AllocateElements(v67, a3 + 1);
  v54 = (struct _EX_RUNDOWN_REF *)v67[0];
  PoolWithTag = 0LL;
  v64 = 0LL;
  v66 = 0;
  if ( v9 <= 4 )
  {
    PoolWithTag = (struct _EX_RUNDOWN_REF *)v65;
    v64 = (struct _EX_RUNDOWN_REF *)v65;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v9 < 8 )
      goto LABEL_7;
    PoolWithTag = (struct _EX_RUNDOWN_REF *)ExAllocatePoolWithTag(PagedPool, 8LL * v9, 0x4B677844u);
    v64 = PoolWithTag;
  }
  v66 = v9;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 8LL * v9);
    PoolWithTag = v64;
  }
LABEL_7:
  v62[1] = PoolWithTag;
  if ( v54 && PoolWithTag )
  {
    if ( *(_QWORD *)(this[2].Count + 1688) != *(_QWORD *)(*(_QWORD *)(this[2].Count + 16) + 16LL)
      || DXGPROCESS::IsRemoteConnection(v56) )
    {
      *((_DWORD *)a7 + 29) = 0;
    }
    *(_DWORD *)a7 |= 0xC00u;
    *((_DWORD *)a7 + 35) = v9;
    v12 = *((_BYTE *)a7 + 348) != 0 ? 0x18 : 0;
    *(_DWORD *)((char *)a7 + v12 + 472) = *(_DWORD *)((_BYTE *)a7 + v12 + 472) & 0xFFFFFC00 | 1;
    v13 = 0;
    while ( 1 )
    {
      v48 = v13;
      if ( v13 >= v9 )
        break;
      v58 = v13;
      v14 = v7[v13];
      v15 = *((_DWORD *)v14 + 90);
      v52 = v15;
      v47 = 0LL;
      if ( !*((_BYTE *)v14 + 398) )
      {
        v16 = WdLogNewEntry5_WdError(v12);
        *(_QWORD *)(v16 + 24) = 7702LL;
LABEL_16:
        WdLogEvent5_WdError(v16);
        v17 = -1073741811;
        goto LABEL_17;
      }
      if ( v13 )
      {
        if ( v15 <= *((_DWORD *)v7[v13 - 1] + 90) )
        {
          v16 = WdLogNewEntry5_WdError(v12);
          *(_QWORD *)(v16 + 24) = 7718LL;
          goto LABEL_16;
        }
        v19 = &v61->BroadcastSrcAllocation[v13 - 1];
        if ( v19 + 1 < v19 || (unsigned __int64)(v19 + 1) > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        v59 = *v19;
        v20 = v59;
        AllocationSafe = (struct DXGALLOCATION **)DXGPROCESS::GetAllocationSafe(
                                                    (__int64)v56,
                                                    (DXGALLOCATIONREFERENCE *)v62,
                                                    v59);
        DXGALLOCATIONREFERENCE::MoveAssign((struct DXGALLOCATION **)&v47, AllocationSafe);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(v62);
        v18 = v47;
        if ( !v47 )
        {
          v23 = (_QWORD *)WdLogNewEntry5_WdError(v22);
          v23[3] = v20;
          v17 = -1073741811;
          v23[4] = -1073741811LL;
          goto LABEL_27;
        }
        v12 = *(_QWORD *)(this[2].Count + 16);
        if ( *(_QWORD *)(*(_QWORD *)(v47[1].Count + 16) + 16LL) != *(_QWORD *)(v12 + 16) )
        {
          v23 = (_QWORD *)WdLogNewEntry5_WdError(v12);
          v23[3] = this[2].Count;
          v23[4] = v18;
          v17 = -1073741811;
          v23[5] = -1073741811LL;
LABEL_27:
          WdLogEvent5_WdError(v23);
LABEL_17:
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v47);
          goto LABEL_68;
        }
        v13 = v48;
        v15 = v52;
      }
      else
      {
        v18 = (struct _EX_RUNDOWN_REF *)v60;
      }
      if ( ((LODWORD(v18[9].Count) >> 12) & 0x3F) != v15 )
      {
        v16 = WdLogNewEntry5_WdError(v12);
        *(_QWORD *)(v16 + 24) = v18;
        goto LABEL_16;
      }
      v24 = (char *)a7 + 496;
      if ( *((_BYTE *)a7 + 348) )
        v25 = &v24[48 * v13 * *((_DWORD *)a7 + 125)
                 + 48
                 + *((_DWORD *)a7 + 125) * ((8 * *((_DWORD *)a7 + 126) + 175) & 0xFFFFFFF8)];
      else
        v25 = (char *)a7 + 480;
      v57 = (struct _EX_RUNDOWN_REF *)v25;
      v17 = _guard_dispatch_icall_fptr();
      if ( v17 < 0 )
      {
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v47);
        goto LABEL_67;
      }
      v26 = v51;
      PoolWithTag[v51] = (struct _EX_RUNDOWN_REF)v57->Count;
      v51 = v26 + 1;
      if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(this[2].Count + 16) + 16LL)) )
      {
        v27 = 0xFFFF;
        v49 = 0xFFFF;
        v55 = -1LL;
      }
      else
      {
        _guard_dispatch_icall_fptr();
        v27 = v49;
      }
      v28 = v48;
      if ( *((_BYTE *)a7 + 348) )
        *(_WORD *)&v24[48 * v48 * *((_DWORD *)a7 + 125)
                     + 32
                     + *((_DWORD *)a7 + 125) * ((8 * *((_DWORD *)a7 + 126) + 175) & 0xFFFFFFF8)] = v27;
      else
        *((_DWORD *)a7 + 133) ^= (*((_DWORD *)a7 + 133) ^ (v27 << 17)) & 0x3E0000;
      if ( *((_BYTE *)a7 + 348) )
        v29 = (__int64 *)&v24[48 * v28 * *((_DWORD *)a7 + 125)
                            + 40
                            + *((_DWORD *)a7 + 125) * ((8 * *((_DWORD *)a7 + 126) + 175) & 0xFFFFFFF8)];
      else
        v29 = (__int64 *)((char *)a7 + 496);
      *v29 = v55;
      Count = v18[5].Count;
      if ( Count )
        v31 = (*(_DWORD *)(Count + 4) & 8) != 0;
      else
        v31 = 0;
      if ( v31 )
        v32 = *(_QWORD *)(*(_QWORD *)(Count + 56) + 176LL);
      else
        v32 = 0LL;
      if ( *((_BYTE *)a7 + 348) )
        *(_QWORD *)((char *)a7
                  + 48 * v28 * *((_DWORD *)a7 + 125)
                  + *((_DWORD *)a7 + 125) * ((8 * *((_DWORD *)a7 + 126) + 175) & 0xFFFFFFF8)
                  + 552) = v32;
      else
        *((_QWORD *)a7 + 69) = v32;
      if ( *((_BYTE *)a7 + 348) )
        v33 = &v24[48 * v28 * *((_DWORD *)a7 + 125)
                 + 24
                 + *((_DWORD *)a7 + 125) * ((8 * *((_DWORD *)a7 + 126) + 175) & 0xFFFFFFF8)];
      else
        v33 = (char *)a7 + 488;
      *(_QWORD *)v33 = *(_QWORD *)(v18[6].Count + 16);
      if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(this[2].Count + 16) + 16LL) + 2418LL) )
      {
        if ( *((_BYTE *)a7 + 348) )
          v34 = &v24[48 * v28 * *((_DWORD *)a7 + 125)
                   + 16
                   + *((_DWORD *)a7 + 125) * ((8 * *((_DWORD *)a7 + 126) + 175) & 0xFFFFFFF8)];
        else
          v34 = (char *)a7 + 544;
        *(_QWORD *)v34 = *(_QWORD *)(v53[v58].Count + 184);
      }
      if ( *((_BYTE *)a7 + 348) )
        *((_DWORD *)a7 + 134) = -1;
      v35 = 4 * v58;
      v54[4 * v58] = v18[4];
      v36 = _guard_dispatch_icall_fptr();
      v37 = v54;
      v54[v35 + 1].Count = v36;
      v37[v35 + 2].Count = v55;
      LOWORD(v37[v35 + 3].Count) = v49;
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v47);
      v13 = v28 + 1;
      v7 = (DXGCONTEXT **)v53;
      v9 = v50;
    }
    v40 = v63;
    v63->NumSrcAllocations = v9;
    v40->pAllocationList = (DXGK_ALLOCATIONLIST *)v54;
    Ptr = 0LL;
    v42 = this[2].Count;
    if ( (v40->Flags.Value & 1) != 0 || !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v42 + 16) + 16LL) + 2418LL) )
      Ptr = this[23].Ptr;
    v17 = ADAPTER_RENDER::DdiPresent(*(ADAPTER_RENDER **)(v42 + 16), Ptr, v40);
    if ( v17 >= 0 )
    {
      v43 = 0;
      if ( v50 )
      {
        do
        {
          CurrentThread = KeGetCurrentThread();
          if ( *((struct _KTHREAD **)*v7 + 52) != CurrentThread )
          {
            v45 = WdLogNewEntry5_WdAssertion(CurrentThread);
            *(_QWORD *)(v45 + 24) = 7888LL;
            WdLogEvent5_WdAssertion(v45);
          }
          if ( (HIDWORD(this[45].Ptr) & 0x10) != 0 )
            DXGCONTEXT::SynchronizeImplicitQueueWithRenderQueues((DXGCONTEXT *)this, 0LL, 0);
          v17 = DXGCONTEXT::SubmitCommandToImplicitQueue(*v7, a7);
          if ( v17 < 0 )
            break;
          *(_DWORD *)a7 &= ~0x800u;
          ++v43;
          ++v7;
        }
        while ( v43 < v50 );
LABEL_67:
        v7 = (DXGCONTEXT **)v53;
      }
    }
  }
  else
  {
    v46 = WdLogNewEntry5_WdLowResource(v10);
    *(_QWORD *)(v46 + 24) = 7662LL;
    WdLogEvent5_WdLowResource(v46);
    v17 = -1073741801;
  }
LABEL_68:
  if ( v17 < 0 && v51 )
  {
    v38 = v51;
    do
    {
      _guard_dispatch_icall_fptr();
      ++v7;
      --v38;
    }
    while ( v38 );
  }
  PagedPoolZeroedArray<VIDMM_ALLOC *,4>::~PagedPoolZeroedArray<VIDMM_ALLOC *,4>((PVOID *)&v64);
  PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(v67);
  return (unsigned int)v17;
}
