/*
 * XREFs of DpiFdoHandleSystemPower @ 0x1C01032E4
 * Callers:
 *     DpiFdoDispatchPower @ 0x1C01036C0 (DpiFdoDispatchPower.c)
 * Callees:
 *     DpiEnableD3Requests @ 0x1C0001278 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C00012A0 (DpiCheckForOutstandingD3Requests.c)
 *     DpiCorrectPowerAction @ 0x1C000F744 (DpiCorrectPowerAction.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     DpiFdoStopMiracastSession @ 0x1C0102E30 (DpiFdoStopMiracastSession.c)
 *     DpiDxgkDdiSetPowerState @ 0x1C010323C (DpiDxgkDdiSetPowerState.c)
 *     DpiFdoInvalidateChildRelations @ 0x1C0112120 (DpiFdoInvalidateChildRelations.c)
 *     DpiAcquirePostDisplayInfoFromBgfx @ 0x1C011BF88 (DpiAcquirePostDisplayInfoFromBgfx.c)
 */

NTSTATUS __fastcall DpiFdoHandleSystemPower(PDEVICE_OBJECT DeviceObject, _QWORD *Context)
{
  char *DeviceExtension; // rsi
  __int64 v4; // r13
  char v5; // di
  struct _IO_REMOVE_LOCK *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rax
  NTSTATUS v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r14
  unsigned int v16; // eax
  __int64 v17; // rdx
  int v18; // ebx
  char v19; // di
  __int64 v20; // rcx
  NTSTATUS v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned int v28; // [rsp+34h] [rbp-B4h]
  union _LARGE_INTEGER v29; // [rsp+38h] [rbp-B0h] BYREF
  PIO_REMOVE_LOCK RemoveLock; // [rsp+40h] [rbp-A8h]
  struct _KEVENT Event; // [rsp+48h] [rbp-A0h] BYREF
  _QWORD v32[8]; // [rsp+60h] [rbp-88h] BYREF

  DeviceExtension = (char *)DeviceObject->DeviceExtension;
  v4 = Context[23];
  v5 = 0;
  if ( *(_BYTE *)(v4 + 1) != 2 )
  {
    if ( *(_BYTE *)(v4 + 1) != 3 )
    {
      ++*((_BYTE *)Context + 67);
      Context[23] = v4 + 72;
      return PoCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 20), (PIRP)Context);
    }
    if ( *(_DWORD *)(v4 + 24) != 1 )
    {
      v29.QuadPart = -300000000LL;
      DpiFdoStopMiracastSession((__int64)DeviceObject, 1, &v29, 0x83u);
    }
  }
  v7 = (struct _IO_REMOVE_LOCK *)(DeviceExtension + 64);
  RemoveLock = (PIO_REMOVE_LOCK)(DeviceExtension + 64);
  IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)DeviceExtension + 2, Context, File, 1u, 0x20u);
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v8 = Context[23];
  *(_OWORD *)(v8 - 72) = *(_OWORD *)v8;
  *(_OWORD *)(v8 - 56) = *(_OWORD *)(v8 + 16);
  *(_OWORD *)(v8 - 40) = *(_OWORD *)(v8 + 32);
  *(_QWORD *)(v8 - 24) = *(_QWORD *)(v8 + 48);
  *(_BYTE *)(v8 - 69) = 0;
  v9 = Context[23];
  *(_QWORD *)(v9 - 16) = DpiFdoPowerCompletionRoutine;
  *(_QWORD *)(v9 - 8) = &Event;
  *(_BYTE *)(v9 - 69) = -32;
  PoCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 20), (PIRP)Context);
  v10 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  v15 = v10;
  if ( v10 )
  {
    v25 = WdLogNewEntry5_WdError(v12, v11);
    *(_QWORD *)(v25 + 24) = v15;
    WdLogEvent5_WdError(v25);
  }
  else
  {
    LODWORD(v15) = *((_DWORD *)Context + 12);
    if ( (int)v15 < 0 )
    {
      v26 = WdLogNewEntry5_WdWarning(v12, v11, v13, v14);
      *(_QWORD *)(v26 + 24) = *(unsigned __int8 *)(v4 + 1);
      WdLogEvent5_WdWarning(v26);
    }
    else
    {
      KeEnterCriticalRegion();
      if ( DeviceExtension[483] )
        DpiCheckForOutstandingD3Requests((__int64)DeviceExtension);
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
      if ( *(_BYTE *)(v4 + 1) == 2 )
      {
        v16 = *(_DWORD *)(v4 + 24);
        if ( v16 > 1 )
          *((_DWORD *)DeviceExtension + 70) = v16;
      }
      v17 = *(int *)(v4 + 24);
      v18 = *(_DWORD *)&DeviceExtension[4 * v17 + 1176];
      if ( !DeviceExtension[1143] )
      {
        if ( DeviceExtension[480] )
        {
          LODWORD(v15) = 0;
          if ( *((_DWORD *)DeviceExtension + 4) == 1953656900
            && *((_DWORD *)DeviceExtension + 5) == 2
            && *((_DWORD *)DeviceExtension + 59) == 2
            && *(_BYTE *)(v4 + 1) == 2 )
          {
            v28 = *(_DWORD *)(v4 + 32);
            if ( !DeviceExtension[1139] || (v19 = 1, (unsigned int)(dword_1C006FCB0 - 4) > 1) )
              v19 = 0;
            if ( v18 == 1 )
              v28 = DpiCorrectPowerAction((__int64)DeviceObject, v17, *(_DWORD *)(v4 + 32));
            if ( v19 && v18 < *((_DWORD *)DeviceExtension + 71) && byte_1C006FCD0 )
            {
              DpiAcquirePostDisplayInfoFromBgfx(&dword_1C006FC10);
              byte_1C006FCD0 = 0;
              dword_1C006FCFC = 1;
              qword_1C006FCB8 = (__int64)KeGetCurrentThread();
              qword_1C006FCC0 = (__int64)DeviceObject;
            }
            DpiDxgkDdiSetPowerState(
              *((_QWORD *)DeviceExtension + 5),
              *((_QWORD *)DeviceExtension + 6),
              0xFFFFFFFFLL,
              v18,
              v28);
            if ( v19 )
            {
              if ( *(_DWORD *)(v4 + 24) == 5 )
              {
                byte_1C006FCD0 = 1;
                LOBYTE(v20) = 1;
                InbvNotifyDisplayOwnershipChange(v20, DpiEnterSystemDisplay);
              }
              else if ( v18 < *((_DWORD *)DeviceExtension + 71) )
              {
                memset(&dword_1C006FC10, 0, 0x20uLL);
                dword_1C006FC28 = -1;
                memset(&xmmword_1C006FC30, 0, 0x80uLL);
                qword_1C006FCC0 = 0LL;
                qword_1C006FCB8 = (__int64)KeGetCurrentThread();
              }
            }
            KeEnterCriticalRegion();
            ExAcquireResourceExclusiveLite((PERESOURCE)(DeviceExtension + 3600), 1u);
            *((_DWORD *)DeviceExtension + 71) = v18;
            ExReleaseResourceLite((PERESOURCE)(DeviceExtension + 3600));
            KeLeaveCriticalRegion();
            if ( v18 == 1 )
            {
              memset(v32, 0, sizeof(v32));
              EtwActivityIdControl(3u, (LPGUID)&v32[1]);
              v32[7] = MEMORY[0xFFFFF78000000014];
              LODWORD(v32[3]) = 11;
              DpiFdoInvalidateChildRelations(DeviceObject, 6LL, v32);
            }
            v5 = 0;
          }
          *((_DWORD *)DeviceExtension + 70) = *(_DWORD *)(v4 + 24);
        }
        else
        {
          v5 = 1;
          *(_BYTE *)(Context[23] + 3LL) |= 1u;
          v22 = PoRequestPowerIrp(
                  DeviceObject,
                  *(_BYTE *)(v4 + 1),
                  (POWER_STATE)v18,
                  (PREQUEST_POWER_COMPLETE)DpiFdoDevicePowerCompletionCallback,
                  Context,
                  0LL);
          v15 = v22;
          if ( v22 != 259 )
          {
            v27 = WdLogNewEntry5_WdError(v24, v23);
            *(_QWORD *)(v27 + 24) = v15;
            WdLogEvent5_WdError(v27);
          }
        }
      }
      if ( DeviceExtension[483] )
        DpiEnableD3Requests(*((_QWORD *)DeviceExtension + 3));
      ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
      KeLeaveCriticalRegion();
      v7 = RemoveLock;
    }
  }
  if ( (_DWORD)v15 != 259 )
  {
    PoStartNextPowerIrp((PIRP)Context);
    *((_DWORD *)Context + 12) = v15;
    IofCompleteRequest((PIRP)Context, 0);
    IoReleaseRemoveLockEx(v7, Context, 0x20u);
    if ( v5 )
      LODWORD(v15) = 259;
  }
  return v15;
}
