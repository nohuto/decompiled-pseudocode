/*
 * XREFs of WPP_SF_qdg @ 0x18006BA64
 * Callers:
 *     ?GetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJPEAM@Z @ 0x180009710 (-GetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJPEAM@Z.c)
 *     ?CalculateAPOVolume@CPerStreamVolumeAudioStream@@MEAAJKQEAMAEA_NAEA_J@Z @ 0x18002D6D0 (-CalculateAPOVolume@CPerStreamVolumeAudioStream@@MEAAJKQEAMAEA_NAEA_J@Z.c)
 *     ?GetLevelData@CVolumeHardware@@MEAAJXZ @ 0x1800686D0 (-GetLevelData@CVolumeHardware@@MEAAJXZ.c)
 *     ?GetMasterVolumeLevel@CVolumeControlBase@@UEAAJPEAM@Z @ 0x180068C00 (-GetMasterVolumeLevel@CVolumeControlBase@@UEAAJPEAM@Z.c)
 *     ?LoadVolumeState@CVolumeSoftware@@AEAAJXZ @ 0x180069810 (-LoadVolumeState@CVolumeSoftware@@AEAAJXZ.c)
 *     ?RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ @ 0x18006A258 (-RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ.c)
 *     ?SetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJMPEBU_GUID@@@Z @ 0x18006AD60 (-SetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJMPEBU_GUID@@@Z.c)
 *     ?GetChannelVolume@CAudioSession@@UEAAJIPEAM@Z @ 0x180071540 (-GetChannelVolume@CAudioSession@@UEAAJIPEAM@Z.c)
 *     ?SetStreamChannelVolume@CAudioStream@@QEAAJIM@Z @ 0x18007D56C (-SetStreamChannelVolume@CAudioStream@@QEAAJIM@Z.c)
 *     ?SetChannelVolume@CVADServer@@UEAAJIM@Z @ 0x18008C940 (-SetChannelVolume@CVADServer@@UEAAJIM@Z.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_qdg(__int64 a1, unsigned __int16 a2, __int64 a3, ...)
{
  va_list va; // [rsp+88h] [rbp+20h] BYREF

  va_start(va, a3);
  return EtwTraceMessage(a1, 43LL, a3, a2, (__int64 *)va);
}
