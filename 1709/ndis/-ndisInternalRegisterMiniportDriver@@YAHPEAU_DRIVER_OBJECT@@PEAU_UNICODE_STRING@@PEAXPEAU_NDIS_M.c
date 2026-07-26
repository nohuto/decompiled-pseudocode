/*
 * XREFs of ?ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAPEAX@Z @ 0x1C001BCB0
 * Callers:
 *     NdisMRegisterMiniportDriver @ 0x1C00C37D0 (NdisMRegisterMiniportDriver.c)
 *     NdisWdfRegisterMiniportDriver @ 0x1C00EA120 (NdisWdfRegisterMiniportDriver.c)
 * Callees:
 *     ??_G_NDIS_M_DRIVER_BLOCK@@QEAAPEAXI@Z @ 0x1C00016B0 (--_G_NDIS_M_DRIVER_BLOCK@@QEAAPEAXI@Z.c)
 *     ndisDereferenceDriver @ 0x1C00016D8 (ndisDereferenceDriver.c)
 *     memmove @ 0x1C0024F40 (memmove.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     McTemplateK0qqq @ 0x1C00401C4 (McTemplateK0qqq.c)
 *     ndisDereferencePackage @ 0x1C00B837C (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C00B83A0 (ndisReferencePackage.c)
 *     ndisInitializeRef @ 0x1C00BE130 (ndisInitializeRef.c)
 *     ndisQueryDriverImageName @ 0x1C00BF2A0 (ndisQueryDriverImageName.c)
 *     ndisValidateMiniportDriverCharacteristicsHeader @ 0x1C00BF494 (ndisValidateMiniportDriverCharacteristicsHeader.c)
 *     ndisWriteDriverNDISVersionToServiceKey @ 0x1C00BF9A4 (ndisWriteDriverNDISVersionToServiceKey.c)
 *     ndisMInvokeSetOptions @ 0x1C00C37F0 (ndisMInvokeSetOptions.c)
 *     ndisGetServiceNameFromRegPath @ 0x1C00C3850 (ndisGetServiceNameFromRegPath.c)
 *     ndisInitializeNsi @ 0x1C00C8994 (ndisInitializeNsi.c)
 */

__int64 __fastcall ndisInternalRegisterMiniportDriver(
        struct _DRIVER_OBJECT *Arg2,
        struct _UNICODE_STRING *a2,
        void *a3,
        struct _NDIS_MINIPORT_DRIVER_CHARACTERISTICS *a4,
        void **a5)
{
  _NDIS_M_DRIVER_BLOCK *v6; // rbx
  unsigned int v9; // edi
  unsigned int v10; // r15d
  int v11; // r13d
  _BOOL8 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rdx
  void **v15; // r14
  KIRQL v16; // di
  PVOID v17; // rcx
  struct _NDIS_M_DRIVER_BLOCK *v19; // rax
  unsigned int v20; // [rsp+30h] [rbp-10h] BYREF
  _DWORD Size[3]; // [rsp+34h] [rbp-Ch] BYREF
  int v22; // [rsp+80h] [rbp+40h] BYREF
  void *v23; // [rsp+90h] [rbp+50h]

  v23 = a3;
  v6 = 0LL;
  memset(Size, 0, sizeof(Size));
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(97LL, &WPP_94bf37800e1134dcb4e413b6850d45c3_Traceguids, Arg2);
  if ( !ndisNsiInitialized )
    ndisInitializeNsi();
  if ( !Arg2 )
  {
    v9 = -1073741823;
    goto LABEL_39;
  }
  v20 = 0;
  v22 = 0;
  v9 = ndisValidateMiniportDriverCharacteristicsHeader(
         (_DWORD)a4,
         (int)Arg2 + 56,
         (unsigned int)&v20,
         (unsigned int)&v22,
         (__int64)Size);
  if ( v9 )
    goto LABEL_39;
  if ( !a4->InitializeHandlerEx
    || !a4->HaltHandlerEx
    || !a4->UnloadHandler && (a4->Flags & 0x10) == 0
    || !a4->PauseHandler
    || !a4->RestartHandler
    || !a4->SendNetBufferListsHandler
    || !a4->ReturnNetBufferListsHandler
    || !a4->CancelSendHandler
    || !a4->DevicePnPEventNotifyHandler
    || !a4->ShutdownHandlerEx
    || !a4->CancelOidRequestHandler )
  {
    v9 = -1073676283;
LABEL_45:
    if ( v6 )
      _NDIS_M_DRIVER_BLOCK::`scalar deleting destructor'(v6);
    goto LABEL_39;
  }
  v10 = v20;
  v11 = v22;
  if ( v20 <= 6 && (v20 != 6 || !v22)
    || (v12 = a4->CancelDirectOidRequestHandler == 0LL, v12 == (a4->DirectOidRequestHandler == 0LL)) )
  {
    v13 = 1313425732LL;
    if ( (a4->Flags & 1) == 0 )
      v13 = 1313687876LL;
    if ( IoAllocateDriverObjectExtension(Arg2, (PVOID)v13, a2->Length + 1194, (PVOID *)&Size[1]) < 0 )
    {
      v9 = -1073741670;
      goto LABEL_39;
    }
    v6 = *(_NDIS_M_DRIVER_BLOCK **)&Size[1];
    if ( *(_QWORD *)&Size[1] )
    {
      *(_QWORD *)(*(_QWORD *)&Size[1] + 352LL) = 0LL;
      v6->HookRegistered = 0;
      memset(v6, 0, sizeof(_NDIS_M_DRIVER_BLOCK));
      v6->Header = (_NDIS_OBJECT_HEADER)78119170;
    }
    v6->MiniportDriverContext = v23;
    v6->ServiceRegPath.Buffer = (wchar_t *)&v6[1].Header.Type;
    v6->MajorNdisVersion = v10;
    v6->MinorNdisVersion = v11;
    v6->ServiceRegPath.Length = a2->Length;
    v6->ServiceRegPath.MaximumLength = a2->Length + 2;
    memmove(&v6[1], a2->Buffer, a2->Length);
    ndisGetServiceNameFromRegPath(&v6->ServiceRegPath, &v6->ServiceName);
    if ( (a4->Flags & 1) != 0 )
    {
      v6->Flags |= 1u;
      KeInitializeMutex(&v6->IMStartRemoveMutex, 0xFFFFu);
    }
    if ( (a4->Flags & 4) != 0 )
      v6->Flags |= 0x20u;
    memmove(&v6->112, a4, Size[0]);
    v6->MiniportDriverCharacteristics.MajorNdisVersion = v10;
    v6->MiniportDriverCharacteristics.MinorNdisVersion = v11;
    if ( (a4->Flags & 0x10) != 0 )
      v6->Flags |= 0x40u;
    v6->DriverVersion = a4->MinorDriverVersion | (a4->MajorDriverVersion << 16);
    if ( MmIsDriverVerifying(Arg2) )
    {
      v6->Flags |= 2u;
      if ( (ndisFlags & 0x400) != 0 )
      {
        v19 = 0LL;
        if ( !ndisDriverTrackAlloc )
          v19 = v6;
        ndisDriverTrackAlloc = v19;
      }
    }
    v6->MiniportQueue = 0LL;
    if ( (a4->Flags & 0x10) == 0 )
    {
      memset64(Arg2->MajorFunction, (unsigned __int64)&ndisDummyIrpHandler, 0x1CuLL);
      Arg2->DriverExtension->AddDevice = (int (__fastcall *)(_DRIVER_OBJECT *, _DEVICE_OBJECT *))ndisWdmPnPAddDevice;
      Arg2->DriverUnload = (void (__fastcall *)(_DRIVER_OBJECT *))ndisMUnloadEx;
      Arg2->MajorFunction[0] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisCreateIrpHandler;
      Arg2->MajorFunction[14] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisDeviceControlIrpHandler;
      Arg2->MajorFunction[15] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisDeviceInternalIrpDispatch;
      Arg2->MajorFunction[2] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisCloseIrpHandler;
      Arg2->MajorFunction[27] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisPnPDispatch;
      Arg2->MajorFunction[22] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))&ndisPowerDispatch;
      Arg2->MajorFunction[23] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisWMIIrpDispatch;
    }
    KeInitializeEvent(&v6->MiniportsRemovedEvent, NotificationEvent, 0);
    v6->DriverObject = Arg2;
    v6->DeviceList.Blink = &v6->DeviceList;
    LOBYTE(v14) = 12;
    v6->DeviceList.Flink = &v6->DeviceList;
    ndisInitializeRef(&v6->Ref, v14);
    v15 = a5;
    *a5 = v6;
    v9 = ndisMInvokeSetOptions(v6);
    if ( v9 )
    {
      ndisDereferenceDriver((__int64)v6, 0);
      *v15 = 0LL;
    }
    else
    {
      if ( a4->OidRequestHandler || v6->CoOidRequestHandler )
      {
        ndisReferencePackage(&ndisPkgs);
        v16 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
        v17 = ndisDriverObject;
        v6->NextDriver = ndisMiniDriverList;
        ndisMiniDriverList = v6;
        ObfReferenceObject(v17);
        KeReleaseSpinLock(&ndisMiniDriverListLock, v16);
        ndisDereferencePackage(&ndisPkgs);
        ndisQueryDriverImageName(&v6->ServiceName, &v6->ImageName);
        ndisWriteDriverNDISVersionToServiceKey(
          v10,
          v11,
          1,
          a4->MajorDriverVersion,
          a4->MinorDriverVersion,
          (__int64)&v6->ServiceName);
        v9 = 0;
        goto LABEL_39;
      }
      ndisDereferenceDriver((__int64)v6, 0);
      v9 = -1073676283;
      *v15 = 0LL;
    }
    goto LABEL_45;
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(98LL, &WPP_94bf37800e1134dcb4e413b6850d45c3_Traceguids, Arg2);
  v9 = -1073676283;
  if ( (Microsoft_Windows_NDISEnableBits & 0x100) != 0 )
    McTemplateK0qqq(
      (PMCGEN_TRACE_CONTEXT)v12,
      &RegisterMiniportDriverFailed,
      &NDIS_PROVIDER_ID,
      0xC0010005,
      0x1932u,
      (const unsigned int)Arg2);
LABEL_39:
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(99LL, &WPP_94bf37800e1134dcb4e413b6850d45c3_Traceguids, v6);
  return v9;
}
