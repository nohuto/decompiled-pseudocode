/*
 * XREFs of ?Destruct@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEAAXXZ @ 0x180056A68
 * Callers:
 *     ??1CBitmapOfDeviceBitmaps@@MEAA@XZ @ 0x1800B1FFC (--1CBitmapOfDeviceBitmaps@@MEAA@XZ.c)
 *     ?SetDeviceBitmapColorSource@CBitmapOfDeviceBitmaps@@QEAAJIVDisplayId@@PEAVCHwDeviceBitmapColorSource@@@Z @ 0x1800B22E0 (-SetDeviceBitmapColorSource@CBitmapOfDeviceBitmaps@@QEAAJIVDisplayId@@PEAVCHwDeviceBitmapColorSo.c)
 *     ?CleanupInvalidSources@CBitmapOfDeviceBitmaps@@AEAAXXZ @ 0x1800B2458 (-CleanupInvalidSources@CBitmapOfDeviceBitmaps@@AEAAXXZ.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18008F590 (-Release@CMILRefCountBase@@UEAAKXZ.c)
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
  WPF::ProcessHeapImpl::Free(*((void **)this + 6));
}
