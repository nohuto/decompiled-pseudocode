/*
 * XREFs of _DrvChangeDisplaySettings_::_2_::_AUTO_KM::__AUTO_KM @ 0x1C0056A68
 * Callers:
 *     DrvChangeDisplaySettings @ 0x1C00563A0 (DrvChangeDisplaySettings.c)
 *     ??_G_AUTO_KM@?1??DrvChangeDisplaySettings@@YAJPEAU_UNICODE_STRING@@PEAUHDEV__@@PEAU_devicemodeW@@PEAXW4_MODE@@HHPEAU_MDEV@@PEAPEAU6@KHHHPEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z@UEAAPEAXI@Z @ 0x1C00F3FB0 (--_G_AUTO_KM@-1--DrvChangeDisplaySettings@@YAJPEAU_UNICODE_STRING@@PEAUHDEV__@@PEAU_devicemodeW@.c)
 * Callees:
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 */

void __fastcall DrvChangeDisplaySettings_::_2_::_AUTO_KM::__AUTO_KM(AUTO_TGO *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  *(_QWORD *)this = off_1C015AEB0;
  v2 = *((_QWORD *)this + 7);
  if ( v2 )
    Win32FreePool(v2);
  v3 = *((_QWORD *)this + 6);
  if ( v3 )
    Win32FreePool(v3);
  AUTO_TGO::~AUTO_TGO(this);
}
