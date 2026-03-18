/*
 * XREFs of ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C000E0EC
 * Callers:
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C007D550 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x1C0085D50 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
 *     DxgkPresent @ 0x1C00BD0B0 (DxgkPresent.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@I@Z @ 0x1C011DBF4 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@I@Z.c)
 *     ?DxgkpDelayPresentCddPrimary@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C0174900 (-DxgkpDelayPresentCddPrimary@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z.c)
 *     ?DxgkGetSharedPrimaryHandle@@YAJPEAU_D3DKMT_GETSHAREDPRIMARYHANDLE@@@Z @ 0x1C017E3A0 (-DxgkGetSharedPrimaryHandle@@YAJPEAU_D3DKMT_GETSHAREDPRIMARYHANDLE@@@Z.c)
 *     ?DxgkCddPresent@@YAJPEAU_D3DKMT_PRESENT@@I@Z @ 0x1C0186EE0 (-DxgkCddPresent@@YAJPEAU_D3DKMT_PRESENT@@I@Z.c)
 *     DxgkRender @ 0x1C01BDFB0 (DxgkRender.c)
 *     OutputDuplPresent @ 0x1C01CA16C (OutputDuplPresent.c)
 *     DxgkPresentMultiPlaneOverlay @ 0x1C01D3010 (DxgkPresentMultiPlaneOverlay.c)
 *     DxgkPresentMultiPlaneOverlay2 @ 0x1C01D3630 (DxgkPresentMultiPlaneOverlay2.c)
 *     DxgkPresentMultiPlaneOverlay3 @ 0x1C01D3B60 (DxgkPresentMultiPlaneOverlay3.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002C70 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     memmove @ 0x1C0016740 (memmove.c)
 *     memset @ 0x1C0016A80 (memset.c)
 */

__int64 __fastcall DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
        __int64 a1,
        const void *a2,
        unsigned int a3)
{
  __int64 v5; // rdi
  void *v6; // rcx
  void *v7; // rcx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
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
    qsort(*(void **)a1, *(unsigned int *)(a1 + 40), 8uLL, DxgkComparePointers);
    v8 = 1LL;
    v9 = *(unsigned int *)(a1 + 40);
    while ( v8 < v9 )
    {
      if ( *(_QWORD *)(*(_QWORD *)a1 + 8 * v8) == *(_QWORD *)(*(_QWORD *)a1 + 8 * v8 - 8) )
        return a1;
      ++v8;
    }
    v10 = 0LL;
    if ( (_DWORD)v9 )
    {
      do
        DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)a1 + 8 * v10++) + 408LL));
      while ( v10 < *(unsigned int *)(a1 + 40) );
    }
    *(_BYTE *)(a1 + 48) = 0;
  }
  return a1;
}
