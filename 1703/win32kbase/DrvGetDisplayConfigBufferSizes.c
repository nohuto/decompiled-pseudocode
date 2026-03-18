/*
 * XREFs of DrvGetDisplayConfigBufferSizes @ 0x1C000D3A0
 * Callers:
 *     rimGetQDCActivePathsData @ 0x1C0009A20 (rimGetQDCActivePathsData.c)
 *     NtUserGetDisplayConfigBufferSizes @ 0x1C000D080 (NtUserGetDisplayConfigBufferSizes.c)
 *     ?DrvGetDevModeForLddmPath@@YAJPEAUtagGRAPHICS_DEVICE@@KPEAU_devicemodeW@@PEA_N@Z @ 0x1C00621D8 (-DrvGetDevModeForLddmPath@@YAJPEAUtagGRAPHICS_DEVICE@@KPEAU_devicemodeW@@PEA_N@Z.c)
 *     DrvIsExternalMonitorActive @ 0x1C009CB5C (DrvIsExternalMonitorActive.c)
 *     ?DisplayDiagRecordActiveTopology@@YAXPEAUUSER_DETECTED_BLACK_SCREEN_REPORT@@@Z @ 0x1C00D777C (-DisplayDiagRecordActiveTopology@@YAXPEAUUSER_DETECTED_BLACK_SCREEN_REPORT@@@Z.c)
 *     ?DrvProcessSetDisplayConfigParameters@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@IPEAUDISPLAYCONFIG_MODE_INFO@@IIPEAUtagDESKTOP@@PEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00F6F68 (-DrvProcessSetDisplayConfigParameters@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@IPEAUDISPLAYCONFIG_MODE_I.c)
 * Callees:
 *     DrvIsWddmDriverPresent @ 0x1C000D994 (DrvIsWddmDriverPresent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvGetDisplayConfigBufferSizes(unsigned int a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v6; // rax
  int v7; // ebx
  __int64 v8; // rax

  v4 = a1;
  v6 = WdLogNewEntry5_WdEvent();
  *(_QWORD *)(v6 + 24) = v4;
  WdLogEvent5_WdEvent(v6);
  if ( (unsigned int)DrvIsWddmDriverPresent() )
    v7 = ((__int64 (__fastcall *)(_QWORD, __int64, __int64))qword_1C018BA00)((unsigned int)v4, a2, a3);
  else
    v7 = -1073741637;
  v8 = WdLogNewEntry5_WdEvent();
  *(_QWORD *)(v8 + 24) = v7;
  WdLogEvent5_WdEvent(v8);
  return (unsigned int)v7;
}
