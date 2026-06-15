/*
 * XREFs of ??0CVolumeUnit@@QEAA@XZ @ 0x180067E30
 * Callers:
 *     ?CallConstructors@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@CAXPEAVCVolumeUnit@@_K@Z @ 0x180068034 (-CallConstructors@-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@CAXPEAVC.c)
 *     ?GetLevelData@CVolumeHardware@@MEAAJXZ @ 0x1800686D0 (-GetLevelData@CVolumeHardware@@MEAAJXZ.c)
 *     ?GetLevelData@CVolumeSoftware@@MEAAJXZ @ 0x180068A70 (-GetLevelData@CVolumeSoftware@@MEAAJXZ.c)
 *     ?LoadDefaultVolumeForEndpoint@CVolumeSoftware@@AEAAJXZ @ 0x18006953C (-LoadDefaultVolumeForEndpoint@CVolumeSoftware@@AEAAJXZ.c)
 *     ?LoadVolumeState@CVolumeSoftware@@AEAAJXZ @ 0x180069810 (-LoadVolumeState@CVolumeSoftware@@AEAAJXZ.c)
 * Callees:
 *     ?SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMM@Z @ 0x18006AA14 (-SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMM@Z.c)
 *     ?SetWiper@CVolumeUnit@@QEAAJM@Z @ 0x18006B29C (-SetWiper@CVolumeUnit@@QEAAJM@Z.c)
 */

CVolumeUnit *__fastcall CVolumeUnit::CVolumeUnit(CVolumeUnit *this)
{
  CVolumeUnit::SetDBRange(this);
  CVolumeUnit::SetWiper(this, 0.0);
  return this;
}
