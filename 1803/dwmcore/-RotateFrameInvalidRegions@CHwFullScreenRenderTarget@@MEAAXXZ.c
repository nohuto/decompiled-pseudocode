/*
 * XREFs of ?RotateFrameInvalidRegions@CHwFullScreenRenderTarget@@MEAAXXZ @ 0x18007C480
 * Callers:
 *     ?Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEBURenderTargetPresentParameters@@@Z @ 0x18007BBA0 (-Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEBURenderTargetPresentParameters@@@Z.c)
 * Callees:
 *     ?Copy@CRgnData@Internal@FastRegion@@QEAAXAEBV123@@Z @ 0x18007EE78 (-Copy@CRgnData@Internal@FastRegion@@QEAAXAEBV123@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180080200 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?CopyData@CRegion@FastRegion@@IEAAJPEBVCRgnData@Internal@2@@Z @ 0x1800804F4 (-CopyData@CRegion@FastRegion@@IEAAJPEBVCRgnData@Internal@2@@Z.c)
 */

void __fastcall CHwFullScreenRenderTarget::RotateFrameInvalidRegions(CHwFullScreenRenderTarget *this)
{
  const struct FastRegion::Internal::CRgnData **v2; // rax
  FastRegion::CRegion *v3; // rcx
  const struct FastRegion::Internal::CRgnData **v4; // rsi
  FastRegion::Internal::CRgnData **v5; // rdi
  const struct FastRegion::Internal::CRgnData *v6; // r14
  int v7; // r8d
  int *v8; // r15
  FastRegion::Internal::CRgnData *v9; // rcx
  int v10; // eax
  int v11; // ebp
  const struct FastRegion::Internal::CRgnData *v12; // rax
  SIZE_T v13; // r8
  FastRegion::Internal::CRgnData *v14; // r12

  if ( *((_DWORD *)this + 74) == 3 )
  {
    v2 = (const struct FastRegion::Internal::CRgnData **)((char *)this + 424);
    v3 = (CHwFullScreenRenderTarget *)((char *)this + 496);
    if ( v3 != (FastRegion::CRegion *)v2 )
    {
      if ( *(_DWORD *)*v2 )
        FastRegion::CRegion::CopyData(v3, *v2);
      else
        **(_DWORD **)v3 = 0;
    }
  }
  v4 = (const struct FastRegion::Internal::CRgnData **)((char *)this + 344);
  v5 = (FastRegion::Internal::CRgnData **)((char *)this + 424);
  if ( (char *)this + 424 != (char *)this + 344 )
  {
    v6 = *v4;
    v7 = *(_DWORD *)*v4;
    if ( !v7 )
    {
      *(_DWORD *)*v5 = 0;
      goto LABEL_11;
    }
    v8 = (int *)((char *)this + 432);
    v9 = *v5;
    v10 = 60;
    v11 = 8 * (v7 - 1) + *((_DWORD *)v6 + 2 * v7 + 2) - *((_DWORD *)v6 + 4) + 8 * v7 + 12;
    if ( (CHwFullScreenRenderTarget *)((char *)this + 432) != *((CHwFullScreenRenderTarget **)this + 53) )
      v10 = *v8;
    if ( v10 >= v11 )
      goto LABEL_10;
    v13 = v11;
    if ( !v11 )
      v13 = 1LL;
    v14 = (FastRegion::Internal::CRgnData *)HeapAlloc(WPF::g_processHeap, 0, v13);
    if ( v14 )
    {
      FastRegion::CRegion::FreeMemory((CHwFullScreenRenderTarget *)((char *)this + 424));
      *v5 = v14;
      *v8 = v11;
      v9 = *v5;
LABEL_10:
      FastRegion::Internal::CRgnData::Copy(v9, v6);
    }
  }
LABEL_11:
  v12 = *v4;
  *((_BYTE *)this + 416) = 0;
  *(_DWORD *)v12 = 0;
}
