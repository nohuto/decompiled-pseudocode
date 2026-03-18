/*
 * XREFs of ?Destruct@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEAAXXZ @ 0x1800CD908
 * Callers:
 *     ?SetDeviceBitmapColorSource@CBitmapOfDeviceBitmaps@@QEAAJIVDisplayId@@PEAVCHwDeviceBitmapColorSource@@@Z @ 0x1800CC3EC (-SetDeviceBitmapColorSource@CBitmapOfDeviceBitmaps@@QEAAJIVDisplayId@@PEAVCHwDeviceBitmapColorSo.c)
 *     ?CleanupInvalidSources@CBitmapOfDeviceBitmaps@@AEAAXXZ @ 0x1800CC4DC (-CleanupInvalidSources@CBitmapOfDeviceBitmaps@@AEAAXXZ.c)
 *     ??1CBitmapOfDeviceBitmaps@@MEAA@XZ @ 0x1800CC61C (--1CBitmapOfDeviceBitmaps@@MEAA@XZ.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180059D60 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 */

void __fastcall CBitmapOfDeviceBitmaps::DeviceBitmapInfo::Destruct(CBitmapOfDeviceBitmaps::DeviceBitmapInfo *this)
{
  CMILRefCountBase *v2; // rcx
  void *v3; // rcx

  v2 = (CMILRefCountBase *)*((_QWORD *)this + 2);
  if ( v2 )
    CMILRefCountBase::Release(v2);
  v3 = (void *)*((_QWORD *)this + 5);
  if ( v3 )
    DeleteObject(v3);
  operator delete(*((void **)this + 6));
}
