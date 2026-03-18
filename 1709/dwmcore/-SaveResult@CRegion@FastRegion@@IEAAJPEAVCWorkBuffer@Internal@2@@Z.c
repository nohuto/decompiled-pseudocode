/*
 * XREFs of ?SaveResult@CRegion@FastRegion@@IEAAJPEAVCWorkBuffer@Internal@2@@Z @ 0x1800897D8
 * Callers:
 *     ?AddToCurrentFrameInvalidRegion@CHwFullScreenRenderTarget@@MEAAJAEBVCRegion@@@Z @ 0x18002F200 (-AddToCurrentFrameInvalidRegion@CHwFullScreenRenderTarget@@MEAAJAEBVCRegion@@@Z.c)
 *     ?UpdateRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFER_ATTRIBUTES@@PEAUHRGN__@@PEBUScrollOptimization@@_N@Z @ 0x18004AEE0 (-UpdateRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFE.c)
 *     ?Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800893FC (-Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800894CC (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180089710 (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180089680 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 */

__int64 __fastcall FastRegion::CRegion::SaveResult(void **this, struct FastRegion::Internal::CWorkBuffer *a2)
{
  int *v2; // rsi
  unsigned int v3; // edi
  int *v5; // rbx
  int v6; // eax
  int v7; // ebp
  int v8; // ecx
  int v9; // ebx
  _DWORD *v10; // r11
  _DWORD *v11; // r8
  __int64 v12; // r9
  __int64 v13; // r10
  __int64 v14; // rax
  int *v15; // rcx
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r9
  SIZE_T v20; // r8
  LPVOID v21; // r15
  int v22; // ebx

  v2 = (int *)*((_QWORD *)a2 + 1);
  v3 = 0;
  if ( *v2 )
  {
    if ( (int *)((char *)a2 + 16) == v2 )
    {
      v5 = (int *)(this + 1);
      v6 = 60;
      v7 = v2[2 * *v2 + 2] + 8 * *v2 - v2[4] + 8 * (*v2 - 1) + 12;
      if ( this + 1 != *this )
        v6 = *v5;
      if ( v6 < v7 )
      {
        v20 = v7;
        if ( !v7 )
          v20 = 1LL;
        v21 = HeapAlloc(WPF::g_processHeap, 0, v20);
        if ( !v21 )
          return (unsigned int)-2147024882;
        FastRegion::CRegion::FreeMemory(this);
        *this = v21;
        *v5 = v7;
      }
      v8 = *v2;
      v9 = 0;
      v10 = *this;
      *v10 = *v2;
      v10[1] = v2[1];
      v10[2] = v2[2];
      v11 = &v10[2 * v8 + 3];
      v12 = (__int64)v2 + v2[4] + 12;
      if ( v8 > 0 )
      {
        v13 = 0LL;
        do
        {
          v10[v13 + 3] = v2[v13 + 3];
          v13 += 2LL;
          v14 = v9++;
          v10[2 * v14 + 4] = (_DWORD)v2
                           + 8 * v14
                           + 4 * (((__int64)v11 - v12) >> 2)
                           + v2[2 * v14 + 4]
                           - ((_DWORD)v10
                            + 8 * v14);
        }
        while ( v9 < *v10 );
      }
      v15 = &v2[2 * *v2 - 2];
      v16 = (unsigned __int64)((int)v15 + v15[4] - v2[4] - (int)v2) >> 2;
      v17 = (int)v16;
      if ( (int)v16 > 0 )
      {
        v18 = v12 - (_QWORD)v11;
        do
        {
          *v11 = *(_DWORD *)((char *)v11 + v18);
          ++v11;
          --v17;
        }
        while ( v17 );
      }
    }
    else
    {
      v22 = *(_DWORD *)a2;
      *(_DWORD *)a2 = 0;
      *((_QWORD *)a2 + 1) = (char *)a2 + 16;
      FastRegion::CRegion::FreeMemory(this);
      *this = v2;
      *((_DWORD *)this + 2) = v22;
    }
  }
  else
  {
    *(_DWORD *)*this = 0;
  }
  return v3;
}
