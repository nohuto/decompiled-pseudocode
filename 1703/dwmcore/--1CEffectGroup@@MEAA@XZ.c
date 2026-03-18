/*
 * XREFs of ??1CEffectGroup@@MEAA@XZ @ 0x1800931F8
 * Callers:
 *     ??_ECEffectGroup@@MEAAPEAXI@Z @ 0x1800931B0 (--_ECEffectGroup@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180034728 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CEffectGroup::~CEffectGroup(CEffectGroup *this)
{
  bool v1; // zf

  v1 = *((_QWORD *)this + 11) == 0LL;
  *(_QWORD *)this = &CEffectGroup::`vftable';
  if ( !v1 )
  {
    CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 11));
    *((_QWORD *)this + 11) = 0LL;
  }
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
}
