/*
 * XREFs of ?Initialize@CSecondarySysmemBitmap@@IEAAJXZ @ 0x1800187E4
 * Callers:
 *     ?Create@CSecondarySysmemBitmap@@SAJIIAEBUPixelFormatInfo@@PEAPEAV1@@Z @ 0x1800182A4 (-Create@CSecondarySysmemBitmap@@SAJIIAEBUPixelFormatInfo@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x180084360 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSecondarySysmemBitmap::Initialize(enum DXGI_FORMAT *this)
{
  unsigned __int8 PixelFormatSize; // al
  int v3; // ebx
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rcx
  SIZE_T v6; // r8
  LPVOID v7; // rax
  int v8; // eax

  PixelFormatSize = GetPixelFormatSize(this[31]);
  if ( PixelFormatSize && *((_DWORD *)this + 28) <= 0x7FFFFFF8u / PixelFormatSize )
  {
    v3 = 0;
    v4 = (((*((_DWORD *)this + 28) * (unsigned int)PixelFormatSize + 7) >> 3) + 3) & 0xFFFFFFFC;
  }
  else
  {
    v3 = -2147024362;
    v4 = 0LL;
  }
  *((_DWORD *)this + 30) = v4;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x33u);
  }
  else
  {
    v5 = *((unsigned int *)this + 29);
    v3 = 0;
    if ( this != (enum DXGI_FORMAT *)-136LL && *((_DWORD *)this + 29) && v4 && v4 < 0xFFFFFFFFFFFFFFFFuLL / v5 )
    {
      v6 = v5 * v4;
      if ( !v6 )
        v6 = 1LL;
      v7 = HeapAlloc(WPF::g_processHeap, 0, v6);
      *((_QWORD *)this + 17) = v7;
      if ( !v7 )
        v3 = -2147024882;
    }
    else
    {
      v3 = -2147024809;
    }
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x3Au);
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
  return (unsigned int)v3;
}
