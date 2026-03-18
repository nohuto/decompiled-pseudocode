/*
 * XREFs of DxgkPowerOnOffMonitor @ 0x1C01FC280
 * Callers:
 *     DpiGdoDispatchInternalIoctl @ 0x1C009FB10 (DpiGdoDispatchInternalIoctl.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C0195B0C (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     ?SetDisplayStateCallback@CTTMDEVICE@@CAJ_KW4_TERMINAL_DISPLAY_STATE@@@Z @ 0x1C01D0820 (-SetDisplayStateCallback@CTTMDEVICE@@CAJ_KW4_TERMINAL_DISPLAY_STATE@@@Z.c)
 * Callees:
 *     DpiEnableD3Requests @ 0x1C0001CC0 (DpiEnableD3Requests.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C0002EA0 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000B870 (DpiCheckForOutstandingD3Requests.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C009F688 (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C009F7D8 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiFdoInvalidateChildRelations @ 0x1C01F7D20 (DpiFdoInvalidateChildRelations.c)
 *     DpiPdoSetDevicePower @ 0x1C020DAF8 (DpiPdoSetDevicePower.c)
 *     DpiPdoSetMonitorDriverInterfaceState @ 0x1C020DC04 (DpiPdoSetMonitorDriverInterfaceState.c)
 *     MonitorEnableDisableMonitor @ 0x1C022DD90 (MonitorEnableDisableMonitor.c)
 *     MonitorRemovePhysicalMonitor @ 0x1C022EE88 (MonitorRemovePhysicalMonitor.c)
 */

__int64 __fastcall DxgkPowerOnOffMonitor(
        union _LARGE_INTEGER *a1,
        int a2,
        _DWORD *a3,
        char a4,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a5)
{
  union _LARGE_INTEGER v5; // rbx
  __int64 v6; // rdi
  PVOID *v7; // r13
  __int64 v8; // r15
  bool v9; // cc
  _DWORD *v11; // r12
  __int64 v12; // rbp
  int v13; // ecx
  __int64 v14; // rax
  __int64 v15; // rcx
  char *v16; // r12
  __int64 v17; // rax
  struct _KWAIT_BLOCK *v18; // rax
  _QWORD *v19; // r13
  _QWORD *v20; // r14
  char *v21; // rbx
  _QWORD *v22; // rbp
  struct _DEVICE_OBJECT *v23; // rcx
  __int64 DeviceExtension; // rsi
  __int64 v25; // rcx
  struct _DEVICE_OBJECT *AttachedDeviceReference; // r12
  PIRP v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rax
  int v32; // ebp
  union _LARGE_INTEGER v33; // rax
  __int64 v34; // r12
  unsigned int v35; // esi
  ULONG v36; // r14d
  NTSTATUS v37; // eax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rax
  __int64 v42; // rax
  int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  _QWORD *v46; // rsi
  _QWORD *v47; // rbp
  _QWORD *v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rax
  int v52; // eax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // rax
  __int64 v57; // rax
  PVOID *v58; // rbx
  __int64 v59; // rax
  union _LARGE_INTEGER InputBuffer; // [rsp+50h] [rbp-88h] BYREF
  char *PoolWithTag; // [rsp+58h] [rbp-80h]
  PKWAIT_BLOCK WaitBlockArray; // [rsp+60h] [rbp-78h]
  union _LARGE_INTEGER Timeout; // [rsp+68h] [rbp-70h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-68h] BYREF
  struct _KEVENT Event; // [rsp+80h] [rbp-58h] BYREF

  v5 = a1[8];
  LODWORD(v6) = 0;
  WaitBlockArray = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  PoolWithTag = 0LL;
  v9 = *a3 <= 1;
  v11 = a3;
  Timeout = v5;
  v12 = (__int64)a1;
  if ( v9 )
  {
    a4 = 1;
  }
  else
  {
    DisplayLogSetMonitorPowerStage(1LL);
    LODWORD(v6) = DpiAcquireCoreSyncAccessSafe(v12, 1);
    if ( (int)v6 >= 0 )
    {
      MonitorEnableDisableMonitor(*(DXGADAPTER **)(v5.QuadPart + 3728), 1LL, (__int64)a5);
      DpiReleaseCoreSyncAccessSafe(v12, 1);
    }
    DisplayLogSetMonitorPowerStage(2147483649LL);
  }
  KeEnterCriticalRegion();
  if ( *(_BYTE *)(v5.QuadPart + 483) )
    DpiCheckForOutstandingD3Requests(v5.QuadPart);
  ExAcquireResourceSharedLite(*(PERESOURCE *)(v5.QuadPart + 168), 1u);
  v13 = *(_DWORD *)(v5.QuadPart + 236);
  if ( v13 == 2 || *(_DWORD *)(v5.QuadPart + 240) == 2 && ((v13 - 3) & 0xFFFFFFFC) == 0 && v13 != 4 )
  {
    if ( *(_BYTE *)(v5.QuadPart + 3377) && *v11 == 1 )
    {
      DisplayLogSetMonitorPowerStage(2LL);
      DpiFdoInvalidateChildRelations(v12, 6u, (__int64)a5);
      DisplayLogSetMonitorPowerStage(2147483650LL);
    }
    DisplayLogSetMonitorPowerStage(4LL);
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)(v5.QuadPart + 3168), 1u);
    if ( a4 )
    {
      v14 = *(unsigned int *)(v5.QuadPart + 3496);
      if ( (_DWORD)v14 )
      {
        PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)512, 56 * v14, 0x74727044u);
        v16 = PoolWithTag;
        if ( !PoolWithTag )
        {
          v17 = WdLogNewEntry5_WdLowResource(v15);
          *(_QWORD *)(v17 + 24) = 0LL;
          WdLogEvent5_WdLowResource(v17);
        }
        v18 = (struct _KWAIT_BLOCK *)&v16[8 * *(unsigned int *)(v5.QuadPart + 3496)];
        v11 = a3;
        WaitBlockArray = v18;
      }
    }
    v19 = (_QWORD *)(v5.QuadPart + 3328);
    v20 = *(_QWORD **)(v5.QuadPart + 3328);
    if ( v20 != (_QWORD *)(v5.QuadPart + 3328) )
    {
      v21 = PoolWithTag;
      do
      {
        v22 = v20 - 4;
        v20 = (_QWORD *)*v20;
        if ( *(_DWORD *)v22 == 1 && (a2 == -1 || *((_DWORD *)v22 + 6) == a2) )
        {
          v23 = (struct _DEVICE_OBJECT *)v22[6];
          if ( v23 )
          {
            DeviceExtension = (__int64)v23->DeviceExtension;
            AttachedDeviceReference = IoGetAttachedDeviceReference(v23);
            if ( AttachedDeviceReference )
            {
              KeInitializeEvent(&Event, NotificationEvent, 0);
              InputBuffer.LowPart = *a3;
              v27 = IoBuildDeviceIoControlRequest(
                      0x23242Fu,
                      AttachedDeviceReference,
                      &InputBuffer,
                      4u,
                      0LL,
                      0,
                      1u,
                      &Event,
                      &IoStatusBlock);
              if ( v27 )
              {
                v27->IoStatus.Status = -1073741637;
                LODWORD(v6) = IofCallDriver(AttachedDeviceReference, v27);
                if ( (_DWORD)v6 == 259 )
                {
                  KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
                  LODWORD(v6) = IoStatusBlock.Status;
                }
                if ( (int)v6 < 0 )
                {
                  KeEnterCriticalRegion();
                  if ( *(_BYTE *)(DeviceExtension + 483) )
                    DpiCheckForOutstandingD3Requests(DeviceExtension);
                  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(DeviceExtension + 168), 1u);
                  LODWORD(v6) = DpiPdoSetDevicePower(v22[6], (unsigned int)*a3, 0LL);
                  if ( *(_BYTE *)(DeviceExtension + 483) )
                    DpiEnableD3Requests(*(_QWORD *)(DeviceExtension + 24));
                  ExReleaseResourceLite(*(PERESOURCE *)(DeviceExtension + 168));
                  KeLeaveCriticalRegion();
                }
                else if ( v21 )
                {
                  ObfReferenceObject(*(PVOID *)(DeviceExtension + 24));
                  v29 = 1008LL;
                  if ( *a3 != 1 )
                    v29 = 984LL;
                  *(_QWORD *)&v21[8 * v8] = DeviceExtension + v29;
                  v8 = (unsigned int)(v8 + 1);
                }
              }
              else
              {
                LODWORD(v6) = -1073741670;
                v30 = WdLogNewEntry5_WdLowResource(v28);
                *(_QWORD *)(v30 + 24) = -1073741670LL;
                WdLogEvent5_WdLowResource(v30);
              }
              ObfDereferenceObject(AttachedDeviceReference);
            }
            else
            {
              LODWORD(v6) = -1073741823;
              v31 = WdLogNewEntry5_WdError(v25);
              *(_QWORD *)(v31 + 24) = -1073741823LL;
              WdLogEvent5_WdError(v31);
            }
            v11 = a3;
          }
          *((_DWORD *)v22 + 17) = *v11;
        }
      }
      while ( v20 != v19 );
      v5 = Timeout;
    }
    ExReleaseResourceLite((PERESOURCE)(v5.QuadPart + 3168));
    KeLeaveCriticalRegion();
    if ( *(_BYTE *)(v5.QuadPart + 483) )
      DpiEnableD3Requests(*(_QWORD *)(v5.QuadPart + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(v5.QuadPart + 168));
    KeLeaveCriticalRegion();
    v7 = (PVOID *)PoolWithTag;
    if ( (_DWORD)v8 )
    {
      v32 = 10;
      v33.QuadPart = -1000000LL * (unsigned int)v8;
      InputBuffer = v33;
      do
      {
        v34 = 0LL;
        v35 = v8;
        --v32;
        do
        {
          Timeout = v33;
          v36 = v35;
          if ( v35 > 0x40 )
            v36 = 64;
          v37 = KeWaitForMultipleObjects(v36, &v7[v34], WaitAll, Executive, 0, 0, &Timeout, WaitBlockArray);
          v6 = v37;
          if ( v37 == 258 )
          {
            if ( v32 )
            {
              v41 = WdLogNewEntry5_WdWarning(v39, v38, v40);
              *(_QWORD *)(v41 + 24) = 258LL;
              WdLogEvent5_WdWarning(v41);
            }
            else
            {
              v42 = WdLogNewEntry5_WdError(v39);
              *(_QWORD *)(v42 + 24) = 258LL;
              WdLogEvent5_WdError(v42);
            }
          }
          else if ( v37 )
          {
            DisplayLogSetMonitorPowerStage(2147483652LL);
            v51 = WdLogNewEntry5_WdError(v50);
            *(_QWORD *)(v51 + 24) = v6;
            WdLogEvent5_WdError(v51);
            goto LABEL_88;
          }
          v33 = InputBuffer;
          v34 = v36 + (unsigned int)v34;
          v35 -= v36;
        }
        while ( v35 );
      }
      while ( (_DWORD)v6 == 258 && v32 );
    }
    DisplayLogSetMonitorPowerStage(2147483652LL);
    v11 = a3;
    v12 = (__int64)a1;
  }
  else
  {
    if ( *(_BYTE *)(v5.QuadPart + 483) )
      DpiEnableD3Requests(*(_QWORD *)(v5.QuadPart + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(v5.QuadPart + 168));
    KeLeaveCriticalRegion();
  }
  if ( *v11 == 1 )
  {
    DisplayLogSetMonitorPowerStage(8LL);
    KeEnterCriticalRegion();
    if ( *(_BYTE *)(v5.QuadPart + 483) )
      DpiCheckForOutstandingD3Requests(v5.QuadPart);
    ExAcquireResourceSharedLite(*(PERESOURCE *)(v5.QuadPart + 168), 1u);
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)(v5.QuadPart + 3168), 1u);
    v43 = DpiAcquireCoreSyncAccessSafe(v12, 1);
    v6 = v43;
    if ( v43 < 0 )
    {
      v57 = WdLogNewEntry5_WdEvent(v45, v44);
      *(_QWORD *)(v57 + 24) = v6;
      WdLogEvent5_WdEvent(v57);
    }
    else
    {
      v46 = *(_QWORD **)(v5.QuadPart + 3328);
      if ( v46 != (_QWORD *)(v5.QuadPart + 3328) )
      {
        do
        {
          v47 = v46 - 4;
          v46 = (_QWORD *)*v46;
          if ( IsInternalVideoOutput(*((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)v47 + 1)) && !*((_BYTE *)v47 + 66) )
          {
            MonitorRemovePhysicalMonitor(*(DXGADAPTER **)(v5.QuadPart + 3728), *((_DWORD *)v47 + 6), 0, a5);
            v48 = (_QWORD *)v47[6];
            v49 = v48 ? v48[8] : 0LL;
            if ( v49 )
            {
              if ( *(_BYTE *)(v49 + 944) )
              {
                v52 = DpiPdoSetMonitorDriverInterfaceState(v48);
                v6 = v52;
                if ( v52 < 0 )
                {
                  v56 = WdLogNewEntry5_WdWarning(v54, v53, v55);
                  *(_QWORD *)(v56 + 24) = v6;
                  WdLogEvent5_WdWarning(v56);
                }
              }
            }
          }
        }
        while ( v46 != (_QWORD *)(v5.QuadPart + 3328) );
        v7 = (PVOID *)PoolWithTag;
        v12 = (__int64)a1;
      }
      MonitorEnableDisableMonitor(*(DXGADAPTER **)(v5.QuadPart + 3728), 0LL, (__int64)a5);
      DpiReleaseCoreSyncAccessSafe(v12, 1);
    }
    DisplayLogSetMonitorPowerStage(2147483656LL);
    ExReleaseResourceLite((PERESOURCE)(v5.QuadPart + 3168));
    KeLeaveCriticalRegion();
    if ( *(_BYTE *)(v5.QuadPart + 483) )
      DpiEnableD3Requests(*(_QWORD *)(v5.QuadPart + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(v5.QuadPart + 168));
    KeLeaveCriticalRegion();
LABEL_88:
    v11 = a3;
  }
  if ( v7 )
  {
    if ( (_DWORD)v8 )
    {
      v58 = &v7[v8];
      do
      {
        --v58;
        v59 = -984LL;
        if ( *v11 != 1 )
          v59 = -960LL;
        ObfDereferenceObject(*(PVOID *)((char *)*v58 + v59));
        LODWORD(v8) = v8 - 1;
      }
      while ( (_DWORD)v8 );
    }
    ExFreePoolWithTag(v7, 0);
  }
  return (unsigned int)v6;
}
