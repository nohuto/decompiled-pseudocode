/*
 * XREFs of WPP_SF_dd @ 0x180089EEC
 * Callers:
 *     ?IsProcessAllowed@@YAHKPEBG@Z @ 0x18000A0DC (-IsProcessAllowed@@YAHKPEBG@Z.c)
 *     ?CheckADGStatus@CAudioDGProcess@@QEAAJXZ @ 0x18001D5C8 (-CheckADGStatus@CAudioDGProcess@@QEAAJXZ.c)
 *     ?Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@KPEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@@Z @ 0x180026F70 (-Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PE.c)
 *     ?GetVolumeStepInfo@CVolumeControlBase@@UEAAJPEAI0@Z @ 0x180068CE0 (-GetVolumeStepInfo@CVolumeControlBase@@UEAAJPEAI0@Z.c)
 *     ?GetChannelsPeakValues@CAudioSession@@UEAAJIPEAM@Z @ 0x180071630 (-GetChannelsPeakValues@CAudioSession@@UEAAJIPEAM@Z.c)
 *     ?PersistSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180074730 (-PersistSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?Invoke@CAudioSessionManagerNotification@@UEAAJVCAudioSessionNotificationProcess@@@Z @ 0x18007A1D0 (-Invoke@CAudioSessionManagerNotification@@UEAAJVCAudioSessionNotificationProcess@@@Z.c)
 *     ?DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@U_GUID@@22PEAPEAU2@@Z @ 0x180082BE4 (-DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATE.c)
 *     ?FlattenProperty@CAudioSessionStore@@AEAAPEAEPEBUtagPROPVARIANT@@PEA_K@Z @ 0x1800839BC (-FlattenProperty@CAudioSessionStore@@AEAAPEAEPEBUtagPROPVARIANT@@PEA_K@Z.c)
 *     ?LoadPropertyStore@CAudioSessionStore@@AEAAJXZ @ 0x1800851F0 (-LoadPropertyStore@CAudioSessionStore@@AEAAJXZ.c)
 *     ?GetEndpointBufferSize@CVADServer@@UEAAJPEAIPEAM@Z @ 0x18008B6F0 (-GetEndpointBufferSize@CVADServer@@UEAAJPEAIPEAM@Z.c)
 *     ?Initialize@CaptureMonitor@CMonitorManager@@QEAAJPEAUIMMDevice@@0@Z @ 0x1800A4E00 (-Initialize@CaptureMonitor@CMonitorManager@@QEAAJPEAUIMMDevice@@0@Z.c)
 *     ?OnPowerStateChanged@CMonitor@@IEAAXE@Z @ 0x1800A9810 (-OnPowerStateChanged@CMonitor@@IEAAXE@Z.c)
 *     OnServiceShutdown @ 0x1800ABC00 (OnServiceShutdown.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_dd(__int64 a1, unsigned __int16 a2, __int64 a3, int a4)
{
  int v5; // [rsp+78h] [rbp+20h] BYREF

  v5 = a4;
  return EtwTraceMessage(a1, 43LL, a3, a2, &v5);
}
