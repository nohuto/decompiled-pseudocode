/*
 * XREFs of ??1CAccent@@MEAA@XZ @ 0x1800109C0
 * Callers:
 *     ??_GCAccent@@MEAAPEAXI@Z @ 0x1800109F0 (--_GCAccent@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?_CleanupNonStaticsResources@CAccent@@IEAAXXZ @ 0x1800108AC (-_CleanupNonStaticsResources@CAccent@@IEAAXXZ.c)
 */

void __fastcall CAccent::~CAccent(CAccent *this)
{
  *(_QWORD *)this = &CAccent::`vftable';
  CAccent::_CleanupNonStaticsResources(this);
  *(_QWORD *)this = &CCanvasVisual::`vftable';
  CRenderDataVisual::~CRenderDataVisual(this);
}
