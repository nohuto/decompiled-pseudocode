/*
 * XREFs of ?PatchGapsWithFreeBlocks@VIDMM_LINEAR_POOL@@QEAAX_K0@Z @ 0x1C00B29CC
 * Callers:
 *     ?Defragment@VIDMM_MEMORY_SEGMENT@@UEAAX_K0@Z @ 0x1C00A8C20 (-Defragment@VIDMM_MEMORY_SEGMENT@@UEAAX_K0@Z.c)
 *     ?DefragmentRange@VIDMM_LINEAR_POOL@@QEAAXPEAUVIDMM_DEFRAGMENT_ARGS@@@Z @ 0x1C00B1A40 (-DefragmentRange@VIDMM_LINEAR_POOL@@QEAAXPEAUVIDMM_DEFRAGMENT_ARGS@@@Z.c)
 *     ?RollbackPlacementOfPendingResources@VIDMM_LINEAR_POOL@@QEAAX_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P6A_NPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K@Z@Z @ 0x1C00B2D64 (-RollbackPlacementOfPendingResources@VIDMM_LINEAR_POOL@@QEAAX_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P6.c)
 * Callees:
 *     ?FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z @ 0x1C004FE74 (-FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z.c)
 *     ?AllocateBlock@VIDMM_LINEAR_POOL@@IEAAPEAU_VIDMM_POOL_BLOCK@@XZ @ 0x1C004FEB4 (-AllocateBlock@VIDMM_LINEAR_POOL@@IEAAPEAU_VIDMM_POOL_BLOCK@@XZ.c)
 */

void __fastcall VIDMM_LINEAR_POOL::PatchGapsWithFreeBlocks(
        VIDMM_LINEAR_POOL *this,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  __int64 v3; // rbx
  char *v4; // r15
  char *v5; // r13
  struct _VIDMM_POOL_BLOCK *v6; // rdi
  struct _VIDMM_POOL_BLOCK *v8; // rsi
  char v9; // cl
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // r12
  __int64 v13; // r14
  _QWORD *v14; // rax
  __int64 v15; // rcx
  _QWORD *v16; // rdx
  _QWORD *v17; // rax
  __int64 v18; // rdx
  _QWORD *v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r14
  struct _VIDMM_POOL_BLOCK *Block; // rax
  struct _VIDMM_POOL_BLOCK *v23; // rcx
  struct _VIDMM_POOL_BLOCK **v24; // r8
  struct _VIDMM_POOL_BLOCK *v25; // rax
  struct _VIDMM_POOL_BLOCK **v26; // rdx
  _QWORD *v27; // rcx
  char *v28; // rdi
  __int64 v29; // rdx
  _QWORD *v30; // rdx
  __int64 v31; // r8
  __int64 v32; // rdi
  struct _VIDMM_POOL_BLOCK *v33; // rax
  char *v34; // rcx
  char **v35; // rdx
  VIDMM_LINEAR_POOL *v36; // rax
  VIDMM_LINEAR_POOL **v37; // rdx
  unsigned __int64 v38; // [rsp+68h] [rbp+10h]

  v38 = a2;
  v3 = 0LL;
  v4 = (char *)this + 72;
  v5 = (char *)*((_QWORD *)this + 9);
  v6 = 0LL;
  while ( v5 != v4 )
  {
    v8 = (struct _VIDMM_POOL_BLOCK *)(v5 - 40);
    v5 = *(char **)v5;
    v9 = *((_BYTE *)v8 + 56);
    v10 = *(_QWORD *)v8;
    v11 = *((_QWORD *)v8 + 1);
    if ( ((v9 - 2) & 0xFD) == 0 )
      v6 = v8;
    v12 = v10 + v11;
    if ( v10 + v11 > a2 )
    {
      if ( v3 != v10 )
      {
        if ( v9 == 2 )
        {
          v13 = v11 + v10 - v3;
          if ( v13 )
          {
            *(_QWORD *)v8 = v3;
            *((_QWORD *)v8 + 1) = v13;
          }
          else
          {
            v14 = (_QWORD *)((char *)v8 + 24);
            v15 = *((_QWORD *)v8 + 3);
            if ( *(struct _VIDMM_POOL_BLOCK **)(v15 + 8) != (struct _VIDMM_POOL_BLOCK *)((char *)v8 + 24)
              || (v16 = (_QWORD *)*((_QWORD *)v8 + 4), (_QWORD *)*v16 != v14) )
            {
              __fastfail(3u);
            }
            *v16 = v15;
            *(_QWORD *)(v15 + 8) = v16;
            *v14 = 0LL;
            v17 = (_QWORD *)((char *)v8 + 40);
            *((_QWORD *)v8 + 4) = 0LL;
            v18 = *((_QWORD *)v8 + 5);
            if ( *(struct _VIDMM_POOL_BLOCK **)(v18 + 8) != (struct _VIDMM_POOL_BLOCK *)((char *)v8 + 40)
              || (v19 = (_QWORD *)*((_QWORD *)v8 + 6), (_QWORD *)*v19 != v17) )
            {
              __fastfail(3u);
            }
            *v19 = v18;
            *(_QWORD *)(v18 + 8) = v19;
            *v17 = 0LL;
            *((_QWORD *)v8 + 6) = 0LL;
            VIDMM_LINEAR_POOL::FreeBlock(this, v8);
            v6 = 0LL;
          }
        }
        else if ( v6 && (v20 = *((_QWORD *)v6 + 1), v20 + *(_QWORD *)v6 == v3) && *((_BYTE *)v6 + 56) == 2 )
        {
          *((_QWORD *)v6 + 1) = v10 + v20 - v3;
        }
        else
        {
          v21 = v10 - v3;
          if ( v21 )
          {
            Block = VIDMM_LINEAR_POOL::AllocateBlock(this);
            *((_QWORD *)Block + 2) = 0LL;
            v23 = (struct _VIDMM_POOL_BLOCK *)((char *)Block + 40);
            *((_BYTE *)Block + 56) = 2;
            *(_QWORD *)Block = v3;
            *((_QWORD *)Block + 1) = v21;
            v24 = (struct _VIDMM_POOL_BLOCK **)*((_QWORD *)v8 + 6);
            if ( *v24 != (struct _VIDMM_POOL_BLOCK *)((char *)v8 + 40) )
              __fastfail(3u);
            *(_QWORD *)v23 = (char *)v8 + 40;
            *((_QWORD *)Block + 6) = v24;
            *v24 = v23;
            *((_QWORD *)v8 + 6) = v23;
            if ( v6 == v8 )
            {
              v25 = (struct _VIDMM_POOL_BLOCK *)((char *)Block + 24);
              v26 = (struct _VIDMM_POOL_BLOCK **)*((_QWORD *)v8 + 4);
              if ( *v26 != (struct _VIDMM_POOL_BLOCK *)((char *)v8 + 24) )
                __fastfail(3u);
              *(_QWORD *)v25 = (char *)v8 + 24;
              *((_QWORD *)v25 + 1) = v26;
              *v26 = v25;
              *((_QWORD *)v8 + 4) = v25;
            }
            else
            {
              v27 = (_QWORD *)((char *)Block + 24);
              if ( v6 )
              {
                v28 = (char *)v6 + 24;
                v29 = *(_QWORD *)v28;
                if ( *(char **)(*(_QWORD *)v28 + 8LL) != v28 )
                  __fastfail(3u);
                *v27 = v29;
                *((_QWORD *)Block + 4) = v28;
                *(_QWORD *)(v29 + 8) = v27;
                *(_QWORD *)v28 = v27;
              }
              else
              {
                v30 = (_QWORD *)((char *)this + 40);
                v31 = *((_QWORD *)this + 5);
                if ( *(VIDMM_LINEAR_POOL **)(v31 + 8) != (VIDMM_LINEAR_POOL *)((char *)this + 40) )
                  __fastfail(3u);
                *v27 = v31;
                *((_QWORD *)Block + 4) = v30;
                *(_QWORD *)(v31 + 8) = v27;
                *v30 = v27;
              }
              v6 = Block;
            }
          }
        }
      }
      v3 = v12;
      if ( *(_QWORD *)v8 >= a3 )
        break;
      a2 = v38;
    }
    v3 = v12;
  }
  v32 = *((_QWORD *)this + 1);
  if ( a3 == v32 && v3 != v32 )
  {
    v33 = VIDMM_LINEAR_POOL::AllocateBlock(this);
    *((_QWORD *)v33 + 2) = 0LL;
    v34 = (char *)v33 + 40;
    *((_BYTE *)v33 + 56) = 2;
    *(_QWORD *)v33 = v3;
    *((_QWORD *)v33 + 1) = v32 - v3;
    v35 = (char **)*((_QWORD *)v4 + 1);
    if ( *v35 != v4 )
      __fastfail(3u);
    *(_QWORD *)v34 = v4;
    v36 = (struct _VIDMM_POOL_BLOCK *)((char *)v33 + 24);
    *((_QWORD *)v34 + 1) = v35;
    *v35 = v34;
    *((_QWORD *)v4 + 1) = v34;
    v37 = (VIDMM_LINEAR_POOL **)*((_QWORD *)this + 6);
    if ( *v37 != (VIDMM_LINEAR_POOL *)((char *)this + 40) )
      __fastfail(3u);
    *(_QWORD *)v36 = (char *)this + 40;
    *((_QWORD *)v36 + 1) = v37;
    *v37 = v36;
    *((_QWORD *)this + 6) = v36;
  }
}
