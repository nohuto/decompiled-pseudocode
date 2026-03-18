/*
 * XREFs of ?HrInitFromCompressedBytes@CCompressedSourceBitmap@@IEAAJPEBXK@Z @ 0x1801AACBC
 * Callers:
 *     ?Create@CCompressedSourceBitmap@@SAJPEAUIWICImagingFactory@@PEBXKNNW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAVIBitmapSource@@@Z @ 0x1801AA670 (-Create@CCompressedSourceBitmap@@SAJPEAUIWICImagingFactory@@PEBXKNNW4DXGI_FORMAT@@W4DXGI_ALPHA_M.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x1800D5396 (memcpy_0.c)
 */

__int64 __fastcall CCompressedSourceBitmap::HrInitFromCompressedBytes(
        CCompressedSourceBitmap *this,
        const void *a2,
        SIZE_T a3)
{
  size_t v3; // rsi
  unsigned int v6; // ebx
  void *v7; // rax

  v3 = (unsigned int)a3;
  v6 = 0;
  a3 = (unsigned int)a3;
  if ( !(_DWORD)a3 )
    a3 = 1LL;
  v7 = HeapAlloc(WPF::g_processHeap, 0, a3);
  *((_QWORD *)this + 32) = v7;
  if ( v7 )
  {
    *((_DWORD *)this + 66) = v3;
    memcpy_0(v7, a2, v3);
  }
  else
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x8Fu);
  }
  return v6;
}
