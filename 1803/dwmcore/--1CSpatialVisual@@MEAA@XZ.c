/*
 * XREFs of ??1CSpatialVisual@@MEAA@XZ @ 0x1801A3FD8
 * Callers:
 *     ??_ECSpatialVisual@@MEAAPEAXI@Z @ 0x1801A4020 (--_ECSpatialVisual@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UnregisterContent@CSpatialVisualContentManager@@QEAAXPEAVCSpatialVisualContent@@@Z @ 0x1801AD608 (-UnregisterContent@CSpatialVisualContentManager@@QEAAXPEAVCSpatialVisualContent@@@Z.c)
 */

void __fastcall CSpatialVisual::~CSpatialVisual(CSpatialVisual *this)
{
  struct CSpatialVisualContent *v1; // rdx

  v1 = (struct CSpatialVisualContent *)*((_QWORD *)this + 31);
  *(_QWORD *)this = &CSpatialVisual::`vftable';
  if ( v1 )
    CSpatialVisualContentManager::UnregisterContent(
      *(CSpatialVisualContentManager **)(*((_QWORD *)this + 2) + 152LL),
      v1);
  CVisual::~CVisual(this);
}
