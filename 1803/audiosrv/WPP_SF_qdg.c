/*
 * XREFs of WPP_SF_qdg @ 0x1800A5068
 * Callers:
 *     ?GetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJPEAM@Z @ 0x180009550 (-GetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJPEAM@Z.c)
 *     ?GetLevelData@CVolumeHardware@@MEAAJXZ @ 0x18004DA80 (-GetLevelData@CVolumeHardware@@MEAAJXZ.c)
 *     ?RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ @ 0x18004DEFC (-RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ.c)
 *     ?GetMasterVolumeLevel@CVolumeControlBase@@UEAAJPEAM@Z @ 0x18004E010 (-GetMasterVolumeLevel@CVolumeControlBase@@UEAAJPEAM@Z.c)
 *     ?LoadVolumeState@CVolumeSoftware@@AEAAJXZ @ 0x1800A2D30 (-LoadVolumeState@CVolumeSoftware@@AEAAJXZ.c)
 *     ?SetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJMPEBU_GUID@@PEAH@Z @ 0x1800A42A0 (-SetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJMPEBU_GUID@@PEAH@Z.c)
 *     ?GetChannelVolume@CAudioSession@@UEAAJIPEAM@Z @ 0x1800A9720 (-GetChannelVolume@CAudioSession@@UEAAJIPEAM@Z.c)
 *     ?SetStreamChannelVolume@CAudioStream@@QEAAJIMPEAH@Z @ 0x1800B6440 (-SetStreamChannelVolume@CAudioStream@@QEAAJIMPEAH@Z.c)
 *     ?SetChannelVolume@CVADServer@@UEAAJIMPEAH@Z @ 0x1800C26E0 (-SetChannelVolume@CVADServer@@UEAAJIMPEAH@Z.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_qdg(__int64 a1, unsigned __int16 a2, __int64 a3, ...)
{
  va_list va; // [rsp+88h] [rbp+20h] BYREF

  va_start(va, a3);
  return EtwTraceMessage(a1, 43LL, a3, a2, (__int64 *)va);
}
