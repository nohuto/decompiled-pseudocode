/*
 * XREFs of ?Initialize@CSecondarySysmemBitmap@@IEAAJXZ @ 0x180024CCC
 * Callers:
 *     ?Create@CSecondarySysmemBitmap@@SAJIIW4DXGI_FORMAT@@W4D2D1_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAV1@@Z @ 0x1800247F8 (-Create@CSecondarySysmemBitmap@@SAJIIW4DXGI_FORMAT@@W4D2D1_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18007E584 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSecondarySysmemBitmap::Initialize(enum DXGI_FORMAT *this)
{
  unsigned __int8 PixelFormatSize; // al
  unsigned int v3; // r8d
  unsigned __int64 v4; // rcx
  int v5; // ebx
  SIZE_T v6; // r8
  LPVOID v7; // rax
  int v8; // eax

  PixelFormatSize = GetPixelFormatSize(this[31]);
  if ( PixelFormatSize && *((_DWORD *)this + 28) <= 0x7FFFFFF8u / PixelFormatSize )
  {
    v3 = (((*((_DWORD *)this + 28) * (unsigned int)PixelFormatSize + 7) >> 3) + 3) & 0xFFFFFFFC;
    *((_DWORD *)this + 30) = v3;
    v4 = *((unsigned int *)this + 29);
    v5 = 0;
    if ( this != (enum DXGI_FORMAT *)-136LL && *((_DWORD *)this + 29) && v3 && v3 < 0xFFFFFFFFFFFFFFFFuLL / v4 )
    {
      v6 = v4 * v3;
      if ( !v6 )
        v6 = 1LL;
      v7 = HeapAlloc(WPF::g_processHeap, 0, v6);
      *((_QWORD *)this + 17) = v7;
      if ( !v7 )
        v5 = -2147024882;
    }
    else
    {
      v5 = -2147024809;
    }
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x3Cu);
    }
    else
    {
      v8 = -1;
      if ( *((unsigned int *)this + 29) * (unsigned __int64)*((unsigned int *)this + 30) <= 0xFFFFFFFF )
        v8 = *((_DWORD *)this + 29) * *((_DWORD *)this + 30);
      *((_DWORD *)this + 36) = v8;
      (*(void (__fastcall **)(char *))(*((_QWORD *)this + 2) + 40LL))((char *)this + 16);
    }
  }
  else
  {
    *((_DWORD *)this + 30) = 0;
    v5 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x35u);
  }
  return (unsigned int)v5;
}
