/*
 * XREFs of ?ProcessUnmapSection@CGdiSpriteBitmap@@UEAAJPEAVCResourceTable@@PEBUMILCMD_GDISPRITEBITMAP_UNMAPSECTION@@@Z @ 0x180022CE0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?ReleaseNonDeviceBitmapResources@CGdiSpriteBitmap@@IEAAX_N@Z @ 0x180055890 (-ReleaseNonDeviceBitmapResources@CGdiSpriteBitmap@@IEAAX_N@Z.c)
 *     ??$ReleaseInterface@UIUnknown@@@@YAXAEAPEAUIUnknown@@@Z @ 0x18007E5AC (--$ReleaseInterface@UIUnknown@@@@YAXAEAPEAUIUnknown@@@Z.c)
 *     ?KeepOnlyFullValidRealizations@CD3DDeviceManager@@QEAA_NPEAVIBitmapSource@@@Z @ 0x180195908 (-KeepOnlyFullValidRealizations@CD3DDeviceManager@@QEAA_NPEAVIBitmapSource@@@Z.c)
 */

__int64 __fastcall CGdiSpriteBitmap::ProcessUnmapSection(
        struct IBitmapSource **this,
        struct CResourceTable *a2,
        const struct MILCMD_GDISPRITEBITMAP_UNMAPSECTION *a3)
{
  CGdiSpriteBitmap *v3; // rbx
  struct IBitmapSource *v5; // rdx
  __int64 v6; // rdi

  v3 = (CGdiSpriteBitmap *)this;
  if ( !this[48] )
  {
    v5 = this[10];
    if ( v5 )
    {
      v6 = ((unsigned __int64)v5 - 16) & -(__int64)(v5 != 0LL);
      if ( !CD3DDeviceManager::KeepOnlyFullValidRealizations((CD3DDeviceManager *)&g_D3DDeviceManager, v5) )
        return 0LL;
      ReleaseInterface<IUnknown>(v6 + 248);
      *(_QWORD *)(v6 + 232) = 0LL;
      LOBYTE(v5) = 1;
      *(_DWORD *)(v6 + 240) = 0;
      this = (struct IBitmapSource **)v3;
    }
    CGdiSpriteBitmap::ReleaseNonDeviceBitmapResources((CGdiSpriteBitmap *)this, (bool)v5);
  }
  return 0LL;
}
