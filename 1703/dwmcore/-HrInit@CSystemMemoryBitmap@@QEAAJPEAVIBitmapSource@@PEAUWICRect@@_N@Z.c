/*
 * XREFs of ?HrInit@CSystemMemoryBitmap@@QEAAJPEAVIBitmapSource@@PEAUWICRect@@_N@Z @ 0x1801A915C
 * Callers:
 *     ?HrCreateDestBitmapCopy@@YAJPEAVIBitmapSource@@PEAUWICRect@@PEAPEAVIBitmapDest@@@Z @ 0x18015B3B0 (-HrCreateDestBitmapCopy@@YAJPEAVIBitmapSource@@PEAUWICRect@@PEAPEAVIBitmapDest@@@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18007E584 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?HrInitDataFromIBitmapSource@CBitmap@@IEAAJPEAVIBitmapSource@@PEAUWICRect@@@Z @ 0x1801A96C0 (-HrInitDataFromIBitmapSource@CBitmap@@IEAAJPEAVIBitmapSource@@PEAUWICRect@@@Z.c)
 */

__int64 __fastcall CSystemMemoryBitmap::HrInit(CSystemMemoryBitmap *this, struct IBitmapSource *a2, struct WICRect *a3)
{
  int inited; // eax
  int v6; // ebx
  unsigned __int8 PixelFormatSize; // al
  unsigned int v8; // r8d
  unsigned __int64 v9; // rcx
  _QWORD *v10; // r14
  unsigned __int64 v11; // r8
  SIZE_T v12; // r8
  LPVOID v13; // rax
  int v14; // edx
  int v15; // eax
  __int64 v16; // r8
  int v17; // r9d
  __int64 v18; // rax
  int v19; // eax
  void *v20; // rcx
  unsigned int v22; // [rsp+20h] [rbp-48h]
  _DWORD v23[4]; // [rsp+30h] [rbp-38h] BYREF

  if ( !a2 )
  {
    v6 = -2147024809;
LABEL_23:
    if ( v6 >= 0 )
      return (unsigned int)v6;
    goto LABEL_24;
  }
  inited = CBitmap::HrInitDataFromIBitmapSource(this, a2, 0LL);
  v6 = inited;
  if ( inited < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, inited, 0x218u);
    goto LABEL_24;
  }
  PixelFormatSize = GetPixelFormatSize(*((_DWORD *)this + 46));
  if ( !PixelFormatSize || v8 > 0x7FFFFFF8u / PixelFormatSize )
  {
    *((_DWORD *)this + 60) = 0;
    v6 = -2147024362;
    v22 = 543;
    goto LABEL_17;
  }
  *((_DWORD *)this + 60) = (((v8 * PixelFormatSize + 7) >> 3) + 3) & 0xFFFFFFFC;
  v9 = *((unsigned int *)this + 43);
  v10 = (_QWORD *)((char *)this + 232);
  v11 = *((unsigned int *)this + 60);
  v6 = 0;
  if ( this != (CSystemMemoryBitmap *)-232LL
    && *((_DWORD *)this + 43)
    && *((_DWORD *)this + 60)
    && v11 < 0xFFFFFFFFFFFFFFFFuLL / v9 )
  {
    v12 = v9 * v11;
    if ( !v12 )
      v12 = 1LL;
    v13 = HeapAlloc(WPF::g_processHeap, 0, v12);
    *v10 = v13;
    if ( !v13 )
      v6 = -2147024882;
  }
  else
  {
    v6 = -2147024809;
  }
  if ( v6 >= 0 )
  {
    v14 = *((_DWORD *)this + 43);
    v15 = *((_DWORD *)this + 42);
    v16 = *((unsigned int *)this + 60);
    v17 = *((_DWORD *)this + 60);
    v23[0] = 0;
    v23[1] = 0;
    v23[2] = v15;
    v18 = *(_QWORD *)a2;
    v23[3] = v14;
    v19 = (*(__int64 (__fastcall **)(struct IBitmapSource *, _DWORD *, __int64, _QWORD, _QWORD))(v18 + 64))(
            a2,
            v23,
            v16,
            (unsigned int)(v14 * v17),
            *v10);
    v6 = v19;
    if ( v19 >= 0 )
      return (unsigned int)v6;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x23Bu);
    goto LABEL_23;
  }
  v22 = 552;
LABEL_17:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, v22);
LABEL_24:
  v20 = (void *)*((_QWORD *)this + 29);
  if ( v20 )
  {
    WPF::ProcessHeapImpl::Free(v20);
    *((_QWORD *)this + 29) = 0LL;
  }
  return (unsigned int)v6;
}
