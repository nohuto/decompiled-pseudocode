/*
 * XREFs of ?Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x1C0050454
 * Callers:
 *     ?ReserveResource@VIDMM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTRICTION@@@Z @ 0x1C004F1A0 (-ReserveResource@VIDMM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTRICTION@.c)
 *     ?MapPagesIntoAperture@VIDMM_APERTURE_SEGMENT@@UEAAJKPEAU_MDL@@HPEAPEAXPEA_K@Z @ 0x1C00A78D0 (-MapPagesIntoAperture@VIDMM_APERTURE_SEGMENT@@UEAAJKPEAU_MDL@@HPEAPEAXPEA_K@Z.c)
 *     ?ReserveTemporaryResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00A7D80 (-ReserveTemporaryResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ValidateApertureUnmapToDummyPage@VIDMM_APERTURE_SEGMENT@@UEAAJPEAVVIDMM_SEGMENT@@_K@Z @ 0x1C00A8450 (-ValidateApertureUnmapToDummyPage@VIDMM_APERTURE_SEGMENT@@UEAAJPEAVVIDMM_SEGMENT@@_K@Z.c)
 *     ?AllocateScratchRange@VIDMM_MEMORY_SEGMENT@@UEAAJKPEAPEAXPEA_K@Z @ 0x1C00A89C0 (-AllocateScratchRange@VIDMM_MEMORY_SEGMENT@@UEAAJKPEAPEAXPEA_K@Z.c)
 *     ?AttemptToGrowVPRForAllocation@VIDMM_SEGMENT@@QEAAJ_KPEAU_VIDMM_GLOBAL_ALLOC@@EE@Z @ 0x1C00A98B4 (-AttemptToGrowVPRForAllocation@VIDMM_SEGMENT@@QEAAJ_KPEAU_VIDMM_GLOBAL_ALLOC@@EE@Z.c)
 *     ?ReserveVPRResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EE@Z @ 0x1C00ABA38 (-ReserveVPRResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EE@Z.c)
 *     ?AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAEE@Z @ 0x1C00AFF94 (-AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAE.c)
 *     ?AllocateAt@VIDMM_LINEAR_POOL@@QEAAJT_LARGE_INTEGER@@_KPEAXPEAPEAX@Z @ 0x1C00B19B4 (-AllocateAt@VIDMM_LINEAR_POOL@@QEAAJT_LARGE_INTEGER@@_KPEAXPEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00180A0 (_guard_dispatch_icall_nop.c)
 *     ?FindBlockRun@VIDMM_LINEAR_POOL@@IEAAJ_KKE00W4_VIDMM_BLOCK_RUN_CONSTRAINT@@PEAPEAU_VIDMM_POOL_BLOCK@@2PEA_K3@Z @ 0x1C004FA50 (-FindBlockRun@VIDMM_LINEAR_POOL@@IEAAJ_KKE00W4_VIDMM_BLOCK_RUN_CONSTRAINT@@PEAPEAU_VIDMM_POOL_BL.c)
 *     ?FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z @ 0x1C004FE74 (-FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z.c)
 *     ?SplitBlock@VIDMM_LINEAR_POOL@@IEAAJPEAU_VIDMM_POOL_BLOCK@@_K1PEAPEAU2@E@Z @ 0x1C004FFD8 (-SplitBlock@VIDMM_LINEAR_POOL@@IEAAJPEAU_VIDMM_POOL_BLOCK@@_K1PEAPEAU2@E@Z.c)
 */

__int64 __fastcall VIDMM_LINEAR_POOL::Allocate(
        VIDMM_LINEAR_POOL *this,
        __int64 a2,
        int a3,
        char a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        char a7,
        char a8,
        void *a9,
        union _LARGE_INTEGER *a10,
        void **a11)
{
  struct _VIDMM_POOL_BLOCK *v11; // rbx
  int BlockRun; // edi
  VIDMM_LINEAR_POOL **v17; // r12
  _QWORD *v18; // r14
  _QWORD *v19; // r15
  struct _VIDMM_POOL_BLOCK *v20; // rdi
  VIDMM_LINEAR_POOL *v21; // rdi
  char *v22; // rdi
  __int64 v23; // rdi
  __int64 v24; // rcx
  struct _VIDMM_POOL_BLOCK *v25; // rdx
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rax
  _QWORD *v31; // rax
  __int64 v32; // rdx
  _QWORD *v33; // rcx
  _QWORD *v34; // rax
  __int64 v35; // rdx
  _QWORD *v36; // rcx
  __int64 v37; // rax
  _QWORD *v38; // rax
  __int64 v39; // rdx
  _QWORD *v40; // rcx
  _QWORD *v41; // rax
  __int64 v42; // rdx
  _QWORD *v43; // rcx
  __int64 v44; // rax
  _QWORD *v45; // rax
  __int64 v46; // rdx
  _QWORD *v47; // rcx
  _QWORD *v48; // rax
  __int64 v49; // rdx
  _QWORD *v50; // rcx
  struct _VIDMM_POOL_BLOCK *v51; // [rsp+60h] [rbp-20h] BYREF
  struct _VIDMM_POOL_BLOCK *v52; // [rsp+68h] [rbp-18h] BYREF
  unsigned __int64 v53; // [rsp+70h] [rbp-10h] BYREF
  unsigned __int64 v54; // [rsp+78h] [rbp-8h] BYREF

  v11 = 0LL;
  v52 = 0LL;
  v54 = 0LL;
  v53 = 0LL;
  v51 = 0LL;
  BlockRun = -1073741811;
  if ( a8 )
    goto LABEL_20;
  BlockRun = VIDMM_LINEAR_POOL::FindBlockRun((__int64)this, a2, a3, a4, a5, a6, 0, &v51, (__int64 *)&v52, &v54, &v53);
  if ( BlockRun < 0 )
  {
    if ( !*((_DWORD *)this + 4) || a7 )
    {
LABEL_27:
      if ( BlockRun < 0 )
        return (unsigned int)BlockRun;
      goto LABEL_3;
    }
    v11 = v51;
LABEL_20:
    if ( *((_QWORD *)this + 4) )
    {
      v27 = VIDMM_LINEAR_POOL::FindBlockRun((__int64)this, a2, a3, a4, a5, a6, 1u, &v51, (__int64 *)&v52, &v54, &v53);
      v11 = v51;
      BlockRun = v27;
    }
    if ( BlockRun >= 0 )
      goto LABEL_4;
    BlockRun = VIDMM_LINEAR_POOL::FindBlockRun((__int64)this, a2, a3, a4, a5, a6, 2u, &v51, (__int64 *)&v52, &v54, &v53);
    goto LABEL_27;
  }
LABEL_3:
  v11 = v51;
LABEL_4:
  v17 = (VIDMM_LINEAR_POOL **)((char *)v11 + 24);
  v18 = (_QWORD *)((char *)v11 + 24);
  v19 = (_QWORD *)*((_QWORD *)v52 + 3);
  if ( (_QWORD *)((char *)v11 + 24) != v19 )
  {
    do
    {
      v20 = (struct _VIDMM_POOL_BLOCK *)(v18 - 3);
      v18 = (_QWORD *)*v18;
      if ( *((_BYTE *)v20 + 56) == 4 )
      {
        if ( g_IsInternalReleaseOrDbg )
          *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = v20;
        (*((void (__fastcall **)(_QWORD))this + 3))(*((_QWORD *)v20 + 2));
        *((_BYTE *)v20 + 56) = 2;
        *((_QWORD *)v20 + 2) = 0LL;
        if ( !*((_DWORD *)this + 4) )
        {
          v29 = WdLogNewEntry5_WdAssertion(this, v28);
          *(_QWORD *)(v29 + 24) = 464LL;
          WdLogEvent5_WdAssertion(v29);
        }
        --*((_DWORD *)this + 4);
      }
      if ( v11 != v20 )
      {
        if ( g_IsInternalReleaseOrDbg )
        {
          v30 = WdLogNewEntry5_WdTrace(this);
          *(_QWORD *)(v30 + 24) = v20;
          *(_QWORD *)(v30 + 32) = v11;
        }
        *((_QWORD *)v11 + 1) += *((_QWORD *)v20 + 1);
        v31 = (_QWORD *)((char *)v20 + 24);
        v32 = *((_QWORD *)v20 + 3);
        if ( *(struct _VIDMM_POOL_BLOCK **)(v32 + 8) != (struct _VIDMM_POOL_BLOCK *)((char *)v20 + 24)
          || (v33 = (_QWORD *)*((_QWORD *)v20 + 4), (_QWORD *)*v33 != v31) )
        {
          __fastfail(3u);
        }
        *v33 = v32;
        *(_QWORD *)(v32 + 8) = v33;
        *v31 = 0LL;
        v34 = (_QWORD *)((char *)v20 + 40);
        *((_QWORD *)v20 + 4) = 0LL;
        v35 = *((_QWORD *)v20 + 5);
        if ( *(struct _VIDMM_POOL_BLOCK **)(v35 + 8) != (struct _VIDMM_POOL_BLOCK *)((char *)v20 + 40)
          || (v36 = (_QWORD *)*((_QWORD *)v20 + 6), (_QWORD *)*v36 != v34) )
        {
          __fastfail(3u);
        }
        *v36 = v35;
        *(_QWORD *)(v35 + 8) = v36;
        *v34 = 0LL;
        *((_QWORD *)v20 + 6) = 0LL;
        VIDMM_LINEAR_POOL::FreeBlock(this, v20);
      }
    }
    while ( v18 != v19 );
  }
  v21 = (VIDMM_LINEAR_POOL *)*((_QWORD *)v11 + 4);
  if ( v21 != (VIDMM_LINEAR_POOL *)((char *)this + 40) )
  {
    v22 = (char *)v21 - 24;
    if ( v22[56] == 2 && *(_QWORD *)v22 + *((_QWORD *)v22 + 1) == *(_QWORD *)v11 )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        v37 = WdLogNewEntry5_WdTrace(this);
        *(_QWORD *)(v37 + 24) = v11;
        *(_QWORD *)(v37 + 32) = v22;
      }
      *(_QWORD *)v11 = *(_QWORD *)v22;
      *((_QWORD *)v11 + 1) += *((_QWORD *)v22 + 1);
      v38 = v22 + 24;
      v39 = *((_QWORD *)v22 + 3);
      if ( *(char **)(v39 + 8) != v22 + 24 || (v40 = (_QWORD *)*((_QWORD *)v22 + 4), (_QWORD *)*v40 != v38) )
        __fastfail(3u);
      *v40 = v39;
      *(_QWORD *)(v39 + 8) = v40;
      *v38 = 0LL;
      v41 = v22 + 40;
      *((_QWORD *)v22 + 4) = 0LL;
      v42 = *((_QWORD *)v22 + 5);
      if ( *(char **)(v42 + 8) != v22 + 40 || (v43 = (_QWORD *)*((_QWORD *)v22 + 6), (_QWORD *)*v43 != v41) )
        __fastfail(3u);
      *v43 = v42;
      *(_QWORD *)(v42 + 8) = v43;
      *v41 = 0LL;
      *((_QWORD *)v22 + 6) = 0LL;
      VIDMM_LINEAR_POOL::FreeBlock(this, (struct _VIDMM_POOL_BLOCK *)v22);
    }
  }
  if ( *v17 != (VIDMM_LINEAR_POOL *)((char *)this + 40) )
  {
    v23 = (__int64)*v17 - 24;
    if ( *(_BYTE *)(v23 + 56) == 2 && *(_QWORD *)v23 == *((_QWORD *)v11 + 1) + *(_QWORD *)v11 )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        v44 = WdLogNewEntry5_WdTrace(this);
        *(_QWORD *)(v44 + 24) = v11;
        *(_QWORD *)(v44 + 32) = v23;
      }
      *((_QWORD *)v11 + 1) += *(_QWORD *)(v23 + 8);
      v45 = (_QWORD *)(v23 + 24);
      v46 = *(_QWORD *)(v23 + 24);
      if ( *(_QWORD *)(v46 + 8) != v23 + 24 || (v47 = *(_QWORD **)(v23 + 32), (_QWORD *)*v47 != v45) )
        __fastfail(3u);
      *v47 = v46;
      *(_QWORD *)(v46 + 8) = v47;
      *v45 = 0LL;
      v48 = (_QWORD *)(v23 + 40);
      *(_QWORD *)(v23 + 32) = 0LL;
      v49 = *(_QWORD *)(v23 + 40);
      if ( *(_QWORD *)(v49 + 8) != v23 + 40 || (v50 = *(_QWORD **)(v23 + 48), (_QWORD *)*v50 != v48) )
        __fastfail(3u);
      *v50 = v49;
      *(_QWORD *)(v49 + 8) = v50;
      *v48 = 0LL;
      *(_QWORD *)(v23 + 48) = 0LL;
      VIDMM_LINEAR_POOL::FreeBlock(this, (struct _VIDMM_POOL_BLOCK *)v23);
    }
  }
  BlockRun = VIDMM_LINEAR_POOL::SplitBlock(this, v11, v54, v53, &v52);
  if ( BlockRun < 0 )
  {
    if ( g_IsInternalReleaseOrDbg )
      WdLogNewEntry5_WdTrace(v24);
  }
  else
  {
    if ( g_IsInternalReleaseOrDbg )
      WdLogNewEntry5_WdTrace(v24);
    v25 = v52;
    *((_QWORD *)v52 + 2) = a9;
    *a10 = *(union _LARGE_INTEGER *)v25;
    *a11 = v25;
  }
  return (unsigned int)BlockRun;
}
