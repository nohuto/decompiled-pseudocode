/*
 * XREFs of ?UnRegisterNotifiers@CCachedVisualImage@@UEAAXXZ @ 0x1800B4D20
 * Callers:
 *     ?Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z @ 0x1800B41FC (-Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z.c)
 *     ??1CCachedVisualImage@@MEAA@XZ @ 0x1800B4D7C (--1CCachedVisualImage@@MEAA@XZ.c)
 *     ?ProcessUpdate@CCachedVisualImage@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CACHEDVISUALIMAGE@@@Z @ 0x1800B4E90 (-ProcessUpdate@CCachedVisualImage@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CACHEDVISUALIMAGE@@@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800515A0 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CCachedVisualImage::UnRegisterNotifiers(struct CResource **this)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9

  CResource::UnRegisterNotifierInternal((CResource *)this, this[22]);
  this[22] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[18]);
  this[18] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[21]);
  this[21] = 0LL;
  ReleaseInterface<CVisualTree>(this + 27, v2, v3, v4);
}
