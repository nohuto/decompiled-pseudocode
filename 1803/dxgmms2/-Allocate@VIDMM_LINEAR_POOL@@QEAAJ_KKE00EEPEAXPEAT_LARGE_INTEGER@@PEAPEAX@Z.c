/*
 * XREFs of ?Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x1C00541C0
 * Callers:
 *     ?ReserveResource@VIDMM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTRICTION@@@Z @ 0x1C0072930 (-ReserveResource@VIDMM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTRICTION@.c)
 *     ?MapPagesIntoAperture@VIDMM_APERTURE_SEGMENT@@UEAAJKPEAU_MDL@@HPEAPEAXPEA_K@Z @ 0x1C00AF280 (-MapPagesIntoAperture@VIDMM_APERTURE_SEGMENT@@UEAAJKPEAU_MDL@@HPEAPEAXPEA_K@Z.c)
 *     ?ReserveTemporaryResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00AF720 (-ReserveTemporaryResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ValidateApertureUnmapToDummyPage@VIDMM_APERTURE_SEGMENT@@UEAAJPEAVVIDMM_SEGMENT@@_K@Z @ 0x1C00AFF50 (-ValidateApertureUnmapToDummyPage@VIDMM_APERTURE_SEGMENT@@UEAAJPEAVVIDMM_SEGMENT@@_K@Z.c)
 *     ?AllocateScratchRange@VIDMM_MEMORY_SEGMENT@@UEAAJKPEAPEAXPEA_K@Z @ 0x1C00B04D0 (-AllocateScratchRange@VIDMM_MEMORY_SEGMENT@@UEAAJKPEAPEAXPEA_K@Z.c)
 *     ?AttemptToGrowVPRForAllocation@VIDMM_SEGMENT@@QEAAJ_KPEAU_VIDMM_GLOBAL_ALLOC@@EE@Z @ 0x1C00B1990 (-AttemptToGrowVPRForAllocation@VIDMM_SEGMENT@@QEAAJ_KPEAU_VIDMM_GLOBAL_ALLOC@@EE@Z.c)
 *     ?ReserveVPRResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EE@Z @ 0x1C00B4300 (-ReserveVPRResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EE@Z.c)
 *     ?AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAEE@Z @ 0x1C00B8848 (-AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAE.c)
 *     ?AllocateAt@VIDMM_LINEAR_POOL@@QEAAJT_LARGE_INTEGER@@_KPEAXPEAPEAX@Z @ 0x1C00BA2E4 (-AllocateAt@VIDMM_LINEAR_POOL@@QEAAJT_LARGE_INTEGER@@_KPEAXPEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 *     ?FindBlockRun@VIDMM_LINEAR_POOL@@IEAAJ_KKE00W4_VIDMM_BLOCK_RUN_CONSTRAINT@@PEAPEAU_VIDMM_POOL_BLOCK@@2PEA_K3@Z @ 0x1C0053810 (-FindBlockRun@VIDMM_LINEAR_POOL@@IEAAJ_KKE00W4_VIDMM_BLOCK_RUN_CONSTRAINT@@PEAPEAU_VIDMM_POOL_BL.c)
 *     ?FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z @ 0x1C0053BE8 (-FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z.c)
 *     ?SplitBlock@VIDMM_LINEAR_POOL@@IEAAJPEAU_VIDMM_POOL_BLOCK@@_K1PEAPEAU2@E@Z @ 0x1C0053D44 (-SplitBlock@VIDMM_LINEAR_POOL@@IEAAJPEAU_VIDMM_POOL_BLOCK@@_K1PEAPEAU2@E@Z.c)
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
  VIDMM_LINEAR_POOL **v17; // r13
  _QWORD *v18; // rsi
  _QWORD *v19; // r12
  struct _VIDMM_POOL_BLOCK *v20; // rdi
  _QWORD *v21; // r15
  bool v22; // zf
  VIDMM_LINEAR_POOL *v23; // rdi
  __int64 *v24; // rsi
  VIDMM_LINEAR_POOL *v25; // rsi
  _QWORD *v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rcx
  struct _VIDMM_POOL_BLOCK *v30; // rdx
  __int64 v32; // rdx
  __int64 v33; // rcx
  int v34; // eax
  __int64 v35; // rdx
  int v36; // eax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rcx
  _QWORD *v40; // rax
  _QWORD *v41; // rax
  __int64 v42; // rdx
  _QWORD *v43; // rcx
  __int64 v44; // rax
  VIDMM_LINEAR_POOL *v45; // rcx
  VIDMM_LINEAR_POOL **v46; // rax
  _QWORD *v47; // rax
  __int64 v48; // rdx
  _QWORD *v49; // rcx
  __int64 v50; // rax
  VIDMM_LINEAR_POOL *v51; // rcx
  VIDMM_LINEAR_POOL **v52; // rax
  _QWORD *v53; // rax
  __int64 v54; // rdx
  _QWORD *v55; // rcx
  struct _VIDMM_POOL_BLOCK *v56; // [rsp+60h] [rbp-20h] BYREF
  struct _VIDMM_POOL_BLOCK *v57; // [rsp+68h] [rbp-18h] BYREF
  unsigned __int64 v58; // [rsp+70h] [rbp-10h] BYREF
  unsigned __int64 v59; // [rsp+78h] [rbp-8h] BYREF

  v11 = 0LL;
  v57 = 0LL;
  v59 = 0LL;
  v58 = 0LL;
  v56 = 0LL;
  BlockRun = -1073741811;
  if ( a8 )
    goto LABEL_20;
  BlockRun = VIDMM_LINEAR_POOL::FindBlockRun((__int64)this, a2, a3, a4, a5, a6, 0, &v56, (__int64 *)&v57, &v59, &v58);
  if ( BlockRun < 0 )
  {
    if ( !*((_DWORD *)this + 4) || a7 )
    {
LABEL_27:
      if ( BlockRun < 0 )
        return (unsigned int)BlockRun;
      goto LABEL_3;
    }
    v11 = v56;
LABEL_20:
    if ( *((_QWORD *)this + 4) )
    {
      v34 = VIDMM_LINEAR_POOL::FindBlockRun((__int64)this, a2, a3, a4, a5, a6, 1u, &v56, (__int64 *)&v57, &v59, &v58);
      v11 = v56;
      BlockRun = v34;
    }
    if ( BlockRun >= 0 )
      goto LABEL_4;
    BlockRun = VIDMM_LINEAR_POOL::FindBlockRun((__int64)this, a2, a3, a4, a5, a6, 2u, &v56, (__int64 *)&v57, &v59, &v58);
    goto LABEL_27;
  }
LABEL_3:
  v11 = v56;
LABEL_4:
  v17 = (VIDMM_LINEAR_POOL **)((char *)v11 + 24);
  v18 = (_QWORD *)((char *)v11 + 24);
  v19 = (_QWORD *)*((_QWORD *)v57 + 3);
  if ( (_QWORD *)((char *)v11 + 24) != v19 )
  {
    do
    {
      v20 = (struct _VIDMM_POOL_BLOCK *)(v18 - 3);
      v21 = v18;
      v22 = *((_BYTE *)v18 + 32) == 4;
      v18 = (_QWORD *)*v18;
      if ( v22 )
      {
        if ( g_IsInternalReleaseOrDbg )
          *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = v20;
        (*((void (__fastcall **)(_QWORD))this + 3))(*((_QWORD *)v20 + 2));
        *((_QWORD *)v20 + 2) = 0LL;
        *((_BYTE *)v20 + 56) = 2;
        v36 = *((_DWORD *)this + 4);
        if ( !v36 )
        {
          v37 = WdLogNewEntry5_WdAssertion(this, v35);
          *(_QWORD *)(v37 + 24) = 464LL;
          WdLogEvent5_WdAssertion(v37);
          v36 = *((_DWORD *)this + 4);
        }
        *((_DWORD *)this + 4) = v36 - 1;
      }
      if ( v11 != v20 )
      {
        if ( g_IsInternalReleaseOrDbg )
        {
          v38 = WdLogNewEntry5_WdTrace(this);
          *(_QWORD *)(v38 + 24) = v20;
          *(_QWORD *)(v38 + 32) = v11;
        }
        *((_QWORD *)v11 + 1) += *((_QWORD *)v20 + 1);
        v39 = *v21;
        if ( *(_QWORD **)(*v21 + 8LL) != v21 || (v40 = (_QWORD *)v21[1], (_QWORD *)*v40 != v21) )
          __fastfail(3u);
        *v40 = v39;
        *(_QWORD *)(v39 + 8) = v40;
        v41 = (_QWORD *)((char *)v20 + 40);
        *v21 = 0LL;
        *((_QWORD *)v20 + 4) = 0LL;
        v42 = *((_QWORD *)v20 + 5);
        if ( *(struct _VIDMM_POOL_BLOCK **)(v42 + 8) != (struct _VIDMM_POOL_BLOCK *)((char *)v20 + 40)
          || (v43 = (_QWORD *)*((_QWORD *)v20 + 6), (_QWORD *)*v43 != v41) )
        {
          __fastfail(3u);
        }
        *v43 = v42;
        *(_QWORD *)(v42 + 8) = v43;
        *v41 = 0LL;
        *((_QWORD *)v20 + 6) = 0LL;
        VIDMM_LINEAR_POOL::FreeBlock(this, v20);
      }
    }
    while ( v18 != v19 );
  }
  v23 = (VIDMM_LINEAR_POOL *)*((_QWORD *)v11 + 4);
  if ( v23 != (VIDMM_LINEAR_POOL *)((char *)this + 40) )
  {
    v24 = (__int64 *)((char *)v23 - 24);
    if ( *((_BYTE *)v23 + 32) == 2 )
    {
      v32 = *v24;
      v33 = *v24 + *((_QWORD *)v23 - 2);
      if ( v33 == *(_QWORD *)v11 )
      {
        if ( g_IsInternalReleaseOrDbg )
        {
          v44 = WdLogNewEntry5_WdTrace(v33);
          *(_QWORD *)(v44 + 24) = v11;
          *(_QWORD *)(v44 + 32) = v24;
          v32 = *v24;
        }
        *(_QWORD *)v11 = v32;
        *((_QWORD *)v11 + 1) += *((_QWORD *)v23 - 2);
        v45 = *(VIDMM_LINEAR_POOL **)v23;
        if ( *(VIDMM_LINEAR_POOL **)(*(_QWORD *)v23 + 8LL) != v23
          || (v46 = (VIDMM_LINEAR_POOL **)*((_QWORD *)v23 + 1), *v46 != v23) )
        {
          __fastfail(3u);
        }
        *v46 = v45;
        *((_QWORD *)v45 + 1) = v46;
        v47 = (_QWORD *)((char *)v23 + 16);
        *(_QWORD *)v23 = 0LL;
        *((_QWORD *)v23 + 1) = 0LL;
        v48 = *((_QWORD *)v23 + 2);
        if ( *(VIDMM_LINEAR_POOL **)(v48 + 8) != (VIDMM_LINEAR_POOL *)((char *)v23 + 16)
          || (v49 = (_QWORD *)*((_QWORD *)v23 + 3), (_QWORD *)*v49 != v47) )
        {
          __fastfail(3u);
        }
        *v49 = v48;
        *(_QWORD *)(v48 + 8) = v49;
        *v47 = 0LL;
        *((_QWORD *)v23 + 3) = 0LL;
        VIDMM_LINEAR_POOL::FreeBlock(this, (VIDMM_LINEAR_POOL *)((char *)v23 - 24));
      }
    }
  }
  v25 = *v17;
  if ( *v17 != (VIDMM_LINEAR_POOL *)((char *)this + 40) )
  {
    v26 = (_QWORD *)((char *)v25 - 24);
    if ( *((_BYTE *)v25 + 32) == 2 )
    {
      v27 = *((_QWORD *)v11 + 1);
      v28 = v27 + *(_QWORD *)v11;
      if ( *v26 == v28 )
      {
        if ( g_IsInternalReleaseOrDbg )
        {
          v50 = WdLogNewEntry5_WdTrace(v28);
          *(_QWORD *)(v50 + 24) = v11;
          *(_QWORD *)(v50 + 32) = v26;
          v27 = *((_QWORD *)v11 + 1);
        }
        *((_QWORD *)v11 + 1) = v27 + v26[1];
        v51 = *(VIDMM_LINEAR_POOL **)v25;
        if ( *(VIDMM_LINEAR_POOL **)(*(_QWORD *)v25 + 8LL) != v25
          || (v52 = (VIDMM_LINEAR_POOL **)*((_QWORD *)v25 + 1), *v52 != v25) )
        {
          __fastfail(3u);
        }
        *v52 = v51;
        *((_QWORD *)v51 + 1) = v52;
        v53 = v26 + 5;
        *(_QWORD *)v25 = 0LL;
        v26[4] = 0LL;
        v54 = v26[5];
        if ( *(_QWORD **)(v54 + 8) != v26 + 5 || (v55 = (_QWORD *)v26[6], (_QWORD *)*v55 != v53) )
          __fastfail(3u);
        *v55 = v54;
        *(_QWORD *)(v54 + 8) = v55;
        *v53 = 0LL;
        v26[6] = 0LL;
        VIDMM_LINEAR_POOL::FreeBlock(this, (VIDMM_LINEAR_POOL *)((char *)v25 - 24));
      }
    }
  }
  BlockRun = VIDMM_LINEAR_POOL::SplitBlock(this, v11, v59, v58, &v57);
  if ( BlockRun < 0 )
  {
    if ( g_IsInternalReleaseOrDbg )
      WdLogNewEntry5_WdTrace(v29);
  }
  else
  {
    if ( g_IsInternalReleaseOrDbg )
      WdLogNewEntry5_WdTrace(v29);
    v30 = v57;
    *((_QWORD *)v57 + 2) = a9;
    *a10 = *(union _LARGE_INTEGER *)v30;
    *a11 = v30;
  }
  return (unsigned int)BlockRun;
}
