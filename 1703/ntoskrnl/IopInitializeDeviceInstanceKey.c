/*
 * XREFs of IopInitializeDeviceInstanceKey @ 0x140559998
 * Callers:
 *     IopGetRootDevices @ 0x14055973C (IopGetRootDevices.c)
 * Callees:
 *     IoDeleteDevice @ 0x1400058A0 (IoDeleteDevice.c)
 *     PipSetDevNodeState @ 0x1400810C0 (PipSetDevNodeState.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1400EEA40 (ObfReferenceObject.c)
 *     RtlCopyUnicodeString @ 0x1400F1110 (RtlCopyUnicodeString.c)
 *     PpDevNodeInsertIntoTree @ 0x14012281C (PpDevNodeInsertIntoTree.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PipClearDevNodeProblem @ 0x14045D5E8 (PipClearDevNodeProblem.c)
 *     _CmGetDeviceRegProp @ 0x1404831A0 (_CmGetDeviceRegProp.c)
 *     _PnpGetObjectProperty @ 0x140484E40 (_PnpGetObjectProperty.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x140488390 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     IoCreateDevice @ 0x1404A1F50 (IoCreateDevice.c)
 *     PnpQueryAndSaveDeviceNodeCapabilities @ 0x1404A6FC0 (PnpQueryAndSaveDeviceNodeCapabilities.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x1404B8088 (PnpMapDeviceObjectToDeviceInstance.c)
 *     IopGetRegistryValue @ 0x1404D9A74 (IopGetRegistryValue.c)
 *     PpDeviceRegistration @ 0x1404D9BDC (PpDeviceRegistration.c)
 *     PipSetDevNodeFlags @ 0x1404E2E9C (PipSetDevNodeFlags.c)
 *     PipAllocateDeviceNode @ 0x140559210 (PipAllocateDeviceNode.c)
 *     PpDevCfgProcessDeviceOperations @ 0x140559390 (PpDevCfgProcessDeviceOperations.c)
 *     PnpIsDeviceInstanceEnabled @ 0x1405594C0 (PnpIsDeviceInstanceEnabled.c)
 *     PnpGetDeviceResourcesFromRegistry @ 0x14055BDB4 (PnpGetDeviceResourcesFromRegistry.c)
 *     PipSetDevNodeProblem @ 0x140570490 (PipSetDevNodeProblem.c)
 *     PiDevCfgProcessDevice @ 0x14059040C (PiDevCfgProcessDevice.c)
 *     PnpAllocateDeviceInstancePath @ 0x1405D061C (PnpAllocateDeviceInstancePath.c)
 *     PiDevCfgGetFailedInstallProblemStatus @ 0x14069A574 (PiDevCfgGetFailedInstallProblemStatus.c)
 */

__int64 __fastcall IopInitializeDeviceInstanceKey(HANDLE KeyHandle, PCUNICODE_STRING SourceString, __int64 a3)
{
  int v6; // ebx
  struct _DEVICE_OBJECT *v7; // rax
  struct _DEVICE_OBJECT *v8; // rdx
  _DWORD *DeviceNode; // rax
  __int64 result; // rax
  NTSTATUS DeviceInstancePath; // r14d
  struct _DEVICE_OBJECT *v12; // r15
  PDEVICE_OBJECT v13; // rcx
  char *v14; // rbx
  int DeviceRegProp; // eax
  __int16 v16; // ax
  bool v17; // r13
  char v18; // r14
  __int64 v19; // rdx
  __int64 v20; // r14
  PVOID v21; // r14
  int v22; // ebx
  unsigned int v23; // ebx
  PVOID PoolWithTag; // rax
  PVOID v25; // r14
  __int64 FailedInstallProblemStatus; // r8
  __int64 v27; // rdx
  PVOID v28; // r14
  int v29; // [rsp+60h] [rbp-20h] BYREF
  char Handle[4]; // [rsp+64h] [rbp-1Ch] BYREF
  PVOID P; // [rsp+68h] [rbp-18h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+70h] [rbp-10h] BYREF
  PVOID v33; // [rsp+78h] [rbp-8h] BYREF
  int v34; // [rsp+D0h] [rbp+50h] BYREF
  int v35; // [rsp+D8h] [rbp+58h] BYREF

  v34 = 0;
  v33 = 0LL;
  if ( IopGetRegistryValue(KeyHandle, L"Phantom", 0, &P) >= 0 )
  {
    v22 = *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) >= 4u ? *(_DWORD *)((char *)P + *((unsigned int *)P + 2)) : 0;
    ExFreePoolWithTag(P, 0);
    if ( v22 )
      return 1LL;
  }
  v6 = *(_DWORD *)(a3 + 4);
  if ( *(_DWORD *)(a3 + 8) == v6 )
  {
    v23 = 8 * v6 + 1024;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v23, 0x64647050u);
    v25 = PoolWithTag;
    if ( !PoolWithTag )
    {
      DeviceInstancePath = -1073741670;
      goto LABEL_76;
    }
    memmove(PoolWithTag, *(const void **)(a3 + 16), 8LL * *(unsigned int *)(a3 + 8));
    ExFreePoolWithTag(*(PVOID *)(a3 + 16), 0);
    *(_DWORD *)(a3 + 4) = v23 >> 3;
    *(_QWORD *)(a3 + 16) = v25;
  }
  v7 = (struct _DEVICE_OBJECT *)PnpDeviceObjectFromDeviceInstanceWithTag((__int64)SourceString, 0x746C6644u);
  DeviceObject = v7;
  v8 = v7;
  if ( v7 )
  {
    DeviceNode = v7->DeviceObjectExtension->DeviceNode;
    if ( DeviceNode && (DeviceNode[99] & 0x10000) != 0 )
    {
      ObfDereferenceObject(v8);
      return 1LL;
    }
    *(_QWORD *)(*(_QWORD *)(a3 + 16) + 8LL * *(unsigned int *)(a3 + 8)) = v8;
LABEL_7:
    ++*(_DWORD *)(a3 + 8);
    return 1LL;
  }
  DeviceInstancePath = IoCreateDevice(PnpDriverObject, 0, 0LL, 4u, 0x80u, 0, &DeviceObject);
  if ( DeviceInstancePath >= 0 )
  {
    v12 = DeviceObject;
    v13 = DeviceObject;
    DeviceObject->Flags |= 0x1000u;
    v13->DeviceObjectExtension->ExtensionFlags |= 0x10u;
    if ( (unsigned int)PipAllocateDeviceNode((__int64)v13, &v33) == -1073740946 || (v14 = (char *)v33) == 0LL )
    {
      IoDeleteDevice(v12);
      DeviceInstancePath = -1073741670;
    }
    else
    {
      DeviceInstancePath = PnpAllocateDeviceInstancePath(v33, (unsigned int)SourceString->Length + 2);
      if ( DeviceInstancePath >= 0 )
      {
        RtlCopyUnicodeString((PUNICODE_STRING)(v14 + 40), SourceString);
        PipSetDevNodeFlags((__int64)v14, 17);
        PipSetDevNodeState((__int64)v14, 770);
        PpDevNodeInsertIntoTree(IopRootDeviceNode, (__int64)v14);
        ObfReferenceObject(v12);
        v35 = 0;
        v29 = 4;
        DeviceRegProp = CmGetDeviceRegProp(
                          *(__int64 *)&PiPnpRtlCtx,
                          *((_QWORD *)v14 + 6),
                          (__int64)KeyHandle,
                          11,
                          (__int64)&v34,
                          (__int64)&v35,
                          (__int64)&v29,
                          0);
        if ( DeviceRegProp < 0 )
        {
          FailedInstallProblemStatus = 3221226021LL;
          if ( DeviceRegProp != -1073741275 )
            goto LABEL_20;
          v27 = 1LL;
        }
        else
        {
          if ( v34 == 4 && v29 == 4 )
          {
            v16 = v35;
          }
          else
          {
            v16 = 0;
            v35 = 0;
          }
          if ( (v16 & 0x20) != 0 )
          {
            FailedInstallProblemStatus = 0LL;
            v27 = 18LL;
          }
          else if ( (v16 & 0x2000) != 0 )
          {
            FailedInstallProblemStatus = 0LL;
            v27 = 16LL;
          }
          else
          {
            if ( (v16 & 0x40) == 0 )
            {
LABEL_20:
              if ( IopGetRegistryValue(KeyHandle, L"NoResourceAtInitTime", 0, &P) >= 0 )
              {
                v21 = P;
                if ( *((_DWORD *)P + 1) == 4
                  && *((_DWORD *)P + 3) >= 4u
                  && *(_DWORD *)((char *)P + *((unsigned int *)P + 2)) )
                {
                  PipSetDevNodeFlags((__int64)v14, 256);
                }
                ExFreePoolWithTag(v21, 0);
              }
              PnpQueryAndSaveDeviceNodeCapabilities((__int64)v14);
              if ( (*((_DWORD *)v14 + 140) & 0x4000) != 0
                && ((*((_DWORD *)v14 + 99) & 0x2000) == 0 || *((_DWORD *)v14 + 101) != 1) )
              {
                PipClearDevNodeProblem((__int64)v14);
                PipSetDevNodeProblem(v14, 29LL, 0LL);
              }
              v17 = (*((_DWORD *)v14 + 99) & 0x6000) != 0;
              v18 = v17;
              if ( (*((_DWORD *)v14 + 99) & 0x6000) == 0
                && (unsigned int)PnpGetObjectProperty(
                                   *(__int64 *)&PiPnpRtlCtx,
                                   *((_QWORD *)v14 + 6),
                                   1u,
                                   (__int64)KeyHandle,
                                   0LL,
                                   (__int64)&DEVPKEY_Device_FirmwareDependencies,
                                   (__int64)&v34,
                                   0LL,
                                   0,
                                   (__int64)&v29,
                                   0) == -1073741789 )
              {
                v18 = v17;
                if ( v34 == 8210 )
                  v18 = 1;
              }
              if ( PnpBootMode )
              {
                *((_DWORD *)v14 + 176) |= 0x1000u;
                v19 = 2LL;
              }
              else
              {
                v19 = 0LL;
              }
              if ( (v35 & 1) == 0 && (*((_DWORD *)v14 + 140) & 0x4000) == 0 )
              {
                if ( v18 )
                {
                  if ( PiDevCfgMode )
                    PiDevCfgProcessDevice(v14, KeyHandle, (unsigned int)v19);
                }
                else
                {
                  PpDevCfgProcessDeviceOperations((unsigned __int64)v14, KeyHandle);
                }
              }
              if ( (*((_DWORD *)v14 + 99) & 0x2000) != 0 && *((_DWORD *)v14 + 101) == 22
                || (*((_DWORD *)v14 + 99) & 0x2000) != 0 && *((_DWORD *)v14 + 101) == 29 )
              {
                v20 = (__int64)(v14 + 40);
              }
              else
              {
                v20 = (__int64)(v14 + 40);
                if ( !(unsigned int)PnpIsDeviceInstanceEnabled(KeyHandle, (unsigned __int16 *)v14 + 20, 1) )
                {
                  PipClearDevNodeProblem((__int64)v14);
                  PipSetDevNodeProblem(v14, 22LL, 0LL);
                }
              }
              LOBYTE(v19) = 1;
              PpDeviceRegistration(v20, v19, (__int64)(v14 + 56), 0);
              PnpMapDeviceObjectToDeviceInstance(*((_QWORD *)v14 + 4), v20);
              v33 = 0LL;
              if ( (int)PnpGetDeviceResourcesFromRegistry((int)v12, 0, 4, (int)&v33, Handle) >= 0 )
              {
                v28 = v33;
                if ( v33 )
                {
                  if ( (int)((__int64 (__fastcall *)(__int64, _QWORD, PVOID))IopAllocateBootResourcesRoutine)(
                              4LL,
                              *((_QWORD *)v14 + 4),
                              v33) >= 0 )
                    PipSetDevNodeFlags((__int64)v14, 64);
                  ExFreePoolWithTag(v28, 0);
                }
              }
              ObfReferenceObject(v12);
              *(_QWORD *)(*(_QWORD *)(a3 + 16) + 8LL * *(unsigned int *)(a3 + 8)) = v12;
              goto LABEL_7;
            }
            FailedInstallProblemStatus = (unsigned int)PiDevCfgGetFailedInstallProblemStatus(
                                                         *((_QWORD *)v14 + 6),
                                                         KeyHandle);
            v27 = 28LL;
          }
        }
        PipSetDevNodeProblem(v14, v27, FailedInstallProblemStatus);
        goto LABEL_20;
      }
      IoDeleteDevice(v12);
    }
  }
LABEL_76:
  result = 0LL;
  *(_DWORD *)a3 = DeviceInstancePath;
  return result;
}
