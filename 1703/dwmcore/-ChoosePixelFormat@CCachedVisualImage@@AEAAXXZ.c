/*
 * XREFs of ?ChoosePixelFormat@CCachedVisualImage@@AEAAXXZ @ 0x180048688
 * Callers:
 *     ?GetPixelFormat@CCachedVisualImage@@UEAAJPEAW4DXGI_FORMAT@@@Z @ 0x180021C80 (-GetPixelFormat@CCachedVisualImage@@UEAAJPEAW4DXGI_FORMAT@@@Z.c)
 *     ?CreateNewRenderTarget@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@IIAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilStretch@@PEAPEAURenderTargetBitmapInfo@1@@Z @ 0x180047B70 (-CreateNewRenderTarget@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@IIAEBV-$TMilRect_@MUMilRectF.c)
 * Callees:
 *     ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x18007C0CC (-HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z.c)
 *     ?GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z @ 0x1800C4F88 (-GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCachedVisualImage::ChoosePixelFormat(CCachedVisualImage *this)
{
  enum DXGI_FORMAT *v1; // rsi
  __int64 v3; // rdi
  __int64 v4; // rbp
  __int64 v5; // rcx
  __int64 v6; // rcx
  enum DXGI_FORMAT v7; // ecx

  v1 = (enum DXGI_FORMAT *)((char *)this + 148);
  if ( !*((_DWORD *)this + 37) )
  {
    v3 = 0LL;
    v4 = *(_QWORD *)(*((_QWORD *)this + 4) + 32LL);
    if ( !*(_DWORD *)(v4 + 80) )
      goto LABEL_13;
    while ( 1 )
    {
      v5 = *(_QWORD *)(*(_QWORD *)(v4 + 56) + 8 * v3);
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v5 + 264LL))(v5) )
        break;
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= *(_DWORD *)(v4 + 80) )
        goto LABEL_13;
    }
    v6 = *(_QWORD *)(*(_QWORD *)(v4 + 56) + 8 * v3);
    if ( v6 )
      (*(void (__fastcall **)(__int64, enum DXGI_FORMAT *))(*(_QWORD *)v6 + 24LL))(v6, v1);
    else
LABEL_13:
      *v1 = DXGI_FORMAT_B8G8R8A8_UNORM;
  }
  *((_DWORD *)this + 38) = (unsigned int)HasAlphaChannel(*v1) && !*((_BYTE *)this + 325);
  if ( !*((_DWORD *)this + 39) )
    GetPixelFormatColorSpace(v7, (CCachedVisualImage *)((char *)this + 156));
}
