/*
 * XREFs of DxgkPowerOnOffMonitor @ 0x1C0103C58
 * Callers:
 *     DpiGdoDispatchInternalIoctl @ 0x1C00B80B0 (DpiGdoDispatchInternalIoctl.c)
 *     ?SetDisplayStateCallback@CTTMDEVICE@@CAJ_KW4_TERMINAL_DISPLAY_STATE@@@Z @ 0x1C01CACE0 (-SetDisplayStateCallback@CTTMDEVICE@@CAJ_KW4_TERMINAL_DISPLAY_STATE@@@Z.c)
 * Callees:
 *     IsInternalVideoOutput @ 0x1C00083E4 (IsInternalVideoOutput.c)
 *     DpiEnableD3Requests @ 0x1C000F210 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000F314 (DpiCheckForOutstandingD3Requests.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00B8774 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00B87F0 (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiPdoSetDevicePower @ 0x1C0101AA0 (DpiPdoSetDevicePower.c)
 *     MonitorEnableDisableMonitor @ 0x1C0104184 (MonitorEnableDisableMonitor.c)
 *     DpiFdoInvalidateChildRelations @ 0x1C0118F60 (DpiFdoInvalidateChildRelations.c)
 *     DpiPdoSetMonitorDriverInterfaceState @ 0x1C01E9250 (DpiPdoSetMonitorDriverInterfaceState.c)
 *     MonitorRemovePhysicalMonitor @ 0x1C01FE948 (MonitorRemovePhysicalMonitor.c)
 */

__int64 __fastcall DxgkPowerOnOffMonitor(
        __int64 a1,
        int a2,
        int *a3,
        char a4,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *OutputBufferLength)
{
  union _LARGE_INTEGER v5; // rbx
  __int64 v6; // rdi
  PVOID *v7; // r13
  __int64 v8; // r14
  bool v9; // cc
  int *v11; // r12
  __int64 v12; // rbp
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v13; // r15
  int v14; // ecx
  __int64 v15; // rax
  __int64 v16; // rcx
  char *v17; // r12
  struct _KWAIT_BLOCK *v18; // rax
  _QWORD *v19; // r13
  _QWORD *v20; // r15
  _QWORD *v21; // rbx
  _QWORD *v22; // rbp
  struct _DEVICE_OBJECT *v23; // rcx
  int v24; // ebp
  union _LARGE_INTEGER v25; // rax
  __int64 v26; // r12
  unsigned int v27; // esi
  ULONG v28; // r15d
  NTSTATUS v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  _QWORD *v38; // rsi
  _QWORD *v39; // rbp
  PVOID *v40; // rbx
  __int64 v41; // rcx
  PVOID *v42; // rcx
  __int64 DeviceExtension; // rsi
  __int64 v44; // rcx
  struct _DEVICE_OBJECT *AttachedDeviceReference; // r12
  PIRP v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rcx
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  _QWORD *v56; // rcx
  __int64 v57; // rax
  int v58; // eax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // rax
  __int64 v63; // rax
  union _LARGE_INTEGER InputBuffer; // [rsp+50h] [rbp-88h] BYREF
  PVOID P; // [rsp+58h] [rbp-80h]
  PKWAIT_BLOCK WaitBlockArray; // [rsp+60h] [rbp-78h]
  union _LARGE_INTEGER Timeout; // [rsp+68h] [rbp-70h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-68h] BYREF
  struct _KEVENT Event; // [rsp+80h] [rbp-58h] BYREF

  v5 = *(union _LARGE_INTEGER *)(a1 + 64);
  LODWORD(v6) = 0;
  WaitBlockArray = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  P = 0LL;
  v9 = *a3 <= 1;
  v11 = a3;
  Timeout = v5;
  v12 = a1;
  if ( v9 )
  {
    v13 = OutputBufferLength;
    a4 = 1;
  }
  else
  {
    v13 = OutputBufferLength;
    LODWORD(v6) = DpiAcquireCoreSyncAccessSafe(a1, 1);
    if ( (int)v6 >= 0 )
    {
      MonitorEnableDisableMonitor(*(DXGADAPTER **)(v5.QuadPart + 3728), 1LL, (__int64)OutputBufferLength);
      DpiReleaseCoreSyncAccessSafe(v12, 1);
    }
  }
  KeEnterCriticalRegion();
  if ( *(_BYTE *)(v5.QuadPart + 483) )
    DpiCheckForOutstandingD3Requests(v5.QuadPart);
  ExAcquireResourceSharedLite(*(PERESOURCE *)(v5.QuadPart + 168), 1u);
  v14 = *(_DWORD *)(v5.QuadPart + 236);
  if ( v14 == 2 || *(_DWORD *)(v5.QuadPart + 240) == 2 && ((v14 - 3) & 0xFFFFFFFC) == 0 && v14 != 4 )
  {
    if ( *(_BYTE *)(v5.QuadPart + 3377) && *v11 == 1 )
      DpiFdoInvalidateChildRelations(v12, 6LL, v13);
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)(v5.QuadPart + 3168), 1u);
    if ( a4 )
    {
      v15 = *(unsigned int *)(v5.QuadPart + 3496);
      if ( (_DWORD)v15 )
      {
        P = ExAllocatePoolWithTag((POOL_TYPE)512, 56 * v15, 0x74727044u);
        v17 = (char *)P;
        if ( !P )
        {
          v50 = WdLogNewEntry5_WdLowResource(v16);
          *(_QWORD *)(v50 + 24) = 0LL;
          WdLogEvent5_WdLowResource(v50);
        }
        v18 = (struct _KWAIT_BLOCK *)&v17[8 * *(unsigned int *)(v5.QuadPart + 3496)];
        v11 = a3;
        WaitBlockArray = v18;
      }
    }
    v19 = (_QWORD *)(v5.QuadPart + 3328);
    v20 = *(_QWORD **)(v5.QuadPart + 3328);
    if ( v20 != (_QWORD *)(v5.QuadPart + 3328) )
    {
      v21 = P;
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
              v46 = IoBuildDeviceIoControlRequest(
                      0x23242Fu,
                      AttachedDeviceReference,
                      &InputBuffer,
                      4u,
                      0LL,
                      0,
                      1u,
                      &Event,
                      &IoStatusBlock);
              if ( v46 )
              {
                v46->IoStatus.Status = -1073741637;
                LODWORD(v6) = IofCallDriver(AttachedDeviceReference, v46);
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
                  LODWORD(v6) = DpiPdoSetDevicePower(v22[6], *a3, 0);
                  if ( *(_BYTE *)(DeviceExtension + 483) )
                    DpiEnableD3Requests(*(_QWORD *)(DeviceExtension + 24));
                  ExReleaseResourceLite(*(PERESOURCE *)(DeviceExtension + 168));
                  KeLeaveCriticalRegion();
                }
                else if ( v21 )
                {
                  ObfReferenceObject(*(PVOID *)(DeviceExtension + 24));
                  v48 = 1008LL;
                  if ( *a3 != 1 )
                    v48 = 984LL;
                  v21[v8] = DeviceExtension + v48;
                  v8 = (unsigned int)(v8 + 1);
                }
              }
              else
              {
                LODWORD(v6) = -1073741670;
                v51 = WdLogNewEntry5_WdLowResource(v47);
                *(_QWORD *)(v51 + 24) = -1073741670LL;
                WdLogEvent5_WdLowResource(v51);
              }
              ObfDereferenceObject(AttachedDeviceReference);
            }
            else
            {
              LODWORD(v6) = -1073741823;
              v52 = WdLogNewEntry5_WdError(v44);
              *(_QWORD *)(v52 + 24) = -1073741823LL;
              WdLogEvent5_WdError(v52);
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
    v7 = (PVOID *)P;
    if ( (_DWORD)v8 )
    {
      v24 = 10;
      v25.QuadPart = -1000000LL * (unsigned int)v8;
      InputBuffer = v25;
      do
      {
        v26 = 0LL;
        v27 = v8;
        --v24;
        do
        {
          Timeout = v25;
          v28 = v27;
          if ( v27 > 0x40 )
            v28 = 64;
          v29 = KeWaitForMultipleObjects(v28, &v7[v26], WaitAll, Executive, 0, 0, &Timeout, WaitBlockArray);
          v6 = v29;
          if ( v29 == 258 )
          {
            if ( v24 )
            {
              v53 = WdLogNewEntry5_WdWarning(v31, v30, v32);
              *(_QWORD *)(v53 + 24) = 258LL;
              WdLogEvent5_WdWarning(v53);
            }
            else
            {
              v54 = WdLogNewEntry5_WdError(v31);
              *(_QWORD *)(v54 + 24) = 258LL;
              WdLogEvent5_WdError(v54);
            }
          }
          else if ( v29 )
          {
            v55 = WdLogNewEntry5_WdError(v31);
            *(_QWORD *)(v55 + 24) = v6;
            WdLogEvent5_WdError(v55);
            goto LABEL_45;
          }
          v25 = InputBuffer;
          v26 = v28 + (unsigned int)v26;
          v27 -= v28;
        }
        while ( v27 );
      }
      while ( (_DWORD)v6 == 258 && v24 );
    }
    v11 = a3;
    v12 = a1;
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
    KeEnterCriticalRegion();
    if ( *(_BYTE *)(v5.QuadPart + 483) )
      DpiCheckForOutstandingD3Requests(v5.QuadPart);
    ExAcquireResourceSharedLite(*(PERESOURCE *)(v5.QuadPart + 168), 1u);
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)(v5.QuadPart + 3168), 1u);
    v33 = DpiAcquireCoreSyncAccessSafe(v12, 1);
    v6 = v33;
    if ( v33 < 0 )
    {
      v63 = WdLogNewEntry5_WdEvent(v35, v34, v36, v37);
      *(_QWORD *)(v63 + 24) = v6;
      WdLogEvent5_WdEvent(v63);
    }
    else
    {
      v38 = *(_QWORD **)(v5.QuadPart + 3328);
      if ( v38 != (_QWORD *)(v5.QuadPart + 3328) )
      {
        do
        {
          v39 = v38 - 4;
          v38 = (_QWORD *)*v38;
          if ( IsInternalVideoOutput(*((_DWORD *)v39 + 1)) && !*((_BYTE *)v39 + 66) )
          {
            MonitorRemovePhysicalMonitor(
              *(DXGADAPTER **)(v5.QuadPart + 3728),
              *((_DWORD *)v39 + 6),
              0,
              OutputBufferLength);
            v56 = (_QWORD *)v39[6];
            v57 = v56 ? v56[8] : 0LL;
            if ( v57 )
            {
              if ( *(_BYTE *)(v57 + 944) )
              {
                v58 = DpiPdoSetMonitorDriverInterfaceState(v56);
                v6 = v58;
                if ( v58 < 0 )
                {
                  v62 = WdLogNewEntry5_WdWarning(v60, v59, v61);
                  *(_QWORD *)(v62 + 24) = v6;
                  WdLogEvent5_WdWarning(v62);
                }
              }
            }
          }
        }
        while ( v38 != (_QWORD *)(v5.QuadPart + 3328) );
        v7 = (PVOID *)P;
        v12 = a1;
      }
      MonitorEnableDisableMonitor(*(DXGADAPTER **)(v5.QuadPart + 3728), 0LL, (__int64)OutputBufferLength);
      DpiReleaseCoreSyncAccessSafe(v12, 1);
    }
    ExReleaseResourceLite((PERESOURCE)(v5.QuadPart + 3168));
    KeLeaveCriticalRegion();
    if ( *(_BYTE *)(v5.QuadPart + 483) )
      DpiEnableD3Requests(*(_QWORD *)(v5.QuadPart + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(v5.QuadPart + 168));
    KeLeaveCriticalRegion();
LABEL_45:
    v11 = a3;
  }
  if ( v7 )
  {
    if ( (_DWORD)v8 )
    {
      v40 = &v7[v8];
      do
      {
        LODWORD(v8) = v8 - 1;
        v41 = (__int64)*--v40;
        if ( *v11 == 1 )
          v42 = (PVOID *)(v41 - 984);
        else
          v42 = (PVOID *)(v41 - 960);
        ObfDereferenceObject(*v42);
      }
      while ( (_DWORD)v8 );
      v7 = (PVOID *)P;
    }
    ExFreePoolWithTag(v7, 0);
  }
  return (unsigned int)v6;
}
