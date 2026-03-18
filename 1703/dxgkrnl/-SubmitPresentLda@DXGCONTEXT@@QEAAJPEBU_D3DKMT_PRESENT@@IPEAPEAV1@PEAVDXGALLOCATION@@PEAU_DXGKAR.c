/*
 * XREFs of ?SubmitPresentLda@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@PEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C01A0660
 * Callers:
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00B2DA0 (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG.c)
 * Callees:
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0013830 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?VidMmReferencePrimaryAllocationForSubmission@VIDMM_EXPORT@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_ALLOC@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0013A14 (-VidMmReferencePrimaryAllocationForSubmission@VIDMM_EXPORT@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MU.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1C00208DC (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ?VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@KPEAUVIDMM_ALLOC@@H@Z @ 0x1C0038E6C (-VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@KPEAUVIDMM_ALLOC@@H@Z.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C00871E4 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ??1?$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ @ 0x1C0097FE0 (--1-$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00CCDF0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z @ 0x1C016C16C (-DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z.c)
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
  struct _EX_RUNDOWN_REF *v7; // r13
  struct _EX_RUNDOWN_REF *v8; // rdi
  UINT v9; // r15d
  _BYTE *PoolWithTag; // r12
  struct _EX_RUNDOWN_REF *v11; // r14
  ULONG_PTR Count; // rdx
  UINT v13; // r8d
  __int64 v14; // rcx
  ULONG_PTR v15; // rax
  unsigned int v16; // r9d
  __int64 v17; // rax
  int v18; // edi
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  struct _EX_RUNDOWN_REF *v22; // r13
  __int64 v23; // rdx
  unsigned int *v24; // rdx
  struct DXGALLOCATION **AllocationSafe; // rax
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rcx
  _QWORD *v31; // rax
  ULONG_PTR v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rax
  struct VIDMM_ALLOC **v37; // r8
  unsigned int v38; // edx
  struct VIDMM_ALLOC **v39; // r9
  ULONG_PTR v40; // rax
  int v41; // ecx
  char *v42; // r8
  char *v43; // rdx
  __int64 v44; // rcx
  char *v45; // rdx
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // r8
  __int64 v50; // r9
  struct _DXGKARG_PRESENT *v51; // r8
  __int64 v52; // rdx
  __int64 v53; // r8
  __int64 v54; // r9
  struct _EX_RUNDOWN_REF *v55; // r12
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v57; // rax
  __int64 v58; // rax
  signed __int64 v59; // r14
  __int64 v60; // rbx
  struct _EX_RUNDOWN_REF *v61; // rdi
  UINT v63; // [rsp+30h] [rbp-198h]
  int v64; // [rsp+38h] [rbp-190h]
  unsigned int v65; // [rsp+38h] [rbp-190h]
  unsigned int v66; // [rsp+40h] [rbp-188h]
  int v67; // [rsp+40h] [rbp-188h]
  struct _EX_RUNDOWN_REF *v68; // [rsp+48h] [rbp-180h] BYREF
  int v69; // [rsp+50h] [rbp-178h]
  unsigned int v70; // [rsp+54h] [rbp-174h]
  struct _EX_RUNDOWN_REF *v71; // [rsp+58h] [rbp-170h]
  struct VIDMM_ALLOC **v72; // [rsp+60h] [rbp-168h]
  __int64 v73; // [rsp+68h] [rbp-160h]
  struct _EX_RUNDOWN_REF *v74; // [rsp+70h] [rbp-158h]
  DXGPROCESS *v75; // [rsp+78h] [rbp-150h]
  unsigned int v76; // [rsp+80h] [rbp-148h]
  struct DXGALLOCATION *v77; // [rsp+88h] [rbp-140h]
  const struct _D3DKMT_PRESENT *v78; // [rsp+90h] [rbp-138h]
  struct _EX_RUNDOWN_REF *v79[4]; // [rsp+98h] [rbp-130h] BYREF
  struct _DXGKARG_PRESENT *v80; // [rsp+B8h] [rbp-110h]
  struct _EX_RUNDOWN_REF *v81; // [rsp+C0h] [rbp-108h] BYREF
  _BYTE v82[32]; // [rsp+C8h] [rbp-100h] BYREF
  UINT v83; // [rsp+E8h] [rbp-E0h]
  _BYTE *v84; // [rsp+F0h] [rbp-D8h] BYREF
  _BYTE v85[128]; // [rsp+F8h] [rbp-D0h] BYREF
  UINT v86; // [rsp+178h] [rbp-50h]

  v7 = a4;
  v71 = a4;
  v78 = a2;
  v8 = this;
  v74 = this;
  v79[2] = this;
  v79[3] = a4;
  v77 = a5;
  v80 = a6;
  v75 = *(DXGPROCESS **)(this[2].Count + 40);
  v9 = a3 + 1;
  v70 = 0;
  PoolWithTag = 0LL;
  v84 = 0LL;
  v86 = 0;
  if ( (unsigned int)(a3 + 1) <= 4 )
  {
    PoolWithTag = v85;
    v84 = v85;
  }
  else
  {
    this = (struct _EX_RUNDOWN_REF *)v9;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v9 < 0x20 )
      goto LABEL_7;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 32LL * v9, 0x4B677844u);
    v84 = PoolWithTag;
  }
  v86 = v9;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 32LL * v9);
    PoolWithTag = v84;
  }
LABEL_7:
  v11 = 0LL;
  v81 = 0LL;
  v83 = 0;
  if ( v9 <= 4 )
  {
    v11 = (struct _EX_RUNDOWN_REF *)v82;
    v81 = (struct _EX_RUNDOWN_REF *)v82;
LABEL_11:
    v83 = v9;
    if ( v11 )
    {
      memset(v11, 0, 8LL * v9);
      v11 = v81;
    }
    goto LABEL_13;
  }
  this = (struct _EX_RUNDOWN_REF *)v9;
  if ( 0xFFFFFFFFFFFFFFFFuLL / v9 >= 8 )
  {
    v11 = (struct _EX_RUNDOWN_REF *)ExAllocatePoolWithTag(PagedPool, 8LL * v9, 0x4B677844u);
    v81 = v11;
    goto LABEL_11;
  }
LABEL_13:
  v79[1] = v11;
  if ( !PoolWithTag || !v11 )
  {
    v58 = WdLogNewEntry5_WdLowResource(this);
    *(_QWORD *)(v58 + 24) = 6854LL;
    WdLogEvent5_WdLowResource(v58);
    v18 = -1073741801;
    v64 = -1073741801;
    goto LABEL_74;
  }
  Count = v8[2].Count;
  if ( *(_QWORD *)(Count + 1800) != *(_QWORD *)(*(_QWORD *)(Count + 16) + 16LL) || DXGPROCESS::IsRemoteConnection(v75) )
    *((_DWORD *)a7 + 29) = 0;
  *(_DWORD *)a7 |= 0xC00u;
  *((_DWORD *)a7 + 35) = v9;
  *((_BYTE *)a7 + (*((_BYTE *)a7 + 348) != 0 ? 0x10 : 0) + 416) = 1;
  v13 = 0;
  while ( 1 )
  {
    v63 = v13;
    if ( v13 >= v9 )
    {
      v51 = v80;
      v80->NumSrcAllocations = v9;
      v51->pAllocationList = (DXGK_ALLOCATIONLIST *)PoolWithTag;
      v18 = ADAPTER_RENDER::DdiPresent(*(ADAPTER_RENDER **)(v8[2].Count + 16), v8[23].Ptr, v51);
      v64 = v18;
      if ( v18 >= 0 )
      {
        v67 = 0;
        if ( v9 )
        {
          v55 = v7;
          do
          {
            CurrentThread = KeGetCurrentThread();
            if ( *(struct _KTHREAD **)(v55->Count + 384) != CurrentThread )
            {
              v57 = WdLogNewEntry5_WdAssertion(CurrentThread, v52, v53, v54);
              *(_QWORD *)(v57 + 24) = 7056LL;
              WdLogEvent5_WdAssertion(v57);
            }
            v18 = _guard_dispatch_icall_fptr();
            v64 = v18;
            if ( v18 < 0 )
              break;
            *(_DWORD *)a7 &= ~0x800u;
            v52 = (unsigned int)(v67 + 1);
            v67 = v52;
            ++v55;
          }
          while ( (unsigned int)v52 < v9 );
        }
      }
      goto LABEL_74;
    }
    v14 = v13;
    v73 = v13;
    v15 = v7[v13].Count;
    v16 = *(_DWORD *)(v15 + 344);
    v66 = v16;
    v68 = 0LL;
    if ( !*(_BYTE *)(v15 + 366) )
    {
      v17 = WdLogNewEntry5_WdError(v13, Count);
      *(_QWORD *)(v17 + 24) = 6894LL;
LABEL_22:
      WdLogEvent5_WdError(v17);
      v18 = -1073741811;
      v64 = -1073741811;
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v68, v19, v20, v21);
      goto LABEL_74;
    }
    if ( !v13 )
    {
      v22 = (struct _EX_RUNDOWN_REF *)v77;
      goto LABEL_38;
    }
    v23 = v13 - 1;
    if ( v16 <= *(_DWORD *)(v7[v23].Count + 344) )
    {
      v17 = WdLogNewEntry5_WdError(v13, v23);
      *(_QWORD *)(v17 + 24) = 6910LL;
      goto LABEL_22;
    }
    v24 = &v78->BroadcastSrcAllocation[v23];
    if ( v24 + 1 < v24 || (unsigned __int64)(v24 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    v65 = *v24;
    v76 = *v24;
    AllocationSafe = (struct DXGALLOCATION **)DXGPROCESS::GetAllocationSafe(
                                                (__int64)v75,
                                                (DXGALLOCATIONREFERENCE *)v79,
                                                v76);
    DXGALLOCATIONREFERENCE::MoveAssign((struct DXGALLOCATION **)&v68, AllocationSafe);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(v79, v26, v27, v28);
    v22 = v68;
    if ( !v68 )
    {
      v31 = (_QWORD *)WdLogNewEntry5_WdError(v30, v29);
      v32 = v65;
      v18 = -1073741811;
      v31[4] = -1073741811LL;
      goto LABEL_32;
    }
    Count = *(_QWORD *)(v8[2].Count + 16);
    v14 = *(_QWORD *)(v68[1].Count + 16);
    if ( *(_QWORD *)(v14 + 16) != *(_QWORD *)(Count + 16) )
      break;
    v13 = v63;
    v16 = v66;
LABEL_38:
    if ( ((LODWORD(v22[9].Count) >> 12) & 0x3F) != v16 )
    {
      v36 = WdLogNewEntry5_WdError(v14, Count);
      *(_QWORD *)(v36 + 24) = v22;
      WdLogEvent5_WdError(v36);
      v18 = -1073741811;
      goto LABEL_33;
    }
    if ( *((_BYTE *)a7 + 348) )
      v37 = (struct VIDMM_ALLOC **)((char *)a7
                                  + 48 * v13 * *((_DWORD *)a7 + 109)
                                  + *((_DWORD *)a7 + 109) * ((8 * *((_DWORD *)a7 + 110) + 167) & 0xFFFFFFF8)
                                  + 480);
    else
      v37 = (struct VIDMM_ALLOC **)((char *)a7 + 424);
    v72 = v37;
    v18 = VIDMM_EXPORT::VidMmReferencePrimaryAllocationForSubmission(
            *(VIDMM_EXPORT **)(*(_QWORD *)(v8[2].Count + 16) + 432LL),
            *(struct VIDMM_DEVICE **)(v8[2].Count + 592),
            (struct _VIDMM_MULTI_ALLOC *)v22[3].Count,
            v37);
    v64 = v18;
    if ( v18 < 0 )
      goto LABEL_34;
    v38 = v70;
    v11[v70].Count = (ULONG_PTR)*v72;
    v70 = v38 + 1;
    if ( *((_BYTE *)a7 + 348) )
      v39 = (struct VIDMM_ALLOC **)((char *)a7
                                  + 48 * v63 * *((_DWORD *)a7 + 109)
                                  + *((_DWORD *)a7 + 109) * ((8 * *((_DWORD *)a7 + 110) + 167) & 0xFFFFFFF8)
                                  + 472);
    else
      v39 = (struct VIDMM_ALLOC **)((char *)a7 + 440);
    v72 = v39;
    v8 = v74;
    _guard_dispatch_icall_fptr();
    if ( *((_BYTE *)a7 + 348) )
      *(_WORD *)((char *)a7
               + 48 * v63 * *((_DWORD *)a7 + 109)
               + *((_DWORD *)a7 + 109) * ((8 * *((_DWORD *)a7 + 110) + 167) & 0xFFFFFFF8)
               + 464) = v69;
    else
      *((_DWORD *)a7 + 119) ^= (*((_DWORD *)a7 + 119) ^ (v69 << 17)) & 0x3E0000;
    v40 = v22[5].Count;
    if ( v40 )
      v41 = (*(_DWORD *)(v40 + 4) >> 3) & 1;
    else
      v41 = 0;
    if ( *((_BYTE *)a7 + 348) )
      *((_BYTE *)a7
      + 48 * v63 * *((_DWORD *)a7 + 109)
      + *((_DWORD *)a7 + 109) * ((8 * *((_DWORD *)a7 + 110) + 167) & 0xFFFFFFF8)
      + 488) = v41 != 0;
    else
      *((_DWORD *)a7 + 119) = (v41 << 23) | *((_DWORD *)a7 + 119) & 0xFF7FFFFF;
    v42 = (char *)a7 + 432;
    if ( *((_BYTE *)a7 + 348) )
      v43 = &v42[48 * v63 * *((_DWORD *)a7 + 109)
               + 24
               + *((_DWORD *)a7 + 109) * ((8 * *((_DWORD *)a7 + 110) + 167) & 0xFFFFFFF8)];
    else
      v43 = (char *)a7 + 432;
    *(_QWORD *)v43 = *(_QWORD *)(v22[6].Count + 16);
    v44 = v73;
    if ( *((_BYTE *)a7 + 348) )
    {
      v45 = &v42[48 * v63 * *((_DWORD *)a7 + 109)
               + 16
               + *((_DWORD *)a7 + 109) * ((8 * *((_DWORD *)a7 + 110) + 167) & 0xFFFFFFF8)];
      v44 = v73;
    }
    else
    {
      v45 = (char *)a7 + 480;
    }
    *(_QWORD *)v45 = *(_QWORD *)(v71[v73].Count + 184);
    if ( *((_BYTE *)a7 + 348) )
      *((_DWORD *)a7 + 118) = -1;
    v73 = 32 * v44;
    *(struct _EX_RUNDOWN_REF *)&PoolWithTag[v73] = v22[4];
    v46 = _guard_dispatch_icall_fptr();
    v47 = v73;
    *(_QWORD *)&PoolWithTag[v73 + 8] = v46;
    *(_QWORD *)&PoolWithTag[v47 + 16] = *v72;
    *(_WORD *)&PoolWithTag[v47 + 24] = v69;
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v68, v48, v49, v50);
    v13 = v63 + 1;
    v7 = v71;
  }
  v31 = (_QWORD *)WdLogNewEntry5_WdError(v14, Count);
  v32 = v8[2].Count;
  v31[4] = v22;
  v18 = -1073741811;
  v31[5] = -1073741811LL;
LABEL_32:
  v31[3] = v32;
  WdLogEvent5_WdError(v31);
LABEL_33:
  v64 = -1073741811;
LABEL_34:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v68, v33, v34, v35);
  v7 = v71;
LABEL_74:
  if ( v18 < 0 && v70 )
  {
    v59 = (char *)v11 - (char *)v7;
    v60 = v70;
    v61 = v74;
    do
    {
      VIDMM_EXPORT::VidMmUnreferencePrimaryAllocation(
        *(VIDMM_EXPORT **)(*(_QWORD *)(v61[2].Count + 16) + 432LL),
        *(struct VIDMM_DEVICE **)(v61[2].Count + 592),
        1 << *(_DWORD *)(v7->Count + 344),
        *(struct VIDMM_ALLOC **)((char *)&v7->Count + v59));
      ++v7;
      --v60;
    }
    while ( v60 );
    v18 = v64;
  }
  PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>((PVOID *)&v81);
  PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>((PVOID *)&v84);
  return (unsigned int)v18;
}
