/*
 * XREFs of ??1CGeometry@@MEAA@XZ @ 0x180096DC8
 * Callers:
 *     ??_ECRectangleGeometry@@UEAAPEAXI@Z @ 0x1800586B0 (--_ECRectangleGeometry@@UEAAPEAXI@Z.c)
 *     ??_GCRgnGeometry@@MEAAPEAXI@Z @ 0x1800968E0 (--_GCRgnGeometry@@MEAAPEAXI@Z.c)
 *     ??1CCombinedGeometry@@MEAA@XZ @ 0x1801807CC (--1CCombinedGeometry@@MEAA@XZ.c)
 *     ??1CGeometryGroup@@MEAA@XZ @ 0x180181474 (--1CGeometryGroup@@MEAA@XZ.c)
 * Callees:
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x180097FE4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800A9E50 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CGeometry::~CGeometry(struct CResource **this)
{
  CResource::UnRegisterNotifierInternal((CResource *)this, this[9]);
  this[9] = 0LL;
  CShapePtr::Release((CShapePtr *)(this + 10));
  *this = (struct CResource *)&CNotificationResource::`vftable';
  CResource::~CResource((CResource *)this);
}
