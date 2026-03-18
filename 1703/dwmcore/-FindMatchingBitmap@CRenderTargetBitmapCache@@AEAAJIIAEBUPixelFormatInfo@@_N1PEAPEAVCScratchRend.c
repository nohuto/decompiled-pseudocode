/*
 * XREFs of ?FindMatchingBitmap@CRenderTargetBitmapCache@@AEAAJIIAEBUPixelFormatInfo@@_N1PEAPEAVCScratchRenderTargetBitmap@@@Z @ 0x180006370
 * Callers:
 *     ?GetRenderTargetBitmap@CRenderTargetBitmapCache@@AEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelFormatInfo@@_N33PEAPEAVIRenderTargetBitmap@@@Z @ 0x180006588 (-GetRenderTargetBitmap@CRenderTargetBitmapCache@@AEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelF.c)
 * Callees:
 *     <none>
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
  unsigned int v7; // r11d
  unsigned int v8; // r10d
  struct CScratchRenderTargetBitmap *v12; // rdi
  unsigned int v13; // r14d
  unsigned int v14; // r15d
  unsigned int v15; // esi
  __int64 v16; // r8
  unsigned int v17; // ecx
  __int64 v18; // r9
  unsigned int v19; // edx
  int v20; // eax
  __int64 v21; // rcx
  __int64 v23; // rcx
  bool v24; // al

  v7 = *((_DWORD *)this + 6);
  v8 = 0;
  v12 = 0LL;
  v13 = -1;
  v14 = -1;
  v15 = 0;
  if ( !v7 )
    goto LABEL_14;
  v16 = *(_QWORD *)this;
  v17 = a2;
  while ( 1 )
  {
    v18 = *(_QWORD *)(v16 + 8LL * v15);
    v19 = *(_DWORD *)(v18 + 12);
    v20 = *(_DWORD *)(v18 + 216);
    if ( *(_DWORD *)(v18 + 8) < v17
      || (v19 < a3 || a6 || v20 != *(_DWORD *)a4) && (v19 != a3 || *(_DWORD *)(v18 + 8) != v17 || v20 != *(_DWORD *)a4) )
    {
      goto LABEL_6;
    }
    v23 = *(_QWORD *)(v18 + 208);
    v24 = 0;
    if ( v23 )
      v24 = (*(_DWORD *)(v23 + 176) & 0x80000) != 0;
    if ( a5 == v24 && *(_DWORD *)(v18 + 8) < v13 && v19 < v14 )
      break;
LABEL_21:
    v17 = a2;
LABEL_6:
    if ( ++v15 >= v7 )
      goto LABEL_7;
  }
  v12 = *(struct CScratchRenderTargetBitmap **)(v16 + 8LL * v15);
  if ( !a6 )
  {
    v13 = *(_DWORD *)(v18 + 8);
    v14 = *(_DWORD *)(v18 + 12);
    goto LABEL_21;
  }
LABEL_7:
  if ( v12 )
  {
    do
    {
      if ( v12 == *(struct CScratchRenderTargetBitmap **)(v16 + 8LL * v8) )
        break;
      ++v8;
    }
    while ( v8 < v7 );
    if ( v8 < v7 )
    {
      if ( v8 < v7 - 1 )
      {
        do
        {
          v21 = v8++;
          *(_QWORD *)(v16 + 8 * v21) = *(_QWORD *)(v16 + 8LL * v8);
        }
        while ( v8 < *((_DWORD *)this + 6) - 1 );
      }
      --*((_DWORD *)this + 6);
    }
  }
LABEL_14:
  *a7 = v12;
  return 0LL;
}
