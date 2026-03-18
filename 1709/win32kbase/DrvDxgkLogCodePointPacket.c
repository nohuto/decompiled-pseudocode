/*
 * XREFs of DrvDxgkLogCodePointPacket @ 0x1C00A4550
 * Callers:
 *     ?LogDiagCDS@@YAXPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@PEAXW4_MODE@@HHKHH_KJJW4_DXGK_DIAG_CDS_STAGE@@I1@Z @ 0x1C0065FBC (-LogDiagCDS@@YAXPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@PEAXW4_MODE@@HHKH.c)
 *     DrvSetDisplayConfig @ 0x1C00662E0 (DrvSetDisplayConfig.c)
 *     LogDiagSDC @ 0x1C0067094 (LogDiagSDC.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C00686F4 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     ?DrvValidateAndApplyDevMode@@YAJPEAU_DISPLAYCONFIG_CDS_REQUEST@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C006B444 (-DrvValidateAndApplyDevMode@@YAJPEAU_DISPLAYCONFIG_CDS_REQUEST@@PEAPEAUD3DKMT_GETPATHSMODALITY@@.c)
 *     ?bDynamicMatchEnoughForModeChange@@YAHPEAUHDEV__@@0@Z @ 0x1C006E65C (-bDynamicMatchEnoughForModeChange@@YAHPEAUHDEV__@@0@Z.c)
 *     PowerOnMonitor @ 0x1C0077B20 (PowerOnMonitor.c)
 *     PowerOffMonitor @ 0x1C00A3210 (PowerOffMonitor.c)
 *     DrvSetWddmDeviceMonitorPowerState @ 0x1C00A421C (DrvSetWddmDeviceMonitorPowerState.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00F63C4 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ?EnforceSDCCloneSourceIndexCoherency@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z @ 0x1C00F8BC0 (-EnforceSDCCloneSourceIndexCoherency@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z.c)
 * Callees:
 *     DrvDxgkWriteDiagEntry @ 0x1C0067180 (DrvDxgkWriteDiagEntry.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 */

__int64 __fastcall DrvDxgkLogCodePointPacket(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  _QWORD v9[8]; // [rsp+20h] [rbp-50h] BYREF

  memset(v9, 0, sizeof(v9));
  memset(&v9[1], 0, 36);
  v9[0] = 0x4000000006LL;
  v9[6] = __PAIR64__(a2, a1);
  v9[7] = __PAIR64__(a4, a3);
  return DrvDxgkWriteDiagEntry();
}
