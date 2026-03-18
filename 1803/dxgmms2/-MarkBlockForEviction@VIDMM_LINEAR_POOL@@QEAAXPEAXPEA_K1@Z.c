/*
 * XREFs of ?MarkBlockForEviction@VIDMM_LINEAR_POOL@@QEAAXPEAXPEA_K1@Z @ 0x1C00540E4
 * Callers:
 *     ?MarkResourcesForEviction@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z @ 0x1C0072F88 (-MarkResourcesForEviction@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z.c)
 * Callees:
 *     ?FindAdjacentBlocksOnFreeList@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@PEAPEAU2@1@Z @ 0x1C0053B28 (-FindAdjacentBlocksOnFreeList@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@PEAPEAU2@1@Z.c)
 */

void __fastcall VIDMM_LINEAR_POOL::MarkBlockForEviction(
        VIDMM_LINEAR_POOL *this,
        struct _VIDMM_POOL_BLOCK *a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4)
{
  __int64 v6; // rcx
  char **v9; // rbx
  __int64 v10; // rcx
  char ***v11; // rax
  char *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned __int64 v15; // r8
  char *v16; // r9
  char *v17; // r10
  __int64 v18; // rdx
  unsigned __int64 v19; // r11
  __int64 v20; // rcx
  char *v21; // rcx
  char *v22; // rax
  struct _VIDMM_POOL_BLOCK *v23; // [rsp+40h] [rbp+8h] BYREF
  struct _VIDMM_POOL_BLOCK *v24; // [rsp+48h] [rbp+10h] BYREF

  v23 = 0LL;
  *((_BYTE *)a2 + 56) = 4;
  v6 = *((unsigned int *)this + 4);
  if ( (unsigned int)v6 >= (int)v6 + 1 )
  {
    v14 = WdLogNewEntry5_WdAssertion(v6, a2);
    *(_QWORD *)(v14 + 24) = 2016LL;
    WdLogEvent5_WdAssertion(v14);
    LODWORD(v6) = *((_DWORD *)this + 4);
  }
  v9 = (char **)((char *)a2 + 24);
  *((_DWORD *)this + 4) = v6 + 1;
  v10 = *((_QWORD *)a2 + 3);
  if ( *(struct _VIDMM_POOL_BLOCK **)(v10 + 8) != (struct _VIDMM_POOL_BLOCK *)((char *)a2 + 24)
    || (v11 = (char ***)*((_QWORD *)a2 + 4), *v11 != v9) )
  {
    __fastfail(3u);
  }
  *v11 = (char **)v10;
  *(_QWORD *)(v10 + 8) = v11;
  *v9 = 0LL;
  *((_QWORD *)a2 + 4) = 0LL;
  VIDMM_LINEAR_POOL::FindAdjacentBlocksOnFreeList(this, a2, &v23, &v24);
  if ( v23 )
  {
    v12 = (char *)v23 + 24;
    v13 = *((_QWORD *)v23 + 3);
    if ( *(char **)(*(_QWORD *)v12 + 8LL) != v12 )
      __fastfail(3u);
  }
  else
  {
    v12 = (char *)this + 40;
    v13 = *((_QWORD *)this + 5);
    if ( *(VIDMM_LINEAR_POOL **)(v13 + 8) != (VIDMM_LINEAR_POOL *)((char *)this + 40) )
      __fastfail(3u);
  }
  *v9 = (char *)v13;
  *((_QWORD *)a2 + 4) = v12;
  *(_QWORD *)(v13 + 8) = v9;
  *(_QWORD *)v12 = v9;
  if ( a3 || a4 )
  {
    v15 = *(_QWORD *)a2;
    v16 = (char *)this + 40;
    v17 = (char *)*((_QWORD *)a2 + 4);
    v18 = *(_QWORD *)a2 + *((_QWORD *)a2 + 1);
    while ( v17 != v16 )
    {
      v19 = *((_QWORD *)v17 - 3);
      v20 = *((_QWORD *)v17 - 2);
      v17 = (char *)*((_QWORD *)v17 + 1);
      if ( v19 + v20 != v15 )
        break;
      v15 = v19;
    }
    v21 = *v9;
    while ( v21 != v16 )
    {
      v22 = v21 - 24;
      v21 = *(char **)v21;
      if ( *(_QWORD *)v22 != v18 )
        break;
      v18 = *(_QWORD *)v22 + *((_QWORD *)v22 + 1);
    }
    *a3 = v18 - v15;
    *a4 = v15;
  }
}
