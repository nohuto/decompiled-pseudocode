/*
 * XREFs of ??1CSpriteVisual@@UEAA@XZ @ 0x18009DDD0
 * Callers:
 *     ??_GCSpriteVisual@@UEAAPEAXI@Z @ 0x18009D8E0 (--_GCSpriteVisual@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800515A0 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?GetDropShadow@CSpriteVisual@@AEBAPEAVCDropShadow@@XZ @ 0x1800DA9A8 (-GetDropShadow@CSpriteVisual@@AEBAPEAVCDropShadow@@XZ.c)
 *     ?RemoveVisualFromCache@CDropShadow@@QEAAXPEAVCVisual@@@Z @ 0x18018A93C (-RemoveVisualFromCache@CDropShadow@@QEAAXPEAVCVisual@@@Z.c)
 *     ?SetDropShadow@CSpriteVisual@@AEAAXPEAVCDropShadow@@@Z @ 0x1801A55E8 (-SetDropShadow@CSpriteVisual@@AEAAXPEAVCDropShadow@@@Z.c)
 */

void __fastcall CSpriteVisual::~CSpriteVisual(CSpriteVisual *this)
{
  CDropShadow *DropShadow; // rbx

  *(_QWORD *)this = &CSpriteVisual::`vftable';
  if ( (*(_DWORD *)(*((_QWORD *)this + 27) + 4LL) & 0x100) != 0 )
  {
    DropShadow = CSpriteVisual::GetDropShadow(this);
    CDropShadow::RemoveVisualFromCache(DropShadow, this);
    CResource::UnRegisterNotifierInternal(this, DropShadow);
    CSpriteVisual::SetDropShadow(this, 0LL);
  }
  CVisual::~CVisual(this);
}
