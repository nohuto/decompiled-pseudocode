/*
 * XREFs of ??1CEffectGroup@@MEAA@XZ @ 0x18009F3B4
 * Callers:
 *     ??_ECEffectGroup@@MEAAPEAXI@Z @ 0x18009F350 (--_ECEffectGroup@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800515A0 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CEffectGroup::~CEffectGroup(CEffectGroup *this)
{
  struct CResource *v1; // rdx

  v1 = (struct CResource *)*((_QWORD *)this + 11);
  *(_QWORD *)this = &CEffectGroup::`vftable';
  if ( v1 )
  {
    CResource::UnRegisterNotifierInternal(this, v1);
    *((_QWORD *)this + 11) = 0LL;
  }
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
}
