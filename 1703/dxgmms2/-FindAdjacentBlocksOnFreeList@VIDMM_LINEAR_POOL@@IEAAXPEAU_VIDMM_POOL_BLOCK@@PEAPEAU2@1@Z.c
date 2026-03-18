/*
 * XREFs of ?FindAdjacentBlocksOnFreeList@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@PEAPEAU2@1@Z @ 0x1C004B93C
 * Callers:
 *     ?MarkBlockForEviction@VIDMM_LINEAR_POOL@@QEAAXPEAXPEA_K1@Z @ 0x1C004BEE0 (-MarkBlockForEviction@VIDMM_LINEAR_POOL@@QEAAXPEAXPEA_K1@Z.c)
 *     ?Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1C004C1D4 (-Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_LINEAR_POOL::FindAdjacentBlocksOnFreeList(
        VIDMM_LINEAR_POOL *this,
        struct _VIDMM_POOL_BLOCK *a2,
        struct _VIDMM_POOL_BLOCK **a3,
        struct _VIDMM_POOL_BLOCK **a4)
{
  char *v4; // rax
  char *v5; // r11
  __int64 v6; // rdi
  char *v7; // rdx
  char v8; // bl
  __int64 v9; // r10
  char v10; // dl
  VIDMM_LINEAR_POOL *v11; // rdx
  struct _VIDMM_POOL_BLOCK *v12; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // rdx
  bool v15; // zf

  v4 = (char *)*((_QWORD *)a2 + 5);
  v5 = (char *)this + 72;
  v6 = *((_QWORD *)a2 + 6);
  while ( 1 )
  {
    if ( v4 == v5 || (char *)v6 == v5 )
    {
      v15 = v4 == v5;
      v13 = (_QWORD *)((char *)this + 40);
      if ( v15 )
      {
        *a4 = 0LL;
        v14 = (_QWORD *)*((_QWORD *)this + 6);
        goto LABEL_12;
      }
      *a3 = 0LL;
      if ( (_QWORD *)*v13 != v13 )
      {
        v12 = (struct _VIDMM_POOL_BLOCK *)(*v13 - 24LL);
        goto LABEL_9;
      }
LABEL_16:
      *a4 = 0LL;
      return;
    }
    v7 = v4 - 40;
    v4 = *(char **)v4;
    v8 = v7[56];
    v9 = v6 - 40;
    v6 = *(_QWORD *)(v6 + 8);
    if ( v8 != 3 && (unsigned __int8)(v8 - 5) > 2u )
      break;
    v10 = *(_BYTE *)(v9 + 56);
    if ( v10 != 3 && (unsigned __int8)(v10 - 5) > 2u )
    {
      v11 = *(VIDMM_LINEAR_POOL **)(v9 + 24);
      *a3 = (struct _VIDMM_POOL_BLOCK *)v9;
      if ( v11 != (VIDMM_LINEAR_POOL *)((char *)this + 40) )
      {
        v12 = (VIDMM_LINEAR_POOL *)((char *)v11 - 24);
LABEL_9:
        *a4 = v12;
        return;
      }
      goto LABEL_16;
    }
  }
  *a4 = (struct _VIDMM_POOL_BLOCK *)v7;
  v13 = (_QWORD *)((char *)this + 40);
  v14 = (_QWORD *)*((_QWORD *)v7 + 4);
LABEL_12:
  if ( v14 == v13 )
    *a3 = 0LL;
  else
    *a3 = (struct _VIDMM_POOL_BLOCK *)(v14 - 3);
}
