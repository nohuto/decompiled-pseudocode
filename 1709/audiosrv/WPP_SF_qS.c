/*
 * XREFs of WPP_SF_qS @ 0x180066790
 * Callers:
 *     ?GetAudioSessionControl@CAudioSessionManager@@UEAAJK_NPEAVCAudioSession@@PEAPEAVCServerAudioSessionControl@@@Z @ 0x1800161A0 (-GetAudioSessionControl@CAudioSessionManager@@UEAAJK_NPEAVCAudioSession@@PEAPEAVCServerAudioSess.c)
 *     ?CreateAudioSessionControl@CAudioSessionManager@@QEAAJPEAVCAudioSession@@K_NPEAPEAVCServerAudioSessionControl@@@Z @ 0x180016260 (-CreateAudioSessionControl@CAudioSessionManager@@QEAAJPEAVCAudioSession@@K_NPEAPEAVCServerAudioS.c)
 *     ??1CAudioSession@@MEAA@XZ @ 0x180019B18 (--1CAudioSession@@MEAA@XZ.c)
 *     ?FindMeterControlForEndpoint@CMeterHardware@@IEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x180065BD4 (-FindMeterControlForEndpoint@CMeterHardware@@IEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 *     ?FindMuteControlForEndpoint@CMuteHardware@@IEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x1800669A4 (-FindMuteControlForEndpoint@CMuteHardware@@IEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 *     ?FindVolumeControlForEndpoint@CVolumeHardware@@IEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x180068168 (-FindVolumeControlForEndpoint@CVolumeHardware@@IEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 *     ?LoadDefaultVolumeForEndpoint@CVolumeSoftware@@AEAAJXZ @ 0x18006953C (-LoadDefaultVolumeForEndpoint@CVolumeSoftware@@AEAAJXZ.c)
 *     ?LoadVolumeState@CVolumeSoftware@@AEAAJXZ @ 0x180069810 (-LoadVolumeState@CVolumeSoftware@@AEAAJXZ.c)
 *     ?NotifyNewAudioProtocol@CVolumeProvider@@UEAAXKI@Z @ 0x18006E900 (-NotifyNewAudioProtocol@CVolumeProvider@@UEAAXKI@Z.c)
 *     ?PropertyStoreGetValue@CAudioSession@@UEAAJAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x180074DA0 (-PropertyStoreGetValue@CAudioSession@@UEAAJAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z.c)
 *     ?PropertyStoreSetValue@CAudioSession@@UEAAJAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@@Z @ 0x180074E40 (-PropertyStoreSetValue@CAudioSession@@UEAAJAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@@Z.c)
 *     ?GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z @ 0x180079C80 (-GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z.c)
 *     ?OnMonitorEnabledChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z @ 0x1800A5C70 (-OnMonitorEnabledChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_qS(__int64 a1, unsigned __int16 a2, __int64 a3, ...)
{
  __int64 v3; // rax
  __int64 v5; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+78h] [rbp+20h]
  __int64 v7; // [rsp+80h] [rbp+28h]
  va_list va1; // [rsp+88h] [rbp+30h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v5 = va_arg(va1, _QWORD);
  v7 = va_arg(va1, _QWORD);
  if ( v7 )
  {
    v3 = -1LL;
    do
      ++v3;
    while ( *(_WORD *)(v7 + 2 * v3) );
  }
  return EtwTraceMessage(a1, 43LL, a3, a2, (__int64 *)va);
}
