/*
 * XREFs of ?SplitBlock@VIDMM_LINEAR_POOL@@IEAAJPEAU_VIDMM_POOL_BLOCK@@_K1PEAPEAU2@E@Z @ 0x1C004BB58
 * Callers:
 *     ?Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x1C004BFC8 (-Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z.c)
 *     ?ReserveLocationOutsideRange@VIDMM_LINEAR_POOL@@QEAAJ_K00PEAPEAXPEAT_LARGE_INTEGER@@@Z @ 0x1C00AA2E0 (-ReserveLocationOutsideRange@VIDMM_LINEAR_POOL@@QEAAJ_K00PEAPEAXPEAT_LARGE_INTEGER@@@Z.c)
 * Callees:
 *     memset @ 0x1C0015FC0 (memset.c)
 *     ?FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z @ 0x1C004B9FC (-FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z.c)
 *     ?AllocateBlock@VIDMM_LINEAR_POOL@@IEAAPEAU_VIDMM_POOL_BLOCK@@XZ @ 0x1C004BA34 (-AllocateBlock@VIDMM_LINEAR_POOL@@IEAAPEAU_VIDMM_POOL_BLOCK@@XZ.c)
 */

__int64 __fastcall VIDMM_LINEAR_POOL::SplitBlock(
        VIDMM_LINEAR_POOL *this,
        struct _VIDMM_POOL_BLOCK *a2,
        __int64 a3,
        __int64 a4,
        struct _VIDMM_POOL_BLOCK **a5)
{
  _BYTE *v5; // rax
  VIDMM_LINEAR_POOL *v9; // r14
  struct _VIDMM_POOL_BLOCK *v10; // rdi
  struct _VIDMM_POOL_BLOCK *v11; // rsi
  __int64 v12; // r15
  __int64 v13; // rbp
  struct _VIDMM_POOL_BLOCK *v14; // rax
  __int64 v15; // rcx
  _QWORD *v16; // rax
  __int64 v17; // rdx
  _QWORD *v18; // rcx
  _QWORD *v19; // rsi
  _QWORD *v20; // rax
  __int64 v21; // rcx
  _QWORD *v22; // rax
  __int64 v23; // rdx
  _QWORD *v24; // rcx
  _QWORD *v25; // rcx
  __int64 v26; // rdx
  struct _VIDMM_POOL_BLOCK *Block; // rax
  __int64 v29; // rcx
  struct _VIDMM_POOL_BLOCK **v30; // rdx
  struct _VIDMM_POOL_BLOCK *v31; // rcx
  struct _VIDMM_POOL_BLOCK *v32; // rdi
  struct _VIDMM_POOL_BLOCK **v33; // rcx
  _QWORD *v34; // r10
  _QWORD *v35; // rax
  __int64 v36; // rax
  _QWORD *v37; // rax

  v5 = *(_BYTE **)&g_IsInternalReleaseOrDbg;
  v9 = this;
  v10 = 0LL;
  v11 = 0LL;
  if ( g_IsInternalReleaseOrDbg )
  {
    v34 = (_QWORD *)WdLogNewEntry5_WdTrace(this);
    v34[3] = a2;
    v34[4] = *(_QWORD *)a2;
    v34[5] = *(_QWORD *)a2 + *((_QWORD *)a2 + 1);
    v5 = *(_BYTE **)&g_IsInternalReleaseOrDbg;
    v34[6] = a3;
    v34[7] = a4;
  }
  v12 = a3 - *(_QWORD *)a2;
  if ( a3 != *(_QWORD *)a2 )
  {
    if ( *v5 )
      WdLogNewEntry5_WdTrace(this);
    Block = VIDMM_LINEAR_POOL::AllocateBlock(v9);
    v10 = Block;
    if ( !Block )
    {
      _InterlockedIncrement(&dword_1C003C61C);
      v36 = WdLogNewEntry5_WdLowResource(v29);
      *(_QWORD *)(v36 + 24) = 1407LL;
      goto LABEL_29;
    }
    memset(Block, 0, 0x40uLL);
    v5 = *(_BYTE **)&g_IsInternalReleaseOrDbg;
    *((_BYTE *)v10 + 56) = 2;
    this = *(VIDMM_LINEAR_POOL **)a2;
    *(_QWORD *)v10 = *(_QWORD *)a2;
    *((_QWORD *)v10 + 1) = v12;
    if ( g_IsInternalReleaseOrDbg )
    {
      v35 = (_QWORD *)WdLogNewEntry5_WdTrace(this);
      v35[3] = v10;
      v35[4] = *(_QWORD *)v10;
      this = (VIDMM_LINEAR_POOL *)(*((_QWORD *)v10 + 1) + *(_QWORD *)v10);
      v35[5] = this;
      v5 = *(_BYTE **)&g_IsInternalReleaseOrDbg;
    }
  }
  v13 = *((_QWORD *)a2 + 1) + *(_QWORD *)a2 - a4;
  if ( v13 )
  {
    if ( *v5 )
      WdLogNewEntry5_WdTrace(this);
    v14 = VIDMM_LINEAR_POOL::AllocateBlock(v9);
    v11 = v14;
    if ( v14 )
    {
      memset(v14, 0, 0x40uLL);
      *((_BYTE *)v11 + 56) = 2;
      *(_QWORD *)v11 = a4;
      *((_QWORD *)v11 + 1) = v13;
      if ( g_IsInternalReleaseOrDbg )
      {
        v37 = (_QWORD *)WdLogNewEntry5_WdTrace(*(_QWORD *)&g_IsInternalReleaseOrDbg);
        v37[3] = v11;
        v37[4] = *(_QWORD *)v11;
        v37[5] = *(_QWORD *)v11 + *((_QWORD *)v11 + 1);
      }
      goto LABEL_10;
    }
    if ( v10 )
      VIDMM_LINEAR_POOL::FreeBlock(v9, v10);
    _InterlockedIncrement(&dword_1C003C61C);
    v36 = WdLogNewEntry5_WdLowResource(v15);
    *(_QWORD *)(v36 + 24) = 1447LL;
LABEL_29:
    WdLogEvent5_WdLowResource(v36);
    return 3221225495LL;
  }
LABEL_10:
  if ( v10 )
  {
    v30 = (struct _VIDMM_POOL_BLOCK **)*((_QWORD *)a2 + 4);
    v31 = (struct _VIDMM_POOL_BLOCK *)((char *)v10 + 24);
    if ( *v30 != (struct _VIDMM_POOL_BLOCK *)((char *)a2 + 24) )
      __fastfail(3u);
    *(_QWORD *)v31 = (char *)a2 + 24;
    v32 = (struct _VIDMM_POOL_BLOCK *)((char *)v10 + 40);
    *((_QWORD *)v31 + 1) = v30;
    *v30 = v31;
    *((_QWORD *)a2 + 4) = v31;
    v33 = (struct _VIDMM_POOL_BLOCK **)*((_QWORD *)a2 + 6);
    if ( *v33 != (struct _VIDMM_POOL_BLOCK *)((char *)a2 + 40) )
      __fastfail(3u);
    *(_QWORD *)v32 = (char *)a2 + 40;
    *((_QWORD *)v32 + 1) = v33;
    *v33 = v32;
    *((_QWORD *)a2 + 6) = v32;
    *((_QWORD *)a2 + 1) -= v12;
    *(_QWORD *)a2 = a3;
  }
  if ( v11 )
  {
    v16 = (_QWORD *)((char *)a2 + 24);
    v17 = *((_QWORD *)a2 + 3);
    v18 = (_QWORD *)((char *)v11 + 24);
    if ( *(struct _VIDMM_POOL_BLOCK **)(v17 + 8) != (struct _VIDMM_POOL_BLOCK *)((char *)a2 + 24) )
      __fastfail(3u);
    *((_QWORD *)v11 + 4) = v16;
    v19 = (_QWORD *)((char *)v11 + 40);
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
    *((_QWORD *)a2 + 1) -= v13;
  }
  v22 = (_QWORD *)((char *)a2 + 24);
  *((_BYTE *)a2 + 56) = 3;
  v23 = *((_QWORD *)a2 + 3);
  v24 = (_QWORD *)*((_QWORD *)a2 + 4);
  if ( *(struct _VIDMM_POOL_BLOCK **)(v23 + 8) != (struct _VIDMM_POOL_BLOCK *)((char *)a2 + 24) || (_QWORD *)*v24 != v22 )
    __fastfail(3u);
  *v24 = v23;
  *(_QWORD *)(v23 + 8) = v24;
  v25 = (_QWORD *)((char *)v9 + 56);
  v26 = *((_QWORD *)v9 + 7);
  if ( *(VIDMM_LINEAR_POOL **)(v26 + 8) != (VIDMM_LINEAR_POOL *)((char *)v9 + 56) )
    __fastfail(3u);
  *v22 = v26;
  *((_QWORD *)a2 + 4) = v25;
  *(_QWORD *)(v26 + 8) = v22;
  *v25 = v22;
  *a5 = a2;
  return 0LL;
}
