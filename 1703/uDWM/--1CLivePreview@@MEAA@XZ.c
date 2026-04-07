/*
 * XREFs of ??1CLivePreview@@MEAA@XZ @ 0x180074D14
 * Callers:
 *     ??_GCLivePreview@@MEAAPEAXI@Z @ 0x180074E40 (--_GCLivePreview@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18002C4C0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x180075914 (-_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ.c)
 *     ?_ReleasePerMonitorResources@CLivePreview@@AEAAXXZ @ 0x1800764AC (-_ReleasePerMonitorResources@CLivePreview@@AEAAXXZ.c)
 */

void __fastcall CLivePreview::~CLivePreview(CBaseObject **this)
{
  CBaseObject *v2; // rcx
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx
  CBaseObject *v5; // rcx
  CBaseObject *v6; // rcx
  CBaseObject *v7; // rcx
  CBaseObject *v8; // rcx
  CBaseObject *v9; // rcx
  CBaseObject *v10; // rax
  bool v11; // zf
  char v12; // al
  CBaseObject *v13; // rcx

  *this = (CBaseObject *)&CLivePreview::`vftable';
  CLivePreview::_ClearAnimationOpaqueVisuals((CLivePreview *)this);
  v2 = this[61];
  if ( v2 )
    CBaseObject::Release(v2);
  v3 = this[62];
  if ( v3 )
    CBaseObject::Release(v3);
  v4 = this[59];
  if ( v4 )
    CBaseObject::Release(v4);
  v5 = this[60];
  if ( v5 )
    CBaseObject::Release(v5);
  v6 = this[63];
  if ( v6 )
    CBaseObject::Release(v6);
  v7 = this[64];
  if ( v7 )
    CBaseObject::Release(v7);
  v8 = this[65];
  if ( v8 )
    CBaseObject::Release(v8);
  v9 = this[66];
  if ( v9 )
    CBaseObject::Release(v9);
  v10 = this[58];
  if ( v10 )
  {
    v11 = (*((_DWORD *)v10 + 2))-- == 1;
    v12 = CDesktopManager::s_fTimelineDirty;
    if ( v11 )
      v12 = 1;
    CDesktopManager::s_fTimelineDirty = v12;
  }
  v13 = this[69];
  if ( v13 )
    CBaseObject::Release(v13);
  CLivePreview::_ReleasePerMonitorResources((CLivePreview *)this);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)(this + 54));
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)(this + 50));
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)(this + 46));
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)(this + 42));
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)(this + 38));
  CRenderDataVisual::~CRenderDataVisual((volatile signed __int32 **)this);
}
