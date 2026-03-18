/*
 * XREFs of ??_G_AUTO_KM@?1??DrvChangeDisplaySettings@@YAJPEAU_UNICODE_STRING@@PEAUHDEV__@@PEAU_devicemodeW@@PEAXW4_MODE@@HHPEAU_MDEV@@PEAPEAU6@KHHHPEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z@UEAAPEAXI@Z @ 0x1C00CBA90
 * Callers:
 *     <none>
 * Callees:
 *     _DrvChangeDisplaySettings_::_2_::_AUTO_KM::__AUTO_KM @ 0x1C004A7AC (_DrvChangeDisplaySettings_--_2_--_AUTO_KM--__AUTO_KM.c)
 */

AUTO_TGO *__fastcall `DrvChangeDisplaySettings'::`2'::_AUTO_KM::`scalar deleting destructor'(AUTO_TGO *a1, char a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax

  DrvChangeDisplaySettings_::_2_::_AUTO_KM::__AUTO_KM(a1);
  if ( (a2 & 1) != 0 )
  {
    v8 = WdLogNewEntry5_WdAssertion(v5, v4, v6, v7);
    WdLogEvent5_WdAssertion(v8);
  }
  return a1;
}
