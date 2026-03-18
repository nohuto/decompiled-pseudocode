/*
 * XREFs of ACPIThermalStartDevice @ 0x1C0092740
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDeviceInternalDeviceRequest @ 0x1C0001E68 (ACPIDeviceInternalDeviceRequest.c)
 *     AMLIGetNamedChild @ 0x1C0003F20 (AMLIGetNamedChild.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C0004AB0 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qqss @ 0x1C00055B0 (WPP_RECORDER_SF_qqss.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0006AC0 (WPP_RECORDER_SF_Lqss.c)
 *     AMLIFreeDataBuffs @ 0x1C0023374 (AMLIFreeDataBuffs.c)
 *     ACPIThermalLoopEx @ 0x1C002408C (ACPIThermalLoopEx.c)
 *     ACPIThermalGetSensorDevice @ 0x1C0025510 (ACPIThermalGetSensorDevice.c)
 *     ACPIRegisterForDeviceNotifications @ 0x1C0025620 (ACPIRegisterForDeviceNotifications.c)
 *     ACPIInternalSetDeviceInterface @ 0x1C00258BC (ACPIInternalSetDeviceInterface.c)
 *     __security_check_cookie @ 0x1C002BC10 (__security_check_cookie.c)
 *     memset @ 0x1C002C4C0 (memset.c)
 *     ACPIAmliEvaluateDsm @ 0x1C0085DFC (ACPIAmliEvaluateDsm.c)
 */

__int64 __fastcall ACPIThermalStartDevice(PDEVICE_OBJECT PhysicalDeviceObject, PIRP Irp)
{
  const char *v4; // rbp
  __int64 DeviceExtension; // rbx
  const char *v6; // rdx
  const char *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 *v10; // rcx
  int SensorDevice; // edi
  PDEVICE_OBJECT AttachedDeviceReference; // rax
  PIRP v13; // rax
  PVOID PoolWithTag; // rax
  _QWORD *v15; // rdi
  struct _DEVICE_OBJECT *v16; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  const char *v20; // rax
  unsigned __int16 v21; // r9
  void *v22; // rcx
  IRP *v23; // rcx
  void *v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // [rsp+50h] [rbp-98h] BYREF
  __int128 v27; // [rsp+60h] [rbp-88h] BYREF
  _BYTE v28[48]; // [rsp+70h] [rbp-78h] BYREF

  v4 = byte_1C0067B08;
  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)PhysicalDeviceObject);
  v6 = byte_1C0067B08;
  *(_DWORD *)(*(_QWORD *)(DeviceExtension + 200) + 96LL) = 100;
  v7 = byte_1C0067B08;
  *(_DWORD *)(DeviceExtension + 192) |= 0x8000000u;
  v8 = *(_QWORD *)(DeviceExtension + 8);
  if ( (v8 & 0x200000000000LL) != 0 )
  {
    v6 = *(const char **)(DeviceExtension + 560);
    if ( (v8 & 0x400000000000LL) != 0 )
      v7 = *(const char **)(DeviceExtension + 568);
  }
  WPP_RECORDER_SF_qqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    5u,
    0x14u,
    (__int64)&WPP_d1d96fc3929a3241f74feef30092b158_Traceguids,
    (char)Irp,
    DeviceExtension,
    v6,
    v7);
  v9 = *(_QWORD *)(DeviceExtension + 200);
  KeClearEvent((PRKEVENT)(v9 + 280));
  *(_QWORD *)(v9 + 112) = AMLIGetNamedChild(*(__int64 **)(DeviceExtension + 712), 1347245151);
  v26 = 0LL;
  memset(v28, 0, sizeof(v28));
  v10 = *(__int64 **)(DeviceExtension + 712);
  v27 = THRM_EXTENSIONS_DSM_UUID;
  if ( (int)ACPIAmliEvaluateDsm(v10, (__int64)&v27, 0, 0, (__int64)v28, &v26) >= 0 )
  {
    v18 = v26;
    if ( *(_WORD *)(v26 + 2) == 3 && *(_DWORD *)(v26 + 24) )
      *(_DWORD *)(v9 + 128) = **(unsigned __int8 **)(v26 + 32);
    AMLIFreeDataBuffs(v18);
  }
  else
  {
    *(_DWORD *)(v9 + 128) = 0;
  }
  SensorDevice = ACPIInternalSetDeviceInterface(PhysicalDeviceObject, &GUID_DEVICE_THERMAL_ZONE);
  if ( SensorDevice < 0 )
  {
    v19 = *(_QWORD *)(DeviceExtension + 8);
    v20 = byte_1C0067B08;
    if ( (v19 & 0x200000000000LL) != 0 )
    {
      v4 = *(const char **)(DeviceExtension + 560);
      if ( (v19 & 0x400000000000LL) != 0 )
        v20 = *(const char **)(DeviceExtension + 568);
    }
    v21 = 21;
    goto LABEL_25;
  }
  AttachedDeviceReference = IoGetAttachedDeviceReference(*(PDEVICE_OBJECT *)(DeviceExtension + 720));
  *(_QWORD *)(v9 + 200) = AttachedDeviceReference;
  v13 = IoAllocateIrp(AttachedDeviceReference->StackSize, 0);
  *(_QWORD *)(v9 + 192) = v13;
  if ( v13
    && (ACPIRegisterForDeviceNotifications(
          *(_QWORD *)(DeviceExtension + 720),
          (__int64)ACPIThermalEvent,
          *(_QWORD *)(DeviceExtension + 720)),
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x40uLL, 0x54706341u),
        (v15 = PoolWithTag) != 0LL) )
  {
    memset(PoolWithTag, 0, 0x40uLL);
    *(_DWORD *)v15 = 1;
    v15[1] = &ACPIThermalGuidList;
    v15[2] = ACPIThermalQueryWmiRegInfo;
    v15[3] = ACPIThermalQueryWmiDataBlock;
    v16 = *(struct _DEVICE_OBJECT **)(DeviceExtension + 720);
    *(_QWORD *)(DeviceExtension + 224) = v15;
    SensorDevice = IoWMIRegistrationControl(v16, 1u);
    if ( SensorDevice >= 0 )
    {
      SensorDevice = ACPIThermalGetSensorDevice((_QWORD *)DeviceExtension);
      if ( SensorDevice >= 0 )
      {
        *(_DWORD *)(DeviceExtension + 320) = 2;
        SensorDevice = ACPIDeviceInternalDeviceRequest((_QWORD *)DeviceExtension, 1u, 0LL, 0LL, 0);
        if ( SensorDevice == 259 )
          SensorDevice = 0;
        ACPIThermalLoopEx(DeviceExtension, 0x8000000, 0x10000000);
LABEL_14:
        if ( SensorDevice >= 0 )
          goto LABEL_15;
        goto LABEL_27;
      }
      IoWMIRegistrationControl(*(PDEVICE_OBJECT *)(DeviceExtension + 720), 2u);
      v25 = *(_QWORD *)(DeviceExtension + 8);
      v20 = byte_1C0067B08;
      if ( (v25 & 0x200000000000LL) != 0 )
      {
        v4 = *(const char **)(DeviceExtension + 560);
        if ( (v25 & 0x400000000000LL) != 0 )
          v20 = *(const char **)(DeviceExtension + 568);
      }
      v21 = 22;
LABEL_25:
      WPP_RECORDER_SF_Lqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x15u,
        v21,
        (__int64)&WPP_d1d96fc3929a3241f74feef30092b158_Traceguids,
        SensorDevice,
        DeviceExtension,
        v4,
        v20);
      goto LABEL_14;
    }
  }
  else
  {
    SensorDevice = -1073741670;
  }
LABEL_27:
  v22 = *(void **)(v9 + 200);
  if ( v22 )
  {
    ObfDereferenceObject(v22);
    *(_QWORD *)(v9 + 200) = 0LL;
  }
  v23 = *(IRP **)(v9 + 192);
  if ( v23 )
  {
    IoFreeIrp(v23);
    *(_QWORD *)(v9 + 192) = 0LL;
  }
  v24 = *(void **)(DeviceExtension + 224);
  if ( v24 )
  {
    ExFreePoolWithTag(v24, 0x54706341u);
    *(_QWORD *)(DeviceExtension + 224) = 0LL;
  }
  KeSetEvent((PRKEVENT)(v9 + 280), 0, 0);
LABEL_15:
  Irp->IoStatus.Status = SensorDevice;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)SensorDevice;
}
