/*
 * XREFs of ?RollbackPlacementOfPendingResources@VIDMM_LINEAR_POOL@@QEAAX_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P6A_NPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K@Z@Z @ 0x1C00BB744
 * Callers:
 *     ?Defragment@VIDMM_MEMORY_SEGMENT@@UEAAX_K0@Z @ 0x1C00B0730 (-Defragment@VIDMM_MEMORY_SEGMENT@@UEAAX_K0@Z.c)
 *     ?DefragmentResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K@Z @ 0x1C00B212C (-DefragmentResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_.c)
 *     ?ReserveVPRResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EE@Z @ 0x1C00B4300 (-ReserveVPRResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EE@Z.c)
 * Callees:
 *     ?FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z @ 0x1C0053BE8 (-FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z.c)
 *     ?RepairPendingResourceCB@VIDMM_SEGMENT@@SA_NPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K@Z @ 0x1C00B4064 (-RepairPendingResourceCB@VIDMM_SEGMENT@@SA_NPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K@Z.c)
 *     ?PatchGapsWithFreeBlocks@VIDMM_LINEAR_POOL@@QEAAX_K0@Z @ 0x1C00BB39C (-PatchGapsWithFreeBlocks@VIDMM_LINEAR_POOL@@QEAAX_K0@Z.c)
 */

void __fastcall VIDMM_LINEAR_POOL::RollbackPlacementOfPendingResources(
        VIDMM_LINEAR_POOL *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        int a4)
{
  _QWORD *v7; // rbx
  unsigned __int64 *v8; // rdi
  _QWORD *v9; // r12
  unsigned __int64 *v10; // r14
  unsigned __int64 v11; // r15
  struct _VIDMM_GLOBAL_ALLOC *v12; // rcx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  _QWORD *v17; // rax
  unsigned __int64 v18; // rcx
  unsigned __int64 *v19; // rdx
  _QWORD *v20; // rax
  unsigned __int64 v21; // rdx
  unsigned __int64 *v22; // rcx
  unsigned __int64 v23; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int64 v24; // [rsp+68h] [rbp+10h]

  v24 = a2;
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
          v23 = 0LL;
          if ( VIDMM_SEGMENT::RepairPendingResourceCB(v12, &v23) )
          {
            v13 = v23;
            *v10 = v23;
            if ( v8 )
            {
              if ( *((_BYTE *)v8 + 56) == 2 )
              {
                v14 = *v8;
                if ( a4 == 1 )
                {
                  v15 = v13 - v14;
                }
                else
                {
                  v16 = v8[1] - v11;
                  *v8 = v11;
                  v15 = v14 + v16;
                }
                v8[1] = v15;
                if ( !v15 )
                {
                  v17 = v8 + 5;
                  v18 = v8[5];
                  if ( *(unsigned __int64 **)(v18 + 8) != v8 + 5
                    || (v19 = (unsigned __int64 *)v8[6], (_QWORD *)*v19 != v17) )
                  {
                    __fastfail(3u);
                  }
                  *v19 = v18;
                  *(_QWORD *)(v18 + 8) = v19;
                  *v17 = 0LL;
                  v20 = v8 + 3;
                  v8[6] = 0LL;
                  v21 = v8[3];
                  if ( *(unsigned __int64 **)(v21 + 8) != v8 + 3
                    || (v22 = (unsigned __int64 *)v8[4], (_QWORD *)*v22 != v20) )
                  {
                    __fastfail(3u);
                  }
                  *v22 = v21;
                  *(_QWORD *)(v21 + 8) = v22;
                  *v20 = 0LL;
                  v8[4] = 0LL;
                  VIDMM_LINEAR_POOL::FreeBlock(a1, (struct _VIDMM_POOL_BLOCK *)v8);
                }
              }
            }
          }
          a2 = v24;
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
