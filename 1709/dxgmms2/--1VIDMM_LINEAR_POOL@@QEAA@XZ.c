/*
 * XREFs of ??1VIDMM_LINEAR_POOL@@QEAA@XZ @ 0x1C00B18AC
 * Callers:
 *     ??_GVIDMM_LINEAR_POOL@@QEAAPEAXI@Z @ 0x1C002389C (--_GVIDMM_LINEAR_POOL@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0002544 (--3@YAXPEAX@Z.c)
 *     ?FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z @ 0x1C004FE74 (-FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z.c)
 *     ?Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1C0050660 (-Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z.c)
 */

void __fastcall VIDMM_LINEAR_POOL::~VIDMM_LINEAR_POOL(VIDMM_LINEAR_POOL *this)
{
  char *v1; // rsi
  char *v3; // rdi
  struct _VIDMM_POOL_BLOCK *v4; // rdx
  VIDMM_LINEAR_POOL *v5; // rdi
  struct _VIDMM_POOL_BLOCK *v6; // rdx
  char *v7; // rax
  __int64 *v8; // rcx
  __int64 v9; // rdx
  struct _VIDMM_POOL_BLOCK *v10; // rdx
  VIDMM_LINEAR_POOL **v11; // rcx
  VIDMM_LINEAR_POOL **v12; // r8
  VIDMM_LINEAR_POOL *v13; // rax
  char *v14; // rdi
  void **v15; // rsi
  _QWORD *v16; // rax

  v1 = (char *)this + 120;
  v3 = (char *)*((_QWORD *)this + 15);
  while ( v3 != v1 )
  {
    v4 = (struct _VIDMM_POOL_BLOCK *)(v3 - 24);
    v3 = *(char **)v3;
    VIDMM_LINEAR_POOL::Free(this, v4);
  }
  v5 = (VIDMM_LINEAR_POOL *)*((_QWORD *)this + 17);
  while ( v5 != (VIDMM_LINEAR_POOL *)((char *)this + 136) )
  {
    v6 = (VIDMM_LINEAR_POOL *)((char *)v5 - 24);
    v5 = *(VIDMM_LINEAR_POOL **)v5;
    VIDMM_LINEAR_POOL::Free(this, v6);
  }
  v7 = (char *)this + 40;
  if ( *(char **)v7 != v7 )
  {
    v8 = *(__int64 **)v7;
    if ( *(char **)(*(_QWORD *)v7 + 8LL) != v7 || (v9 = *v8, *(__int64 **)(*v8 + 8) != v8) )
      __fastfail(3u);
    *(_QWORD *)v7 = v9;
    *(_QWORD *)(v9 + 8) = v7;
    v10 = (struct _VIDMM_POOL_BLOCK *)(v8 - 3);
    v11 = (VIDMM_LINEAR_POOL **)((char *)this + 72);
    v12 = (VIDMM_LINEAR_POOL **)*((_QWORD *)this + 9);
    if ( v12[1] != (VIDMM_LINEAR_POOL *)((char *)this + 72) || (v13 = *v12, *((VIDMM_LINEAR_POOL ***)*v12 + 1) != v12) )
      __fastfail(3u);
    *v11 = v13;
    *((_QWORD *)v13 + 1) = v11;
    VIDMM_LINEAR_POOL::FreeBlock(this, v10);
  }
  v14 = (char *)this + 104;
  while ( *(char **)v14 != v14 )
  {
    v15 = *(void ***)v14;
    if ( *(char **)(*(_QWORD *)v14 + 8LL) != v14 || (v16 = *v15, *((void ***)*v15 + 1) != v15) )
      __fastfail(3u);
    *(_QWORD *)v14 = v16;
    v16[1] = v14;
    operator delete(v15[2]);
    operator delete(v15);
  }
  ExDeletePagedLookasideList((PPAGED_LOOKASIDE_LIST)((char *)this + 192));
}
