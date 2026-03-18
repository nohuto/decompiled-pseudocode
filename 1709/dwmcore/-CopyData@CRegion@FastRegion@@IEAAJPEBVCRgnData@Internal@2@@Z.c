/*
 * XREFs of ?CopyData@CRegion@FastRegion@@IEAAJPEBVCRgnData@Internal@2@@Z @ 0x180089974
 * Callers:
 *     ?RotateFrameInvalidRegions@CHwFullScreenRenderTarget@@MEAAXXZ @ 0x18002F090 (-RotateFrameInvalidRegions@CHwFullScreenRenderTarget@@MEAAXXZ.c)
 *     ?AddToCurrentFrameInvalidRegion@CHwFullScreenRenderTarget@@MEAAJAEBVCRegion@@@Z @ 0x18002F200 (-AddToCurrentFrameInvalidRegion@CHwFullScreenRenderTarget@@MEAAJAEBVCRegion@@@Z.c)
 *     ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800893D0 (-Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 * Callees:
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180089680 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 */

__int64 __fastcall FastRegion::CRegion::CopyData(void **this, const struct FastRegion::Internal::CRgnData *a2)
{
  int *v2; // rsi
  int v5; // eax
  int v6; // ebp
  int v7; // ecx
  int v8; // esi
  _DWORD *v9; // r10
  char *v10; // r8
  char *v11; // r9
  _DWORD *v12; // rdi
  __int64 v13; // rax
  char *v14; // rcx
  unsigned __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r9
  SIZE_T v19; // r8
  LPVOID v20; // r14

  v2 = (int *)(this + 1);
  v5 = 60;
  v6 = *((_DWORD *)a2 + 2 * *(_DWORD *)a2 + 2) + 8 * *(_DWORD *)a2 - *((_DWORD *)a2 + 4) + 8 * (*(_DWORD *)a2 - 1) + 12;
  if ( this + 1 != *this )
    v5 = *v2;
  if ( v5 < v6 )
  {
    v19 = v6;
    if ( !v6 )
      v19 = 1LL;
    v20 = HeapAlloc(WPF::g_processHeap, 0, v19);
    if ( !v20 )
      return 2147942414LL;
    FastRegion::CRegion::FreeMemory(this);
    *this = v20;
    *v2 = v6;
  }
  v7 = *(_DWORD *)a2;
  v8 = 0;
  v9 = *this;
  *v9 = *(_DWORD *)a2;
  v9[1] = *((_DWORD *)a2 + 1);
  v9[2] = *((_DWORD *)a2 + 2);
  v10 = (char *)&v9[2 * v7 + 3];
  v11 = (char *)a2 + *((int *)a2 + 4) + 12;
  if ( v7 > 0 )
  {
    v12 = v9 + 3;
    do
    {
      *v12 = *(_DWORD *)((char *)v12 + a2 - (const struct FastRegion::Internal::CRgnData *)v9);
      v12 += 2;
      v13 = v8++;
      v9[2 * v13 + 4] = (_DWORD)a2
                      + 8 * v13
                      + 4 * ((v10 - v11) >> 2)
                      + *((_DWORD *)a2 + 2 * v13 + 4)
                      - ((_DWORD)v9
                       + 8 * v13);
    }
    while ( v8 < *v9 );
  }
  v14 = (char *)a2 + 8 * *(_DWORD *)a2 - 8;
  v15 = (unsigned __int64)((int)v14 + *((_DWORD *)v14 + 4) - *((_DWORD *)a2 + 4) - (int)a2) >> 2;
  v16 = (int)v15;
  if ( (int)v15 > 0 )
  {
    v17 = v11 - v10;
    do
    {
      *(_DWORD *)v10 = *(_DWORD *)&v10[v17];
      v10 += 4;
      --v16;
    }
    while ( v16 );
  }
  return 0LL;
}
