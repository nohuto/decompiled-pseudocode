/*
 * XREFs of ?Initialize@CSecondarySysmemBitmap@@IEAAJXZ @ 0x180087714
 * Callers:
 *     ?Create@CSecondarySysmemBitmap@@SAJIIAEBUPixelFormatInfo@@PEAPEAV1@@Z @ 0x180086A40 (-Create@CSecondarySysmemBitmap@@SAJIIAEBUPixelFormatInfo@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18000BC20 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSecondarySysmemBitmap::Initialize(CSecondarySysmemBitmap *this)
{
  unsigned __int8 PixelFormatSize; // al
  unsigned int v3; // r8d
  signed int v4; // ebx
  unsigned __int64 v5; // rcx
  SIZE_T v6; // r8
  LPVOID v7; // rax
  int v8; // eax

  PixelFormatSize = GetPixelFormatSize(*((_DWORD *)this + 31));
  if ( PixelFormatSize && *((_DWORD *)this + 28) <= 0x7FFFFFF8u / PixelFormatSize )
  {
    v3 = (((*((_DWORD *)this + 28) * (unsigned int)PixelFormatSize + 7) >> 3) + 3) & 0xFFFFFFFC;
    *((_DWORD *)this + 30) = v3;
    v4 = 0;
    if ( this != (CSecondarySysmemBitmap *)-136LL
      && (v5 = *((unsigned int *)this + 29), *((_DWORD *)this + 29))
      && v3
      && v3 < 0xFFFFFFFFFFFFFFFFuLL / v5 )
    {
      v6 = v5 * v3;
      if ( !v6 )
        v6 = 1LL;
      v7 = HeapAlloc(WPF::g_processHeap, 0, v6);
      *((_QWORD *)this + 17) = v7;
      if ( !v7 )
        v4 = -2147024882;
    }
    else
    {
      v4 = -2147024809;
    }
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v4, 0x3Au);
    }
    else
    {
      v8 = -1;
      if ( *((unsigned int *)this + 30) * (unsigned __int64)*((unsigned int *)this + 29) <= 0xFFFFFFFF )
        v8 = *((_DWORD *)this + 30) * *((_DWORD *)this + 29);
      *((_DWORD *)this + 36) = v8;
      (*(void (__fastcall **)(char *))(*((_QWORD *)this + 2) + 40LL))((char *)this + 16);
    }
  }
  else
  {
    *((_DWORD *)this + 30) = 0;
    v4 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070216, 0x33u);
  }
  return (unsigned int)v4;
}
