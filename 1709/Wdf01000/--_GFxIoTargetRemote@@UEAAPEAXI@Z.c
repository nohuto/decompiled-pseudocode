/*
 * XREFs of ??_GFxIoTargetRemote@@UEAAPEAXI@Z @ 0x1C0013610
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0003AD0 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxNonPagedObject@@UEAA@XZ @ 0x1C0017EC8 (--1FxNonPagedObject@@UEAA@XZ.c)
 */

FxIoTargetRemote *__fastcall FxIoTargetRemote::`scalar deleting destructor'(FxIoTargetRemote *this, char a2)
{
  FxIoTargetRemote *v4; // rcx

  this->__vftable = (FxIoTargetRemote_vtbl *)FxIoTarget::`vftable';
  FxNonPagedObject::~FxNonPagedObject(this);
  if ( (a2 & 1) != 0 )
  {
    v4 = (FxIoTargetRemote *)((char *)this - 48);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v4 = this;
    FxPoolFree(v4);
  }
  return this;
}
