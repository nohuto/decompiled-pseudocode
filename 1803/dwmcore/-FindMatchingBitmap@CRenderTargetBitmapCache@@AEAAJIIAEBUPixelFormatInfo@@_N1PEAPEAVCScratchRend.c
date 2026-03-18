/*
 * XREFs of ?FindMatchingBitmap@CRenderTargetBitmapCache@@AEAAJIIAEBUPixelFormatInfo@@_N1PEAPEAVCScratchRenderTargetBitmap@@@Z @ 0x1800B9BAC
 * Callers:
 *     ?GetRenderTargetBitmap@CRenderTargetBitmapCache@@AEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelFormatInfo@@_N33PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800B9A38 (-GetRenderTargetBitmap@CRenderTargetBitmapCache@@AEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelF.c)
 * Callees:
 *     ?RemoveAt@?$DynArray@PEAVCScratchRenderTargetBitmap@@$0A@@@QEAAJI@Z @ 0x18001A40C (-RemoveAt@-$DynArray@PEAVCScratchRenderTargetBitmap@@$0A@@@QEAAJI@Z.c)
 *     ?Release@CScratchRenderTargetBitmap@@UEAAKXZ @ 0x1800B9DF0 (-Release@CScratchRenderTargetBitmap@@UEAAKXZ.c)
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
  __int64 v7; // r14
  unsigned int v8; // ebx
  unsigned int v9; // r15d
  unsigned int v11; // r9d
  unsigned int v12; // r10d
  struct CScratchRenderTargetBitmap *v14; // rsi
  unsigned int v15; // r12d
  __int64 v16; // rbp
  __int64 v17; // r8
  unsigned int v18; // edx
  unsigned int v19; // ecx
  int v20; // eax
  unsigned int v21; // ecx
  __int64 v22; // r8
  __int64 v24; // rcx

  LODWORD(v7) = *((_DWORD *)this + 6);
  v8 = 0;
  v9 = -1;
  v11 = a3;
  v12 = a2;
  v14 = 0LL;
  v15 = -1;
  if ( (_DWORD)v7 )
  {
    do
    {
      v7 = (unsigned int)(v7 - 1);
      v16 = *(_QWORD *)(*(_QWORD *)this + 8 * v7);
      v17 = *(_QWORD *)(v16 + 248);
      if ( v17 && *(_BYTE *)(v17 + 69) )
      {
        v18 = *(_DWORD *)(v16 + 8);
        v19 = *(_DWORD *)(v16 + 12);
        v20 = *(_QWORD *)(v16 + 256);
        if ( v18 >= v12
          && (v19 >= v11 && !a6 && v20 == *(_DWORD *)a4 || v19 == v11 && v18 == v12 && v20 == *(_DWORD *)a4)
          && v18 < v9
          && a5 == ((*(_DWORD *)(v17 + 168) & 0x80000) != 0)
          && v19 < v15 )
        {
          v14 = *(struct CScratchRenderTargetBitmap **)(*(_QWORD *)this + 8 * v7);
          if ( a6 )
            break;
          v9 = *(_DWORD *)(v16 + 8);
          v15 = *(_DWORD *)(v16 + 12);
        }
      }
      else
      {
        DynArray<CScratchRenderTargetBitmap *,0>::RemoveAt((__int64 *)this, v7);
        *(_BYTE *)(v16 + 296) = 0;
        CScratchRenderTargetBitmap::Release((CScratchRenderTargetBitmap *)v16);
        v11 = a3;
        v12 = a2;
      }
    }
    while ( (_DWORD)v7 );
    if ( v14 )
    {
      v21 = *((_DWORD *)this + 6);
      v22 = *(_QWORD *)this;
      if ( v21 )
      {
        do
        {
          if ( v14 == *(struct CScratchRenderTargetBitmap **)(v22 + 8LL * v8) )
            break;
          ++v8;
        }
        while ( v8 < v21 );
      }
      if ( v8 < v21 )
      {
        for ( ; v8 < v21 - 1; v21 = *((_DWORD *)this + 6) )
        {
          v24 = v8++;
          *(_QWORD *)(v22 + 8 * v24) = *(_QWORD *)(v22 + 8LL * v8);
        }
        *((_DWORD *)this + 6) = v21 - 1;
      }
    }
  }
  *a7 = v14;
  return 0LL;
}
