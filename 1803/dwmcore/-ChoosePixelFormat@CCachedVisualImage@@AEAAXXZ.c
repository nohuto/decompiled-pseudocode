/*
 * XREFs of ?ChoosePixelFormat@CCachedVisualImage@@AEAAXXZ @ 0x1800B4A5C
 * Callers:
 *     ?ProcessUpdate@CCachedVisualImage@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CACHEDVISUALIMAGE@@@Z @ 0x1800B4E90 (-ProcessUpdate@CCachedVisualImage@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CACHEDVISUALIMAGE@@@Z.c)
 *     ?InitializeViewboxAndRealizationSize@CCachedVisualImage@@AEAAXMM@Z @ 0x1801825F8 (-InitializeViewboxAndRealizationSize@CCachedVisualImage@@AEAAXMM@Z.c)
 *     ?SetForHwndBitmap@CCachedVisualImage@@QEAAX_N@Z @ 0x180182840 (-SetForHwndBitmap@CCachedVisualImage@@QEAAX_N@Z.c)
 * Callees:
 *     ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x180021D84 (-HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z.c)
 *     ?GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z @ 0x1800C8820 (-GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCachedVisualImage::ChoosePixelFormat(CCachedVisualImage *this)
{
  int v2; // ebp
  enum DXGI_FORMAT v3; // ecx
  __int64 v4; // r14
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rcx
  enum DXGI_FORMAT v8[4]; // [rsp+20h] [rbp-38h] BYREF

  v2 = 1;
  v3 = *((_DWORD *)this + 51);
  if ( v3 == DXGI_FORMAT_UNKNOWN )
  {
    v4 = 0LL;
    v5 = 0LL;
    v6 = *(_QWORD *)(*((_QWORD *)this + 4) + 72LL);
    if ( *(_DWORD *)(v6 + 80) )
    {
      while ( 1 )
      {
        v7 = *(_QWORD *)(*(_QWORD *)(v6 + 56) + 8 * v5);
        if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v7 + 264LL))(v7) )
          break;
        v5 = (unsigned int)(v5 + 1);
        if ( (unsigned int)v5 >= *(_DWORD *)(v6 + 80) )
          goto LABEL_5;
      }
      v4 = *(_QWORD *)(*(_QWORD *)(v6 + 56) + 8 * v5);
    }
LABEL_5:
    if ( v4 )
    {
      (*(void (__fastcall **)(__int64, enum DXGI_FORMAT *))(*(_QWORD *)v4 + 24LL))(v4, v8);
      v3 = v8[0];
      *((enum DXGI_FORMAT *)this + 51) = v8[0];
    }
    else
    {
      v3 = DXGI_FORMAT_B8G8R8A8_UNORM;
      *((_DWORD *)this + 51) = 87;
    }
  }
  if ( !(unsigned int)HasAlphaChannel(v3) || *((_BYTE *)this + 380) )
    v2 = 0;
  *((_DWORD *)this + 52) = v2;
  if ( !*((_DWORD *)this + 53) )
    GetPixelFormatColorSpace(*((enum DXGI_FORMAT *)this + 51), (CCachedVisualImage *)((char *)this + 212));
}
