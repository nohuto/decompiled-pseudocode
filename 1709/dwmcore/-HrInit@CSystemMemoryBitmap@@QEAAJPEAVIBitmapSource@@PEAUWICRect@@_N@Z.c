/*
 * XREFs of ?HrInit@CSystemMemoryBitmap@@QEAAJPEAVIBitmapSource@@PEAUWICRect@@_N@Z @ 0x1801C4270
 * Callers:
 *     ?HrCreateDestBitmapCopy@@YAJPEAVIBitmapSource@@PEAUWICRect@@PEAPEAVIBitmapDest@@@Z @ 0x18015093C (-HrCreateDestBitmapCopy@@YAJPEAVIBitmapSource@@PEAUWICRect@@PEAPEAVIBitmapDest@@@Z.c)
 * Callees:
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18000BC20 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?HrInitDataFromIBitmapSource@CBitmap@@IEAAJPEAVIBitmapSource@@PEAUWICRect@@@Z @ 0x1801C4874 (-HrInitDataFromIBitmapSource@CBitmap@@IEAAJPEAVIBitmapSource@@PEAUWICRect@@@Z.c)
 */

__int64 __fastcall CSystemMemoryBitmap::HrInit(CSystemMemoryBitmap *this, struct IBitmapSource *a2, struct WICRect *a3)
{
  signed int inited; // eax
  signed int v6; // ebx
  unsigned __int8 PixelFormatSize; // al
  unsigned int v8; // r8d
  _QWORD *v9; // r14
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // r8
  SIZE_T v12; // r8
  LPVOID v13; // rax
  int v14; // edx
  int v15; // eax
  __int64 v16; // r8
  int v17; // r9d
  __int64 v18; // rax
  signed int v19; // eax
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
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, inited, 0x1FDu);
    goto LABEL_24;
  }
  PixelFormatSize = GetPixelFormatSize(*((_DWORD *)this + 46));
  if ( !PixelFormatSize || (v8 = *((_DWORD *)this + 42), v8 > 0x7FFFFFF8u / PixelFormatSize) )
  {
    *((_DWORD *)this + 60) = 0;
    v6 = -2147024362;
    v22 = 516;
    goto LABEL_17;
  }
  *((_DWORD *)this + 60) = (((v8 * PixelFormatSize + 7) >> 3) + 3) & 0xFFFFFFFC;
  v9 = (_QWORD *)((char *)this + 232);
  v6 = 0;
  if ( this != (CSystemMemoryBitmap *)-232LL
    && (v10 = *((unsigned int *)this + 43), *((_DWORD *)this + 43))
    && (v11 = *((unsigned int *)this + 60), *((_DWORD *)this + 60))
    && v11 < 0xFFFFFFFFFFFFFFFFuLL / v10 )
  {
    v12 = v10 * v11;
    if ( !v12 )
      v12 = 1LL;
    v13 = HeapAlloc(WPF::g_processHeap, 0, v12);
    *v9 = v13;
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
    v19 = (*(__int64 (__fastcall **)(struct IBitmapSource *, _DWORD *, __int64, _QWORD, _QWORD))(v18 + 48))(
            a2,
            v23,
            v16,
            (unsigned int)(v14 * v17),
            *v9);
    v6 = v19;
    if ( v19 >= 0 )
      return (unsigned int)v6;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v19, 0x220u);
    goto LABEL_23;
  }
  v22 = 525;
LABEL_17:
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, v22);
LABEL_24:
  v20 = (void *)*((_QWORD *)this + 29);
  if ( v20 )
  {
    WPF::ProcessHeapImpl::Free(v20);
    *((_QWORD *)this + 29) = 0LL;
  }
  return (unsigned int)v6;
}
