/*
 * XREFs of ??1CGeometry2D@@MEAA@XZ @ 0x180153574
 * Callers:
 *     ??_GCGeometry2D@@MEAAPEAXI@Z @ 0x180153E40 (--_GCGeometry2D@@MEAAPEAXI@Z.c)
 *     ??1CMeshGeometry2D@@MEAA@XZ @ 0x18016518C (--1CMeshGeometry2D@@MEAA@XZ.c)
 *     ??1CGeometry2DGroup@@MEAA@XZ @ 0x180178B14 (--1CGeometry2DGroup@@MEAA@XZ.c)
 * Callees:
 *     ?FreeCaches@CGeometry2D@@AEAAXXZ @ 0x1801790FC (-FreeCaches@CGeometry2D@@AEAAXXZ.c)
 */

void __fastcall CGeometry2D::~CGeometry2D(CGeometry2D *this)
{
  *(_QWORD *)this = &CGeometry2D::`vftable';
  CGeometry2D::FreeCaches(this);
  CResource::~CResource(this);
}
