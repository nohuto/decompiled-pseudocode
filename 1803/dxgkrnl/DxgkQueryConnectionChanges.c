/*
 * XREFs of DxgkQueryConnectionChanges @ 0x1C003BA24
 * Callers:
 *     DpiFdoHandleDisplayDetectControl @ 0x1C003B0E8 (DpiFdoHandleDisplayDetectControl.c)
 *     DpiIndicateConnectorChangeWorkItem @ 0x1C01EE410 (DpiIndicateConnectorChangeWorkItem.c)
 *     DpiDxgkDdiDisplayDetectControl @ 0x1C020A0CC (DpiDxgkDdiDisplayDetectControl.c)
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x1C000B870 (DpiCheckForOutstandingD3Requests.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     DpiDxgkDdiQueryConnectionChange @ 0x1C00422B4 (DpiDxgkDdiQueryConnectionChange.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C009F688 (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C009F7D8 (DpiReleaseCoreSyncAccessSafe.c)
 *     DxgkEndDisplayCalloutBatch @ 0x1C01581B8 (DxgkEndDisplayCalloutBatch.c)
 *     DxgkStartDisplayCalloutBatch @ 0x1C01586A4 (DxgkStartDisplayCalloutBatch.c)
 *     DxgkInvalidateVidPnDisplayModeListCache @ 0x1C015C590 (DxgkInvalidateVidPnDisplayModeListCache.c)
 *     DpiFdoHandleTargetConnectionState @ 0x1C01F6374 (DpiFdoHandleTargetConnectionState.c)
 *     DpiPdoHandleChildConnectionChange @ 0x1C020C6BC (DpiPdoHandleChildConnectionChange.c)
 *     ?DmmUpdateTargetLinkTrainingState@@YAJPEAXPEAU_DXGK_CONNECTION_CHANGE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C021E39C (-DmmUpdateTargetLinkTrainingState@@YAJPEAXPEAU_DXGK_CONNECTION_CHANGE@@PEAU_DXGK_DISPLAY_SCENARI.c)
 *     MonitorRebuildMonitorModeListCache @ 0x1C022ED98 (MonitorRebuildMonitorModeListCache.c)
 */

__int64 __fastcall DxgkQueryConnectionChanges(__int64 a1, char a2, char a3, char a4, char a5)
{
  __int64 v5; // rbx
  char v7; // r14
  __int64 v9; // r13
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  struct _ERESOURCE *v13; // r12
  __int64 v14; // rdx
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // r9
  _QWORD *v20; // rdi
  _DWORD *v21; // rax
  __int64 v22; // r8
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // r14
  __int64 v26; // rax
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // r9
  __int64 v30; // rax
  __int64 v31; // rcx
  bool v32; // zf
  int updated; // eax
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v40; // rax
  int v41; // [rsp+20h] [rbp-E0h]
  int v42; // [rsp+28h] [rbp-D8h]
  int v43; // [rsp+30h] [rbp-D0h]
  int v44; // [rsp+38h] [rbp-C8h]
  _BYTE v47[104]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v48[10]; // [rsp+D0h] [rbp-30h] BYREF

  v5 = *(_QWORD *)(a1 + 64);
  v7 = a3;
  v9 = a1;
  if ( !v5 || *(_DWORD *)(v5 + 16) != 1953656900 || *(_DWORD *)(v5 + 20) != 2 )
  {
    v40 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v40 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v40);
    return 3221225485LL;
  }
  KeEnterCriticalRegion();
  if ( *(_BYTE *)(v5 + 483) )
    DpiCheckForOutstandingD3Requests(v5);
  ExAcquireResourceSharedLite(*(PERESOURCE *)(v5 + 168), 1u);
  if ( (unsigned int)(*(_DWORD *)(v5 + 236) - 1) > 1 || *(_DWORD *)(v5 + 3808) == 1 || *(_DWORD *)(v5 + 284) != 1 )
  {
    v38 = WdLogNewEntry5_WdWarning(v11, v10, v12);
    LODWORD(v17) = -1073741661;
    *(_QWORD *)(v38 + 24) = -1073741661LL;
    WdLogEvent5_WdWarning(v38);
    if ( *(_BYTE *)(v5 + 483) )
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v5 + 24) + 64LL) + 3912LL));
    goto LABEL_51;
  }
  KeEnterCriticalRegion();
  v13 = (struct _ERESOURCE *)(v5 + 3168);
  ExAcquireResourceExclusiveLite((PERESOURCE)(v5 + 3168), 1u);
  if ( (*(_BYTE *)(v5 + 3736) & 1) != 0 )
  {
    LOBYTE(v14) = 1;
    v15 = DpiAcquireCoreSyncAccessSafe(v9, v14);
    v17 = v15;
    if ( v15 < 0 )
    {
      v18 = WdLogNewEntry5_WdError(v16);
      *(_QWORD *)(v18 + 24) = v17;
      WdLogEvent5_WdError(v18);
      goto LABEL_47;
    }
    DxgkStartDisplayCalloutBatch(*(_QWORD *)(v5 + 3728));
  }
  if ( a2 )
  {
    if ( (*(_BYTE *)(v5 + 3737) & 8) != 0 )
    {
      memset(v48, 0, 0x48uLL);
      EtwActivityIdControl(3u, (LPGUID)&v48[1]);
      v20 = *(_QWORD **)(v5 + 3328);
      v48[8] = MEMORY[0xFFFFF78000000014];
      LODWORD(v48[3]) = 60;
      LOBYTE(v48[6]) = -1;
      if ( v20 != (_QWORD *)(v5 + 3328) )
      {
        do
        {
          v21 = v20 - 4;
          v20 = (_QWORD *)*v20;
          if ( v21[4] == 1 )
          {
            v22 = *v21 == 1 ? (unsigned int)v21[1] : 4294967294LL;
            LOBYTE(v19) = 1;
            LOBYTE(v44) = 1;
            LOBYTE(v43) = a5;
            LOBYTE(v42) = a3;
            LOBYTE(v41) = a4;
            v23 = DpiPdoHandleChildConnectionChange(
                    *(_QWORD *)(v5 + 24),
                    (unsigned int)v21[6],
                    v22,
                    v19,
                    v41,
                    v42,
                    v43,
                    v44,
                    v48);
            v25 = v23;
            if ( v23 < 0 )
            {
              v26 = WdLogNewEntry5_WdError(v24);
              *(_QWORD *)(v26 + 24) = v25;
              WdLogEvent5_WdError(v26);
            }
          }
        }
        while ( v20 != (_QWORD *)(v5 + 3328) );
        v9 = a1;
        v7 = a3;
      }
    }
  }
  do
  {
    while ( 1 )
    {
      memset(v47, 0, sizeof(v47));
      EtwActivityIdControl(3u, (LPGUID)&v47[32]);
      *(_QWORD *)&v47[88] = MEMORY[0xFFFFF78000000014];
      *(_DWORD *)&v47[48] = 60;
      v47[72] = -1;
      v47[101] = a5;
      v47[100] = v7;
      _InterlockedExchange((volatile __int32 *)(v5 + 3380), 2);
      v27 = DpiDxgkDdiQueryConnectionChange(v5, *(_QWORD *)(v5 + 40), *(_QWORD *)(v5 + 48), v47);
      v17 = v27;
      if ( v27 < 0 )
      {
        v30 = WdLogNewEntry5_WdError(v28);
        *(_QWORD *)(v30 + 24) = v17;
        WdLogEvent5_WdError(v30);
        break;
      }
      if ( v27 == 255 )
        break;
      if ( v47[102] )
      {
        DxgkInvalidateVidPnDisplayModeListCache(*(_QWORD *)(v5 + 3728));
        MonitorRebuildMonitorModeListCache(*(struct DXGADAPTER **)(v5 + 3728));
      }
      else
      {
        v31 = HIBYTE(*(_DWORD *)&v47[8]) & 0xF;
        if ( (unsigned int)v31 < 4 )
          goto LABEL_40;
        if ( (unsigned int)v31 <= 6 )
        {
          updated = DpiFdoHandleTargetConnectionState(v5, v47);
          goto LABEL_38;
        }
        if ( (_DWORD)v31 == 8 )
        {
          v32 = 0;
LABEL_36:
          LOBYTE(v29) = v32;
          LOBYTE(v44) = v47[103];
          LOBYTE(v43) = v47[101];
          LOBYTE(v42) = v47[100];
          LOBYTE(v41) = 0;
          updated = DpiPdoHandleChildConnectionChange(
                      *(_QWORD *)(v5 + 24),
                      *(_DWORD *)&v47[8] & 0xFFFFFFu | (*(_DWORD *)&v47[96] << 24),
                      *(unsigned int *)&v47[12],
                      v29,
                      v41,
                      v42,
                      v43,
                      v44,
                      &v47[24]);
          goto LABEL_38;
        }
        v32 = (_DWORD)v31 == 10;
        if ( (_DWORD)v31 == 10 )
          goto LABEL_36;
        if ( (unsigned int)(v31 - 12) > 2 )
        {
LABEL_40:
          v36 = WdLogNewEntry5_WdError(v31);
          *(_QWORD *)(v36 + 24) = (*(_QWORD *)&v47[8] >> 24) & 0xFLL;
          *(_QWORD *)(v36 + 32) = v17;
          WdLogEvent5_WdError(v36);
          LODWORD(v17) = -1073741811;
          goto LABEL_41;
        }
        updated = DmmUpdateTargetLinkTrainingState(
                    *(void **)(v5 + 3728),
                    (struct _DXGK_CONNECTION_CHANGE *)v47,
                    (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)&v47[24]);
LABEL_38:
        v17 = updated;
        if ( updated < 0 )
        {
          v35 = WdLogNewEntry5_WdError(v34);
          *(_QWORD *)(v35 + 24) = v17;
          WdLogEvent5_WdError(v35);
LABEL_41:
          if ( (int)v17 < 0 )
            break;
        }
      }
    }
  }
  while ( (_InterlockedExchange((volatile __int32 *)(v5 + 3380), 0) & 1) != 0 );
  v13 = (struct _ERESOURCE *)(v5 + 3168);
  if ( (*(_BYTE *)(v5 + 3736) & 1) != 0 )
  {
    DxgkEndDisplayCalloutBatch(*(_QWORD *)(v5 + 3728));
    LOBYTE(v37) = 1;
    DpiReleaseCoreSyncAccessSafe(v9, v37);
  }
  if ( (int)v17 < 0 )
  {
    _InterlockedAnd((volatile signed __int32 *)(v5 + 3476), 0xFFFFFFFE);
    IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(v5 + 152), BusRelations);
  }
LABEL_47:
  ExReleaseResourceLite(v13);
  KeLeaveCriticalRegion();
  if ( *(_BYTE *)(v5 + 483) )
    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v5 + 24) + 64LL) + 3912LL));
LABEL_51:
  ExReleaseResourceLite(*(PERESOURCE *)(v5 + 168));
  KeLeaveCriticalRegion();
  return (unsigned int)v17;
}
