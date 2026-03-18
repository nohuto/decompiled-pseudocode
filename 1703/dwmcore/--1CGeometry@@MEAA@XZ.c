/*
 * XREFs of ??1CGeometry@@MEAA@XZ @ 0x180029940
 * Callers:
 *     ??_GCRgnGeometry@@MEAAPEAXI@Z @ 0x1800581A0 (--_GCRgnGeometry@@MEAAPEAXI@Z.c)
 *     ??_ECRectangleGeometry@@UEAAPEAXI@Z @ 0x180094B20 (--_ECRectangleGeometry@@UEAAPEAXI@Z.c)
 *     ??1CGeometryGroup@@MEAA@XZ @ 0x18017B16C (--1CGeometryGroup@@MEAA@XZ.c)
 *     ??1CCombinedGeometry@@MEAA@XZ @ 0x18017B3DC (--1CCombinedGeometry@@MEAA@XZ.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180034728 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C0CC4 (-Release@CShapePtr@@QEAAXXZ.c)
 */

void __fastcall CGeometry::~CGeometry(struct CResource **this)
{
  CResource::UnRegisterNotifierInternal((CResource *)this, this[9]);
  this[9] = 0LL;
  CShapePtr::Release((CShapePtr *)(this + 10));
  *this = (struct CResource *)&CNotificationResource::`vftable';
  CResource::~CResource((CResource *)this);
}
