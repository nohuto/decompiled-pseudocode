/*
 * XREFs of ?RollbackPlacementOfPendingResources@VIDMM_LINEAR_POOL@@QEAAX_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P6A_NPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K@Z@Z @ 0x1C00B2D64
 * Callers:
 *     ?Defragment@VIDMM_MEMORY_SEGMENT@@UEAAX_K0@Z @ 0x1C00A8C20 (-Defragment@VIDMM_MEMORY_SEGMENT@@UEAAX_K0@Z.c)
 *     ?DefragmentResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K@Z @ 0x1C00AA00C (-DefragmentResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_.c)
 *     ?ReserveVPRResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EE@Z @ 0x1C00ABA38 (-ReserveVPRResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EE@Z.c)
 * Callees:
 *     ?FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z @ 0x1C004FE74 (-FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z.c)
 *     ?RepairPendingResourceCB@VIDMM_SEGMENT@@SA_NPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K@Z @ 0x1C00AB7AC (-RepairPendingResourceCB@VIDMM_SEGMENT@@SA_NPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K@Z.c)
 *     ?PatchGapsWithFreeBlocks@VIDMM_LINEAR_POOL@@QEAAX_K0@Z @ 0x1C00B29CC (-PatchGapsWithFreeBlocks@VIDMM_LINEAR_POOL@@QEAAX_K0@Z.c)
 */

void __fastcall VIDMM_LINEAR_POOL::RollbackPlacementOfPendingResources(
        VIDMM_LINEAR_POOL *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        int a4)
{
  _QWORD *v7; // rdi
  unsigned __int64 *v8; // rbx
  _QWORD *v9; // r12
  unsigned __int64 *v10; // rsi
  unsigned __int64 v11; // r15
  struct _VIDMM_GLOBAL_ALLOC *v12; // rcx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  _QWORD *v15; // rax
  unsigned __int64 v16; // rcx
  unsigned __int64 *v17; // rdx
  _QWORD *v18; // rax
  unsigned __int64 v19; // rdx
  unsigned __int64 *v20; // rcx
  unsigned __int64 v21; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int64 v22; // [rsp+68h] [rbp+10h]

  v22 = a2;
  if ( a4 == 1 )
    v7 = (_QWORD *)*((_QWORD *)a1 + 9);
  else
    v7 = (_QWORD *)*((_QWORD *)a1 + 10);
  v8 = 0LL;
  v9 = (_QWORD *)((char *)a1 + 72);
  while ( v7 != v9 )
  {
    v10 = v7 - 5;
    if ( a4 == 1 )
      v7 = (_QWORD *)*v7;
    else
      v7 = (_QWORD *)v7[1];
    v11 = *v10 + v10[1];
    if ( v11 > a2 )
    {
      if ( *v10 < a3 )
      {
        if ( (unsigned __int8)(*((_BYTE *)v10 + 56) - 3) <= 1u )
        {
          v12 = (struct _VIDMM_GLOBAL_ALLOC *)v10[2];
          v21 = 0LL;
          if ( VIDMM_SEGMENT::RepairPendingResourceCB(v12, &v21) )
          {
            v13 = v21;
            *v10 = v21;
            if ( v8 )
            {
              if ( *((_BYTE *)v8 + 56) == 2 )
              {
                if ( a4 == 1 )
                {
                  v8[1] = v13 - *v8;
                }
                else
                {
                  v14 = *v8 - v11;
                  *v8 = v11;
                  v8[1] += v14;
                }
                if ( !v8[1] )
                {
                  v15 = v8 + 5;
                  v16 = v8[5];
                  if ( *(unsigned __int64 **)(v16 + 8) != v8 + 5
                    || (v17 = (unsigned __int64 *)v8[6], (_QWORD *)*v17 != v15) )
                  {
                    __fastfail(3u);
                  }
                  *v17 = v16;
                  *(_QWORD *)(v16 + 8) = v17;
                  *v15 = 0LL;
                  v18 = v8 + 3;
                  v8[6] = 0LL;
                  v19 = v8[3];
                  if ( *(unsigned __int64 **)(v19 + 8) != v8 + 3
                    || (v20 = (unsigned __int64 *)v8[4], (_QWORD *)*v20 != v18) )
                  {
                    __fastfail(3u);
                  }
                  *v20 = v19;
                  *(_QWORD *)(v19 + 8) = v20;
                  *v18 = 0LL;
                  v8[4] = 0LL;
                  VIDMM_LINEAR_POOL::FreeBlock(a1, (struct _VIDMM_POOL_BLOCK *)v8);
                }
              }
            }
          }
          a2 = v22;
        }
        v8 = v10;
      }
      else if ( a4 == 1 )
      {
        break;
      }
    }
    else if ( a4 != 1 )
    {
      break;
    }
  }
  VIDMM_LINEAR_POOL::PatchGapsWithFreeBlocks(a1, a2, a3);
}
