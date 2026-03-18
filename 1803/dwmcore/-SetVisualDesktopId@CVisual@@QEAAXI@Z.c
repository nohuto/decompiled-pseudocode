/*
 * XREFs of ?SetVisualDesktopId@CVisual@@QEAAXI@Z @ 0x18004CAB0
 * Callers:
 *     ?SetVisualTree@CDesktopRenderTarget@@MEAAJPEAVCVisualTree@@@Z @ 0x180044550 (-SetVisualTree@CDesktopRenderTarget@@MEAAJPEAVCVisualTree@@@Z.c)
 *     ??1CDesktopRenderTarget@@EEAA@XZ @ 0x180156D98 (--1CDesktopRenderTarget@@EEAA@XZ.c)
 *     ?ReleaseVisualTree@CHolographicInteropTexture@@AEAAXXZ @ 0x1801FBAF8 (-ReleaseVisualTree@CHolographicInteropTexture@@AEAAXXZ.c)
 *     ?SetVisualTree@CHolographicInteropTexture@@AEAAJPEAVCVisualTree@@@Z @ 0x1801FBC58 (-SetVisualTree@CHolographicInteropTexture@@AEAAJPEAVCVisualTree@@@Z.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x18003862C (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 */

void __fastcall CVisual::SetVisualDesktopId(CVisual *this, int a2)
{
  char **v2; // rcx
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  v2 = (char **)((char *)this + 216);
  if ( a2 == `CVisual::SetVisualDesktopId'::`2'::sc_defaultValue )
    *((_DWORD *)*v2 + 1) &= ~0x10u;
  else
    CSparseStorage::SetData(v2, 28, 4u, &v3);
}
