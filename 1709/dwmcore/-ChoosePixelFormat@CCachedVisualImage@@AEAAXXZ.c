/*
 * XREFs of ?ChoosePixelFormat@CCachedVisualImage@@AEAAXXZ @ 0x18008E788
 * Callers:
 *     ?ProcessUpdate@CCachedVisualImage@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CACHEDVISUALIMAGE@@@Z @ 0x18008EB90 (-ProcessUpdate@CCachedVisualImage@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CACHEDVISUALIMAGE@@@Z.c)
 *     ?InitializeViewboxAndRealizationSize@CCachedVisualImage@@AEAAXMM@Z @ 0x180159468 (-InitializeViewboxAndRealizationSize@CCachedVisualImage@@AEAAXMM@Z.c)
 *     ?SetForHwndBitmap@CCachedVisualImage@@QEAAX_N@Z @ 0x180159790 (-SetForHwndBitmap@CCachedVisualImage@@QEAAX_N@Z.c)
 * Callees:
 *     ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x1800823E4 (-HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z.c)
 *     ?GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z @ 0x1800BEF2C (-GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCachedVisualImage::ChoosePixelFormat(CCachedVisualImage *this)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  __int64 v4; // rcx
  __int64 v5; // rcx
  enum DXGI_FORMAT v6; // ecx
  _DWORD v7[4]; // [rsp+20h] [rbp-28h] BYREF

  if ( !*((_DWORD *)this + 51) )
  {
    v2 = 0LL;
    v3 = *(_QWORD *)(*((_QWORD *)this + 4) + 72LL);
    if ( !*(_DWORD *)(v3 + 80) )
      goto LABEL_14;
    while ( 1 )
    {
      v4 = *(_QWORD *)(*(_QWORD *)(v3 + 56) + 8 * v2);
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 272LL))(v4) )
        break;
      v2 = (unsigned int)(v2 + 1);
      if ( (unsigned int)v2 >= *(_DWORD *)(v3 + 80) )
        goto LABEL_14;
    }
    v5 = *(_QWORD *)(*(_QWORD *)(v3 + 56) + 8 * v2);
    if ( v5 )
    {
      (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v5 + 24LL))(v5, v7);
      *((_DWORD *)this + 51) = v7[0];
    }
    else
    {
LABEL_14:
      *((_DWORD *)this + 51) = 87;
    }
  }
  *((_DWORD *)this + 52) = (unsigned int)HasAlphaChannel(*((_DWORD *)this + 51)) && !*((_BYTE *)this + 380);
  if ( !*((_DWORD *)this + 53) )
    GetPixelFormatColorSpace(v6, (CCachedVisualImage *)((char *)this + 212));
}
