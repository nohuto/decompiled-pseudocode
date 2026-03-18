/*
 * XREFs of IopInitializeDeviceInstanceKey @ 0x1405D9834
 * Callers:
 *     IopGetRootDevices @ 0x1405D95DC (IopGetRootDevices.c)
 * Callees:
 *     IoDeleteDevice @ 0x14009F890 (IoDeleteDevice.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1401038E0 (ObfReferenceObject.c)
 *     RtlCopyUnicodeString @ 0x140106C50 (RtlCopyUnicodeString.c)
 *     PipSetDevNodeState @ 0x140146914 (PipSetDevNodeState.c)
 *     PpDevNodeInsertIntoTree @ 0x140147B9C (PpDevNodeInsertIntoTree.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     _CmGetDeviceRegProp @ 0x140504CD4 (_CmGetDeviceRegProp.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x14050BF34 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     IoCreateDevice @ 0x140541590 (IoCreateDevice.c)
 *     PipClearDevNodeProblem @ 0x1405C73B4 (PipClearDevNodeProblem.c)
 *     PipSetDevNodeProblem @ 0x1405C7484 (PipSetDevNodeProblem.c)
 *     PnpQueryAndSaveDeviceNodeCapabilities @ 0x1405CC244 (PnpQueryAndSaveDeviceNodeCapabilities.c)
 *     PpDeviceRegistration @ 0x1405CC4FC (PpDeviceRegistration.c)
 *     PipSetDevNodeFlags @ 0x1405D1BFC (PipSetDevNodeFlags.c)
 *     PiDevCfgProcessDevice @ 0x1405D6D84 (PiDevCfgProcessDevice.c)
 *     IopGetRegistryValue @ 0x1405D9B94 (IopGetRegistryValue.c)
 *     PnpGetDeviceResourcesFromRegistry @ 0x1405DBD3C (PnpGetDeviceResourcesFromRegistry.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x1405DC3A8 (PnpMapDeviceObjectToDeviceInstance.c)
 *     PnpIsDeviceInstanceEnabled @ 0x1405DC404 (PnpIsDeviceInstanceEnabled.c)
 *     PipAllocateDeviceNode @ 0x1405DC620 (PipAllocateDeviceNode.c)
 *     PpDevCfgProcessDeviceOperations @ 0x1406046D0 (PpDevCfgProcessDeviceOperations.c)
 *     PnpAllocateDeviceInstancePath @ 0x14064F2B0 (PnpAllocateDeviceInstancePath.c)
 *     PiDevCfgGetFailedInstallProblemStatus @ 0x14072C984 (PiDevCfgGetFailedInstallProblemStatus.c)
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
  __int64 v15; // r14
  int DeviceRegProp; // eax
  __int16 v17; // ax
  __int64 v18; // rdx
  char v19; // r8
  PVOID v20; // r14
  int v21; // ebx
  unsigned int v22; // ebx
  PVOID PoolWithTag; // rax
  PVOID v24; // r14
  int FailedInstallProblemStatus; // r8d
  int v26; // edx
  PVOID v27; // r14
  int v28; // [rsp+40h] [rbp-20h] BYREF
  char Handle[4]; // [rsp+44h] [rbp-1Ch] BYREF
  PVOID P; // [rsp+48h] [rbp-18h]
  PDEVICE_OBJECT DeviceObject; // [rsp+50h] [rbp-10h] BYREF
  PVOID v32; // [rsp+58h] [rbp-8h] BYREF
  int v33; // [rsp+B0h] [rbp+50h] BYREF
  int v34; // [rsp+B8h] [rbp+58h] BYREF

  v34 = 0;
  v32 = 0LL;
  if ( (int)IopGetRegistryValue(KeyHandle) >= 0 )
  {
    v21 = *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) >= 4u ? *(_DWORD *)((char *)P + *((unsigned int *)P + 2)) : 0;
    ExFreePoolWithTag(P, 0);
    if ( v21 )
      return 1LL;
  }
  v6 = *(_DWORD *)(a3 + 4);
  if ( *(_DWORD *)(a3 + 8) == v6 )
  {
    v22 = 8 * v6 + 1024;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v22, 0x64647050u);
    v24 = PoolWithTag;
    if ( !PoolWithTag )
    {
      DeviceInstancePath = -1073741670;
      goto LABEL_71;
    }
    memmove(PoolWithTag, *(const void **)(a3 + 16), 8LL * *(unsigned int *)(a3 + 8));
    ExFreePoolWithTag(*(PVOID *)(a3 + 16), 0);
    *(_DWORD *)(a3 + 4) = v22 >> 3;
    *(_QWORD *)(a3 + 16) = v24;
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
    if ( (unsigned int)PipAllocateDeviceNode(v13, &v32) == -1073740946 || (v14 = (char *)v32) == 0LL )
    {
      IoDeleteDevice(v12);
      DeviceInstancePath = -1073741670;
    }
    else
    {
      DeviceInstancePath = PnpAllocateDeviceInstancePath(v32, (unsigned int)SourceString->Length + 2);
      if ( DeviceInstancePath >= 0 )
      {
        v15 = (__int64)(v14 + 40);
        RtlCopyUnicodeString((PUNICODE_STRING)(v14 + 40), SourceString);
        PipSetDevNodeFlags((__int64)v14, 17);
        PipSetDevNodeState((__int64)v14, 770);
        PpDevNodeInsertIntoTree(IopRootDeviceNode, (__int64)v14);
        ObfReferenceObject(v12);
        v28 = 4;
        v33 = 0;
        DeviceRegProp = CmGetDeviceRegProp(
                          *(__int64 *)&PiPnpRtlCtx,
                          *((_QWORD *)v14 + 6),
                          (__int64)KeyHandle,
                          11,
                          (__int64)&v34,
                          (__int64)&v33,
                          (__int64)&v28,
                          0);
        if ( DeviceRegProp < 0 )
        {
          FailedInstallProblemStatus = -1073741275;
          if ( DeviceRegProp != -1073741275 )
            goto LABEL_20;
          v26 = 1;
        }
        else
        {
          if ( v34 == 4 && v28 == 4 )
          {
            v17 = v33;
          }
          else
          {
            v17 = 0;
            v33 = 0;
          }
          if ( (v17 & 0x20) != 0 )
          {
            FailedInstallProblemStatus = 0;
            v26 = 18;
          }
          else if ( (v17 & 0x2000) != 0 )
          {
            FailedInstallProblemStatus = 0;
            v26 = 16;
          }
          else
          {
            if ( (v17 & 0x40) == 0 )
            {
LABEL_20:
              if ( (int)IopGetRegistryValue(KeyHandle) >= 0 )
              {
                v20 = P;
                if ( *((_DWORD *)P + 1) == 4
                  && *((_DWORD *)P + 3) >= 4u
                  && *(_DWORD *)((char *)P + *((unsigned int *)P + 2)) )
                {
                  PipSetDevNodeFlags((__int64)v14, 256);
                }
                ExFreePoolWithTag(v20, 0);
                v15 = (__int64)(v14 + 40);
              }
              PnpQueryAndSaveDeviceNodeCapabilities((__int64)v14);
              if ( (*((_DWORD *)v14 + 140) & 0x4000) != 0
                && ((*((_DWORD *)v14 + 99) & 0x2000) == 0 || *((_DWORD *)v14 + 101) != 1) )
              {
                PipClearDevNodeProblem((__int64)v14);
                PipSetDevNodeProblem((__int64)v14, 29, 0);
              }
              v18 = *((_DWORD *)v14 + 99) & 0x6000;
              if ( PnpBootMode )
              {
                *((_DWORD *)v14 + 176) |= 0x1000u;
                v19 = 2;
              }
              else
              {
                v19 = 0;
              }
              if ( (*((_DWORD *)v14 + 140) & 0x4000) == 0 && (v33 & 1) == 0 )
              {
                if ( (_DWORD)v18 )
                {
                  if ( PiDevCfgMode )
                    PiDevCfgProcessDevice((__int64)v14, (__int64)KeyHandle, v19);
                }
                else
                {
                  PpDevCfgProcessDeviceOperations((int)v14);
                }
              }
              if ( ((*((_DWORD *)v14 + 99) & 0x2000) == 0 || *((_DWORD *)v14 + 101) != 22)
                && ((*((_DWORD *)v14 + 99) & 0x2000) == 0 || *((_DWORD *)v14 + 101) != 29)
                && !(unsigned int)PnpIsDeviceInstanceEnabled(KeyHandle, v15, 1LL) )
              {
                PipClearDevNodeProblem((__int64)v14);
                PipSetDevNodeProblem((__int64)v14, 22, 0);
              }
              LOBYTE(v18) = 1;
              PpDeviceRegistration(v15, v18, (__int64)(v14 + 56), 0);
              PnpMapDeviceObjectToDeviceInstance(*((_QWORD *)v14 + 4), v15);
              v32 = 0LL;
              if ( (int)PnpGetDeviceResourcesFromRegistry((int)v12, 0, 4, (int)&v32, Handle) >= 0 )
              {
                v27 = v32;
                if ( v32 )
                {
                  if ( (int)((__int64 (__fastcall *)(__int64, _QWORD, PVOID))IopAllocateBootResourcesRoutine)(
                              4LL,
                              *((_QWORD *)v14 + 4),
                              v32) >= 0 )
                    PipSetDevNodeFlags((__int64)v14, 64);
                  ExFreePoolWithTag(v27, 0);
                }
              }
              ObfReferenceObject(v12);
              *(_QWORD *)(*(_QWORD *)(a3 + 16) + 8LL * *(unsigned int *)(a3 + 8)) = v12;
              goto LABEL_7;
            }
            FailedInstallProblemStatus = PiDevCfgGetFailedInstallProblemStatus(*((_QWORD *)v14 + 6), KeyHandle);
            v26 = 28;
          }
        }
        PipSetDevNodeProblem((__int64)v14, v26, FailedInstallProblemStatus);
        goto LABEL_20;
      }
      IoDeleteDevice(v12);
    }
  }
LABEL_71:
  result = 0LL;
  *(_DWORD *)a3 = DeviceInstancePath;
  return result;
}
