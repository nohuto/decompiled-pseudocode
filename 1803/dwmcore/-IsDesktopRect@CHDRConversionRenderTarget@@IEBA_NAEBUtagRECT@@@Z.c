/*
 * XREFs of ?IsDesktopRect@CHDRConversionRenderTarget@@IEBA_NAEBUtagRECT@@@Z @ 0x1801F3170
 * Callers:
 *     ?CheckMultiplaneOverlaySupport@CHDRConversionRenderTarget@@UEAAJIPEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@PEA_N1@Z @ 0x1801F2820 (-CheckMultiplaneOverlaySupport@CHDRConversionRenderTarget@@UEAAJIPEAUDXGI_CHECK_MULTIPLANEOVERLA.c)
 * Callees:
 *     <none>
 */

bool __fastcall CHDRConversionRenderTarget::IsDesktopRect(CHDRConversionRenderTarget *this, const struct tagRECT *a2)
{
  char v3; // dl

  v3 = 0;
  if ( !a2->left && !a2->top && a2->right == *((_DWORD *)this + 64) )
    return a2->bottom == *((_DWORD *)this + 65);
  return v3;
}
