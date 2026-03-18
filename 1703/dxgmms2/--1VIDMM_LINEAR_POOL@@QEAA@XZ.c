/*
 * XREFs of ??1VIDMM_LINEAR_POOL@@QEAA@XZ @ 0x1C00A921C
 * Callers:
 *     ??_GVIDMM_LINEAR_POOL@@QEAAPEAXI@Z @ 0x1C0021810 (--_GVIDMM_LINEAR_POOL@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001DE4 (--3@YAXPEAX@Z.c)
 *     ?FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z @ 0x1C004B9FC (-FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z.c)
 *     ?Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1C004C1D4 (-Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z.c)
 */

void __fastcall VIDMM_LINEAR_POOL::~VIDMM_LINEAR_POOL(VIDMM_LINEAR_POOL *this)
{
  char *v1; // rsi
  char *v3; // rdi
  struct _VIDMM_POOL_BLOCK *v4; // rdx
  VIDMM_LINEAR_POOL *v5; // rdi
  struct _VIDMM_POOL_BLOCK *v6; // rdx
  __int64 **v7; // rax
  __int64 *v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 *v11; // r8
  __int64 v12; // rcx
  void ***v13; // rdi
  void **v14; // rsi
  void ***v15; // rax

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
  v7 = (__int64 **)((char *)this + 40);
  if ( *v7 != (__int64 *)v7 )
  {
    v8 = *v7;
    v9 = **v7;
    if ( (__int64 **)(*v7)[1] != v7 || *(__int64 **)(v9 + 8) != v8 )
      __fastfail(3u);
    *v7 = (__int64 *)v9;
    *(_QWORD *)(v9 + 8) = v7;
    v10 = (_QWORD *)((char *)this + 72);
    v11 = (__int64 *)*((_QWORD *)this + 9);
    v12 = *v11;
    if ( (VIDMM_LINEAR_POOL *)v11[1] != (VIDMM_LINEAR_POOL *)((char *)this + 72) || *(__int64 **)(v12 + 8) != v11 )
      __fastfail(3u);
    *v10 = v12;
    *(_QWORD *)(v12 + 8) = v10;
    VIDMM_LINEAR_POOL::FreeBlock(this, (struct _VIDMM_POOL_BLOCK *)(v8 - 3));
  }
  v13 = (void ***)((char *)this + 104);
  while ( *v13 != (void **)v13 )
  {
    v14 = *v13;
    v15 = (void ***)**v13;
    if ( (*v13)[1] != v13 || v15[1] != v14 )
      __fastfail(3u);
    *v13 = (void **)v15;
    v15[1] = (void **)v13;
    operator delete(v14[2]);
    operator delete(v14);
  }
  ExDeletePagedLookasideList((PPAGED_LOOKASIDE_LIST)((char *)this + 192));
}
