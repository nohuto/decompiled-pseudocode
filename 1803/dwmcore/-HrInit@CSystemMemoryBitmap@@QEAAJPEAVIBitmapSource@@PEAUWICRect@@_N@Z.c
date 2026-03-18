/*
 * XREFs of ?HrInit@CSystemMemoryBitmap@@QEAAJPEAVIBitmapSource@@PEAUWICRect@@_N@Z @ 0x1802009A0
 * Callers:
 *     ?HrCreateDestBitmapCopy@@YAJPEAVIBitmapSource@@PEAUWICRect@@PEAPEAVIBitmapDest@@@Z @ 0x18017A298 (-HrCreateDestBitmapCopy@@YAJPEAVIBitmapSource@@PEAUWICRect@@PEAPEAVIBitmapDest@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x180084360 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?HrInitDataFromIBitmapSource@CBitmap@@IEAAJPEAVIBitmapSource@@PEAUWICRect@@@Z @ 0x180200FA4 (-HrInitDataFromIBitmapSource@CBitmap@@IEAAJPEAVIBitmapSource@@PEAUWICRect@@@Z.c)
 */

__int64 __fastcall CSystemMemoryBitmap::HrInit(CSystemMemoryBitmap *this, struct IBitmapSource *a2, struct WICRect *a3)
{
  int inited; // eax
  int v6; // ebx
  unsigned __int8 PixelFormatSize; // al
  unsigned int v8; // r8d
  unsigned int v9; // ecx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // r8
  SIZE_T v12; // r8
  LPVOID v13; // rax
  int v14; // eax
  int v15; // r9d
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rax
  int v19; // eax
  void *v20; // rcx
  unsigned int v22; // [rsp+20h] [rbp-48h]
  _DWORD v23[4]; // [rsp+30h] [rbp-38h] BYREF

  if ( !a2 )
  {
    v6 = -2147024809;
    goto LABEL_26;
  }
  inited = CBitmap::HrInitDataFromIBitmapSource(this, a2, 0LL);
  v6 = inited;
  if ( inited < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inited, 0x1FDu);
    goto LABEL_27;
  }
  PixelFormatSize = GetPixelFormatSize(*((_DWORD *)this + 46));
  if ( PixelFormatSize && v8 <= 0x7FFFFFF8u / PixelFormatSize )
  {
    v6 = 0;
    v9 = (((v8 * PixelFormatSize + 7) >> 3) + 3) & 0xFFFFFFFC;
  }
  else
  {
    v6 = -2147024362;
    v9 = 0;
  }
  *((_DWORD *)this + 60) = v9;
  if ( v6 >= 0 )
  {
    v10 = *((unsigned int *)this + 43);
    v11 = *((unsigned int *)this + 60);
    v6 = 0;
    if ( this != (CSystemMemoryBitmap *)-232LL
      && *((_DWORD *)this + 43)
      && *((_DWORD *)this + 60)
      && v11 < 0xFFFFFFFFFFFFFFFFuLL / v10 )
    {
      v12 = v10 * v11;
      if ( !v12 )
        v12 = 1LL;
      v13 = HeapAlloc(WPF::g_processHeap, 0, v12);
      *((_QWORD *)this + 29) = v13;
      if ( !v13 )
        v6 = -2147024882;
    }
    else
    {
      v6 = -2147024809;
    }
    if ( v6 < 0 )
    {
      v22 = 525;
      goto LABEL_21;
    }
    v14 = *((_DWORD *)this + 42);
    v15 = *((_DWORD *)this + 43);
    v16 = *((_QWORD *)this + 29);
    v17 = *((unsigned int *)this + 60);
    v23[0] = 0;
    v23[1] = 0;
    v23[2] = v14;
    v18 = *(_QWORD *)a2;
    v23[3] = v15;
    v19 = (*(__int64 (__fastcall **)(struct IBitmapSource *, _DWORD *, __int64, _QWORD, __int64))(v18 + 48))(
            a2,
            v23,
            v17,
            (unsigned int)(v17 * v15),
            v16);
    v6 = v19;
    if ( v19 >= 0 )
      return (unsigned int)v6;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0x220u);
LABEL_26:
    if ( v6 >= 0 )
      return (unsigned int)v6;
    goto LABEL_27;
  }
  v22 = 516;
LABEL_21:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, v22);
LABEL_27:
  v20 = (void *)*((_QWORD *)this + 29);
  if ( v20 )
  {
    operator delete(v20);
    *((_QWORD *)this + 29) = 0LL;
  }
  return (unsigned int)v6;
}
