/*
 * XREFs of ?HrInit@CSystemMemoryBitmap@@UEAAJPEAVIBitmapSource@@@Z @ 0x1801C4450
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18000BC20 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?HrInitDataFromIBitmapSource@CBitmap@@IEAAJPEAVIBitmapSource@@PEAUWICRect@@@Z @ 0x1801C4874 (-HrInitDataFromIBitmapSource@CBitmap@@IEAAJPEAVIBitmapSource@@PEAUWICRect@@@Z.c)
 */

__int64 __fastcall CSystemMemoryBitmap::HrInit(CSystemMemoryBitmap *this, struct IBitmapSource *a2)
{
  signed int inited; // eax
  signed int v5; // ebx
  unsigned __int8 PixelFormatSize; // al
  unsigned int v7; // r8d
  _QWORD *v8; // r14
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // r8
  SIZE_T v11; // r8
  LPVOID v12; // rax
  int v13; // edx
  int v14; // eax
  __int64 v15; // r8
  int v16; // r9d
  __int64 v17; // rax
  signed int v18; // eax
  void *v19; // rcx
  unsigned int v21; // [rsp+20h] [rbp-48h]
  _DWORD v22[4]; // [rsp+30h] [rbp-38h] BYREF

  if ( !a2 )
  {
    v5 = -2147024809;
LABEL_23:
    if ( v5 >= 0 )
      return (unsigned int)v5;
    goto LABEL_24;
  }
  inited = CBitmap::HrInitDataFromIBitmapSource(this, a2, 0LL);
  v5 = inited;
  if ( inited < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, inited, 0x17Fu);
    goto LABEL_24;
  }
  PixelFormatSize = GetPixelFormatSize(*((_DWORD *)this + 46));
  if ( !PixelFormatSize || (v7 = *((_DWORD *)this + 42), v7 > 0x7FFFFFF8u / PixelFormatSize) )
  {
    *((_DWORD *)this + 60) = 0;
    v5 = -2147024362;
    v21 = 389;
    goto LABEL_17;
  }
  *((_DWORD *)this + 60) = (((v7 * PixelFormatSize + 7) >> 3) + 3) & 0xFFFFFFFC;
  v8 = (_QWORD *)((char *)this + 232);
  v5 = 0;
  if ( this != (CSystemMemoryBitmap *)-232LL
    && (v9 = *((unsigned int *)this + 43), *((_DWORD *)this + 43))
    && (v10 = *((unsigned int *)this + 60), *((_DWORD *)this + 60))
    && v10 < 0xFFFFFFFFFFFFFFFFuLL / v9 )
  {
    v11 = v9 * v10;
    if ( !v11 )
      v11 = 1LL;
    v12 = HeapAlloc(WPF::g_processHeap, 0, v11);
    *v8 = v12;
    if ( !v12 )
      v5 = -2147024882;
  }
  else
  {
    v5 = -2147024809;
  }
  if ( v5 >= 0 )
  {
    v13 = *((_DWORD *)this + 43);
    v14 = *((_DWORD *)this + 42);
    v15 = *((unsigned int *)this + 60);
    v16 = *((_DWORD *)this + 60);
    v22[0] = 0;
    v22[1] = 0;
    v22[2] = v14;
    v17 = *(_QWORD *)a2;
    v22[3] = v13;
    v18 = (*(__int64 (__fastcall **)(struct IBitmapSource *, _DWORD *, __int64, _QWORD, _QWORD))(v17 + 48))(
            a2,
            v22,
            v15,
            (unsigned int)(v13 * v16),
            *v8);
    v5 = v18;
    if ( v18 >= 0 )
      return (unsigned int)v5;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v18, 0x198u);
    goto LABEL_23;
  }
  v21 = 398;
LABEL_17:
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v5, v21);
LABEL_24:
  v19 = (void *)*((_QWORD *)this + 29);
  if ( v19 )
  {
    WPF::ProcessHeapImpl::Free(v19);
    *((_QWORD *)this + 29) = 0LL;
  }
  return (unsigned int)v5;
}
