/*
 * XREFs of ??1CTopLevelWindow3D@@MEAA@XZ @ 0x18002357C
 * Callers:
 *     ??_GCTopLevelWindow3D@@MEAAPEAXI@Z @ 0x180021100 (--_GCTopLevelWindow3D@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180021240 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?ReleaseSceneObjects@CTopLevelWindow3D@@AEAAXXZ @ 0x180023514 (-ReleaseSceneObjects@CTopLevelWindow3D@@AEAAXXZ.c)
 */

void __fastcall CTopLevelWindow3D::~CTopLevelWindow3D(CTopLevelWindow3D *this)
{
  *(_QWORD *)this = &CTopLevelWindow3D::`vftable'{for `CRenderDataVisual'};
  *((_QWORD *)this + 35) = &CTopLevelWindow3D::`vftable'{for `ISecondaryWindowRepresentationChangedListener'};
  CTopLevelWindow3D::ReleaseSceneObjects(this);
  CTopLevelWindow3D::StopAnimation((unsigned __int64)this);
  CRenderDataVisual::~CRenderDataVisual((volatile signed __int32 **)this);
}
