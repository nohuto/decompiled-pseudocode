/*
 * XREFs of NdisRegisterDeviceEx @ 0x1C001D3C0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0024F40 (memmove.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     ndisDereferencePackage @ 0x1C00B837C (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C00B83A0 (ndisReferencePackage.c)
 *     WdmlibIoCreateDeviceSecure @ 0x1C00C6C4C (WdmlibIoCreateDeviceSecure.c)
 */

NDIS_STATUS __stdcall NdisRegisterDeviceEx(
        NDIS_HANDLE NdisHandle,
        PNDIS_DEVICE_OBJECT_ATTRIBUTES DeviceObjectAttributes,
        PDEVICE_OBJECT *pDeviceObject,
        PNDIS_HANDLE NdisDeviceHandle)
{
  char *DriverObjectExtension; // rbp
  char v9; // al
  struct _DRIVER_OBJECT *v10; // rdi
  _UNICODE_STRING *DeviceName; // r8
  unsigned int v12; // r13d
  const _UNICODE_STRING *DefaultSDDLString; // rax
  ULONG v14; // esi
  NTSTATUS v15; // eax
  NTSTATUS SymbolicLink; // r14d
  KSPIN_LOCK *DeviceExtension; // r12
  KSPIN_LOCK *v18; // rsi
  int (__fastcall **MajorFunctions)(_DEVICE_OBJECT *, _IRP *); // rax
  __int128 v20; // xmm0
  char *v21; // rcx
  void *v22; // rcx
  KSPIN_LOCK *v23; // rdi
  KIRQL v24; // al
  char *v25; // rbp
  KSPIN_LOCK v26; // rcx
  KSPIN_LOCK *v27; // rcx
  char *v29; // rdi
  KSPIN_LOCK v30; // rcx
  ULONG DeviceCharacteristics; // [rsp+20h] [rbp-78h]
  BOOLEAN Exclusive; // [rsp+28h] [rbp-70h]
  const GUID *v33; // [rsp+38h] [rbp-60h]
  KSPIN_LOCK *v34; // [rsp+50h] [rbp-48h]
  PDEVICE_OBJECT DeviceObject; // [rsp+A0h] [rbp+8h] BYREF
  PDEVICE_OBJECT *v36; // [rsp+B0h] [rbp+18h]
  PNDIS_HANDLE v37; // [rsp+B8h] [rbp+20h]

  v37 = NdisDeviceHandle;
  v36 = pDeviceObject;
  DriverObjectExtension = 0LL;
  v34 = 0LL;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(104LL, &WPP_94bf37800e1134dcb4e413b6850d45c3_Traceguids, NdisHandle);
  *pDeviceObject = 0LL;
  *NdisDeviceHandle = 0LL;
  v9 = *(_BYTE *)NdisHandle;
  if ( *(_BYTE *)NdisHandle == 2 )
  {
    v10 = (struct _DRIVER_OBJECT *)*((_QWORD *)NdisHandle + 5);
    DriverObjectExtension = (char *)NdisHandle;
  }
  else
  {
    switch ( v9 )
    {
      case 4:
        v10 = (struct _DRIVER_OBJECT *)*((_QWORD *)NdisHandle + 2);
        v34 = (KSPIN_LOCK *)NdisHandle;
        break;
      case 17:
        DriverObjectExtension = (char *)*((_QWORD *)NdisHandle + 473);
        v10 = (struct _DRIVER_OBJECT *)*((_QWORD *)DriverObjectExtension + 5);
        break;
      case -86:
        DriverObjectExtension = (char *)IoGetDriverObjectExtension(
                                          **((PDRIVER_OBJECT **)NdisHandle + 1),
                                          (PVOID)0x4E4D4944);
        v10 = (struct _DRIVER_OBJECT *)*((_QWORD *)DriverObjectExtension + 5);
        break;
      default:
        goto LABEL_33;
    }
  }
  if ( !v10 )
  {
LABEL_33:
    SymbolicLink = -1073741637;
    goto LABEL_17;
  }
  DeviceName = DeviceObjectAttributes->DeviceName;
  v12 = (DeviceObjectAttributes->ExtensionSize + 1) & 0xFFFFFFFE;
  DefaultSDDLString = DeviceObjectAttributes->DefaultSDDLString;
  v14 = DeviceObjectAttributes->SymbolicName->Length + DeviceName->Length + 324 + v12;
  if ( DefaultSDDLString )
    v15 = WdmlibIoCreateDeviceSecure(
            v10,
            v14,
            DeviceName,
            (ULONG)NdisDeviceHandle,
            DeviceCharacteristics,
            Exclusive,
            DefaultSDDLString,
            v33,
            &DeviceObject);
  else
    v15 = IoCreateDevice(v10, v14, DeviceName, 0x12u, 0x100u, 0, &DeviceObject);
  SymbolicLink = v15;
  if ( v15 < 0 )
    goto LABEL_17;
  DeviceObject->Flags &= ~0x80u;
  SymbolicLink = IoCreateSymbolicLink(DeviceObjectAttributes->SymbolicName, DeviceObjectAttributes->DeviceName);
  if ( SymbolicLink >= 0 )
  {
    DeviceExtension = (KSPIN_LOCK *)DeviceObject->DeviceExtension;
    memset(DeviceExtension, 0, v14);
    *(_DWORD *)DeviceExtension = 19923209;
    DeviceExtension[5] = (KSPIN_LOCK)(DeviceExtension + 40);
    v18 = DeviceExtension + 1;
    DeviceExtension[2] = (KSPIN_LOCK)(DeviceExtension + 1);
    DeviceExtension[1] = (KSPIN_LOCK)(DeviceExtension + 1);
    DeviceExtension[3] = (KSPIN_LOCK)NdisHandle;
    DeviceExtension[4] = (KSPIN_LOCK)DeviceObject;
    MajorFunctions = DeviceObjectAttributes->MajorFunctions;
    *((_OWORD *)DeviceExtension + 3) = *(_OWORD *)MajorFunctions;
    *((_OWORD *)DeviceExtension + 4) = *((_OWORD *)MajorFunctions + 1);
    *((_OWORD *)DeviceExtension + 5) = *((_OWORD *)MajorFunctions + 2);
    *((_OWORD *)DeviceExtension + 6) = *((_OWORD *)MajorFunctions + 3);
    *((_OWORD *)DeviceExtension + 7) = *((_OWORD *)MajorFunctions + 4);
    *((_OWORD *)DeviceExtension + 8) = *((_OWORD *)MajorFunctions + 5);
    *((_OWORD *)DeviceExtension + 9) = *((_OWORD *)MajorFunctions + 6);
    v20 = *((_OWORD *)MajorFunctions + 7);
    MajorFunctions += 16;
    *((_OWORD *)DeviceExtension + 10) = v20;
    *((_OWORD *)DeviceExtension + 11) = *(_OWORD *)MajorFunctions;
    *((_OWORD *)DeviceExtension + 12) = *((_OWORD *)MajorFunctions + 1);
    *((_OWORD *)DeviceExtension + 13) = *((_OWORD *)MajorFunctions + 2);
    *((_OWORD *)DeviceExtension + 14) = *((_OWORD *)MajorFunctions + 3);
    *((_OWORD *)DeviceExtension + 15) = *((_OWORD *)MajorFunctions + 4);
    DeviceExtension[32] = (KSPIN_LOCK)MajorFunctions[10];
    if ( v34 )
      memset64(v10->MajorFunction, (unsigned __int64)&ndisDummyIrpHandler, 0x1CuLL);
    v21 = (char *)DeviceExtension + v12 + 320;
    DeviceExtension[35] = (KSPIN_LOCK)v21;
    *((_WORD *)DeviceExtension + 136) = DeviceObjectAttributes->DeviceName->Length;
    *((_WORD *)DeviceExtension + 137) = DeviceObjectAttributes->DeviceName->Length + 2;
    memmove(v21, DeviceObjectAttributes->DeviceName->Buffer, DeviceObjectAttributes->DeviceName->Length);
    v22 = (void *)(DeviceExtension[35] + *((unsigned __int16 *)DeviceExtension + 137));
    DeviceExtension[37] = (KSPIN_LOCK)v22;
    *((_WORD *)DeviceExtension + 144) = DeviceObjectAttributes->SymbolicName->Length;
    *((_WORD *)DeviceExtension + 145) = DeviceObjectAttributes->SymbolicName->Length + 2;
    memmove(v22, DeviceObjectAttributes->SymbolicName->Buffer, DeviceObjectAttributes->SymbolicName->Length);
    ndisReferencePackage(&ndisPkgs);
    if ( DriverObjectExtension )
    {
      v23 = (KSPIN_LOCK *)(DriverObjectExtension + 392);
      DeviceExtension[3] = (KSPIN_LOCK)NdisHandle;
      v24 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)DriverObjectExtension + 49);
      v25 = DriverObjectExtension + 80;
      v26 = *(_QWORD *)v25;
      if ( *(char **)(*(_QWORD *)v25 + 8LL) != v25 )
        __fastfail(3u);
      *v18 = v26;
      DeviceExtension[2] = (KSPIN_LOCK)v25;
      *(_QWORD *)(v26 + 8) = v18;
      v27 = v23;
      *(_QWORD *)v25 = v18;
    }
    else
    {
      if ( !v34 )
        goto LABEL_16;
      DeviceExtension[3] = (KSPIN_LOCK)v34;
      v24 = KeAcquireSpinLockRaiseToDpc(v34 + 5);
      v29 = (char *)(v34 + 7);
      v30 = v34[7];
      if ( *(char **)(*(_QWORD *)v29 + 8LL) != v29 )
        __fastfail(3u);
      *v18 = v30;
      DeviceExtension[2] = (KSPIN_LOCK)v29;
      *(_QWORD *)(v30 + 8) = v18;
      v27 = v34 + 5;
      *(_QWORD *)v29 = v18;
    }
    KeReleaseSpinLock(v27, v24);
LABEL_16:
    ndisDereferencePackage(&ndisPkgs);
    *v36 = DeviceObject;
    *v37 = DeviceExtension;
    goto LABEL_17;
  }
  IoDeleteDevice(DeviceObject);
LABEL_17:
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qD(105LL, &WPP_94bf37800e1134dcb4e413b6850d45c3_Traceguids, NdisHandle, (unsigned int)SymbolicLink);
  return SymbolicLink;
}
