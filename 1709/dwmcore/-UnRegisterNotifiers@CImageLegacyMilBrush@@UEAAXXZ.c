/*
 * XREFs of ?UnRegisterNotifiers@CImageLegacyMilBrush@@UEAAXXZ @ 0x18007CC50
 * Callers:
 *     ?ProcessUpdate@CImageLegacyMilBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_IMAGELEGACYMILBRUSH@@@Z @ 0x18007C3DC (-ProcessUpdate@CImageLegacyMilBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_IMAGELEGACYMILBRUSH@@@Z.c)
 *     ??1CImageLegacyMilBrush@@MEAA@XZ @ 0x18007CD04 (--1CImageLegacyMilBrush@@MEAA@XZ.c)
 * Callees:
 *     ??$UnRegisterNotifier@PEAVCImageSource@@@CResource@@QEAAXAEAPEAVCImageSource@@@Z @ 0x1800A9818 (--$UnRegisterNotifier@PEAVCImageSource@@@CResource@@QEAAXAEAPEAVCImageSource@@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800A9E50 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CImageLegacyMilBrush::UnRegisterNotifiers(struct CResource **this)
{
  CResource::UnRegisterNotifierInternal((CResource *)this, this[52]);
  this[52] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[53]);
  this[53] = 0LL;
  CResource::UnRegisterNotifier<CImageSource *>(this, this + 66);
  CResource::UnRegisterNotifierInternal((CResource *)this, this[51]);
  this[51] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[57]);
  this[57] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[60]);
  this[60] = 0LL;
}
