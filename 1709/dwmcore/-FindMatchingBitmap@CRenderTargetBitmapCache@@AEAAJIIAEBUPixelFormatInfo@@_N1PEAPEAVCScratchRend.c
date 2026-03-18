/*
 * XREFs of ?FindMatchingBitmap@CRenderTargetBitmapCache@@AEAAJIIAEBUPixelFormatInfo@@_N1PEAPEAVCScratchRenderTargetBitmap@@@Z @ 0x18008CFE4
 * Callers:
 *     ?GetRenderTargetBitmap@CRenderTargetBitmapCache@@AEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelFormatInfo@@_N33PEAPEAVIRenderTargetBitmap@@@Z @ 0x18008CE70 (-GetRenderTargetBitmap@CRenderTargetBitmapCache@@AEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelF.c)
 * Callees:
 *     ?Release@CScratchRenderTargetBitmap@@UEAAKXZ @ 0x18008D360 (-Release@CScratchRenderTargetBitmap@@UEAAKXZ.c)
 *     ?IsValid@CHwTextureRenderTarget@@UEBA_NXZ @ 0x180090150 (-IsValid@CHwTextureRenderTarget@@UEBA_NXZ.c)
 *     ?RemoveAt@?$DynArray@PEAVCScratchRenderTargetBitmap@@$0A@@@QEAAJI@Z @ 0x1800BA920 (-RemoveAt@-$DynArray@PEAVCScratchRenderTargetBitmap@@$0A@@@QEAAJI@Z.c)
 */

__int64 __fastcall CRenderTargetBitmapCache::FindMatchingBitmap(
        CRenderTargetBitmapCache *this,
        unsigned int a2,
        unsigned int a3,
        const struct PixelFormatInfo *a4,
        bool a5,
        bool a6,
        struct CScratchRenderTargetBitmap **a7)
{
  unsigned int v7; // r14d
  unsigned int v8; // ebx
  struct CScratchRenderTargetBitmap *v11; // rbp
  unsigned int v12; // r15d
  unsigned int v13; // r12d
  __int64 v14; // rsi
  unsigned int v15; // r8d
  unsigned int v16; // edx
  int v17; // eax
  __int64 v19; // rcx
  bool v20; // al
  unsigned int v21; // ecx
  __int64 v22; // r8
  __int64 v23; // rcx

  v7 = *((_DWORD *)this + 6);
  v8 = 0;
  v11 = 0LL;
  v12 = -1;
  v13 = -1;
  if ( !v7 )
    goto LABEL_8;
  do
  {
    v14 = *(_QWORD *)(*(_QWORD *)this + 8LL * --v7);
    if ( !CHwTextureRenderTarget::IsValid((CHwTextureRenderTarget *)v14) )
    {
      DynArray<CScratchRenderTargetBitmap *,0>::RemoveAt(this, v7);
      *(_BYTE *)(v14 + 272) = 0;
      CScratchRenderTargetBitmap::Release((CScratchRenderTargetBitmap *)v14);
      continue;
    }
    v15 = *(_DWORD *)(v14 + 8);
    v16 = *(_DWORD *)(v14 + 12);
    v17 = *(_QWORD *)(v14 + 232);
    if ( v15 < a2 || (v16 < a3 || a6 || v17 != *(_DWORD *)a4) && (v16 != a3 || v15 != a2 || v17 != *(_DWORD *)a4) )
      continue;
    v19 = *(_QWORD *)(v14 + 224);
    v20 = 0;
    if ( v19 )
      v20 = (*(_DWORD *)(v19 + 168) & 0x80000) != 0;
    if ( a5 != v20 || v15 >= v12 || v16 >= v13 )
      continue;
    v11 = (struct CScratchRenderTargetBitmap *)v14;
    if ( a6 )
      break;
    v12 = *(_DWORD *)(v14 + 8);
    v13 = *(_DWORD *)(v14 + 12);
  }
  while ( v7 );
  if ( v11 )
  {
    v21 = *((_DWORD *)this + 6);
    v22 = *(_QWORD *)this;
    if ( v21 )
    {
      do
      {
        if ( v11 == *(struct CScratchRenderTargetBitmap **)(v22 + 8LL * v8) )
          break;
        ++v8;
      }
      while ( v8 < v21 );
    }
    if ( v8 < v21 )
    {
      if ( v8 < v21 - 1 )
      {
        do
        {
          v23 = v8++;
          *(_QWORD *)(v22 + 8 * v23) = *(_QWORD *)(v22 + 8LL * v8);
        }
        while ( v8 < *((_DWORD *)this + 6) - 1 );
      }
      --*((_DWORD *)this + 6);
    }
  }
LABEL_8:
  *a7 = v11;
  return 0LL;
}
