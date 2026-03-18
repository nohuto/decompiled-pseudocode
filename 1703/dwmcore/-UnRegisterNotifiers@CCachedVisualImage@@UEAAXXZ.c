/*
 * XREFs of ?UnRegisterNotifiers@CCachedVisualImage@@UEAAXXZ @ 0x180048230
 * Callers:
 *     ??1CCachedVisualImage@@MEAA@XZ @ 0x18004827C (--1CCachedVisualImage@@MEAA@XZ.c)
 *     ?Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z @ 0x180048340 (-Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z.c)
 *     ?ProcessUpdate@CCachedVisualImage@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CACHEDVISUALIMAGE@@@Z @ 0x1800488D8 (-ProcessUpdate@CCachedVisualImage@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CACHEDVISUALIMAGE@@@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180034728 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CCachedVisualImage::UnRegisterNotifiers(struct CResource **this)
{
  CResource::UnRegisterNotifierInternal((CResource *)this, this[15]);
  this[15] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[11]);
  this[11] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[14]);
  this[14] = 0LL;
  ReleaseInterface<CVisualTree>(this + 20);
}
