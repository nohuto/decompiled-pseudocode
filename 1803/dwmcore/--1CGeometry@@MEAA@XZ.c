/*
 * XREFs of ??1CGeometry@@MEAA@XZ @ 0x18006FDAC
 * Callers:
 *     ??1CRgnGeometry@@MEAA@XZ @ 0x18002ADC0 (--1CRgnGeometry@@MEAA@XZ.c)
 *     ??_ECRectangleGeometry@@UEAAPEAXI@Z @ 0x1800A6590 (--_ECRectangleGeometry@@UEAAPEAXI@Z.c)
 *     ??_ECLineGeometry@@UEAAPEAXI@Z @ 0x18016E830 (--_ECLineGeometry@@UEAAPEAXI@Z.c)
 *     ??_GCPathGeometry@@MEAAPEAXI@Z @ 0x18016E980 (--_GCPathGeometry@@MEAAPEAXI@Z.c)
 *     ??1CCombinedGeometry@@MEAA@XZ @ 0x1801B199C (--1CCombinedGeometry@@MEAA@XZ.c)
 *     ??1CGeometryGroup@@MEAA@XZ @ 0x1801B2694 (--1CGeometryGroup@@MEAA@XZ.c)
 * Callees:
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x180028194 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800515A0 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CGeometry::~CGeometry(struct CResource **this)
{
  CResource::UnRegisterNotifierInternal((CResource *)this, this[9]);
  this[9] = 0LL;
  CShapePtr::Release(this + 14);
  CShapePtr::Release(this + 12);
  *this = (struct CResource *)&CNotificationResource::`vftable';
  CResource::~CResource((CResource *)this);
}
