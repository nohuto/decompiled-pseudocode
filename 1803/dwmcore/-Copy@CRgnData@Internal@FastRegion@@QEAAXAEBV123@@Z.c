/*
 * XREFs of ?Copy@CRgnData@Internal@FastRegion@@QEAAXAEBV123@@Z @ 0x18007EE78
 * Callers:
 *     ?RotateFrameInvalidRegions@CHwFullScreenRenderTarget@@MEAAXXZ @ 0x18007C480 (-RotateFrameInvalidRegions@CHwFullScreenRenderTarget@@MEAAXXZ.c)
 *     ??$AppendRects@UtagRECT@@@CRegion@@QEAAJPEBUtagRECT@@I@Z @ 0x18007DA70 (--$AppendRects@UtagRECT@@@CRegion@@QEAAJPEBUtagRECT@@I@Z.c)
 *     ?CopyData@CRegion@FastRegion@@IEAAJPEBVCRgnData@Internal@2@@Z @ 0x1800804F4 (-CopyData@CRegion@FastRegion@@IEAAJPEBVCRgnData@Internal@2@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FastRegion::Internal::CRgnData::Copy(
        FastRegion::Internal::CRgnData *this,
        const struct FastRegion::Internal::CRgnData *a2)
{
  int v2; // r8d
  int v3; // esi
  char *v4; // r9
  char *v5; // r11
  _DWORD *v6; // rdi
  __int64 v7; // rax
  char *v8; // rcx
  unsigned __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r11

  v2 = *(_DWORD *)a2;
  v3 = 0;
  *(_DWORD *)this = *(_DWORD *)a2;
  *((_DWORD *)this + 1) = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 2) = *((_DWORD *)a2 + 2);
  v4 = (char *)this + 8 * v2 + 12;
  v5 = (char *)a2 + *((int *)a2 + 4) + 12;
  if ( v2 > 0 )
  {
    v6 = (_DWORD *)((char *)this + 12);
    do
    {
      *v6 = *(_DWORD *)((char *)v6 + a2 - this);
      v6 += 2;
      v7 = v3++;
      *((_DWORD *)this + 2 * v7 + 4) = (_DWORD)a2
                                     + 8 * v7
                                     + 4 * ((v4 - v5) >> 2)
                                     + *((_DWORD *)a2 + 2 * v7 + 4)
                                     - ((_DWORD)this
                                      + 8 * v7);
    }
    while ( v3 < *(_DWORD *)this );
  }
  v8 = (char *)a2 + 8 * *(_DWORD *)a2 - 8;
  v9 = (unsigned __int64)((int)v8 + *((_DWORD *)v8 + 4) - *((_DWORD *)a2 + 4) - (int)a2) >> 2;
  v10 = (int)v9;
  if ( (int)v9 > 0 )
  {
    v11 = v5 - v4;
    do
    {
      *(_DWORD *)v4 = *(_DWORD *)&v4[v11];
      v4 += 4;
      --v10;
    }
    while ( v10 );
  }
}
