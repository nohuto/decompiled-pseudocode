/*
 * XREFs of DxgkQueryConnectionChanges @ 0x1C0011068
 * Callers:
 *     DpiFdoHandleDisplayDetectControl @ 0x1C0010714 (DpiFdoHandleDisplayDetectControl.c)
 *     DpiDxgkDdiDisplayDetectControl @ 0x1C011233C (DpiDxgkDdiDisplayDetectControl.c)
 *     DpiIndicateConnectorChangeWorkItem @ 0x1C01C2340 (DpiIndicateConnectorChangeWorkItem.c)
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x1C00012A0 (DpiCheckForOutstandingD3Requests.c)
 *     DpiFdoHandleQueryConnectionChange @ 0x1C0011638 (DpiFdoHandleQueryConnectionChange.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     Template_pxqqqqq @ 0x1C0014FF0 (Template_pxqqqqq.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00AA538 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00AA5B4 (DpiAcquireCoreSyncAccessSafe.c)
 *     DxgkEndDisplayCalloutBatch @ 0x1C0118CCC (DxgkEndDisplayCalloutBatch.c)
 *     DxgkStartDisplayCalloutBatch @ 0x1C0118CE0 (DxgkStartDisplayCalloutBatch.c)
 *     DpiPdoHandleChildConnectionChange @ 0x1C0119220 (DpiPdoHandleChildConnectionChange.c)
 *     DxgkInvalidateVidPnDisplayModeListCache @ 0x1C0174908 (DxgkInvalidateVidPnDisplayModeListCache.c)
 *     DpiFdoHandleTargetConnectionState @ 0x1C01C4A2C (DpiFdoHandleTargetConnectionState.c)
 *     ?DmmUpdateTargetLinkTrainingState@@YAJPEAXPEAU_DXGK_CONNECTION_CHANGE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01D9750 (-DmmUpdateTargetLinkTrainingState@@YAJPEAXPEAU_DXGK_CONNECTION_CHANGE@@PEAU_DXGK_DISPLAY_SCENARI.c)
 *     MonitorRebuildMonitorModeListCache @ 0x1C01E4234 (MonitorRebuildMonitorModeListCache.c)
 */

__int64 __fastcall DxgkQueryConnectionChanges(__int64 a1, __int64 a2, char a3, char a4, char a5)
{
  __int64 v5; // rbx
  char v7; // r14
  char v8; // si
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  struct _ERESOURCE *v14; // r12
  __int64 v15; // rdx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // r9
  _QWORD *v22; // rdi
  _DWORD *v23; // rax
  __int64 v24; // r8
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r14
  __int64 v29; // rax
  int v30; // ecx
  int v31; // r8d
  __int64 v32; // rsi
  __int64 v33; // rdi
  __int64 v34; // rdx
  __int64 NewTargetId; // rcx
  __int64 v36; // r9
  int v37; // eax
  int v38; // ecx
  int v39; // r8d
  _QWORD *v40; // rax
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  int updated; // eax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rax
  __int64 v52; // rax
  int v53; // [rsp+20h] [rbp-E0h]
  int v54; // [rsp+28h] [rbp-D8h]
  int v55; // [rsp+30h] [rbp-D0h]
  int v56; // [rsp+38h] [rbp-C8h]
  struct _DXGK_CONNECTION_CHANGE v59[4]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v60[8]; // [rsp+C0h] [rbp-40h] BYREF

  v5 = *(_QWORD *)(a1 + 64);
  v7 = a3;
  v8 = a2;
  if ( !v5 || *(_DWORD *)(v5 + 16) != 1953656900 || *(_DWORD *)(v5 + 20) != 2 )
  {
    v52 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v52 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v52);
    return 3221225485LL;
  }
  KeEnterCriticalRegion();
  if ( *(_BYTE *)(v5 + 483) )
    DpiCheckForOutstandingD3Requests(v5);
  ExAcquireResourceSharedLite(*(PERESOURCE *)(v5 + 168), 1u);
  if ( (unsigned int)(*(_DWORD *)(v5 + 236) - 1) > 1 || *(_DWORD *)(v5 + 3784) == 1 || *(_DWORD *)(v5 + 284) != 1 )
  {
    v50 = WdLogNewEntry5_WdWarning(v11, v10, v12, v13);
    LODWORD(v19) = -1073741661;
    *(_QWORD *)(v50 + 24) = -1073741661LL;
    WdLogEvent5_WdWarning(v50);
    if ( *(_BYTE *)(v5 + 483) )
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v5 + 24) + 64LL) + 3888LL));
    goto LABEL_61;
  }
  KeEnterCriticalRegion();
  v14 = (struct _ERESOURCE *)(v5 + 3144);
  ExAcquireResourceExclusiveLite((PERESOURCE)(v5 + 3144), 1u);
  if ( (*(_BYTE *)(v5 + 3712) & 1) != 0 )
  {
    LOBYTE(v15) = 1;
    v16 = DpiAcquireCoreSyncAccessSafe(a1, v15);
    v19 = v16;
    if ( v16 < 0 )
    {
      v20 = WdLogNewEntry5_WdError(v18, v17);
      *(_QWORD *)(v20 + 24) = v19;
      WdLogEvent5_WdError(v20);
      goto LABEL_57;
    }
    DxgkStartDisplayCalloutBatch(*(_QWORD *)(v5 + 3704));
  }
  if ( v8 )
  {
    if ( (*(_BYTE *)(v5 + 3713) & 8) != 0 )
    {
      memset(v60, 0, sizeof(v60));
      EtwActivityIdControl(3u, (LPGUID)&v60[1]);
      v22 = *(_QWORD **)(v5 + 3304);
      v60[7] = MEMORY[0xFFFFF78000000014];
      LODWORD(v60[3]) = 60;
      if ( v22 != (_QWORD *)(v5 + 3304) )
      {
        do
        {
          v23 = v22 - 4;
          v22 = (_QWORD *)*v22;
          if ( v23[4] == 1 )
          {
            v24 = *v23 == 1 ? (unsigned int)v23[1] : 4294967294LL;
            LOBYTE(v21) = 1;
            LOBYTE(v56) = 1;
            LOBYTE(v55) = a5;
            LOBYTE(v54) = a3;
            LOBYTE(v53) = a4;
            v25 = DpiPdoHandleChildConnectionChange(
                    *(_QWORD *)(v5 + 24),
                    (unsigned int)v23[6],
                    v24,
                    v21,
                    v53,
                    v54,
                    v55,
                    v56,
                    v60);
            v28 = v25;
            if ( v25 < 0 )
            {
              v29 = WdLogNewEntry5_WdError(v27, v26);
              *(_QWORD *)(v29 + 24) = v28;
              WdLogEvent5_WdError(v29);
            }
          }
        }
        while ( v22 != (_QWORD *)(v5 + 3304) );
        v7 = a3;
      }
    }
  }
  do
  {
    while ( 1 )
    {
      memset(v59, 0, sizeof(v59));
      EtwActivityIdControl(3u, (LPGUID)((char *)&v59[1] + 8));
      *((_QWORD *)&v59[3] + 1) = MEMORY[0xFFFFF78000000014];
      LODWORD(v59[2].ConnectionChangeId) = 60;
      *((_BYTE *)&v59[3].12 + 9) = a5;
      *((_BYTE *)&v59[3].12 + 8) = v7;
      _InterlockedExchange((volatile __int32 *)(v5 + 3356), 2);
      v32 = *(_QWORD *)(v5 + 48);
      v33 = *(_QWORD *)(v5 + 40);
      if ( (*(_BYTE *)(v5 + 3713) & 8) != 0 )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          Template_pxqqqqq(v30, (unsigned int)&EventEnterDdiQueryConnectionChange, v31, v32, 0, 0, 0, -2, 0, 0);
        v37 = (*(__int64 (__fastcall **)(__int64, struct _DXGK_CONNECTION_CHANGE *))(v33 + 1136))(v32, v59);
        v19 = v37;
        if ( bTracingEnabled )
        {
          if ( v37 < 0 )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              Template_pxqqqqq(v38, (unsigned int)&EventEnterDdiQueryConnectionChange, v39, v32, 0, 0, 0, -2, 0, v37);
          }
          else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            Template_pxqqqqq(
              HIBYTE(*((_DWORD *)v59 + 2)) & 0xF,
              (unsigned int)&EventExitDdiQueryConnectionChange,
              v39,
              v32,
              v59[0].ConnectionChangeId,
              *((char *)v59 + 8),
              *((_BYTE *)v59 + 11) & 0xF,
              v59[0].MonitorConnect.LinkTargetType,
              v59[0].TargetJoin.NewTargetId,
              v37);
          }
        }
        v40 = (_QWORD *)WdLogNewEntry5_WdTrace();
        v40[3] = LODWORD(v59[0].ConnectionChangeId);
        v40[4] = *((_DWORD *)v59 + 2) & 0xFFFFFF;
        v40[5] = (*((_QWORD *)v59 + 1) >> 24) & 0xFLL;
        NewTargetId = v59[0].TargetConnect.NewTargetId;
        v40[6] = v59[0].TargetConnect.NewTargetId;
        v40[7] = v19;
      }
      else
      {
        LODWORD(v19) = DpiFdoHandleQueryConnectionChange(v5, v59);
      }
      if ( (int)v19 < 0 )
      {
        v41 = WdLogNewEntry5_WdError(NewTargetId, v34);
        *(_QWORD *)(v41 + 24) = (int)v19;
        WdLogEvent5_WdError(v41);
        break;
      }
      if ( (_DWORD)v19 == 255 )
        break;
      if ( *((_BYTE *)&v59[3].12 + 10) )
      {
        DxgkInvalidateVidPnDisplayModeListCache(*(_QWORD *)(v5 + 3704));
        MonitorRebuildMonitorModeListCache(*(struct DXGADAPTER **)(v5 + 3704));
      }
      else
      {
        v42 = *((_DWORD *)v59 + 2) & 0xFFFFFF | (v59[3].TargetConnect.NewTargetId << 24);
        v43 = HIBYTE(*((_DWORD *)v59 + 2)) & 0xF;
        if ( (unsigned int)v43 < 4 )
          goto LABEL_50;
        if ( (unsigned int)v43 <= 6 )
        {
          updated = DpiFdoHandleTargetConnectionState(v5, v59);
        }
        else if ( (((_DWORD)v43 - 8) & 0xFFFFFFFD) != 0 )
        {
          if ( (unsigned int)(v43 - 12) > 2 )
          {
LABEL_50:
            v48 = WdLogNewEntry5_WdError(v43, v42);
            *(_QWORD *)(v48 + 24) = (*((_QWORD *)v59 + 1) >> 24) & 0xFLL;
            *(_QWORD *)(v48 + 32) = (int)v19;
            WdLogEvent5_WdError(v48);
            LODWORD(v19) = -1073741811;
            goto LABEL_51;
          }
          updated = DmmUpdateTargetLinkTrainingState(
                      *(void **)(v5 + 3704),
                      v59,
                      (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)&v59[1]);
        }
        else
        {
          LOBYTE(v36) = (_DWORD)v43 == 10;
          LOBYTE(v56) = *((_BYTE *)&v59[3].12 + 11);
          LOBYTE(v55) = *((_BYTE *)&v59[3].12 + 9);
          LOBYTE(v54) = *((_BYTE *)&v59[3].12 + 8);
          LOBYTE(v53) = 0;
          updated = DpiPdoHandleChildConnectionChange(
                      *(_QWORD *)(v5 + 24),
                      v42,
                      (unsigned int)v59[0].MonitorConnect.LinkTargetType,
                      v36,
                      v53,
                      v54,
                      v55,
                      v56,
                      &v59[1]);
        }
        v19 = updated;
        if ( updated < 0 )
        {
          v47 = WdLogNewEntry5_WdError(v46, v45);
          *(_QWORD *)(v47 + 24) = v19;
          WdLogEvent5_WdError(v47);
LABEL_51:
          if ( (int)v19 < 0 )
            break;
        }
      }
    }
  }
  while ( (_InterlockedExchange((volatile __int32 *)(v5 + 3356), 0) & 1) != 0 );
  v14 = (struct _ERESOURCE *)(v5 + 3144);
  if ( (*(_BYTE *)(v5 + 3712) & 1) != 0 )
  {
    DxgkEndDisplayCalloutBatch(*(_QWORD *)(v5 + 3704));
    LOBYTE(v49) = 1;
    DpiReleaseCoreSyncAccessSafe(a1, v49);
  }
  if ( (int)v19 < 0 )
  {
    _InterlockedAnd((volatile signed __int32 *)(v5 + 3452), 0xFFFFFFFE);
    IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(v5 + 152), BusRelations);
  }
LABEL_57:
  ExReleaseResourceLite(v14);
  KeLeaveCriticalRegion();
  if ( *(_BYTE *)(v5 + 483) )
    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v5 + 24) + 64LL) + 3888LL));
LABEL_61:
  ExReleaseResourceLite(*(PERESOURCE *)(v5 + 168));
  KeLeaveCriticalRegion();
  return (unsigned int)v19;
}
