/*
 * XREFs of DrvGetDisplayConfigBufferSizes @ 0x1C0064710
 * Callers:
 *     ?TryFillOnce@QDC_AUTO_BUFFERS@@QEAAJIPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C00641DC (-TryFillOnce@QDC_AUTO_BUFFERS@@QEAAJIPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z.c)
 *     RIMGetQDCActivePathsData @ 0x1C006436C (RIMGetQDCActivePathsData.c)
 *     NtUserGetDisplayConfigBufferSizes @ 0x1C0064560 (NtUserGetDisplayConfigBufferSizes.c)
 *     ?DisplayDiagRecordActiveTopology@@YAXPEAUUSER_DETECTED_BLACK_SCREEN_REPORT@@@Z @ 0x1C00DD8DC (-DisplayDiagRecordActiveTopology@@YAXPEAUUSER_DETECTED_BLACK_SCREEN_REPORT@@@Z.c)
 *     ?DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESKTOP@@PEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00F7F5C (-DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESK.c)
 * Callees:
 *     DrvIsWddmDriverPresent @ 0x1C0026524 (DrvIsWddmDriverPresent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvGetDisplayConfigBufferSizes(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // ebx
  __int64 v8; // rax

  v3 = (unsigned int)a1;
  v4 = WdLogNewEntry5_WdEvent(a1, a2);
  *(_QWORD *)(v4 + 24) = v3;
  WdLogEvent5_WdEvent(v4);
  if ( (unsigned int)DrvIsWddmDriverPresent() )
    v7 = ((__int64 (__fastcall *)(_QWORD, __int64))qword_1C0190668)((unsigned int)v3, a2);
  else
    v7 = -1073741637;
  v8 = WdLogNewEntry5_WdEvent(v6, v5);
  *(_QWORD *)(v8 + 24) = v7;
  WdLogEvent5_WdEvent(v8);
  return (unsigned int)v7;
}
