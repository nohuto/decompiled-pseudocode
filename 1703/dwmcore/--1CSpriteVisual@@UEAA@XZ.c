/*
 * XREFs of ??1CSpriteVisual@@UEAA@XZ @ 0x18008C984
 * Callers:
 *     ??_GCSpriteVisual@@UEAAPEAXI@Z @ 0x18008C9C0 (--_GCSpriteVisual@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180034728 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CSpriteVisual::~CSpriteVisual(struct CResource **this)
{
  *this = (struct CResource *)&CSpriteVisual::`vftable';
  CResource::UnRegisterNotifierInternal((CResource *)this, this[62]);
  this[62] = 0LL;
  CVisual::~CVisual((CVisual *)this);
}
