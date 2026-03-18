/*
 * XREFs of ?PatchGapsWithFreeBlocks@VIDMM_LINEAR_POOL@@QEAAX_K0@Z @ 0x1C00AA09C
 * Callers:
 *     ?DefragmentRange@VIDMM_LINEAR_POOL@@QEAAX_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P6AXPEAU_VIDMM_GLOBAL_ALLOC@@0@ZP6A_N2@Z4P6AK2@ZPEA_K@Z @ 0x1C00A9378 (-DefragmentRange@VIDMM_LINEAR_POOL@@QEAAX_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P6AXPEAU_VIDMM_GLOBAL_.c)
 *     ?RollbackPlacementOfPendingResources@VIDMM_LINEAR_POOL@@QEAAX_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P6A_NPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K@Z@Z @ 0x1C00AA3E4 (-RollbackPlacementOfPendingResources@VIDMM_LINEAR_POOL@@QEAAX_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P6.c)
 * Callees:
 *     ?AllocateBlock@VIDMM_LINEAR_POOL@@IEAAPEAU_VIDMM_POOL_BLOCK@@XZ @ 0x1C004BA34 (-AllocateBlock@VIDMM_LINEAR_POOL@@IEAAPEAU_VIDMM_POOL_BLOCK@@XZ.c)
 */

void __fastcall VIDMM_LINEAR_POOL::PatchGapsWithFreeBlocks(
        VIDMM_LINEAR_POOL *this,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  __int64 v3; // rbx
  char *v4; // rsi
  char *v5; // r12
  struct _VIDMM_POOL_BLOCK *v7; // rdi
  unsigned __int64 v8; // r8
  struct _VIDMM_POOL_BLOCK *v10; // r14
  char v11; // cl
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // r15
  __int64 v15; // r8
  struct _VIDMM_POOL_BLOCK *Block; // rax
  struct _VIDMM_POOL_BLOCK *v17; // rcx
  struct _VIDMM_POOL_BLOCK **v18; // r8
  struct _VIDMM_POOL_BLOCK *v19; // rax
  struct _VIDMM_POOL_BLOCK **v20; // rdx
  _QWORD *v21; // rcx
  char *v22; // rdi
  __int64 v23; // rdx
  _QWORD *v24; // rdx
  __int64 v25; // r8
  __int64 v26; // rax
  struct _VIDMM_POOL_BLOCK *v27; // rax
  char *v28; // rcx
  char **v29; // rdx
  VIDMM_LINEAR_POOL *v30; // rax
  VIDMM_LINEAR_POOL **v31; // rdx

  v3 = 0LL;
  v4 = (char *)this + 72;
  v5 = (char *)*((_QWORD *)this + 9);
  v7 = 0LL;
  v8 = a2;
  while ( v5 != v4 )
  {
    v10 = (struct _VIDMM_POOL_BLOCK *)(v5 - 40);
    v5 = *(char **)v5;
    v11 = *((_BYTE *)v10 + 56);
    v12 = *(_QWORD *)v10;
    v13 = *((_QWORD *)v10 + 1);
    if ( ((v11 - 2) & 0xFD) == 0 )
      v7 = v10;
    v14 = v12 + v13;
    if ( v12 + v13 > v8 )
    {
      if ( v3 != v12 )
      {
        if ( v11 == 2 )
        {
          *(_QWORD *)v10 = v3;
          *((_QWORD *)v10 + 1) = v13 + v12 - v3;
        }
        else if ( v7 && (v15 = *((_QWORD *)v7 + 1), v15 + *(_QWORD *)v7 == v3) && *((_BYTE *)v7 + 56) == 2 )
        {
          *((_QWORD *)v7 + 1) = v12 + v15 - v3;
        }
        else if ( v12 != v3 )
        {
          Block = VIDMM_LINEAR_POOL::AllocateBlock(this);
          *((_QWORD *)Block + 2) = 0LL;
          *((_BYTE *)Block + 56) = 2;
          *(_QWORD *)Block = v3;
          *((_QWORD *)Block + 1) = *(_QWORD *)v10 - v3;
          v17 = (struct _VIDMM_POOL_BLOCK *)((char *)Block + 40);
          v18 = (struct _VIDMM_POOL_BLOCK **)*((_QWORD *)v10 + 6);
          if ( *v18 != (struct _VIDMM_POOL_BLOCK *)((char *)v10 + 40) )
            __fastfail(3u);
          *(_QWORD *)v17 = (char *)v10 + 40;
          *((_QWORD *)Block + 6) = v18;
          *v18 = v17;
          *((_QWORD *)v10 + 6) = v17;
          if ( v7 == v10 )
          {
            v19 = (struct _VIDMM_POOL_BLOCK *)((char *)Block + 24);
            v20 = (struct _VIDMM_POOL_BLOCK **)*((_QWORD *)v10 + 4);
            if ( *v20 != (struct _VIDMM_POOL_BLOCK *)((char *)v10 + 24) )
              __fastfail(3u);
            *(_QWORD *)v19 = (char *)v10 + 24;
            *((_QWORD *)v19 + 1) = v20;
            *v20 = v19;
            *((_QWORD *)v10 + 4) = v19;
          }
          else
          {
            v21 = (_QWORD *)((char *)Block + 24);
            if ( v7 )
            {
              v22 = (char *)v7 + 24;
              v23 = *(_QWORD *)v22;
              if ( *(char **)(*(_QWORD *)v22 + 8LL) != v22 )
                __fastfail(3u);
              *v21 = v23;
              *((_QWORD *)Block + 4) = v22;
              *(_QWORD *)(v23 + 8) = v21;
              *(_QWORD *)v22 = v21;
            }
            else
            {
              v24 = (_QWORD *)((char *)this + 40);
              v25 = *((_QWORD *)this + 5);
              if ( *(VIDMM_LINEAR_POOL **)(v25 + 8) != (VIDMM_LINEAR_POOL *)((char *)this + 40) )
                __fastfail(3u);
              *v21 = v25;
              *((_QWORD *)Block + 4) = v24;
              *(_QWORD *)(v25 + 8) = v21;
              *v24 = v21;
            }
            v7 = Block;
          }
        }
      }
      v3 = v14;
      if ( *(_QWORD *)v10 >= a3 )
        break;
      v8 = a2;
    }
    v3 = v14;
  }
  v26 = *((_QWORD *)this + 1);
  if ( a3 == v26 && v3 != v26 )
  {
    v27 = VIDMM_LINEAR_POOL::AllocateBlock(this);
    *((_QWORD *)v27 + 2) = 0LL;
    *((_BYTE *)v27 + 56) = 2;
    *(_QWORD *)v27 = v3;
    *((_QWORD *)v27 + 1) = *((_QWORD *)this + 1) - v3;
    v28 = (char *)v27 + 40;
    v29 = (char **)*((_QWORD *)v4 + 1);
    if ( *v29 != v4 )
      __fastfail(3u);
    *(_QWORD *)v28 = v4;
    v30 = (struct _VIDMM_POOL_BLOCK *)((char *)v27 + 24);
    *((_QWORD *)v28 + 1) = v29;
    *v29 = v28;
    *((_QWORD *)v4 + 1) = v28;
    v31 = (VIDMM_LINEAR_POOL **)*((_QWORD *)this + 6);
    if ( *v31 != (VIDMM_LINEAR_POOL *)((char *)this + 40) )
      __fastfail(3u);
    *(_QWORD *)v30 = (char *)this + 40;
    *((_QWORD *)v30 + 1) = v31;
    *v31 = v30;
    *((_QWORD *)this + 6) = v30;
  }
}
