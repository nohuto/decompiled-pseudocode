/*
 * XREFs of ??1CTransformGroup@@MEAA@XZ @ 0x180004304
 * Callers:
 *     ??_GCTransformGroup@@MEAAPEAXI@Z @ 0x1800041D0 (--_GCTransformGroup@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$SAFE_DELETE_ARRAY@U_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@@YAXAEAPEAU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@Z @ 0x180004170 (--$SAFE_DELETE_ARRAY@U_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@@YAXAEAPEAU_DXGI_PRESENT_MULTIPLANE_OVE.c)
 *     ?UnRegisterNotifiers@CTransform3DGroup@@UEAAXXZ @ 0x180004290 (-UnRegisterNotifiers@CTransform3DGroup@@UEAAXXZ.c)
 */

void __fastcall CTransformGroup::~CTransformGroup(CTransformGroup *this)
{
  CTransformGroup **v2; // rcx
  CTransformGroup **v3; // rax

  *(_QWORD *)this = &CTransformGroup::`vftable'{for `CTransform'};
  *((_QWORD *)this + 19) = &CTransformGroup::`vftable'{for `CCyclicResourceListEntry'};
  CTransform3DGroup::UnRegisterNotifiers(this);
  SAFE_DELETE_ARRAY<_DXGI_PRESENT_MULTIPLANE_OVERLAY>((void **)this + 24);
  *((_QWORD *)this + 19) = &CCyclicResourceListEntry::`vftable';
  v2 = (CTransformGroup **)*((_QWORD *)this + 20);
  v3 = (CTransformGroup **)*((_QWORD *)this + 21);
  if ( v2[1] != (CTransformGroup *)((char *)this + 160) || *v3 != (CTransformGroup *)((char *)this + 160) )
    __fastfail(3u);
  *v3 = (CTransformGroup *)v2;
  v2[1] = (CTransformGroup *)v3;
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
}
