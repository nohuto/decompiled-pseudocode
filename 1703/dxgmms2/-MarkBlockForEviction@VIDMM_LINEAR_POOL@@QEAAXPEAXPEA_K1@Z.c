/*
 * XREFs of ?MarkBlockForEviction@VIDMM_LINEAR_POOL@@QEAAXPEAXPEA_K1@Z @ 0x1C004BEE0
 * Callers:
 *     ?MarkResourcesForEviction@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z @ 0x1C004B3B0 (-MarkResourcesForEviction@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z.c)
 * Callees:
 *     ?FindAdjacentBlocksOnFreeList@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@PEAPEAU2@1@Z @ 0x1C004B93C (-FindAdjacentBlocksOnFreeList@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@PEAPEAU2@1@Z.c)
 */

void __fastcall VIDMM_LINEAR_POOL::MarkBlockForEviction(
        VIDMM_LINEAR_POOL *this,
        struct _VIDMM_POOL_BLOCK *a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4)
{
  char **v8; // rbx
  __int64 v9; // rcx
  char ***v10; // rax
  char *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned __int64 v14; // r8
  char *v15; // r9
  char *v16; // r10
  __int64 v17; // rdx
  unsigned __int64 v18; // r11
  __int64 v19; // rcx
  char *v20; // rcx
  char *v21; // rax
  __int64 v22; // r10
  struct _VIDMM_POOL_BLOCK *v23; // [rsp+40h] [rbp+8h] BYREF
  struct _VIDMM_POOL_BLOCK *v24; // [rsp+48h] [rbp+10h] BYREF

  v23 = 0LL;
  *((_BYTE *)a2 + 56) = 4;
  if ( *((_DWORD *)this + 4) >= (unsigned int)(*((_DWORD *)this + 4) + 1) )
  {
    v13 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v13 + 24) = 2011LL;
    WdLogEvent5_WdAssertion(v13);
  }
  ++*((_DWORD *)this + 4);
  v8 = (char **)((char *)a2 + 24);
  v9 = *((_QWORD *)a2 + 3);
  v10 = (char ***)*((_QWORD *)a2 + 4);
  if ( *(struct _VIDMM_POOL_BLOCK **)(v9 + 8) != (struct _VIDMM_POOL_BLOCK *)((char *)a2 + 24) || *v10 != v8 )
    __fastfail(3u);
  *v10 = (char **)v9;
  *(_QWORD *)(v9 + 8) = v10;
  *v8 = 0LL;
  *((_QWORD *)a2 + 4) = 0LL;
  VIDMM_LINEAR_POOL::FindAdjacentBlocksOnFreeList(this, a2, &v23, &v24);
  if ( v23 )
  {
    v11 = (char *)v23 + 24;
    v12 = *((_QWORD *)v23 + 3);
    if ( *(char **)(*(_QWORD *)v11 + 8LL) != v11 )
      __fastfail(3u);
  }
  else
  {
    v11 = (char *)this + 40;
    v12 = *((_QWORD *)this + 5);
    if ( *(VIDMM_LINEAR_POOL **)(v12 + 8) != (VIDMM_LINEAR_POOL *)((char *)this + 40) )
      __fastfail(3u);
  }
  *v8 = (char *)v12;
  *((_QWORD *)a2 + 4) = v11;
  *(_QWORD *)(v12 + 8) = v8;
  *(_QWORD *)v11 = v8;
  if ( a3 || a4 )
  {
    v14 = *(_QWORD *)a2;
    v15 = (char *)this + 40;
    v16 = (char *)*((_QWORD *)a2 + 4);
    v17 = *(_QWORD *)a2 + *((_QWORD *)a2 + 1);
    while ( v16 != v15 )
    {
      v18 = *((_QWORD *)v16 - 3);
      v19 = *((_QWORD *)v16 - 2);
      v16 = (char *)*((_QWORD *)v16 + 1);
      if ( v18 + v19 != v14 )
        break;
      v14 = v18;
    }
    v20 = *v8;
    while ( v20 != v15 )
    {
      v21 = v20 - 24;
      v22 = *((_QWORD *)v20 - 3);
      v20 = *(char **)v20;
      if ( v22 != v17 )
        break;
      v17 = v22 + *((_QWORD *)v21 + 1);
    }
    *a3 = v17 - v14;
    *a4 = v14;
  }
}
