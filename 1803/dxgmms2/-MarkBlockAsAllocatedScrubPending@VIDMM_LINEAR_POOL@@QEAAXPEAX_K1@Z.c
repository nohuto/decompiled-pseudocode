/*
 * XREFs of ?MarkBlockAsAllocatedScrubPending@VIDMM_LINEAR_POOL@@QEAAXPEAX_K1@Z @ 0x1C00BADD4
 * Callers:
 *     ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C0054DD4 (-TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0064BD0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ?FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z @ 0x1C0053BE8 (-FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z.c)
 *     ?AllocateBlock@VIDMM_LINEAR_POOL@@IEAAPEAU_VIDMM_POOL_BLOCK@@XZ @ 0x1C0053C28 (-AllocateBlock@VIDMM_LINEAR_POOL@@IEAAPEAU_VIDMM_POOL_BLOCK@@XZ.c)
 */

void __fastcall VIDMM_LINEAR_POOL::MarkBlockAsAllocatedScrubPending(
        VIDMM_LINEAR_POOL *this,
        unsigned __int64 *a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  VIDMM_LINEAR_POOL *v4; // rax
  char *v5; // r13
  char *v7; // r15
  char *v8; // r10
  __int64 v9; // r8
  char *v11; // rsi
  char *v14; // rbx
  _QWORD *v15; // rax
  _QWORD *v16; // rax
  _QWORD *v17; // rax
  unsigned __int64 v18; // rdx
  _QWORD *v19; // rax
  _QWORD *v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // rcx
  _QWORD *v25; // rdx
  _QWORD *v26; // rax
  __int64 v27; // rdx
  _QWORD *v28; // rcx
  _QWORD *v29; // rax
  __int64 v30; // rdx
  _QWORD *v31; // rcx
  _QWORD *v32; // rax
  __int64 v33; // rdx
  _QWORD *v34; // rcx
  struct _VIDMM_POOL_BLOCK *Block; // rax
  struct _VIDMM_POOL_BLOCK *v36; // rdx
  _QWORD *v37; // rax
  __int64 v38; // rcx
  char *v39; // r8
  char v40; // r9
  char *v41; // rcx
  _QWORD *v42; // rax
  _QWORD *v43; // rcx
  __int64 v44; // rdx
  _QWORD *v45; // rax
  unsigned __int64 v46; // rdx
  unsigned __int64 *v47; // rcx
  _QWORD *v48; // rcx
  __int64 v49; // rdx

  v4 = (VIDMM_LINEAR_POOL *)a2[6];
  v5 = (char *)this + 72;
  v7 = (char *)(a2 + 5);
  v8 = (char *)a2[5];
  v9 = 0LL;
  v11 = (char *)v4 - 40;
  if ( v4 == (VIDMM_LINEAR_POOL *)((char *)this + 72) )
    v11 = 0LL;
  v14 = v8 - 40;
  if ( v8 == v5 )
    v14 = 0LL;
  if ( *a2 > a3 )
  {
    if ( !v11 && g_IsInternalRelease )
    {
      v15 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2, 0LL);
      v15[3] = 270LL;
      v15[4] = 9LL;
      v15[5] = 0LL;
      v15[6] = 0LL;
      v15[7] = 0LL;
      WdLogEvent5_WdCriticalError(v15);
    }
    if ( *(_QWORD *)v11 > a3 && g_IsInternalRelease )
    {
      v16 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2, 0LL);
      v16[3] = 270LL;
      v16[4] = 9LL;
      v16[5] = 0LL;
      v16[6] = 0LL;
      v16[7] = 0LL;
      WdLogEvent5_WdCriticalError(v16);
    }
    v9 = 0LL;
    if ( v11[56] != 2 && g_IsInternalRelease )
    {
      v17 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2, 0LL);
      v17[3] = 270LL;
      v17[4] = 9LL;
      v17[5] = 0LL;
      v17[6] = 0LL;
      v17[7] = 0LL;
      WdLogEvent5_WdCriticalError(v17);
      v9 = 0LL;
    }
    if ( a3 == *(_QWORD *)v11 )
    {
      v29 = v11 + 40;
      v30 = *((_QWORD *)v11 + 5);
      if ( *(char **)(v30 + 8) != v11 + 40 || (v31 = (_QWORD *)*((_QWORD *)v11 + 6), (_QWORD *)*v31 != v29) )
        __fastfail(3u);
      *v31 = v30;
      *(_QWORD *)(v30 + 8) = v31;
      *v29 = 0LL;
      v32 = v11 + 24;
      *((_QWORD *)v11 + 6) = 0LL;
      v33 = *((_QWORD *)v11 + 3);
      if ( *(char **)(v33 + 8) != v11 + 24 || (v34 = (_QWORD *)*((_QWORD *)v11 + 4), (_QWORD *)*v34 != v32) )
        __fastfail(3u);
      *v34 = v33;
      *(_QWORD *)(v33 + 8) = v34;
      *v32 = 0LL;
      *((_QWORD *)v11 + 4) = 0LL;
      VIDMM_LINEAR_POOL::FreeBlock(this, (struct _VIDMM_POOL_BLOCK *)v11);
    }
    else
    {
      *((_QWORD *)v11 + 1) = a3 - *(_QWORD *)v11;
    }
  }
  v18 = a2[1] + *a2;
  if ( v18 < a4 )
  {
    if ( !v14 && g_IsInternalRelease )
    {
      v19 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, v18, v9);
      v19[3] = 270LL;
      v19[4] = 9LL;
      v19[5] = 0LL;
      v19[6] = 0LL;
      v19[7] = 0LL;
      WdLogEvent5_WdCriticalError(v19);
    }
    if ( *(_QWORD *)v14 + *((_QWORD *)v14 + 1) < a4 && g_IsInternalRelease )
    {
      v20 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, v18, v9);
      v20[3] = 270LL;
      v20[4] = 9LL;
      v20[5] = 0LL;
      v20[6] = 0LL;
      v20[7] = 0LL;
      WdLogEvent5_WdCriticalError(v20);
    }
    if ( v14[56] != 2 && g_IsInternalRelease )
    {
      v21 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, v18, v9);
      v21[3] = 270LL;
      v21[4] = 9LL;
      v21[5] = 0LL;
      v21[6] = 0LL;
      v21[7] = 0LL;
      WdLogEvent5_WdCriticalError(v21);
    }
    v22 = *(_QWORD *)v14 + *((_QWORD *)v14 + 1) - a4;
    if ( !v22 )
    {
      v23 = v14 + 40;
      v24 = *((_QWORD *)v14 + 5);
      if ( *(char **)(v24 + 8) != v14 + 40 || (v25 = (_QWORD *)*((_QWORD *)v14 + 6), (_QWORD *)*v25 != v23) )
        __fastfail(3u);
      *v25 = v24;
      *(_QWORD *)(v24 + 8) = v25;
      *v23 = 0LL;
      v26 = v14 + 24;
      *((_QWORD *)v14 + 6) = 0LL;
      v27 = *((_QWORD *)v14 + 3);
      if ( *(char **)(v27 + 8) != v14 + 24 || (v28 = (_QWORD *)*((_QWORD *)v14 + 4), (_QWORD *)*v28 != v26) )
        __fastfail(3u);
      *v28 = v27;
      *(_QWORD *)(v27 + 8) = v28;
      *v26 = 0LL;
      *((_QWORD *)v14 + 4) = 0LL;
      VIDMM_LINEAR_POOL::FreeBlock(this, (struct _VIDMM_POOL_BLOCK *)v14);
      goto LABEL_62;
    }
LABEL_46:
    *(_QWORD *)v14 = a4;
    *((_QWORD *)v14 + 1) = v22;
    goto LABEL_62;
  }
  if ( v18 <= a4 )
    goto LABEL_62;
  if ( v14 && v14[56] == 2 )
  {
    v22 = *(_QWORD *)v14 + *((_QWORD *)v14 + 1) - a4;
    goto LABEL_46;
  }
  Block = VIDMM_LINEAR_POOL::AllocateBlock(this);
  v36 = Block;
  if ( Block )
  {
    *((_BYTE *)Block + 56) = 2;
    *((_QWORD *)Block + 2) = 0LL;
    *(_QWORD *)Block = a4;
    *((_QWORD *)Block + 1) = a2[1] + *a2 - a4;
    v37 = (_QWORD *)((char *)Block + 40);
    v38 = *(_QWORD *)v7;
    if ( *(char **)(*(_QWORD *)v7 + 8LL) != v7 )
      __fastfail(3u);
    *v37 = v38;
    v39 = 0LL;
    v37[1] = v7;
    v40 = 0;
    *(_QWORD *)(v38 + 8) = v37;
    *(_QWORD *)v7 = v37;
    v41 = (char *)a2[6];
    while ( v41 != v5 && !v40 )
    {
      v39 = v41 - 40;
      if ( ((v41[16] - 2) & 0xFD) != 0 )
        v41 = (char *)*((_QWORD *)v39 + 6);
      else
        v40 = 1;
    }
    v42 = (_QWORD *)((char *)v36 + 24);
    if ( v40 )
    {
      v43 = v39 + 24;
      v44 = *((_QWORD *)v39 + 3);
      if ( *(char **)(v44 + 8) != v39 + 24 )
        __fastfail(3u);
    }
    else
    {
      v43 = (_QWORD *)((char *)this + 40);
      v44 = *((_QWORD *)this + 5);
      if ( *(VIDMM_LINEAR_POOL **)(v44 + 8) != (VIDMM_LINEAR_POOL *)((char *)this + 40) )
        __fastfail(3u);
    }
    *v42 = v44;
    v42[1] = v43;
    *(_QWORD *)(v44 + 8) = v42;
    *v43 = v42;
  }
LABEL_62:
  a2[2] |= 1uLL;
  v45 = a2 + 3;
  *a2 = a3;
  a2[1] = a4 - a3;
  *((_BYTE *)a2 + 56) = 5;
  v46 = a2[3];
  if ( *(unsigned __int64 **)(v46 + 8) != a2 + 3 || (v47 = (unsigned __int64 *)a2[4], (_QWORD *)*v47 != v45) )
    __fastfail(3u);
  *v47 = v46;
  *(_QWORD *)(v46 + 8) = v47;
  v48 = (_QWORD *)((char *)this + 56);
  v49 = *((_QWORD *)this + 7);
  if ( *(VIDMM_LINEAR_POOL **)(v49 + 8) != (VIDMM_LINEAR_POOL *)((char *)this + 56) )
    __fastfail(3u);
  *v45 = v49;
  a2[4] = (unsigned __int64)v48;
  *(_QWORD *)(v49 + 8) = v45;
  *v48 = v45;
}
