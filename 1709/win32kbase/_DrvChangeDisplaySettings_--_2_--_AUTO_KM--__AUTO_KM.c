/*
 * XREFs of _DrvChangeDisplaySettings_::_2_::_AUTO_KM::__AUTO_KM @ 0x1C0065F44
 * Callers:
 *     DrvChangeDisplaySettings @ 0x1C006586C (DrvChangeDisplaySettings.c)
 *     ??_G_AUTO_KM@?1??DrvChangeDisplaySettings@@YAJPEAU_UNICODE_STRING@@PEAUHDEV__@@PEAU_devicemodeW@@PEAXW4_MODE@@HHPEAU_MDEV@@PEAPEAU6@KHHHPEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z@UEAAPEAXI@Z @ 0x1C00F5230 (--_G_AUTO_KM@-1--DrvChangeDisplaySettings@@YAJPEAU_UNICODE_STRING@@PEAUHDEV__@@PEAU_devicemodeW@.c)
 * Callees:
 *     ??1AUTO_TGO@@MEAA@XZ @ 0x1C001B1C8 (--1AUTO_TGO@@MEAA@XZ.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 */

void __fastcall DrvChangeDisplaySettings_::_2_::_AUTO_KM::__AUTO_KM(AUTO_TGO *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  *(_QWORD *)this = off_1C01577B8;
  v2 = *((_QWORD *)this + 7);
  if ( v2 )
    Win32FreePool(v2);
  v3 = *((_QWORD *)this + 6);
  if ( v3 )
    Win32FreePool(v3);
  AUTO_TGO::~AUTO_TGO(this);
}
