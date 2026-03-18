/*
 * XREFs of ?AllocateBlock@VIDMM_LINEAR_POOL@@IEAAPEAU_VIDMM_POOL_BLOCK@@XZ @ 0x1C0053C28
 * Callers:
 *     ?SplitBlock@VIDMM_LINEAR_POOL@@IEAAJPEAU_VIDMM_POOL_BLOCK@@_K1PEAPEAU2@E@Z @ 0x1C0053D44 (-SplitBlock@VIDMM_LINEAR_POOL@@IEAAJPEAU_VIDMM_POOL_BLOCK@@_K1PEAPEAU2@E@Z.c)
 *     ?Init@VIDMM_LINEAR_POOL@@QEAAJ_KEP6AXPEAX@ZP6AH1@Z@Z @ 0x1C007F378 (-Init@VIDMM_LINEAR_POOL@@QEAAJ_KEP6AXPEAX@ZP6AH1@Z@Z.c)
 *     ?MarkBlockAsAllocatedScrubPending@VIDMM_LINEAR_POOL@@QEAAXPEAX_K1@Z @ 0x1C00BADD4 (-MarkBlockAsAllocatedScrubPending@VIDMM_LINEAR_POOL@@QEAAXPEAX_K1@Z.c)
 *     ?PatchGapsWithFreeBlocks@VIDMM_LINEAR_POOL@@QEAAX_K0@Z @ 0x1C00BB39C (-PatchGapsWithFreeBlocks@VIDMM_LINEAR_POOL@@QEAAX_K0@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0002BF0 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0004C1C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ExAllocateFromPagedLookasideList @ 0x1C0025848 (ExAllocateFromPagedLookasideList.c)
 */

struct _VIDMM_POOL_BLOCK *__fastcall VIDMM_LINEAR_POOL::AllocateBlock(VIDMM_LINEAR_POOL *this)
{
  _QWORD *v1; // rdi
  _QWORD *v3; // rbx
  _QWORD *v4; // rax
  __int64 v5; // rcx
  char *v7; // rsi
  PVOID v8; // rax
  unsigned int v9; // r8d
  unsigned __int64 v10; // rcx
  _QWORD *v11; // rax
  _QWORD *v12; // rdx
  char **v13; // rax
  char *v14; // rbp

  v1 = 0LL;
  if ( !*(_BYTE *)this )
    return (struct _VIDMM_POOL_BLOCK *)ExAllocateFromPagedLookasideList((PPAGED_LOOKASIDE_LIST)((char *)this + 192));
  v3 = (_QWORD *)((char *)this + 88);
  if ( (_QWORD *)*v3 == v3 )
  {
    v7 = (char *)operator new[](0x18uLL, 0x39316956u, PagedPool);
    if ( v7 )
    {
      v8 = operator new[](0x140uLL, 0x38316956u, PagedPool);
      *((_QWORD *)v7 + 2) = v8;
      if ( v8 )
      {
        v9 = 0;
        do
        {
          v10 = (unsigned __int64)v9 << 6;
          *(_BYTE *)(v10 + *((_QWORD *)v7 + 2) + 56) = 1;
          v11 = (_QWORD *)v3[1];
          v12 = (_QWORD *)(v10 + *((_QWORD *)v7 + 2) + 24LL);
          if ( (_QWORD *)*v11 != v3 )
            __fastfail(3u);
          *v12 = v3;
          ++v9;
          v12[1] = v11;
          *v11 = v12;
          v3[1] = v12;
        }
        while ( v9 < 5 );
        v13 = (char **)*((_QWORD *)this + 14);
        v14 = (char *)this + 104;
        if ( *v13 != v14 )
          __fastfail(3u);
        *(_QWORD *)v7 = v14;
        *((_QWORD *)v7 + 1) = v13;
        *v13 = v7;
        *((_QWORD *)v14 + 1) = v7;
      }
      else
      {
        operator delete(v7);
      }
    }
  }
  v4 = (_QWORD *)*v3;
  if ( (_QWORD *)*v3 != v3 )
  {
    if ( (_QWORD *)v4[1] != v3 || (v5 = *v4, *(_QWORD **)(*v4 + 8LL) != v4) )
      __fastfail(3u);
    *v3 = v5;
    v1 = v4 - 3;
    *(_QWORD *)(v5 + 8) = v3;
    *((_BYTE *)v4 + 32) = 2;
  }
  return (struct _VIDMM_POOL_BLOCK *)v1;
}
