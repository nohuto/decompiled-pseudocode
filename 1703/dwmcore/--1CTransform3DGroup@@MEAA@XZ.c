/*
 * XREFs of ??1CTransform3DGroup@@MEAA@XZ @ 0x18017AF9C
 * Callers:
 *     ??_ECTransform3DGroup@@MEAAPEAXI@Z @ 0x180153F90 (--_ECTransform3DGroup@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$SAFE_DELETE_ARRAY@U_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@@YAXAEAPEAU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@Z @ 0x180004170 (--$SAFE_DELETE_ARRAY@U_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@@YAXAEAPEAU_DXGI_PRESENT_MULTIPLANE_OVE.c)
 *     ?UnRegisterNotifiers@CTransform3DGroup@@UEAAXXZ @ 0x180004290 (-UnRegisterNotifiers@CTransform3DGroup@@UEAAXXZ.c)
 */

void __fastcall CTransform3DGroup::~CTransform3DGroup(CTransform3DGroup *this)
{
  CTransform3DGroup **v2; // rcx
  CTransform3DGroup **v3; // rax

  *(_QWORD *)this = &CTransform3DGroup::`vftable'{for `CTransform3D'};
  *((_QWORD *)this + 19) = &CTransform3DGroup::`vftable'{for `CCyclicResourceListEntry'};
  CTransform3DGroup::UnRegisterNotifiers(this);
  SAFE_DELETE_ARRAY<_DXGI_PRESENT_MULTIPLANE_OVERLAY>((void **)this + 24);
  *((_QWORD *)this + 19) = &CCyclicResourceListEntry::`vftable';
  v2 = (CTransform3DGroup **)*((_QWORD *)this + 20);
  v3 = (CTransform3DGroup **)*((_QWORD *)this + 21);
  if ( v2[1] != (CTransform3DGroup *)((char *)this + 160) || *v3 != (CTransform3DGroup *)((char *)this + 160) )
    __fastfail(3u);
  *v3 = (CTransform3DGroup *)v2;
  v2[1] = (CTransform3DGroup *)v3;
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
}
