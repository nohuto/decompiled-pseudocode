/*
 * XREFs of DrvQueryDisplayConfig @ 0x1C0064A40
 * Callers:
 *     ?TryFillOnce@QDC_AUTO_BUFFERS@@QEAAJIPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C00641DC (-TryFillOnce@QDC_AUTO_BUFFERS@@QEAAJIPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z.c)
 *     RIMGetQDCActivePathsData @ 0x1C006436C (RIMGetQDCActivePathsData.c)
 *     NtUserQueryDisplayConfig @ 0x1C0064780 (NtUserQueryDisplayConfig.c)
 *     ?DisplayDiagRecordActiveTopology@@YAXPEAUUSER_DETECTED_BLACK_SCREEN_REPORT@@@Z @ 0x1C00DD8DC (-DisplayDiagRecordActiveTopology@@YAXPEAUUSER_DETECTED_BLACK_SCREEN_REPORT@@@Z.c)
 *     ?DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESKTOP@@PEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00F7F5C (-DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESK.c)
 * Callees:
 *     DrvIsWddmDriverPresent @ 0x1C0026524 (DrvIsWddmDriverPresent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvQueryDisplayConfig(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v5; // rbx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  bool v11; // di
  int v12; // ecx
  _DWORD *v13; // r8
  int v14; // ebx
  __int64 v15; // rax

  v5 = (unsigned int)a1;
  v8 = WdLogNewEntry5_WdEvent(a1, a2);
  *(_QWORD *)(v8 + 24) = v5;
  WdLogEvent5_WdEvent(v8);
  if ( (unsigned int)DrvIsWddmDriverPresent() )
  {
    v11 = (_DWORD)v5 == 4 && (unsigned __int8)((__int64 (*)(void))qword_1C01908F0)();
    v12 = 2;
    if ( !v11 )
      v12 = v5;
    v13 = 0LL;
    if ( !v11 )
      v13 = a4;
    v14 = qword_1C0190670(v12 & 0xFFFFFFEF, v12 & 0x10, a2, a3, v13);
    if ( v14 >= 0 && v11 )
      *a4 = 4;
  }
  else
  {
    v14 = -1073741637;
  }
  v15 = WdLogNewEntry5_WdEvent(v10, v9);
  *(_QWORD *)(v15 + 24) = v14;
  WdLogEvent5_WdEvent(v15);
  return (unsigned int)v14;
}
