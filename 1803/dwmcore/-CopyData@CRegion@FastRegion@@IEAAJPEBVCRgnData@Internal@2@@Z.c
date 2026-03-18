/*
 * XREFs of ?CopyData@CRegion@FastRegion@@IEAAJPEBVCRgnData@Internal@2@@Z @ 0x1800804F4
 * Callers:
 *     ?AddToCurrentFrameInvalidRegion@CHwFullScreenRenderTarget@@MEAAJAEBVCRegion@@@Z @ 0x18007C160 (-AddToCurrentFrameInvalidRegion@CHwFullScreenRenderTarget@@MEAAJAEBVCRegion@@@Z.c)
 *     ?RotateFrameInvalidRegions@CHwFullScreenRenderTarget@@MEAAXXZ @ 0x18007C480 (-RotateFrameInvalidRegions@CHwFullScreenRenderTarget@@MEAAXXZ.c)
 * Callees:
 *     ?Copy@CRgnData@Internal@FastRegion@@QEAAXAEBV123@@Z @ 0x18007EE78 (-Copy@CRgnData@Internal@FastRegion@@QEAAXAEBV123@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180080200 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 */

__int64 __fastcall FastRegion::CRegion::CopyData(void **this, const struct FastRegion::Internal::CRgnData *a2)
{
  int *v2; // r14
  FastRegion::Internal::CRgnData *v5; // rcx
  int v6; // eax
  int v7; // edi
  SIZE_T v9; // r8
  LPVOID v10; // rbp

  v2 = (int *)(this + 1);
  v5 = (FastRegion::Internal::CRgnData *)*this;
  v6 = 60;
  v7 = *((_DWORD *)a2 + 2 * *(_DWORD *)a2 + 2) - *((_DWORD *)a2 + 4) + 8 * *(_DWORD *)a2 + 8 * (*(_DWORD *)a2 - 1) + 12;
  if ( v2 != (int *)v5 )
    v6 = *v2;
  if ( v6 >= v7 )
    goto LABEL_4;
  v9 = v7;
  if ( !v7 )
    v9 = 1LL;
  v10 = HeapAlloc(WPF::g_processHeap, 0, v9);
  if ( v10 )
  {
    FastRegion::CRegion::FreeMemory(this);
    *this = v10;
    *v2 = v7;
    v5 = (FastRegion::Internal::CRgnData *)*this;
LABEL_4:
    FastRegion::Internal::CRgnData::Copy(v5, a2);
    return 0LL;
  }
  return 2147942414LL;
}
