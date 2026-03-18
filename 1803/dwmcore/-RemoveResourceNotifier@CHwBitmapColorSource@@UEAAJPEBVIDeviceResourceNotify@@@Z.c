/*
 * XREFs of ?RemoveResourceNotifier@CHwBitmapColorSource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x1800CE000
 * Callers:
 *     ?SetDeviceBitmapColorSource@CBitmapOfDeviceBitmaps@@QEAAJIVDisplayId@@PEAVCHwDeviceBitmapColorSource@@@Z @ 0x1800CC3EC (-SetDeviceBitmapColorSource@CBitmapOfDeviceBitmaps@@QEAAJIVDisplayId@@PEAVCHwDeviceBitmapColorSo.c)
 *     ?CleanupInvalidSources@CBitmapOfDeviceBitmaps@@AEAAXXZ @ 0x1800CC4DC (-CleanupInvalidSources@CBitmapOfDeviceBitmaps@@AEAAXXZ.c)
 *     ??1CBitmapOfDeviceBitmaps@@MEAA@XZ @ 0x1800CC61C (--1CBitmapOfDeviceBitmaps@@MEAA@XZ.c)
 * Callees:
 *     ?RemoveResourceNotifier@CD3DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x1800219D0 (-RemoveResourceNotifier@CD3DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CHwBitmapColorSource::RemoveResourceNotifier(
        CHwBitmapColorSource *this,
        const struct IDeviceResourceNotify *a2)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx
  int v4; // eax

  v2 = *((_QWORD *)this + 7);
  v3 = 0;
  if ( v2 )
  {
    v4 = CD3DResource::RemoveResourceNotifier((CD3DResource *)(v2 + 24), a2);
    v3 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x1010u);
  }
  return v3;
}
