/*
 * XREFs of DxgkQueryConnectionChanges @ 0x1C0011A64
 * Callers:
 *     DpiFdoHandleDisplayDetectControl @ 0x1C0012498 (DpiFdoHandleDisplayDetectControl.c)
 *     DpiIndicateConnectorChangeWorkItem @ 0x1C0104BA0 (DpiIndicateConnectorChangeWorkItem.c)
 *     DpiDxgkDdiDisplayDetectControl @ 0x1C011917C (DpiDxgkDdiDisplayDetectControl.c)
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x1C000F314 (DpiCheckForOutstandingD3Requests.c)
 *     DpiFdoHandleQueryConnectionChange @ 0x1C0011D5C (DpiFdoHandleQueryConnectionChange.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     McTemplateK0pxqqqqq @ 0x1C0033F2C (McTemplateK0pxqqqqq.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00B8774 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00B87F0 (DpiAcquireCoreSyncAccessSafe.c)
 *     MonitorRebuildMonitorModeListCache @ 0x1C01047D0 (MonitorRebuildMonitorModeListCache.c)
 *     DxgkInvalidateVidPnDisplayModeListCache @ 0x1C0104B74 (DxgkInvalidateVidPnDisplayModeListCache.c)
 *     DxgkStartDisplayCalloutBatch @ 0x1C0105ED0 (DxgkStartDisplayCalloutBatch.c)
 *     DxgkEndDisplayCalloutBatch @ 0x1C0105F40 (DxgkEndDisplayCalloutBatch.c)
 *     DpiPdoHandleChildConnectionChange @ 0x1C0107824 (DpiPdoHandleChildConnectionChange.c)
 *     DpiFdoHandleTargetConnectionState @ 0x1C01DE4A4 (DpiFdoHandleTargetConnectionState.c)
 *     ?DmmUpdateTargetLinkTrainingState@@YAJPEAXPEAU_DXGK_CONNECTION_CHANGE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01F2920 (-DmmUpdateTargetLinkTrainingState@@YAJPEAXPEAU_DXGK_CONNECTION_CHANGE@@PEAU_DXGK_DISPLAY_SCENARI.c)
 */

__int64 __fastcall DxgkQueryConnectionChanges(__int64 a1, char a2, char a3, char a4, char a5)
{
  __int64 v5; // rbx
  char v7; // r14
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  struct _ERESOURCE *v13; // r12
  __int64 v14; // rdx
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rdi
  int v18; // ecx
  int v19; // r8d
  __int64 v20; // rsi
  __int64 v21; // rdi
  __int64 v22; // rcx
  __int64 v23; // r9
  __int64 v24; // rcx
  bool v25; // zf
  int updated; // eax
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v30; // rax
  __int64 v31; // r9
  _QWORD *v32; // rdi
  _DWORD *v33; // rax
  __int64 v34; // r8
  int v35; // eax
  __int64 v36; // rcx
  __int64 v37; // r14
  __int64 v38; // rax
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  int v42; // r8d
  _QWORD *v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  int v49; // [rsp+20h] [rbp-E0h]
  int v50; // [rsp+28h] [rbp-D8h]
  int v51; // [rsp+30h] [rbp-D0h]
  int v52; // [rsp+38h] [rbp-C8h]
  _BYTE v55[104]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v56[10]; // [rsp+D0h] [rbp-30h] BYREF

  v5 = *(_QWORD *)(a1 + 64);
  v7 = a3;
  if ( !v5 || *(_DWORD *)(v5 + 16) != 1953656900 || *(_DWORD *)(v5 + 20) != 2 )
  {
    v48 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v48 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v48);
    return 3221225485LL;
  }
  KeEnterCriticalRegion();
  if ( *(_BYTE *)(v5 + 483) )
    DpiCheckForOutstandingD3Requests(v5);
  ExAcquireResourceSharedLite(*(PERESOURCE *)(v5 + 168), 1u);
  if ( (unsigned int)(*(_DWORD *)(v5 + 236) - 1) > 1 || *(_DWORD *)(v5 + 3808) == 1 || *(_DWORD *)(v5 + 284) != 1 )
  {
    v47 = WdLogNewEntry5_WdWarning(v11, v10, v12);
    LODWORD(v17) = -1073741661;
    *(_QWORD *)(v47 + 24) = -1073741661LL;
    WdLogEvent5_WdWarning(v47);
    if ( *(_BYTE *)(v5 + 483) )
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v5 + 24) + 64LL) + 3912LL));
    goto LABEL_32;
  }
  KeEnterCriticalRegion();
  v13 = (struct _ERESOURCE *)(v5 + 3168);
  ExAcquireResourceExclusiveLite((PERESOURCE)(v5 + 3168), 1u);
  if ( (*(_BYTE *)(v5 + 3736) & 1) != 0 )
  {
    LOBYTE(v14) = 1;
    v15 = DpiAcquireCoreSyncAccessSafe(a1, v14);
    v17 = v15;
    if ( v15 < 0 )
    {
      v30 = WdLogNewEntry5_WdError(v16);
      *(_QWORD *)(v30 + 24) = v17;
      WdLogEvent5_WdError(v30);
      goto LABEL_30;
    }
    DxgkStartDisplayCalloutBatch(*(_QWORD *)(v5 + 3728));
  }
  if ( a2 )
  {
    if ( (*(_BYTE *)(v5 + 3737) & 8) != 0 )
    {
      memset(v56, 0, 0x48uLL);
      EtwActivityIdControl(3u, (LPGUID)&v56[1]);
      v32 = *(_QWORD **)(v5 + 3328);
      v56[8] = MEMORY[0xFFFFF78000000014];
      LODWORD(v56[3]) = 60;
      LOBYTE(v56[6]) = -1;
      if ( v32 != (_QWORD *)(v5 + 3328) )
      {
        do
        {
          v33 = v32 - 4;
          v32 = (_QWORD *)*v32;
          if ( v33[4] == 1 )
          {
            v34 = *v33 == 1 ? (unsigned int)v33[1] : 4294967294LL;
            LOBYTE(v31) = 1;
            LOBYTE(v52) = 1;
            LOBYTE(v51) = a5;
            LOBYTE(v50) = a3;
            LOBYTE(v49) = a4;
            v35 = DpiPdoHandleChildConnectionChange(
                    *(_QWORD *)(v5 + 24),
                    (unsigned int)v33[6],
                    v34,
                    v31,
                    v49,
                    v50,
                    v51,
                    v52,
                    v56);
            v37 = v35;
            if ( v35 < 0 )
            {
              v38 = WdLogNewEntry5_WdError(v36);
              *(_QWORD *)(v38 + 24) = v37;
              WdLogEvent5_WdError(v38);
            }
          }
        }
        while ( v32 != (_QWORD *)(v5 + 3328) );
        v7 = a3;
      }
    }
  }
  do
  {
    do
    {
      while ( 1 )
      {
        while ( 1 )
        {
          memset(v55, 0, sizeof(v55));
          EtwActivityIdControl(3u, (LPGUID)&v55[32]);
          *(_QWORD *)&v55[88] = MEMORY[0xFFFFF78000000014];
          *(_DWORD *)&v55[48] = 60;
          v55[72] = -1;
          v55[101] = a5;
          v55[100] = v7;
          _InterlockedExchange((volatile __int32 *)(v5 + 3380), 2);
          v20 = *(_QWORD *)(v5 + 48);
          v21 = *(_QWORD *)(v5 + 40);
          if ( (*(_BYTE *)(v5 + 3737) & 8) != 0 )
          {
            if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0pxqqqqq(v18, (unsigned int)&EventEnterDdiQueryConnectionChange, v19, v20, 0, 0, 0, -2, 0, 0);
            v39 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(v21 + 1136))(v20, v55);
            v17 = v39;
            if ( bTracingEnabled )
            {
              if ( v39 < 0 )
              {
                if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                  McTemplateK0pxqqqqq(
                    v41,
                    (unsigned int)&EventEnterDdiQueryConnectionChange,
                    v42,
                    v20,
                    0,
                    0,
                    0,
                    -2,
                    0,
                    v39);
              }
              else
              {
                v40 = *(_DWORD *)&v55[8] & 0xFFFFFF;
                v41 = HIBYTE(*(_DWORD *)&v55[8]) & 0xF;
                if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                  McTemplateK0pxqqqqq(
                    HIBYTE(*(_DWORD *)&v55[8]) & 0xF,
                    (unsigned int)&EventExitDdiQueryConnectionChange,
                    v42,
                    v20,
                    v55[0],
                    v55[8],
                    v55[11] & 0xF,
                    v55[12],
                    v55[16],
                    v39);
              }
            }
            v43 = (_QWORD *)WdLogNewEntry5_WdTrace(v41, v40);
            v43[3] = *(unsigned int *)v55;
            v43[4] = *(_DWORD *)&v55[8] & 0xFFFFFF;
            v43[5] = (*(_QWORD *)&v55[8] >> 24) & 0xFLL;
            v22 = *(unsigned int *)&v55[16];
            v43[6] = *(unsigned int *)&v55[16];
            v43[7] = v17;
          }
          else
          {
            LODWORD(v17) = DpiFdoHandleQueryConnectionChange(v5, v55);
          }
          if ( (int)v17 < 0 )
          {
            v44 = WdLogNewEntry5_WdError(v22);
            *(_QWORD *)(v44 + 24) = (int)v17;
            WdLogEvent5_WdError(v44);
            goto LABEL_25;
          }
          if ( (_DWORD)v17 == 255 )
            goto LABEL_25;
          if ( !v55[102] )
            break;
          DxgkInvalidateVidPnDisplayModeListCache(*(_QWORD *)(v5 + 3728));
          MonitorRebuildMonitorModeListCache(*(struct DXGADAPTER **)(v5 + 3728));
        }
        v24 = HIBYTE(*(_DWORD *)&v55[8]) & 0xF;
        if ( (unsigned int)v24 < 4 )
          goto LABEL_60;
        if ( (unsigned int)v24 <= 6 )
        {
          updated = DpiFdoHandleTargetConnectionState(v5, v55);
          goto LABEL_23;
        }
        if ( (_DWORD)v24 == 8 )
        {
          v25 = 0;
          goto LABEL_22;
        }
        v25 = (_DWORD)v24 == 10;
        if ( (_DWORD)v24 != 10 )
          break;
LABEL_22:
        LOBYTE(v23) = v25;
        LOBYTE(v52) = v55[103];
        LOBYTE(v51) = v55[101];
        LOBYTE(v50) = v55[100];
        LOBYTE(v49) = 0;
        updated = DpiPdoHandleChildConnectionChange(
                    *(_QWORD *)(v5 + 24),
                    *(_DWORD *)&v55[8] & 0xFFFFFFu | (*(_DWORD *)&v55[96] << 24),
                    *(unsigned int *)&v55[12],
                    v23,
                    v49,
                    v50,
                    v51,
                    v52,
                    &v55[24]);
LABEL_23:
        v17 = updated;
        if ( updated < 0 )
        {
          v45 = WdLogNewEntry5_WdError(v27);
          *(_QWORD *)(v45 + 24) = v17;
          WdLogEvent5_WdError(v45);
          goto LABEL_61;
        }
      }
      if ( (unsigned int)(v24 - 12) <= 2 )
      {
        updated = DmmUpdateTargetLinkTrainingState(
                    *(void **)(v5 + 3728),
                    (struct _DXGK_CONNECTION_CHANGE *)v55,
                    (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)&v55[24]);
        goto LABEL_23;
      }
LABEL_60:
      v46 = WdLogNewEntry5_WdError(v24);
      *(_QWORD *)(v46 + 24) = (*(_QWORD *)&v55[8] >> 24) & 0xFLL;
      *(_QWORD *)(v46 + 32) = (int)v17;
      WdLogEvent5_WdError(v46);
      LODWORD(v17) = -1073741811;
LABEL_61:
      ;
    }
    while ( (int)v17 >= 0 );
LABEL_25:
    ;
  }
  while ( (_InterlockedExchange((volatile __int32 *)(v5 + 3380), 0) & 1) != 0 );
  v13 = (struct _ERESOURCE *)(v5 + 3168);
  if ( (*(_BYTE *)(v5 + 3736) & 1) != 0 )
  {
    DxgkEndDisplayCalloutBatch(*(_QWORD *)(v5 + 3728));
    LOBYTE(v28) = 1;
    DpiReleaseCoreSyncAccessSafe(a1, v28);
  }
  if ( (int)v17 < 0 )
  {
    _InterlockedAnd((volatile signed __int32 *)(v5 + 3476), 0xFFFFFFFE);
    IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(v5 + 152), BusRelations);
  }
LABEL_30:
  ExReleaseResourceLite(v13);
  KeLeaveCriticalRegion();
  if ( *(_BYTE *)(v5 + 483) )
    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v5 + 24) + 64LL) + 3912LL));
LABEL_32:
  ExReleaseResourceLite(*(PERESOURCE *)(v5 + 168));
  KeLeaveCriticalRegion();
  return (unsigned int)v17;
}
