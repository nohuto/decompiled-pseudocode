/*
 * XREFs of ?RotateFrameInvalidRegions@CHwFullScreenRenderTarget@@MEAAXXZ @ 0x18002F090
 * Callers:
 *     ?Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z @ 0x18002ED10 (-Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z.c)
 * Callees:
 *     ?Copy@CRgnData@Internal@FastRegion@@QEAAXAEBV123@@Z @ 0x1800301D4 (-Copy@CRgnData@Internal@FastRegion@@QEAAXAEBV123@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180089680 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?CopyData@CRegion@FastRegion@@IEAAJPEBVCRgnData@Internal@2@@Z @ 0x180089974 (-CopyData@CRegion@FastRegion@@IEAAJPEBVCRgnData@Internal@2@@Z.c)
 */

void __fastcall CHwFullScreenRenderTarget::RotateFrameInvalidRegions(CHwFullScreenRenderTarget *this)
{
  const struct FastRegion::Internal::CRgnData **v2; // rax
  FastRegion::CRegion *v3; // rcx
  FastRegion::CRegion *v4; // rsi
  FastRegion::CRegion *v5; // rbx
  const struct FastRegion::Internal::CRgnData *v6; // rdi
  int *v7; // r14
  int v8; // eax
  int v9; // ebp
  SIZE_T v10; // r8
  LPVOID v11; // r15

  if ( *((_DWORD *)this + 70) == 3 )
  {
    v2 = (const struct FastRegion::Internal::CRgnData **)((char *)this + 400);
    v3 = (CHwFullScreenRenderTarget *)((char *)this + 472);
    if ( v3 != (FastRegion::CRegion *)v2 )
    {
      if ( *(_DWORD *)*v2 )
        FastRegion::CRegion::CopyData(v3, *v2);
      else
        **(_DWORD **)v3 = 0;
    }
  }
  v4 = (CHwFullScreenRenderTarget *)((char *)this + 328);
  v5 = (CHwFullScreenRenderTarget *)((char *)this + 400);
  if ( v5 != v4 )
  {
    v6 = *(const struct FastRegion::Internal::CRgnData **)v4;
    if ( !**(_DWORD **)v4 )
    {
      **(_DWORD **)v5 = 0;
      goto LABEL_11;
    }
    v7 = (int *)((char *)v5 + 8);
    v8 = 60;
    v9 = *((_DWORD *)v6 + 2 * *(_DWORD *)v6 + 2)
       - *((_DWORD *)v6 + 4)
       + 8 * *(_DWORD *)v6
       + 8 * (*(_DWORD *)v6 - 1)
       + 12;
    if ( (FastRegion::CRegion *)((char *)v5 + 8) != *(FastRegion::CRegion **)v5 )
      v8 = *v7;
    if ( v8 >= v9 )
      goto LABEL_10;
    v10 = v9;
    if ( !v9 )
      v10 = 1LL;
    v11 = HeapAlloc(WPF::g_processHeap, 0, v10);
    if ( v11 )
    {
      FastRegion::CRegion::FreeMemory(v5);
      *(_QWORD *)v5 = v11;
      *v7 = v9;
LABEL_10:
      FastRegion::Internal::CRgnData::Copy(*(FastRegion::Internal::CRgnData **)v5, v6);
    }
  }
LABEL_11:
  **(_DWORD **)v4 = 0;
}
