/*
 * XREFs of ?Release@CPolicyConfig@@UEAAKXZ @ 0x18004A730
 * Callers:
 *     ?GetChannelCountFromDeviceFormat@CMeterControlBase@@QEAAJPEAI@Z @ 0x18004A9C4 (-GetChannelCountFromDeviceFormat@CMeterControlBase@@QEAAJPEAI@Z.c)
 *     ??1?$CComPtr@UIPolicyConfig@@@ATL@@QEAA@XZ @ 0x180098720 (--1-$CComPtr@UIPolicyConfig@@@ATL@@QEAA@XZ.c)
 *     ?Initialize@CVolumeSoftware@@UEAAJPEAUIMMDevice@@@Z @ 0x1800A25E0 (-Initialize@CVolumeSoftware@@UEAAJPEAUIMMDevice@@@Z.c)
 *     ?Initialize@CMonitor@@QEAAJPEAUIMMDevice@@0KAEA_N@Z @ 0x1800E292C (-Initialize@CMonitor@@QEAAJPEAUIMMDevice@@0KAEA_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CPolicyConfig::Release(CPolicyConfig *this)
{
  return CRefCountedObject::Release((CPolicyConfig *)((char *)this + 8));
}
