/*
 * XREFs of ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C0002754
 * Callers:
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C008A630 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     DxgkPresent @ 0x1C008FA90 (DxgkPresent.c)
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x1C00CBD30 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@I@Z @ 0x1C011D764 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@I@Z.c)
 *     ?DxgkCddPresent@@YAJPEAU_D3DKMT_PRESENT@@I@Z @ 0x1C0182CC0 (-DxgkCddPresent@@YAJPEAU_D3DKMT_PRESENT@@I@Z.c)
 *     DxgkRender @ 0x1C01A43F0 (DxgkRender.c)
 *     OutputDuplPresent @ 0x1C01B03B0 (OutputDuplPresent.c)
 *     DxgkPresentMultiPlaneOverlay @ 0x1C01BAA50 (DxgkPresentMultiPlaneOverlay.c)
 *     DxgkPresentMultiPlaneOverlay2 @ 0x1C01BB110 (DxgkPresentMultiPlaneOverlay2.c)
 *     DxgkPresentMultiPlaneOverlay3 @ 0x1C01BB650 (DxgkPresentMultiPlaneOverlay3.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006DD0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     memset @ 0x1C0015700 (memset.c)
 */

__int64 __fastcall DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
        __int64 a1,
        const void *a2,
        unsigned int a3)
{
  __int64 v5; // rdi
  void *v6; // rcx
  void *v7; // rcx
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned __int64 v10; // rdi

  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 40) = 0;
  v5 = a3;
  if ( a3 > 4 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / a3 < 8 )
      goto LABEL_5;
    *(_QWORD *)a1 = ExAllocatePoolWithTag(PagedPool, 8LL * a3, 0x4B677844u);
  }
  else
  {
    *(_QWORD *)a1 = a1 + 8;
  }
  v6 = *(void **)a1;
  *(_DWORD *)(a1 + 40) = v5;
  if ( v6 )
    memset(v6, 0, 8 * v5);
LABEL_5:
  v7 = *(void **)a1;
  *(_BYTE *)(a1 + 48) = 1;
  if ( v7 )
  {
    memmove(v7, a2, 8LL * *(unsigned int *)(a1 + 40));
    qsort(
      *(void **)a1,
      *(unsigned int *)(a1 + 40),
      8uLL,
      (int (__cdecl *)(const void *, const void *))DxgkComparePointers);
    v8 = *(unsigned int *)(a1 + 40);
    v9 = 1LL;
    if ( (unsigned int)v8 > 1 )
    {
      while ( *(_QWORD *)(*(_QWORD *)a1 + 8 * v9) != *(_QWORD *)(*(_QWORD *)a1 + 8 * v9 - 8) )
      {
        if ( ++v9 >= v8 )
          goto LABEL_7;
      }
    }
    else
    {
LABEL_7:
      v10 = 0LL;
      if ( (_DWORD)v8 )
      {
        do
          DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)a1 + 8 * v10++) + 376LL));
        while ( v10 < *(unsigned int *)(a1 + 40) );
      }
      *(_BYTE *)(a1 + 48) = 0;
    }
  }
  return a1;
}
