/*
 * XREFs of ?HrInit@CSystemMemoryBitmap@@QEAAJIIAEBUPixelFormatInfo@@_N@Z @ 0x180200854
 * Callers:
 *     ?HrCreateDestBitmap@@YAJIIAEBUPixelFormatInfo@@PEAPEAVIBitmapDest@@@Z @ 0x180158790 (-HrCreateDestBitmap@@YAJIIAEBUPixelFormatInfo@@PEAPEAVIBitmapDest@@@Z.c)
 *     ?RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z @ 0x18015D484 (-RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z.c)
 *     ?PrepareToPushSourceBitsToVidMem@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@IPEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x1801F0160 (-PrepareToPushSourceBitsToVidMem@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@IPEAV-$TMilRect@I.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x180084360 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 */

__int64 __fastcall CSystemMemoryBitmap::HrInit(
        CSystemMemoryBitmap *this,
        unsigned int a2,
        unsigned int a3,
        const struct PixelFormatInfo *a4,
        bool a5)
{
  unsigned __int8 PixelFormatSize; // al
  unsigned int v10; // ebx
  void **v11; // r12
  int v12; // edi
  SIZE_T v13; // r8
  LPVOID v14; // rax

  PixelFormatSize = GetPixelFormatSize(*(_DWORD *)a4);
  if ( PixelFormatSize && a2 <= 0x7FFFFFF8u / PixelFormatSize )
  {
    v10 = (((a2 * PixelFormatSize + 7) >> 3) + 3) & 0xFFFFFFFC;
    v11 = (void **)((char *)this + 232);
    v12 = 0;
    if ( this != (CSystemMemoryBitmap *)-232LL && a3 && v10 && v10 < 0xFFFFFFFFFFFFFFFFuLL / a3 )
    {
      v13 = a3 * (unsigned __int64)v10;
      if ( !v13 )
        v13 = 1LL;
      v14 = HeapAlloc(WPF::g_processHeap, 0, v13);
      *v11 = v14;
      if ( !v14 )
        v12 = -2147024882;
    }
    else
    {
      v12 = -2147024809;
    }
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x15Fu);
    }
    else
    {
      *((_DWORD *)this + 42) = a2;
      *((_DWORD *)this + 43) = a3;
      *((_QWORD *)this + 23) = *(_QWORD *)a4;
      *((_DWORD *)this + 48) = *((_DWORD *)a4 + 2);
      *((_DWORD *)this + 60) = v10;
      if ( a5 )
        memset_0(*v11, 0, a3 * v10);
    }
  }
  else
  {
    v12 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0x158u);
  }
  return (unsigned int)v12;
}
