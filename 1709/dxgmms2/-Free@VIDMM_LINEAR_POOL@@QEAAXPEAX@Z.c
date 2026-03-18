/*
 * XREFs of ?Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1C0050660
 * Callers:
 *     ?ReleaseResource@VIDMM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAX_K@Z @ 0x1C004F040 (-ReleaseResource@VIDMM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAX_K@Z.c)
 *     ?ReleaseTemporaryResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00A7C20 (-ReleaseTemporaryResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UnmapPagesFromAperture@VIDMM_APERTURE_SEGMENT@@UEAAXKPEAU_MDL@@PEAX_K@Z @ 0x1C00A81D0 (-UnmapPagesFromAperture@VIDMM_APERTURE_SEGMENT@@UEAAXKPEAU_MDL@@PEAX_K@Z.c)
 *     ?ValidateApertureUnmapToDummyPage@VIDMM_APERTURE_SEGMENT@@UEAAJPEAVVIDMM_SEGMENT@@_K@Z @ 0x1C00A8450 (-ValidateApertureUnmapToDummyPage@VIDMM_APERTURE_SEGMENT@@UEAAJPEAVVIDMM_SEGMENT@@_K@Z.c)
 *     ?FreeScratchRange@VIDMM_MEMORY_SEGMENT@@UEAAXPEAX@Z @ 0x1C00A8DB0 (-FreeScratchRange@VIDMM_MEMORY_SEGMENT@@UEAAXPEAX@Z.c)
 *     ?FreeVPRReserve@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00AA4A8 (-FreeVPRReserve@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAEE@Z @ 0x1C00AFF94 (-AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAE.c)
 *     ?FreeSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00B0718 (-FreeSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ??1VIDMM_LINEAR_POOL@@QEAA@XZ @ 0x1C00B18AC (--1VIDMM_LINEAR_POOL@@QEAA@XZ.c)
 *     ?FreeMemoryBlocks@VIDMM_LINEAR_POOL@@QEAAJW4_VIDMM_POOL_BLOCK_STATE@@IPEAU_DXGK_MEMORYRANGE@@@Z @ 0x1C00B2194 (-FreeMemoryBlocks@VIDMM_LINEAR_POOL@@QEAAJW4_VIDMM_POOL_BLOCK_STATE@@IPEAU_DXGK_MEMORYRANGE@@@Z.c)
 * Callees:
 *     ?FindAdjacentBlocksOnFreeList@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@PEAPEAU2@1@Z @ 0x1C004FDB4 (-FindAdjacentBlocksOnFreeList@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@PEAPEAU2@1@Z.c)
 *     ?FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z @ 0x1C004FE74 (-FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z.c)
 */

void __fastcall VIDMM_LINEAR_POOL::Free(VIDMM_LINEAR_POOL *this, struct _VIDMM_POOL_BLOCK *a2)
{
  struct _VIDMM_POOL_BLOCK *v2; // r14
  struct _VIDMM_POOL_BLOCK *v3; // rdi
  VIDMM_LINEAR_POOL *v6; // rax
  char *v7; // rbx
  char *v8; // rax
  char **v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rdx
  struct _VIDMM_POOL_BLOCK **v13; // rcx
  struct _VIDMM_POOL_BLOCK *v14; // rdx
  char *v15; // r14
  __int64 v16; // rax
  __int64 v17; // rdx
  struct _VIDMM_POOL_BLOCK **v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rdx
  struct _VIDMM_POOL_BLOCK **v21; // rcx
  __int64 v22; // rdx
  struct _VIDMM_POOL_BLOCK **v23; // rcx
  __int64 v24; // rax
  char **v25; // rcx
  char **v26; // rax
  char *v27; // rdi
  __int64 v28; // rax
  char **v29; // rax
  __int64 v30; // rcx
  struct _VIDMM_POOL_BLOCK *v31; // [rsp+48h] [rbp+10h] BYREF
  struct _VIDMM_POOL_BLOCK *v32; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0LL;
  v3 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
  if ( *((_BYTE *)a2 + 56) == 4 )
  {
    v6 = (VIDMM_LINEAR_POOL *)*((_QWORD *)a2 + 4);
    if ( v6 != (VIDMM_LINEAR_POOL *)((char *)this + 40) )
      v2 = (VIDMM_LINEAR_POOL *)((char *)v6 - 24);
    v7 = (char *)a2 + 24;
    v8 = (char *)*((_QWORD *)a2 + 3);
    if ( v8 != (char *)this + 40 )
      v3 = (struct _VIDMM_POOL_BLOCK *)(v8 - 24);
    if ( *((char **)v8 + 1) != v7 || (v9 = (char **)*((_QWORD *)a2 + 4), *v9 != v7) )
      __fastfail(3u);
    *v9 = v8;
    *((_QWORD *)v8 + 1) = v9;
    *(_QWORD *)v7 = 0LL;
    *((_QWORD *)a2 + 4) = 0LL;
    if ( !*((_DWORD *)this + 4) )
    {
      v28 = WdLogNewEntry5_WdAssertion(v9, a2);
      *(_QWORD *)(v28 + 24) = 1573LL;
      WdLogEvent5_WdAssertion(v28);
    }
    --*((_DWORD *)this + 4);
  }
  else
  {
    v7 = (char *)a2 + 24;
    v24 = *((_QWORD *)a2 + 3);
    if ( *(struct _VIDMM_POOL_BLOCK **)(v24 + 8) != (struct _VIDMM_POOL_BLOCK *)((char *)a2 + 24)
      || (v25 = (char **)*((_QWORD *)a2 + 4), *v25 != v7) )
    {
      __fastfail(3u);
    }
    *v25 = (char *)v24;
    *(_QWORD *)(v24 + 8) = v25;
    *(_QWORD *)v7 = 0LL;
    *((_QWORD *)a2 + 4) = 0LL;
    VIDMM_LINEAR_POOL::FindAdjacentBlocksOnFreeList(this, a2, &v31, &v32);
    v2 = v31;
    v3 = v32;
  }
  if ( v2 && (v10 = *((_QWORD *)v2 + 1), v10 + *(_QWORD *)v2 == *(_QWORD *)a2) && *((_BYTE *)v2 + 56) == 2 )
  {
    *((_QWORD *)v2 + 1) = v10 + *((_QWORD *)a2 + 1);
    v17 = *((_QWORD *)a2 + 5);
    if ( *(struct _VIDMM_POOL_BLOCK **)(v17 + 8) != (struct _VIDMM_POOL_BLOCK *)((char *)a2 + 40)
      || (v18 = (struct _VIDMM_POOL_BLOCK **)*((_QWORD *)a2 + 6), *v18 != (struct _VIDMM_POOL_BLOCK *)((char *)a2 + 40)) )
    {
      __fastfail(3u);
    }
    *v18 = (struct _VIDMM_POOL_BLOCK *)v17;
    *(_QWORD *)(v17 + 8) = v18;
    VIDMM_LINEAR_POOL::FreeBlock(this, a2);
    if ( v3 )
    {
      v19 = *((_QWORD *)v2 + 1);
      if ( *(_QWORD *)v3 == v19 + *(_QWORD *)v2 && *((_BYTE *)v3 + 56) == 2 )
      {
        *((_QWORD *)v2 + 1) = v19 + *((_QWORD *)v3 + 1);
        v20 = *((_QWORD *)v3 + 3);
        if ( *(struct _VIDMM_POOL_BLOCK **)(v20 + 8) != (struct _VIDMM_POOL_BLOCK *)((char *)v3 + 24)
          || (v21 = (struct _VIDMM_POOL_BLOCK **)*((_QWORD *)v3 + 4),
              *v21 != (struct _VIDMM_POOL_BLOCK *)((char *)v3 + 24)) )
        {
          __fastfail(3u);
        }
        *v21 = (struct _VIDMM_POOL_BLOCK *)v20;
        *(_QWORD *)(v20 + 8) = v21;
        v22 = *((_QWORD *)v3 + 5);
        if ( *(struct _VIDMM_POOL_BLOCK **)(v22 + 8) != (struct _VIDMM_POOL_BLOCK *)((char *)v3 + 40)
          || (v23 = (struct _VIDMM_POOL_BLOCK **)*((_QWORD *)v3 + 6),
              *v23 != (struct _VIDMM_POOL_BLOCK *)((char *)v3 + 40)) )
        {
          __fastfail(3u);
        }
        *v23 = (struct _VIDMM_POOL_BLOCK *)v22;
        *(_QWORD *)(v22 + 8) = v23;
        v14 = v3;
LABEL_21:
        VIDMM_LINEAR_POOL::FreeBlock(this, v14);
      }
    }
  }
  else
  {
    if ( v3 )
    {
      v11 = *((_QWORD *)a2 + 1);
      if ( *(_QWORD *)v3 == v11 + *(_QWORD *)a2 && *((_BYTE *)v3 + 56) == 2 )
      {
        *((_QWORD *)v3 + 1) += v11;
        *(_QWORD *)v3 = *(_QWORD *)a2;
        v12 = *((_QWORD *)a2 + 5);
        if ( *(struct _VIDMM_POOL_BLOCK **)(v12 + 8) != (struct _VIDMM_POOL_BLOCK *)((char *)a2 + 40)
          || (v13 = (struct _VIDMM_POOL_BLOCK **)*((_QWORD *)a2 + 6),
              *v13 != (struct _VIDMM_POOL_BLOCK *)((char *)a2 + 40)) )
        {
          __fastfail(3u);
        }
        *v13 = (struct _VIDMM_POOL_BLOCK *)v12;
        *(_QWORD *)(v12 + 8) = v13;
        v14 = a2;
        goto LABEL_21;
      }
    }
    *((_QWORD *)a2 + 2) = 0LL;
    *((_BYTE *)a2 + 56) = 2;
    if ( v2 )
    {
      v15 = (char *)v2 + 24;
      v16 = *(_QWORD *)v15;
      if ( *(char **)(*(_QWORD *)v15 + 8LL) != v15 )
        __fastfail(3u);
      *(_QWORD *)v7 = v16;
      *((_QWORD *)v7 + 1) = v15;
      *(_QWORD *)(v16 + 8) = v7;
      *(_QWORD *)v15 = v7;
    }
    else if ( v3 )
    {
      v26 = (char **)*((_QWORD *)v3 + 4);
      v27 = (char *)v3 + 24;
      if ( *v26 != v27 )
        __fastfail(3u);
      *(_QWORD *)v7 = v27;
      *((_QWORD *)v7 + 1) = v26;
      *v26 = v7;
      *((_QWORD *)v27 + 1) = v7;
    }
    else
    {
      v29 = (char **)((char *)this + 40);
      v30 = *((_QWORD *)this + 5);
      if ( *(VIDMM_LINEAR_POOL **)(v30 + 8) != (VIDMM_LINEAR_POOL *)((char *)this + 40) )
        __fastfail(3u);
      *(_QWORD *)v7 = v30;
      *((_QWORD *)v7 + 1) = v29;
      *(_QWORD *)(v30 + 8) = v7;
      *v29 = v7;
    }
  }
}
