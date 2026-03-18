/*
 * XREFs of ?SplitBlock@VIDMM_LINEAR_POOL@@IEAAJPEAU_VIDMM_POOL_BLOCK@@_K1PEAPEAU2@E@Z @ 0x1C004FFD8
 * Callers:
 *     ?Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x1C0050454 (-Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z.c)
 *     ?ReserveLocationOutsideRange@VIDMM_LINEAR_POOL@@QEAAJ_K00PEAPEAXPEAT_LARGE_INTEGER@@@Z @ 0x1C00B2C60 (-ReserveLocationOutsideRange@VIDMM_LINEAR_POOL@@QEAAJ_K00PEAPEAXPEAT_LARGE_INTEGER@@@Z.c)
 * Callees:
 *     memset @ 0x1C0018400 (memset.c)
 *     ?FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z @ 0x1C004FE74 (-FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z.c)
 *     ?AllocateBlock@VIDMM_LINEAR_POOL@@IEAAPEAU_VIDMM_POOL_BLOCK@@XZ @ 0x1C004FEB4 (-AllocateBlock@VIDMM_LINEAR_POOL@@IEAAPEAU_VIDMM_POOL_BLOCK@@XZ.c)
 */

__int64 __fastcall VIDMM_LINEAR_POOL::SplitBlock(
        VIDMM_LINEAR_POOL *this,
        struct _VIDMM_POOL_BLOCK *a2,
        __int64 a3,
        __int64 a4,
        struct _VIDMM_POOL_BLOCK **a5)
{
  VIDMM_LINEAR_POOL *v8; // r15
  struct _VIDMM_POOL_BLOCK *v9; // rdi
  struct _VIDMM_POOL_BLOCK *v10; // rsi
  __int64 v11; // r14
  __int64 v12; // rbp
  struct _VIDMM_POOL_BLOCK *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  _QWORD *v16; // rax
  __int64 v17; // rdx
  _QWORD *v18; // rcx
  _QWORD *v19; // rsi
  _QWORD *v20; // rax
  __int64 v21; // rcx
  _QWORD *v22; // rax
  __int64 v23; // rcx
  _QWORD *v24; // rdx
  _QWORD *v25; // rcx
  __int64 v26; // rdx
  struct _VIDMM_POOL_BLOCK *Block; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  struct _VIDMM_POOL_BLOCK **v31; // rdx
  struct _VIDMM_POOL_BLOCK *v32; // rcx
  struct _VIDMM_POOL_BLOCK *v33; // rdi
  struct _VIDMM_POOL_BLOCK **v34; // rcx
  _QWORD *v35; // rax
  _QWORD *v36; // rax
  __int64 v37; // rax
  _QWORD *v38; // rax

  v8 = this;
  v9 = 0LL;
  v10 = 0LL;
  if ( g_IsInternalReleaseOrDbg )
  {
    v35 = (_QWORD *)WdLogNewEntry5_WdTrace(this);
    v35[3] = a2;
    v35[4] = *(_QWORD *)a2;
    v35[5] = *(_QWORD *)a2 + *((_QWORD *)a2 + 1);
    v35[6] = a3;
    v35[7] = a4;
  }
  v11 = a3 - *(_QWORD *)a2;
  if ( a3 != *(_QWORD *)a2 )
  {
    if ( g_IsInternalReleaseOrDbg )
      WdLogNewEntry5_WdTrace(this);
    Block = VIDMM_LINEAR_POOL::AllocateBlock(v8);
    v9 = Block;
    if ( !Block )
    {
      _InterlockedIncrement(&dword_1C004062C);
      v37 = WdLogNewEntry5_WdLowResource(v30, v29);
      *(_QWORD *)(v37 + 24) = 1407LL;
      goto LABEL_29;
    }
    memset(Block, 0, 0x40uLL);
    *((_BYTE *)v9 + 56) = 2;
    *(_QWORD *)v9 = *(_QWORD *)a2;
    this = *(VIDMM_LINEAR_POOL **)&g_IsInternalReleaseOrDbg;
    *((_QWORD *)v9 + 1) = v11;
    if ( g_IsInternalReleaseOrDbg )
    {
      v36 = (_QWORD *)WdLogNewEntry5_WdTrace(*(_QWORD *)&g_IsInternalReleaseOrDbg);
      v36[3] = v9;
      v36[4] = *(_QWORD *)v9;
      this = (VIDMM_LINEAR_POOL *)(*((_QWORD *)v9 + 1) + *(_QWORD *)v9);
      v36[5] = this;
    }
  }
  v12 = *((_QWORD *)a2 + 1) + *(_QWORD *)a2 - a4;
  if ( v12 )
  {
    if ( g_IsInternalReleaseOrDbg )
      WdLogNewEntry5_WdTrace(this);
    v13 = VIDMM_LINEAR_POOL::AllocateBlock(v8);
    v10 = v13;
    if ( v13 )
    {
      memset(v13, 0, 0x40uLL);
      *((_BYTE *)v10 + 56) = 2;
      *(_QWORD *)v10 = a4;
      *((_QWORD *)v10 + 1) = v12;
      if ( g_IsInternalReleaseOrDbg )
      {
        v38 = (_QWORD *)WdLogNewEntry5_WdTrace(*(_QWORD *)&g_IsInternalReleaseOrDbg);
        v38[3] = v10;
        v38[4] = *(_QWORD *)v10;
        v38[5] = *(_QWORD *)v10 + *((_QWORD *)v10 + 1);
      }
      goto LABEL_10;
    }
    if ( v9 )
      VIDMM_LINEAR_POOL::FreeBlock(v8, v9);
    _InterlockedIncrement(&dword_1C004062C);
    v37 = WdLogNewEntry5_WdLowResource(v15, v14);
    *(_QWORD *)(v37 + 24) = 1447LL;
LABEL_29:
    WdLogEvent5_WdLowResource(v37);
    return 3221225495LL;
  }
LABEL_10:
  if ( v9 )
  {
    v31 = (struct _VIDMM_POOL_BLOCK **)*((_QWORD *)a2 + 4);
    v32 = (struct _VIDMM_POOL_BLOCK *)((char *)v9 + 24);
    if ( *v31 != (struct _VIDMM_POOL_BLOCK *)((char *)a2 + 24) )
      __fastfail(3u);
    *(_QWORD *)v32 = (char *)a2 + 24;
    v33 = (struct _VIDMM_POOL_BLOCK *)((char *)v9 + 40);
    *((_QWORD *)v32 + 1) = v31;
    *v31 = v32;
    *((_QWORD *)a2 + 4) = v32;
    v34 = (struct _VIDMM_POOL_BLOCK **)*((_QWORD *)a2 + 6);
    if ( *v34 != (struct _VIDMM_POOL_BLOCK *)((char *)a2 + 40) )
      __fastfail(3u);
    *(_QWORD *)v33 = (char *)a2 + 40;
    *((_QWORD *)v33 + 1) = v34;
    *v34 = v33;
    *((_QWORD *)a2 + 6) = v33;
    *((_QWORD *)a2 + 1) -= v11;
    *(_QWORD *)a2 = a3;
  }
  if ( v10 )
  {
    v16 = (_QWORD *)((char *)a2 + 24);
    v17 = *((_QWORD *)a2 + 3);
    v18 = (_QWORD *)((char *)v10 + 24);
    if ( *(struct _VIDMM_POOL_BLOCK **)(v17 + 8) != (struct _VIDMM_POOL_BLOCK *)((char *)a2 + 24) )
      __fastfail(3u);
    *((_QWORD *)v10 + 4) = v16;
    v19 = (_QWORD *)((char *)v10 + 40);
    *v18 = v17;
    *(_QWORD *)(v17 + 8) = v18;
    *v16 = v18;
    v20 = (_QWORD *)((char *)a2 + 40);
    v21 = *((_QWORD *)a2 + 5);
    if ( *(struct _VIDMM_POOL_BLOCK **)(v21 + 8) != (struct _VIDMM_POOL_BLOCK *)((char *)a2 + 40) )
      __fastfail(3u);
    *v19 = v21;
    v19[1] = v20;
    *(_QWORD *)(v21 + 8) = v19;
    *v20 = v19;
    *((_QWORD *)a2 + 1) -= v12;
  }
  v22 = (_QWORD *)((char *)a2 + 24);
  *((_BYTE *)a2 + 56) = 3;
  v23 = *((_QWORD *)a2 + 3);
  if ( *(struct _VIDMM_POOL_BLOCK **)(v23 + 8) != (struct _VIDMM_POOL_BLOCK *)((char *)a2 + 24)
    || (v24 = (_QWORD *)*((_QWORD *)a2 + 4), (_QWORD *)*v24 != v22) )
  {
    __fastfail(3u);
  }
  *v24 = v23;
  *(_QWORD *)(v23 + 8) = v24;
  v25 = (_QWORD *)((char *)v8 + 56);
  v26 = *((_QWORD *)v8 + 7);
  if ( *(VIDMM_LINEAR_POOL **)(v26 + 8) != (VIDMM_LINEAR_POOL *)((char *)v8 + 56) )
    __fastfail(3u);
  *v22 = v26;
  *((_QWORD *)a2 + 4) = v25;
  *(_QWORD *)(v26 + 8) = v22;
  *v25 = v22;
  *a5 = a2;
  return 0LL;
}
