/*
 * XREFs of ?HrInit@CClientMemoryBitmap@@QEAAJIIPEBUPixelFormatInfo@@IPEAXIPEAUIUnknown@@@Z @ 0x18007DD70
 * Callers:
 *     ?HrCreateBitmapFromMemoryEx@@YAJIIPEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x1800C5C58 (-HrCreateBitmapFromMemoryEx@@YAJIIPEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsValidPixelFormatInfo@@YA_NPEBUPixelFormatInfo@@@Z @ 0x18007D9D0 (-IsValidPixelFormatInfo@@YA_NPEBUPixelFormatInfo@@@Z.c)
 *     ?HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IIII@Z @ 0x18007E494 (-HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IIII@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CClientMemoryBitmap::HrInit(
        CClientMemoryBitmap *this,
        unsigned int a2,
        int a3,
        enum DXGI_FORMAT *a4,
        unsigned int a5,
        void *a6,
        unsigned int a7,
        struct IUnknown *a8)
{
  unsigned int v12; // r8d
  int v13; // eax
  unsigned int v14; // ebx
  unsigned int v16; // [rsp+20h] [rbp-28h]

  if ( !IsValidPixelFormatInfo(a4) || !a2 || !v12 || !a6 || !a7 )
  {
    v16 = 35;
    goto LABEL_15;
  }
  if ( v12 >= 0x7FFFFFFF / a7 )
  {
    v16 = 40;
LABEL_15:
    v14 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, v16);
    return v14;
  }
  v13 = HrCheckBufferSize(*a4, a7, a2, v12, a5);
  v14 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x31u);
  }
  else
  {
    *((_QWORD *)this + 31) = a8;
    if ( a8 )
      ((void (__fastcall *)(struct IUnknown *))a8->lpVtbl->AddRef)(a8);
    *((_DWORD *)this + 42) = a2;
    *((_DWORD *)this + 43) = a3;
    *((_QWORD *)this + 23) = *(_QWORD *)a4;
    *((enum DXGI_FORMAT *)this + 48) = a4[2];
    *((_QWORD *)this + 29) = a6;
    *((_DWORD *)this + 60) = a7;
  }
  return v14;
}
