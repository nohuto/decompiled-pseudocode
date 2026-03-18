/*
 * XREFs of ?UnRegisterNotifiers@CCombinedGeometry@@UEAAXXZ @ 0x180174E50
 * Callers:
 *     ?ProcessUpdate@CCombinedGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMBINEDGEOMETRY@@@Z @ 0x180128848 (-ProcessUpdate@CCombinedGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMBINEDGEOMETRY@@@Z.c)
 *     ??1CCombinedGeometry@@MEAA@XZ @ 0x18017B3DC (--1CCombinedGeometry@@MEAA@XZ.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180034728 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CCombinedGeometry::UnRegisterNotifiers(struct CResource **this)
{
  CResource::UnRegisterNotifierInternal((CResource *)this, this[17]);
  this[17] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[18]);
  this[18] = 0LL;
}
