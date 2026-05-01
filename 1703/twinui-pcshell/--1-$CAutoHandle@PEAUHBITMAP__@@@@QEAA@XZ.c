/*
 * XREFs of ??1?$CAutoHandle@PEAUHBITMAP__@@@@QEAA@XZ @ 0x180165CD4
 * Callers:
 *     ?AddBackgroundForIcon@GDIHelpers@@YAJPEAUHBITMAP__@@AEBKAEBUtagSIZE@@22PEAPEAU2@@Z @ 0x18017CEA8 (-AddBackgroundForIcon@GDIHelpers@@YAJPEAUHBITMAP__@@AEBKAEBUtagSIZE@@22PEAPEAU2@@Z.c)
 *     ?CreateIconBitmap@ImmersiveIcons@@YAJUtagSIZE@@00_NPEAUITileInfo@@AEBUIconData@1@1PEAPEAUHBITMAP__@@@Z @ 0x18017E5F0 (-CreateIconBitmap@ImmersiveIcons@@YAJUtagSIZE@@00_NPEAUITileInfo@@AEBUIconData@1@1PEAPEAUHBITMAP.c)
 *     _AppViewIconLoader::IconLoaded_::_1_::dtor$0 @ 0x1801A463C (_AppViewIconLoader--IconLoaded_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

int __fastcall CAutoHandle<HBITMAP__ *>::~CAutoHandle<HBITMAP__ *>(void **a1)
{
  void *v1; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    LODWORD(v1) = DeleteObject(v1);
  return (int)v1;
}
