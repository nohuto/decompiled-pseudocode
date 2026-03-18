/*
 * XREFs of ?UnRegisterNotifiers@CCachedVisualImage@@UEAAXXZ @ 0x18008EA30
 * Callers:
 *     ?Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z @ 0x18008DCCC (-Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z.c)
 *     ??1CCachedVisualImage@@MEAA@XZ @ 0x18008EA8C (--1CCachedVisualImage@@MEAA@XZ.c)
 *     ?ProcessUpdate@CCachedVisualImage@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CACHEDVISUALIMAGE@@@Z @ 0x18008EB90 (-ProcessUpdate@CCachedVisualImage@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CACHEDVISUALIMAGE@@@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800A9E50 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CCachedVisualImage::UnRegisterNotifiers(struct CResource **this)
{
  CResource::UnRegisterNotifierInternal((CResource *)this, this[22]);
  this[22] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[18]);
  this[18] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[21]);
  this[21] = 0LL;
  ReleaseInterface<CVisualTree>(this + 27);
}
