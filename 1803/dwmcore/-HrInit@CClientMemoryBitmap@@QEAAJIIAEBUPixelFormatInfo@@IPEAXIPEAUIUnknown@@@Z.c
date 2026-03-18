/*
 * XREFs of ?HrInit@CClientMemoryBitmap@@QEAAJIIAEBUPixelFormatInfo@@IPEAXIPEAUIUnknown@@@Z @ 0x180020B0C
 * Callers:
 *     ?HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x180020A04 (-HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@.c)
 * Callees:
 *     ?IsValidPixelFormatInfo@@YA_NAEBUPixelFormatInfo@@@Z @ 0x180020D20 (-IsValidPixelFormatInfo@@YA_NAEBUPixelFormatInfo@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IIII@Z @ 0x180084388 (-HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IIII@Z.c)
 */

__int64 __fastcall CClientMemoryBitmap::HrInit(
        CClientMemoryBitmap *this,
        unsigned int a2,
        int a3,
        const struct PixelFormatInfo *a4,
        unsigned int a5,
        void *a6,
        unsigned int a7)
{
  unsigned int v11; // r8d
  int v12; // eax
  unsigned int v13; // ebx
  unsigned int v15; // [rsp+20h] [rbp-28h]

  if ( !IsValidPixelFormatInfo(a4) || !a2 || !v11 || !a6 || !a7 )
  {
    v15 = 34;
    goto LABEL_13;
  }
  if ( v11 >= 0x7FFFFFFF / a7 )
  {
    v15 = 39;
LABEL_13:
    v13 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, v15);
    return v13;
  }
  v12 = HrCheckBufferSize((enum DXGI_FORMAT)*(_DWORD *)a4, a7, a2, v11, a5);
  v13 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x30u);
  }
  else
  {
    *((_QWORD *)this + 31) = 0LL;
    *((_DWORD *)this + 42) = a2;
    *((_DWORD *)this + 43) = a3;
    *((_QWORD *)this + 23) = *(_QWORD *)a4;
    *((_DWORD *)this + 48) = *((_DWORD *)a4 + 2);
    *((_QWORD *)this + 29) = a6;
    *((_DWORD *)this + 60) = a7;
  }
  return v13;
}
