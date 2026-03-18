/*
 * XREFs of ACPIThermalGetSensorDevice @ 0x1C0022BA8
 * Callers:
 *     ACPIThermalStartDevice @ 0x1C00919A0 (ACPIThermalStartDevice.c)
 * Callees:
 *     AMLIEvalNameSpaceObject @ 0x1C0002820 (AMLIEvalNameSpaceObject.c)
 *     ACPIInternalDecrementIrpReferenceCount @ 0x1C0009BF4 (ACPIInternalDecrementIrpReferenceCount.c)
 *     AMLIGetNamedChild @ 0x1C000E580 (AMLIGetNamedChild.c)
 *     AMLIDereferenceHandleEx @ 0x1C00142C0 (AMLIDereferenceHandleEx.c)
 *     FreeDataBuffs @ 0x1C0015CB0 (FreeDataBuffs.c)
 *     AMLIGetNameSpaceObject @ 0x1C00178D0 (AMLIGetNameSpaceObject.c)
 *     __security_check_cookie @ 0x1C002BF40 (__security_check_cookie.c)
 *     memset @ 0x1C002CB80 (memset.c)
 *     ACPIAmliEvaluateDsm @ 0x1C0091F2C (ACPIAmliEvaluateDsm.c)
 */

__int64 __fastcall ACPIThermalGetSensorDevice(_QWORD *a1)
{
  __int64 v1; // rdi
  __int64 *v3; // rcx
  __int64 v4; // rsi
  struct _DEVICE_OBJECT *v5; // r14
  WCHAR *v6; // r15
  IRP *Irp; // r12
  PDEVICE_OBJECT AttachedDeviceReference; // r13
  __int64 *v9; // rax
  int DeviceProperty; // ebx
  __int64 v12; // rcx
  __int64 v13; // rdx
  _BYTE *v14; // rax
  int v15; // eax
  KIRQL v16; // r8
  WCHAR *PoolWithTag; // rax
  const WCHAR *SourceString; // [rsp+60h] [rbp-A0h]
  ULONG BufferLength; // [rsp+68h] [rbp-98h] BYREF
  volatile signed __int32 *v20; // [rsp+70h] [rbp-90h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-88h] BYREF
  PVOID Object; // [rsp+80h] [rbp-80h] BYREF
  PVOID P; // [rsp+88h] [rbp-78h] BYREF
  PVOID Context; // [rsp+90h] [rbp-70h]
  volatile signed __int32 *v25; // [rsp+98h] [rbp-68h]
  __int128 v26; // [rsp+A0h] [rbp-60h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+B0h] [rbp-50h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+C0h] [rbp-40h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v30[40]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v31[48]; // [rsp+128h] [rbp+28h] BYREF

  v1 = a1[25];
  Context = a1;
  v3 = (__int64 *)a1[89];
  P = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  Handle = 0LL;
  v6 = 0LL;
  v20 = 0LL;
  Irp = 0LL;
  AttachedDeviceReference = 0LL;
  v9 = AMLIGetNamedChild(v3, 1314083935);
  v25 = (volatile signed __int32 *)v9;
  if ( v9 )
  {
    DeviceProperty = AMLIEvalNameSpaceObject(v9, v30, 0, 0LL);
    v14 = v30;
  }
  else
  {
    if ( (*(_DWORD *)(v1 + 128) & 4) == 0 )
    {
      DeviceProperty = 0;
      *(_QWORD *)(v1 + 208) = *(_QWORD *)(v1 + 192);
      *(_QWORD *)(v1 + 216) = *(_QWORD *)(v1 + 200);
      goto LABEL_4;
    }
    memset(v31, 0, sizeof(v31));
    v12 = a1[89];
    v26 = THRM_EXTENSIONS_DSM_UUID;
    DeviceProperty = ACPIAmliEvaluateDsm(v12, (unsigned int)&v26, 0, 2, (__int64)v31, (__int64)&P);
    v14 = P;
  }
  Object = v14;
  if ( DeviceProperty < 0 )
    goto LABEL_38;
  if ( *((_WORD *)v14 + 1) != 2 )
  {
    dword_1C00776F8 = 0;
    pszDest = 0;
    DeviceProperty = -1072431095;
    FreeDataBuffs((__int64)v14, 1u);
LABEL_37:
    v6 = 0LL;
    goto LABEL_38;
  }
  v15 = AMLIGetNameSpaceObject(*((_BYTE **)v14 + 4), *((_QWORD *)Context + 89), &v20);
  dword_1C00776F8 = 0;
  DeviceProperty = v15;
  pszDest = 0;
  FreeDataBuffs((__int64)Object, 1u);
  if ( DeviceProperty < 0 )
    goto LABEL_37;
  if ( !v20 )
  {
LABEL_36:
    DeviceProperty = -1073741810;
    goto LABEL_37;
  }
  v16 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  v4 = *(_QWORD *)(*(_QWORD *)v20 + 104LL);
  if ( !v4 || (*(_BYTE *)(v4 + 8) & 4) != 0 )
  {
    v4 = 0LL;
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v16);
    goto LABEL_36;
  }
  _InterlockedAdd((volatile signed __int32 *)(v4 + 680), 1u);
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v16);
  v5 = *(struct _DEVICE_OBJECT **)(v4 + 736);
  if ( v5 )
  {
    ObfReferenceObject(*(PVOID *)(v4 + 736));
    ACPIInternalDecrementIrpReferenceCount(v4);
    v4 = 0LL;
    if ( IoGetDeviceProperty(v5, DevicePropertyPhysicalDeviceObjectName, 0, 0LL, &BufferLength) == -1073741789 )
    {
      PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, BufferLength, 0x54706341u);
      SourceString = PoolWithTag;
      if ( PoolWithTag )
      {
        DeviceProperty = IoGetDeviceProperty(
                           v5,
                           DevicePropertyPhysicalDeviceObjectName,
                           BufferLength,
                           PoolWithTag,
                           &BufferLength);
        if ( DeviceProperty >= 0 )
        {
          RtlInitUnicodeString(&DestinationString, SourceString);
          ObjectAttributes.Length = 48;
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.Attributes = 576;
          ObjectAttributes.ObjectName = &DestinationString;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          DeviceProperty = ZwCreateFile(
                             &Handle,
                             0x1F01FFu,
                             &ObjectAttributes,
                             &IoStatusBlock,
                             0LL,
                             0,
                             3u,
                             1u,
                             0,
                             0LL,
                             0);
          if ( DeviceProperty >= 0 )
          {
            DeviceProperty = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
            if ( DeviceProperty >= 0 )
            {
              AttachedDeviceReference = IoGetAttachedDeviceReference(v5);
              Irp = IoAllocateIrp(AttachedDeviceReference->StackSize, 0);
              if ( Irp )
              {
                DeviceProperty = IoRegisterPlugPlayNotification(
                                   EventCategoryTargetDeviceChange,
                                   0,
                                   Object,
                                   v5->DriverObject,
                                   AcpiThermalDeviceTargetChange,
                                   Context,
                                   (PVOID *)(v1 + 240));
                if ( DeviceProperty >= 0 )
                {
                  *(_QWORD *)(v1 + 208) = Irp;
                  DeviceProperty = 0;
                  *(_QWORD *)(v1 + 216) = AttachedDeviceReference;
                  Irp = 0LL;
                  AttachedDeviceReference = 0LL;
                }
              }
              else
              {
                DeviceProperty = -1073741670;
              }
            }
          }
          else
          {
            Handle = 0LL;
          }
        }
        v6 = (WCHAR *)SourceString;
      }
      else
      {
        DeviceProperty = -1073741670;
        v6 = 0LL;
      }
      goto LABEL_38;
    }
    DeviceProperty = -1073741823;
    goto LABEL_37;
  }
  DeviceProperty = -1073741810;
  v6 = 0LL;
LABEL_38:
  if ( v25 )
    AMLIDereferenceHandleEx(v25, v13);
  if ( v20 )
    AMLIDereferenceHandleEx(v20, v13);
  if ( v5 )
    ObfDereferenceObject(v5);
  if ( AttachedDeviceReference )
    ObfDereferenceObject(AttachedDeviceReference);
  if ( v4 )
    ACPIInternalDecrementIrpReferenceCount(v4);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x54706341u);
LABEL_4:
  if ( Handle )
    ZwClose(Handle);
  if ( Irp )
    IoFreeIrp(Irp);
  if ( P )
    ExFreePoolWithTag(P, 0x52706341u);
  return (unsigned int)DeviceProperty;
}
