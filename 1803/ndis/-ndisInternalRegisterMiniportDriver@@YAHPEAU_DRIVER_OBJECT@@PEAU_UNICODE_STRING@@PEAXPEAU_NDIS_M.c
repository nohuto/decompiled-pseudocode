/*
 * XREFs of ?ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAPEAX@Z @ 0x1C002209C
 * Callers:
 *     NdisMRegisterMiniportDriver @ 0x1C00C8080 (NdisMRegisterMiniportDriver.c)
 *     NdisLWMRegisterMiniportDriver @ 0x1C00EB820 (NdisLWMRegisterMiniportDriver.c)
 *     NdisWdfRegisterMiniportDriver @ 0x1C00EC6A0 (NdisWdfRegisterMiniportDriver.c)
 * Callees:
 *     ??_G_NDIS_M_DRIVER_BLOCK@@QEAAPEAXI@Z @ 0x1C0011B88 (--_G_NDIS_M_DRIVER_BLOCK@@QEAAPEAXI@Z.c)
 *     ndisDereferenceDriver @ 0x1C00123AC (ndisDereferenceDriver.c)
 *     memmove @ 0x1C0025E40 (memmove.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     ndisDereferencePackage @ 0x1C00ADAEC (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C00ADB10 (ndisReferencePackage.c)
 *     ndisInitializeNsi @ 0x1C00B5974 (ndisInitializeNsi.c)
 *     ndisInitializeRef @ 0x1C00C086C (ndisInitializeRef.c)
 *     ndisQueryDriverImageName @ 0x1C00C1D2C (ndisQueryDriverImageName.c)
 *     ndisWriteDriverNDISVersionToServiceKey @ 0x1C00C1E98 (ndisWriteDriverNDISVersionToServiceKey.c)
 *     ndisValidateMiniportDriverCharacteristicsHeader @ 0x1C00C2188 (ndisValidateMiniportDriverCharacteristicsHeader.c)
 *     ndisMInvokeSetOptions @ 0x1C00C80A0 (ndisMInvokeSetOptions.c)
 *     ndisGetServiceNameFromRegPath @ 0x1C00C80FC (ndisGetServiceNameFromRegPath.c)
 *     ndisValidateMiniportDriverCharacteristicsEntryPoints @ 0x1C00C81A4 (ndisValidateMiniportDriverCharacteristicsEntryPoints.c)
 */

__int64 __fastcall ndisInternalRegisterMiniportDriver(
        struct _DRIVER_OBJECT *DriverObject,
        struct _UNICODE_STRING *a2,
        void *a3,
        struct _NDIS_MINIPORT_DRIVER_CHARACTERISTICS *a4,
        void **a5)
{
  _NDIS_M_DRIVER_BLOCK *v6; // rbx
  unsigned int v9; // r12d
  int v10; // edx
  NTSTATUS v11; // esi
  unsigned __int8 v12; // di
  ULONG v13; // r8d
  __int64 v14; // rdx
  _BYTE *v15; // rcx
  unsigned __int8 v16; // si
  unsigned int Flags; // edx
  unsigned int v18; // r13d
  unsigned int v19; // eax
  LOGICAL IsDriverVerifyingByAddress; // eax
  __int64 v21; // rdx
  void **v22; // rdi
  KIRQL v23; // di
  PVOID v24; // rcx
  int v25; // r8d
  unsigned int v27; // edi
  PVOID PoolWithTag; // rax
  struct _NDIS_M_DRIVER_BLOCK *v29; // rax
  size_t Size; // [rsp+30h] [rbp-10h] BYREF
  PVOID DriverObjectExtension; // [rsp+38h] [rbp-8h] BYREF
  unsigned int v32; // [rsp+80h] [rbp+40h] BYREF
  void *v33; // [rsp+90h] [rbp+50h]
  unsigned int v34; // [rsp+98h] [rbp+58h] BYREF

  v33 = a3;
  v6 = 0LL;
  DriverObjectExtension = 0LL;
  LODWORD(Size) = 0;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(101LL, &WPP_35a75e136a693dcd7e4be129c414b9c6_Traceguids, DriverObject);
  v9 = a4->Flags & 0x20;
  if ( !ndisNsiInitialized )
    ndisInitializeNsi();
  if ( !DriverObject && !v9 )
  {
    v11 = -1073741823;
    goto LABEL_32;
  }
  v34 = 0;
  v32 = 0;
  v10 = 0;
  if ( !v9 )
    v10 = (_DWORD)DriverObject + 56;
  v11 = ndisValidateMiniportDriverCharacteristicsHeader(
          (_DWORD)a4,
          v10,
          (unsigned int)&v34,
          (unsigned int)&v32,
          (__int64)&Size);
  if ( !v11 )
  {
    v12 = v32;
    v11 = ndisValidateMiniportDriverCharacteristicsEntryPoints(a4, DriverObject, v34, v32);
    if ( !v11 )
    {
      v13 = a2->Length + 1194;
      if ( v9 )
      {
        v27 = a2->Length + 1194;
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v13, 0x2020444Eu);
        DriverObjectExtension = PoolWithTag;
        if ( !PoolWithTag )
          v11 = -1073741670;
        memset(PoolWithTag, 0, v27);
        v12 = v32;
      }
      else
      {
        v14 = 1313425732LL;
        if ( (a4->Flags & 1) == 0 )
          v14 = 1313687876LL;
        v11 = IoAllocateDriverObjectExtension(DriverObject, (PVOID)v14, v13, &DriverObjectExtension);
      }
      if ( v11 < 0 )
      {
        v11 = -1073741670;
        goto LABEL_32;
      }
      v6 = (_NDIS_M_DRIVER_BLOCK *)DriverObjectExtension;
      v15 = DriverObjectExtension;
      *((_QWORD *)DriverObjectExtension + 44) = 0LL;
      v15[908] = 0;
      memset(v15, 0, 0x4A8uLL);
      v16 = v34;
      v6->MiniportDriverContext = v33;
      v6->ServiceRegPath.Buffer = (wchar_t *)&v6[1].Header.Type;
      v6->Header = (_NDIS_OBJECT_HEADER)78119170;
      v6->MajorNdisVersion = v16;
      v6->MinorNdisVersion = v12;
      v6->ServiceRegPath.Length = a2->Length;
      v6->ServiceRegPath.MaximumLength = a2->Length + 2;
      memmove(&v6[1], a2->Buffer, a2->Length);
      ndisGetServiceNameFromRegPath(&v6->ServiceRegPath, &v6->ServiceName);
      Flags = a4->Flags;
      if ( (Flags & 1) != 0 )
      {
        v6->Flags |= 1u;
        KeInitializeMutex(&v6->IMStartRemoveMutex, 0xFFFFu);
        Flags = a4->Flags;
      }
      if ( (Flags & 4) != 0 )
        v6->Flags |= 0x20u;
      memmove(&v6->112, a4, (unsigned int)Size);
      v18 = v32;
      v6->MiniportDriverCharacteristics.MinorNdisVersion = v32;
      v6->MiniportDriverCharacteristics.MajorNdisVersion = v16;
      v19 = a4->Flags;
      if ( (v19 & 0x10) != 0 )
      {
        v6->Flags |= 0x40u;
        v19 = a4->Flags;
      }
      if ( (v19 & 0x20) != 0 )
        v6->Flags |= 0x80u;
      v6->DriverVersion = a4->MinorDriverVersion | (a4->MajorDriverVersion << 16);
      if ( v9 )
        IsDriverVerifyingByAddress = MmIsDriverVerifyingByAddress(a4->RestartHandler);
      else
        IsDriverVerifyingByAddress = MmIsDriverVerifying(DriverObject);
      if ( IsDriverVerifyingByAddress )
      {
        v6->Flags |= 2u;
        if ( (WORD2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 0x400) != 0 )
        {
          v29 = 0LL;
          if ( !ndisDriverTrackAlloc )
            v29 = v6;
          ndisDriverTrackAlloc = v29;
        }
      }
      v6->MiniportQueue = 0LL;
      if ( (a4->Flags & 0x30) == 0 )
      {
        memset64(DriverObject->MajorFunction, (unsigned __int64)&ndisDummyIrpHandler, 0x1CuLL);
        DriverObject->DriverExtension->AddDevice = (int (__fastcall *)(_DRIVER_OBJECT *, _DEVICE_OBJECT *))ndisWdmPnPAddDevice;
        DriverObject->DriverUnload = (void (__fastcall *)(_DRIVER_OBJECT *))ndisMUnloadEx;
        DriverObject->MajorFunction[0] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisCreateIrpHandler;
        DriverObject->MajorFunction[14] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisDeviceControlIrpHandler;
        DriverObject->MajorFunction[15] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisDeviceInternalIrpDispatch;
        DriverObject->MajorFunction[2] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisCloseIrpHandler;
        DriverObject->MajorFunction[27] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisPnPDispatch;
        DriverObject->MajorFunction[22] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))&ndisPowerDispatch;
        DriverObject->MajorFunction[23] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisWMIIrpDispatch;
      }
      KeInitializeEvent(&v6->MiniportsRemovedEvent, NotificationEvent, 0);
      v6->DriverObject = DriverObject;
      v6->DeviceList.Blink = &v6->DeviceList;
      LOBYTE(v21) = 12;
      v6->DeviceList.Flink = &v6->DeviceList;
      ndisInitializeRef(&v6->Ref, v21);
      v22 = a5;
      *a5 = v6;
      v11 = ndisMInvokeSetOptions(v6);
      if ( v11 )
      {
        ndisDereferenceDriver((__int64)v6, 0);
        *v22 = 0LL;
      }
      else
      {
        if ( !a4->OidRequestHandler && !v6->CoOidRequestHandler )
        {
          ndisDereferenceDriver((__int64)v6, 0);
          *v22 = 0LL;
          v11 = -1073676283;
LABEL_49:
          _NDIS_M_DRIVER_BLOCK::`scalar deleting destructor'(v6);
          if ( v9 )
            ExFreePoolWithTag(v6, 0);
          goto LABEL_32;
        }
        ndisReferencePackage(&ndisPkgs);
        v23 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
        v24 = ndisDriverObject;
        v6->NextDriver = ndisMiniDriverList;
        ndisMiniDriverList = v6;
        ObfReferenceObject(v24);
        KeReleaseSpinLock(&ndisMiniDriverListLock, v23);
        ndisDereferencePackage(&ndisPkgs);
        ndisQueryDriverImageName(&v6->ServiceName, &v6->ImageName);
        LOBYTE(v25) = 1;
        ndisWriteDriverNDISVersionToServiceKey(
          v34,
          v18,
          v25,
          a4->MajorDriverVersion,
          a4->MinorDriverVersion,
          (__int64)&v6->ServiceName);
        v11 = 0;
      }
      if ( !v11 )
        goto LABEL_32;
      goto LABEL_49;
    }
  }
LABEL_32:
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(102LL, &WPP_35a75e136a693dcd7e4be129c414b9c6_Traceguids, v6);
  return (unsigned int)v11;
}
