/*
 * XREFs of DrvQueryDisplayConfig @ 0x1C000D270
 * Callers:
 *     rimGetQDCActivePathsData @ 0x1C0009A20 (rimGetQDCActivePathsData.c)
 *     NtUserQueryDisplayConfig @ 0x1C000CCB0 (NtUserQueryDisplayConfig.c)
 *     ?DrvGetDevModeForLddmPath@@YAJPEAUtagGRAPHICS_DEVICE@@KPEAU_devicemodeW@@PEA_N@Z @ 0x1C00621D8 (-DrvGetDevModeForLddmPath@@YAJPEAUtagGRAPHICS_DEVICE@@KPEAU_devicemodeW@@PEA_N@Z.c)
 *     DrvIsExternalMonitorActive @ 0x1C009CB5C (DrvIsExternalMonitorActive.c)
 *     ?DisplayDiagRecordActiveTopology@@YAXPEAUUSER_DETECTED_BLACK_SCREEN_REPORT@@@Z @ 0x1C00D777C (-DisplayDiagRecordActiveTopology@@YAXPEAUUSER_DETECTED_BLACK_SCREEN_REPORT@@@Z.c)
 *     ?DrvProcessSetDisplayConfigParameters@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@IPEAUDISPLAYCONFIG_MODE_INFO@@IIPEAUtagDESKTOP@@PEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00F6F68 (-DrvProcessSetDisplayConfigParameters@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@IPEAUDISPLAYCONFIG_MODE_I.c)
 * Callees:
 *     DrvIsWddmDriverPresent @ 0x1C000D994 (DrvIsWddmDriverPresent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvQueryDisplayConfig(unsigned int a1, _DWORD *a2, __int64 a3, __int64 a4, __int64 a5, _DWORD *a6)
{
  __int64 v7; // rbx
  __int64 v10; // rax
  bool v11; // si
  _DWORD *v12; // rdx
  __int64 v13; // rcx
  int v14; // ebx
  __int64 i; // rdx
  __int64 v16; // rax

  v7 = a1;
  v10 = WdLogNewEntry5_WdEvent();
  *(_QWORD *)(v10 + 24) = v7;
  WdLogEvent5_WdEvent(v10);
  if ( (unsigned int)DrvIsWddmDriverPresent() )
  {
    v11 = (_DWORD)v7 == 4 && (unsigned __int8)((__int64 (*)(void))qword_1C018BC88)();
    v12 = 0LL;
    v13 = 2LL;
    if ( !v11 )
    {
      v12 = a6;
      v13 = (unsigned int)v7;
    }
    v14 = qword_1C018BA08(v13, a2, a3, a4, a5, v12);
    if ( v14 >= 0 )
    {
      for ( i = 0LL; (unsigned int)i < *a2; i = (unsigned int)(i + 1) )
      {
        if ( *(_DWORD *)(a3 + 72 * i + 48) == -2 && *(_DWORD *)(a3 + 72 * i + 52) == -2 )
        {
          *(_DWORD *)(a3 + 72 * i + 48) = 64;
          *(_DWORD *)(a3 + 72 * i + 52) = 1;
        }
      }
      if ( v11 )
        *a6 = 4;
    }
  }
  else
  {
    v14 = -1073741637;
  }
  v16 = WdLogNewEntry5_WdEvent();
  *(_QWORD *)(v16 + 24) = v14;
  WdLogEvent5_WdEvent(v16);
  return (unsigned int)v14;
}
