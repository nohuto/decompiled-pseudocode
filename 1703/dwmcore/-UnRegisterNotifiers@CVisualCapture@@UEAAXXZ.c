/*
 * XREFs of ?UnRegisterNotifiers@CVisualCapture@@UEAAXXZ @ 0x180027380
 * Callers:
 *     ??_GCVisualCapture@@UEAAPEAXI@Z @ 0x180026D10 (--_GCVisualCapture@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180034728 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CVisualCapture::UnRegisterNotifiers(struct CResource **this)
{
  CResource::UnRegisterNotifierInternal((CResource *)this, this[43]);
  this[43] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[44]);
  this[44] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[45]);
  this[45] = 0LL;
}
