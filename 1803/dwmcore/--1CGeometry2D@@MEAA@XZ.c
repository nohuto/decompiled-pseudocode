/*
 * XREFs of ??1CGeometry2D@@MEAA@XZ @ 0x18016D9A8
 * Callers:
 *     ??_GCGeometry2D@@MEAAPEAXI@Z @ 0x18016E650 (--_GCGeometry2D@@MEAAPEAXI@Z.c)
 *     ??1CMeshGeometry2D@@MEAA@XZ @ 0x18019B268 (--1CMeshGeometry2D@@MEAA@XZ.c)
 *     ??1CGeometry2DGroup@@MEAA@XZ @ 0x1801B1E10 (--1CGeometry2DGroup@@MEAA@XZ.c)
 * Callees:
 *     ?FreeCaches@CGeometry2D@@AEAAXXZ @ 0x1801B243C (-FreeCaches@CGeometry2D@@AEAAXXZ.c)
 */

void __fastcall CGeometry2D::~CGeometry2D(CGeometry2D *this)
{
  *(_QWORD *)this = &CGeometry2D::`vftable';
  CGeometry2D::FreeCaches(this);
  CResource::~CResource(this);
}
