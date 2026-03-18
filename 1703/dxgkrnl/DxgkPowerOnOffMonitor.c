/*
 * XREFs of DxgkPowerOnOffMonitor @ 0x1C0103FE8
 * Callers:
 *     DpiGdoDispatchInternalIoctl @ 0x1C00A9E90 (DpiGdoDispatchInternalIoctl.c)
 *     ?SetDisplayStateCallback@CTTMDEVICE@@CAJ_KW4_TERMINAL_DISPLAY_STATE@@@Z @ 0x1C01B0F20 (-SetDisplayStateCallback@CTTMDEVICE@@CAJ_KW4_TERMINAL_DISPLAY_STATE@@@Z.c)
 * Callees:
 *     DpiEnableD3Requests @ 0x1C0001278 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C00012A0 (DpiCheckForOutstandingD3Requests.c)
 *     IsInternalVideoOutput @ 0x1C000CD50 (IsInternalVideoOutput.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00AA538 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00AA5B4 (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiPdoSetDevicePower @ 0x1C0102D24 (DpiPdoSetDevicePower.c)
 *     MonitorEnableDisableMonitor @ 0x1C01046BC (MonitorEnableDisableMonitor.c)
 *     DpiFdoInvalidateChildRelations @ 0x1C0112120 (DpiFdoInvalidateChildRelations.c)
 *     DpiPdoSetMonitorDriverInterfaceState @ 0x1C01CEE34 (DpiPdoSetMonitorDriverInterfaceState.c)
 *     MonitorRemovePhysicalMonitor @ 0x1C01E42D4 (MonitorRemovePhysicalMonitor.c)
 */

__int64 __fastcall DxgkPowerOnOffMonitor(
        __int64 a1,
        int a2,
        int *a3,
        char a4,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a5)
{
  union _LARGE_INTEGER v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // r15
  bool v9; // cc
  int *v10; // r12
  __int64 v11; // r13
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v12; // rbp
  int v13; // ecx
  __int64 v14; // rax
  __int64 v15; // rcx
  char *v16; // r12
  __int64 v17; // rax
  struct _KWAIT_BLOCK *v18; // rax
  _QWORD *v19; // r13
  _QWORD *v20; // r14
  _QWORD *v21; // rbx
  _QWORD *v22; // rbp
  struct _DEVICE_OBJECT *v23; // rcx
  __int64 DeviceExtension; // rsi
  __int64 v25; // rdx
  __int64 v26; // rcx
  struct _DEVICE_OBJECT *AttachedDeviceReference; // r12
  PIRP v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  int v33; // ebp
  __int64 v34; // r12
  unsigned int v35; // esi
  ULONG v36; // r14d
  NTSTATUS v37; // eax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rax
  __int64 v43; // rax
  struct _ERESOURCE *v44; // r12
  int v45; // eax
  __int64 v46; // rcx
  _QWORD *v47; // rsi
  _QWORD *v48; // rbp
  _QWORD *v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rax
  int v52; // eax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rax
  __int64 v58; // rax
  PVOID v59; // rsi
  _QWORD *v60; // rbx
  __int64 v61; // rcx
  __int64 v62; // rcx
  int InputBuffer; // [rsp+50h] [rbp-88h] BYREF
  PVOID P; // [rsp+58h] [rbp-80h]
  PKWAIT_BLOCK WaitBlockArray; // [rsp+60h] [rbp-78h]
  union _LARGE_INTEGER Timeout; // [rsp+68h] [rbp-70h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-68h] BYREF
  struct _KEVENT Event; // [rsp+80h] [rbp-58h] BYREF

  v5 = *(union _LARGE_INTEGER *)(a1 + 64);
  LODWORD(v6) = 0;
  P = 0LL;
  v7 = 0LL;
  WaitBlockArray = 0LL;
  v9 = *a3 <= 1;
  v10 = a3;
  Timeout = v5;
  v11 = a1;
  if ( v9 )
  {
    v12 = a5;
    a4 = 1;
  }
  else
  {
    v12 = a5;
    LODWORD(v6) = DpiAcquireCoreSyncAccessSafe(a1, 1);
    if ( (int)v6 >= 0 )
    {
      MonitorEnableDisableMonitor(*(DXGADAPTER **)(v5.QuadPart + 3704), 1LL, (__int64)a5);
      DpiReleaseCoreSyncAccessSafe(v11, 1);
    }
  }
  KeEnterCriticalRegion();
  if ( *(_BYTE *)(v5.QuadPart + 483) )
    DpiCheckForOutstandingD3Requests(v5.QuadPart);
  ExAcquireResourceSharedLite(*(PERESOURCE *)(v5.QuadPart + 168), 1u);
  v13 = *(_DWORD *)(v5.QuadPart + 236);
  if ( v13 == 2 || *(_DWORD *)(v5.QuadPart + 240) == 2 && ((v13 - 3) & 0xFFFFFFFC) == 0 && v13 != 4 )
  {
    if ( *(_BYTE *)(v5.QuadPart + 3353) && *v10 == 1 )
      DpiFdoInvalidateChildRelations(v11, 6LL, v12);
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)(v5.QuadPart + 3144), 1u);
    if ( a4 )
    {
      v14 = *(unsigned int *)(v5.QuadPart + 3472);
      if ( (_DWORD)v14 )
      {
        P = ExAllocatePoolWithTag((POOL_TYPE)512, 56 * v14, 0x74727044u);
        v16 = (char *)P;
        if ( !P )
        {
          v17 = WdLogNewEntry5_WdLowResource(v15);
          *(_QWORD *)(v17 + 24) = 0LL;
          WdLogEvent5_WdLowResource(v17);
        }
        v18 = (struct _KWAIT_BLOCK *)&v16[8 * *(unsigned int *)(v5.QuadPart + 3472)];
        v10 = a3;
        WaitBlockArray = v18;
      }
    }
    v19 = (_QWORD *)(v5.QuadPart + 3304);
    v20 = *(_QWORD **)(v5.QuadPart + 3304);
    if ( v20 != (_QWORD *)(v5.QuadPart + 3304) )
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
              InputBuffer = *a3;
              v28 = IoBuildDeviceIoControlRequest(
                      0x23242Fu,
                      AttachedDeviceReference,
                      &InputBuffer,
                      4u,
                      0LL,
                      0,
                      1u,
                      &Event,
                      &IoStatusBlock);
              if ( v28 )
              {
                v28->IoStatus.Status = -1073741637;
                LODWORD(v6) = IofCallDriver(AttachedDeviceReference, v28);
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
                  v30 = 984LL;
                  if ( *a3 == 1 )
                    v30 = 1008LL;
                  v21[v7] = v30 + DeviceExtension;
                  v7 = (unsigned int)(v7 + 1);
                }
              }
              else
              {
                LODWORD(v6) = -1073741670;
                v31 = WdLogNewEntry5_WdLowResource(v29);
                *(_QWORD *)(v31 + 24) = -1073741670LL;
                WdLogEvent5_WdLowResource(v31);
              }
              ObfDereferenceObject(AttachedDeviceReference);
            }
            else
            {
              LODWORD(v6) = -1073741823;
              v32 = WdLogNewEntry5_WdError(v26, v25);
              *(_QWORD *)(v32 + 24) = -1073741823LL;
              WdLogEvent5_WdError(v32);
            }
            v10 = a3;
          }
          *((_DWORD *)v22 + 17) = *v10;
        }
      }
      while ( v20 != v19 );
      v5 = Timeout;
    }
    ExReleaseResourceLite((PERESOURCE)(v5.QuadPart + 3144));
    KeLeaveCriticalRegion();
    if ( *(_BYTE *)(v5.QuadPart + 483) )
      DpiEnableD3Requests(*(_QWORD *)(v5.QuadPart + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(v5.QuadPart + 168));
    KeLeaveCriticalRegion();
    if ( (_DWORD)v7 )
    {
      v33 = 10;
      do
      {
        v34 = 0LL;
        v35 = v7;
        --v33;
        do
        {
          v36 = v35;
          Timeout.QuadPart = -1000000LL * (unsigned int)v7;
          if ( v35 > 0x40 )
            v36 = 64;
          v37 = KeWaitForMultipleObjects(v36, (PVOID *)P + v34, WaitAll, Executive, 0, 0, &Timeout, WaitBlockArray);
          v6 = v37;
          if ( v37 == 258 )
          {
            if ( v33 )
            {
              v42 = WdLogNewEntry5_WdWarning(v39, v38, v40, v41);
              *(_QWORD *)(v42 + 24) = 258LL;
              WdLogEvent5_WdWarning(v42);
            }
            else
            {
              v43 = WdLogNewEntry5_WdError(v39, v38);
              *(_QWORD *)(v43 + 24) = 258LL;
              WdLogEvent5_WdError(v43);
            }
          }
          else if ( v37 )
          {
            v51 = WdLogNewEntry5_WdError(v39, v38);
            *(_QWORD *)(v51 + 24) = v6;
            WdLogEvent5_WdError(v51);
            goto LABEL_88;
          }
          v34 = v36 + (unsigned int)v34;
          v35 -= v36;
        }
        while ( v35 );
      }
      while ( (_DWORD)v6 == 258 && v33 );
    }
    v10 = a3;
    v11 = a1;
  }
  else
  {
    if ( *(_BYTE *)(v5.QuadPart + 483) )
      DpiEnableD3Requests(*(_QWORD *)(v5.QuadPart + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(v5.QuadPart + 168));
    KeLeaveCriticalRegion();
  }
  if ( *v10 == 1 )
  {
    KeEnterCriticalRegion();
    if ( *(_BYTE *)(v5.QuadPart + 483) )
      DpiCheckForOutstandingD3Requests(v5.QuadPart);
    ExAcquireResourceSharedLite(*(PERESOURCE *)(v5.QuadPart + 168), 1u);
    KeEnterCriticalRegion();
    v44 = (struct _ERESOURCE *)(v5.QuadPart + 3144);
    ExAcquireResourceSharedLite((PERESOURCE)(v5.QuadPart + 3144), 1u);
    v45 = DpiAcquireCoreSyncAccessSafe(v11, 1);
    v6 = v45;
    if ( v45 < 0 )
    {
      v58 = WdLogNewEntry5_WdEvent(v46);
      *(_QWORD *)(v58 + 24) = v6;
      WdLogEvent5_WdEvent(v58);
    }
    else
    {
      v47 = *(_QWORD **)(v5.QuadPart + 3304);
      if ( v47 != (_QWORD *)(v5.QuadPart + 3304) )
      {
        do
        {
          v48 = v47 - 4;
          v47 = (_QWORD *)*v47;
          if ( IsInternalVideoOutput(*((_DWORD *)v48 + 1))
            && (*(_BYTE *)(v5.QuadPart + 3713) & 0x20) == 0
            && !*((_BYTE *)v48 + 66) )
          {
            MonitorRemovePhysicalMonitor(*(DXGADAPTER **)(v5.QuadPart + 3704), *((_DWORD *)v48 + 6), 0, a5);
            v49 = (_QWORD *)v48[6];
            v50 = v49 ? v49[8] : 0LL;
            if ( v50 )
            {
              if ( *(_BYTE *)(v50 + 944) )
              {
                v52 = DpiPdoSetMonitorDriverInterfaceState(v49);
                v6 = v52;
                if ( v52 < 0 )
                {
                  v57 = WdLogNewEntry5_WdWarning(v54, v53, v55, v56);
                  *(_QWORD *)(v57 + 24) = v6;
                  WdLogEvent5_WdWarning(v57);
                }
              }
            }
          }
        }
        while ( v47 != (_QWORD *)(v5.QuadPart + 3304) );
        v44 = (struct _ERESOURCE *)(v5.QuadPart + 3144);
      }
      MonitorEnableDisableMonitor(*(DXGADAPTER **)(v5.QuadPart + 3704), 0LL, (__int64)a5);
      DpiReleaseCoreSyncAccessSafe(v11, 1);
    }
    ExReleaseResourceLite(v44);
    KeLeaveCriticalRegion();
    if ( *(_BYTE *)(v5.QuadPart + 483) )
      DpiEnableD3Requests(*(_QWORD *)(v5.QuadPart + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(v5.QuadPart + 168));
    KeLeaveCriticalRegion();
LABEL_88:
    v10 = a3;
  }
  v59 = P;
  if ( P )
  {
    if ( (_DWORD)v7 )
    {
      v60 = (char *)P + 8 * v7;
      do
      {
        LODWORD(v7) = v7 - 1;
        v61 = *--v60;
        if ( *v10 == 1 )
          v62 = v61 - 1008;
        else
          v62 = v61 - 984;
        ObfDereferenceObject(*(PVOID *)(v62 + 24));
      }
      while ( (_DWORD)v7 );
      v59 = P;
    }
    ExFreePoolWithTag(v59, 0);
  }
  return (unsigned int)v6;
}
