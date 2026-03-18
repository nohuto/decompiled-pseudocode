/*
 * XREFs of ?UnRegisterNotifiers@CImageLegacyMilBrush@@UEAAXXZ @ 0x1800B7D30
 * Callers:
 *     ??1CImageLegacyMilBrush@@MEAA@XZ @ 0x1800B7DD8 (--1CImageLegacyMilBrush@@MEAA@XZ.c)
 *     ?ProcessUpdate@CImageLegacyMilBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_IMAGELEGACYMILBRUSH@@@Z @ 0x1800B808C (-ProcessUpdate@CImageLegacyMilBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_IMAGELEGACYMILBRUSH@@@Z.c)
 * Callees:
 *     ??$UnRegisterNotifier@PEAVCImageSource@@@CResource@@QEAAXAEAPEAVCImageSource@@@Z @ 0x1800512B4 (--$UnRegisterNotifier@PEAVCImageSource@@@CResource@@QEAAXAEAPEAVCImageSource@@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800515A0 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CImageLegacyMilBrush::UnRegisterNotifiers(struct CResource **this)
{
  CResource::UnRegisterNotifierInternal((CResource *)this, this[52]);
  this[52] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[53]);
  this[53] = 0LL;
  CResource::UnRegisterNotifier<CImageSource *>((CResource *)this, this + 66);
  CResource::UnRegisterNotifierInternal((CResource *)this, this[51]);
  this[51] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[57]);
  this[57] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[60]);
  this[60] = 0LL;
}
