/*
 * XREFs of ?Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1C004C1D4
 * Callers:
 *     ?ReleaseResource@VIDMM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAX_K@Z @ 0x1C004ACF0 (-ReleaseResource@VIDMM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAX_K@Z.c)
 *     ?ReleaseTemporaryResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C009FB10 (-ReleaseTemporaryResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UnmapPagesFromAperture@VIDMM_APERTURE_SEGMENT@@UEAAXKPEAU_MDL@@PEAX_K@Z @ 0x1C00A00C0 (-UnmapPagesFromAperture@VIDMM_APERTURE_SEGMENT@@UEAAXKPEAU_MDL@@PEAX_K@Z.c)
 *     ?ValidateApertureUnmapToDummyPage@VIDMM_APERTURE_SEGMENT@@UEAAJPEAVVIDMM_SEGMENT@@_K@Z @ 0x1C00A0340 (-ValidateApertureUnmapToDummyPage@VIDMM_APERTURE_SEGMENT@@UEAAJPEAVVIDMM_SEGMENT@@_K@Z.c)
 *     ?FreeScratchRange@VIDMM_MEMORY_SEGMENT@@UEAAXPEAX@Z @ 0x1C00A0AF0 (-FreeScratchRange@VIDMM_MEMORY_SEGMENT@@UEAAXPEAX@Z.c)
 *     ?FreeVPRReserve@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00A1BF4 (-FreeVPRReserve@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAEE@Z @ 0x1C00A7920 (-AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAE.c)
 *     ?FreeSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00A80B0 (-FreeSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ??1VIDMM_LINEAR_POOL@@QEAA@XZ @ 0x1C00A921C (--1VIDMM_LINEAR_POOL@@QEAA@XZ.c)
 *     ?FreeMemoryBlocks@VIDMM_LINEAR_POOL@@QEAAJW4_VIDMM_POOL_BLOCK_STATE@@IPEAU_DXGK_MEMORYRANGE@@@Z @ 0x1C00A9864 (-FreeMemoryBlocks@VIDMM_LINEAR_POOL@@QEAAJW4_VIDMM_POOL_BLOCK_STATE@@IPEAU_DXGK_MEMORYRANGE@@@Z.c)
 * Callees:
 *     ?FindAdjacentBlocksOnFreeList@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@PEAPEAU2@1@Z @ 0x1C004B93C (-FindAdjacentBlocksOnFreeList@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@PEAPEAU2@1@Z.c)
 *     ?FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z @ 0x1C004B9FC (-FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z.c)
 */

void __fastcall VIDMM_LINEAR_POOL::Free(VIDMM_LINEAR_POOL *this, struct _VIDMM_POOL_BLOCK *a2)
{
  struct _VIDMM_POOL_BLOCK *v2; // r14
  struct _VIDMM_POOL_BLOCK *v3; // rdi
  VIDMM_LINEAR_POOL *v6; // rax
  char *v7; // rbx
  VIDMM_LINEAR_POOL *v8; // rax
  __int64 v9; // rcx
  char **v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rdx
  char *v13; // r14
  __int64 v14; // rax
  __int64 v15; // rdx
  struct _VIDMM_POOL_BLOCK **v16; // rcx
  struct _VIDMM_POOL_BLOCK *v17; // rdx
  __int64 v18; // rdx
  struct _VIDMM_POOL_BLOCK **v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rdx
  struct _VIDMM_POOL_BLOCK **v22; // rcx
  __int64 v23; // rdx
  struct _VIDMM_POOL_BLOCK **v24; // rcx
  __int64 v25; // rcx
  char **v26; // rax
  char **v27; // rax
  char *v28; // rdi
  __int64 v29; // rax
  char **v30; // rax
  __int64 v31; // rcx
  struct _VIDMM_POOL_BLOCK *v32; // [rsp+48h] [rbp+10h] BYREF
  struct _VIDMM_POOL_BLOCK *v33; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0LL;
  v3 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
  if ( *((_BYTE *)a2 + 56) == 4 )
  {
    v6 = (VIDMM_LINEAR_POOL *)*((_QWORD *)a2 + 4);
    if ( v6 != (VIDMM_LINEAR_POOL *)((char *)this + 40) )
      v2 = (VIDMM_LINEAR_POOL *)((char *)v6 - 24);
    v7 = (char *)a2 + 24;
    v8 = (VIDMM_LINEAR_POOL *)*((_QWORD *)a2 + 3);
    if ( v8 != (VIDMM_LINEAR_POOL *)((char *)this + 40) )
      v3 = (VIDMM_LINEAR_POOL *)((char *)v8 - 24);
    v9 = *((_QWORD *)a2 + 3);
    v10 = (char **)*((_QWORD *)a2 + 4);
    if ( *(char **)(v9 + 8) != v7 || *v10 != v7 )
      __fastfail(3u);
    *v10 = (char *)v9;
    *(_QWORD *)(v9 + 8) = v10;
    *(_QWORD *)v7 = 0LL;
    *((_QWORD *)a2 + 4) = 0LL;
    if ( !*((_DWORD *)this + 4) )
    {
      v29 = WdLogNewEntry5_WdAssertion(v9, a2);
      *(_QWORD *)(v29 + 24) = 1571LL;
      WdLogEvent5_WdAssertion(v29);
    }
    --*((_DWORD *)this + 4);
  }
  else
  {
    v7 = (char *)a2 + 24;
    v25 = *((_QWORD *)a2 + 3);
    v26 = (char **)*((_QWORD *)a2 + 4);
    if ( *(struct _VIDMM_POOL_BLOCK **)(v25 + 8) != (struct _VIDMM_POOL_BLOCK *)((char *)a2 + 24) || *v26 != v7 )
      __fastfail(3u);
    *v26 = (char *)v25;
    *(_QWORD *)(v25 + 8) = v26;
    *(_QWORD *)v7 = 0LL;
    *((_QWORD *)a2 + 4) = 0LL;
    VIDMM_LINEAR_POOL::FindAdjacentBlocksOnFreeList(this, a2, &v32, &v33);
    v2 = v32;
    v3 = v33;
  }
  if ( v2 && (v11 = *((_QWORD *)v2 + 1), v11 + *(_QWORD *)v2 == *(_QWORD *)a2) && *((_BYTE *)v2 + 56) == 2 )
  {
    *((_QWORD *)v2 + 1) = v11 + *((_QWORD *)a2 + 1);
    v18 = *((_QWORD *)a2 + 5);
    v19 = (struct _VIDMM_POOL_BLOCK **)*((_QWORD *)a2 + 6);
    if ( *(struct _VIDMM_POOL_BLOCK **)(v18 + 8) != (struct _VIDMM_POOL_BLOCK *)((char *)a2 + 40)
      || *v19 != (struct _VIDMM_POOL_BLOCK *)((char *)a2 + 40) )
    {
      __fastfail(3u);
    }
    *v19 = (struct _VIDMM_POOL_BLOCK *)v18;
    *(_QWORD *)(v18 + 8) = v19;
    VIDMM_LINEAR_POOL::FreeBlock(this, a2);
    if ( v3 )
    {
      v20 = *((_QWORD *)v2 + 1);
      if ( *(_QWORD *)v3 == v20 + *(_QWORD *)v2 && *((_BYTE *)v3 + 56) == 2 )
      {
        *((_QWORD *)v2 + 1) = v20 + *((_QWORD *)v3 + 1);
        v21 = *((_QWORD *)v3 + 3);
        v22 = (struct _VIDMM_POOL_BLOCK **)*((_QWORD *)v3 + 4);
        if ( *(struct _VIDMM_POOL_BLOCK **)(v21 + 8) != (struct _VIDMM_POOL_BLOCK *)((char *)v3 + 24)
          || *v22 != (struct _VIDMM_POOL_BLOCK *)((char *)v3 + 24) )
        {
          __fastfail(3u);
        }
        *v22 = (struct _VIDMM_POOL_BLOCK *)v21;
        *(_QWORD *)(v21 + 8) = v22;
        v23 = *((_QWORD *)v3 + 5);
        v24 = (struct _VIDMM_POOL_BLOCK **)*((_QWORD *)v3 + 6);
        if ( *(struct _VIDMM_POOL_BLOCK **)(v23 + 8) != (struct _VIDMM_POOL_BLOCK *)((char *)v3 + 40)
          || *v24 != (struct _VIDMM_POOL_BLOCK *)((char *)v3 + 40) )
        {
          __fastfail(3u);
        }
        *v24 = (struct _VIDMM_POOL_BLOCK *)v23;
        *(_QWORD *)(v23 + 8) = v24;
        v17 = v3;
LABEL_24:
        VIDMM_LINEAR_POOL::FreeBlock(this, v17);
      }
    }
  }
  else
  {
    if ( v3 )
    {
      v12 = *((_QWORD *)a2 + 1);
      if ( *(_QWORD *)v3 == v12 + *(_QWORD *)a2 && *((_BYTE *)v3 + 56) == 2 )
      {
        *((_QWORD *)v3 + 1) += v12;
        *(_QWORD *)v3 = *(_QWORD *)a2;
        v15 = *((_QWORD *)a2 + 5);
        v16 = (struct _VIDMM_POOL_BLOCK **)*((_QWORD *)a2 + 6);
        if ( *(struct _VIDMM_POOL_BLOCK **)(v15 + 8) != (struct _VIDMM_POOL_BLOCK *)((char *)a2 + 40)
          || *v16 != (struct _VIDMM_POOL_BLOCK *)((char *)a2 + 40) )
        {
          __fastfail(3u);
        }
        *v16 = (struct _VIDMM_POOL_BLOCK *)v15;
        *(_QWORD *)(v15 + 8) = v16;
        v17 = a2;
        goto LABEL_24;
      }
    }
    *((_QWORD *)a2 + 2) = 0LL;
    *((_BYTE *)a2 + 56) = 2;
    if ( v2 )
    {
      v13 = (char *)v2 + 24;
      v14 = *(_QWORD *)v13;
      if ( *(char **)(*(_QWORD *)v13 + 8LL) != v13 )
        __fastfail(3u);
      *(_QWORD *)v7 = v14;
      *((_QWORD *)v7 + 1) = v13;
      *(_QWORD *)(v14 + 8) = v7;
      *(_QWORD *)v13 = v7;
    }
    else if ( v3 )
    {
      v27 = (char **)*((_QWORD *)v3 + 4);
      v28 = (char *)v3 + 24;
      if ( *v27 != v28 )
        __fastfail(3u);
      *(_QWORD *)v7 = v28;
      *((_QWORD *)v7 + 1) = v27;
      *v27 = v7;
      *((_QWORD *)v28 + 1) = v7;
    }
    else
    {
      v30 = (char **)((char *)this + 40);
      v31 = *((_QWORD *)this + 5);
      if ( *(VIDMM_LINEAR_POOL **)(v31 + 8) != (VIDMM_LINEAR_POOL *)((char *)this + 40) )
        __fastfail(3u);
      *(_QWORD *)v7 = v31;
      *((_QWORD *)v7 + 1) = v30;
      *(_QWORD *)(v31 + 8) = v7;
      *v30 = v7;
    }
  }
}
