/*
 * XREFs of PiControlGetPropertyData @ 0x14055AC30
 * Callers:
 *     <none>
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x14004D524 (PiControlFreeUserModeCallersBuffer.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     PiControlAllocateBufferForUserModeCaller @ 0x1401228B0 (PiControlAllocateBufferForUserModeCaller.c)
 *     PiControlMakeUserModeCallersCopy @ 0x14047FBFC (PiControlMakeUserModeCallersCopy.c)
 *     _CmGetDeviceRegProp @ 0x1404831A0 (_CmGetDeviceRegProp.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x140488390 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PpDevNodeUnlockTree @ 0x14048A228 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14048AC58 (PpDevNodeLockTree.c)
 *     IoGetDeviceProperty @ 0x14055AE70 (IoGetDeviceProperty.c)
 *     PpHotSwapGetDevnodeRemovalPolicy @ 0x14055B5E4 (PpHotSwapGetDevnodeRemovalPolicy.c)
 *     PiControlGetDeviceStack @ 0x140595F34 (PiControlGetDeviceStack.c)
 *     PnpGetDeviceDependencyList @ 0x1406934F8 (PnpGetDeviceDependencyList.c)
 *     PiControlGetDevicePowerData @ 0x1406A7FB4 (PiControlGetDevicePowerData.c)
 */

__int64 __fastcall PiControlGetPropertyData(__int64 a1, __int16 *a2, __int64 a3, char a4)
{
  unsigned __int16 v4; // cx
  unsigned int v5; // r14d
  __int64 result; // rax
  struct _DEVICE_OBJECT *v9; // r15
  PVOID DeviceNode; // rsi
  unsigned int *v11; // rdi
  __int64 v12; // rdx
  int DevicePowerData; // ebx
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // eax
  DEVICE_REGISTRY_PROPERTY v21; // edx
  NTSTATUS DeviceStack; // eax
  int UserModeCallersCopy; // eax
  unsigned int v24; // eax
  unsigned int v25; // eax
  unsigned int v26; // eax
  unsigned int v27; // eax
  int DeviceRegProp; // eax
  unsigned int v29; // eax
  __int64 v30; // rdx
  int DeviceDependencyList; // eax
  unsigned int v32; // ecx
  PVOID PropertyBuffer; // [rsp+40h] [rbp-20h] BYREF
  _WORD v34[4]; // [rsp+48h] [rbp-18h] BYREF
  void *v35; // [rsp+50h] [rbp-10h] BYREF
  int v36; // [rsp+98h] [rbp+38h] BYREF

  v4 = *a2;
  v5 = 0;
  PropertyBuffer = 0LL;
  v34[1] = v4;
  v34[0] = v4;
  if ( (unsigned __int16)(v4 - 1) > 0x18Fu || (v4 & 1) != 0 )
    return 3221225485LL;
  result = PiControlMakeUserModeCallersCopy(&v35, *((void **)a2 + 1), v4, 2u, a4, 1);
  if ( (int)result >= 0 )
  {
    PpDevNodeLockTree(0);
    v9 = (struct _DEVICE_OBJECT *)PnpDeviceObjectFromDeviceInstanceWithTag((__int64)v34, 0x43706E50u);
    PiControlFreeUserModeCallersBuffer(a4, v35);
    if ( !v9 || (DeviceNode = v9->DeviceObjectExtension->DeviceNode) == 0LL )
    {
      DevicePowerData = -1073741810;
      goto LABEL_22;
    }
    if ( (unsigned int)(*((_DWORD *)DeviceNode + 75) - 787) <= 1 )
    {
      DevicePowerData = -1073741738;
    }
    else
    {
      v11 = (unsigned int *)(a2 + 16);
      v5 = *((_DWORD *)a2 + 8);
      DevicePowerData = PiControlAllocateBufferForUserModeCaller(&PropertyBuffer, v5, a4, *((_QWORD *)a2 + 3));
      if ( DevicePowerData < 0 )
        goto LABEL_22;
      v14 = *((_DWORD *)a2 + 4);
      if ( v14 > 8 )
      {
        v24 = v14 - 10;
        if ( v24 )
        {
          v25 = v24 - 1;
          if ( !v25 )
          {
            v21 = DevicePropertyInstallState;
            goto LABEL_17;
          }
          v26 = v25 - 2;
          if ( !v26 )
          {
            *v11 = 4;
            if ( v5 >= 4 )
            {
              DevicePowerData = 0;
              *(_DWORD *)PropertyBuffer = *((_DWORD *)DeviceNode + 171);
LABEL_20:
              UserModeCallersCopy = PiControlMakeUserModeCallersCopy((void **)a2 + 3, PropertyBuffer, v5, 1u, a4, 0);
              if ( UserModeCallersCopy < 0 )
                DevicePowerData = UserModeCallersCopy;
              goto LABEL_22;
            }
            DevicePowerData = -1073741789;
LABEL_22:
            PpDevNodeUnlockTree(0);
            if ( v9 )
              ObfDereferenceObjectWithTag(v9, 0x43706E50u);
            PiControlFreeUserModeCallersBuffer(a4, PropertyBuffer);
            return (unsigned int)DevicePowerData;
          }
          v27 = v26 - 1;
          if ( !v27 )
          {
            DeviceStack = PiControlGetDeviceStack(DeviceNode, v5, PropertyBuffer, a2 + 16);
            goto LABEL_18;
          }
          v29 = v27 - 1;
          if ( v29 )
          {
            if ( v29 != 1 )
              goto LABEL_51;
            v30 = 1LL;
          }
          else
          {
            v30 = 0LL;
          }
          DeviceDependencyList = PnpGetDeviceDependencyList(DeviceNode, v30, PropertyBuffer, v5 >> 1, a2 + 16);
          v32 = 2 * *v11;
          DevicePowerData = DeviceDependencyList;
          *v11 = v32;
          if ( ((int)(DeviceDependencyList + 0x80000000) < 0 || DeviceDependencyList == -1073741789) && v32 <= 2 )
          {
            *v11 = 0;
            DevicePowerData = -1073741772;
          }
        }
        else
        {
          if ( v5 < 4 )
          {
            DevicePowerData = -1073741789;
          }
          else
          {
            PpHotSwapGetDevnodeRemovalPolicy(DeviceNode, 0LL, PropertyBuffer);
            DevicePowerData = 0;
          }
          *v11 = 4;
        }
      }
      else
      {
        if ( v14 == 8 )
        {
          v21 = DevicePropertyAddress;
          goto LABEL_17;
        }
        v15 = v14 - 1;
        if ( !v15 )
        {
          v21 = DevicePropertyPhysicalDeviceObjectName;
          goto LABEL_17;
        }
        v16 = v15 - 1;
        if ( !v16 )
        {
          v21 = DevicePropertyBusTypeGuid;
          goto LABEL_17;
        }
        v17 = v16 - 1;
        if ( !v17 )
        {
          v21 = DevicePropertyLegacyBusType;
          goto LABEL_17;
        }
        v18 = v17 - 1;
        if ( !v18 )
        {
          v21 = DevicePropertyBusNumber;
          goto LABEL_17;
        }
        v19 = v18 - 1;
        if ( v19 )
        {
          v20 = v19 - 1;
          if ( !v20 )
          {
            v21 = DevicePropertyRemovalPolicy;
LABEL_17:
            DeviceStack = IoGetDeviceProperty(v9, v21, v5, PropertyBuffer, (PULONG)a2 + 8);
LABEL_18:
            DevicePowerData = DeviceStack;
            goto LABEL_19;
          }
          if ( v20 == 1 )
          {
            DeviceRegProp = CmGetDeviceRegProp(
                              *(__int64 *)&PiPnpRtlCtx,
                              *((_QWORD *)DeviceNode + 6),
                              0LL,
                              34,
                              (__int64)&v36,
                              (__int64)PropertyBuffer,
                              (__int64)(a2 + 16),
                              0);
            DevicePowerData = DeviceRegProp;
            if ( DeviceRegProp >= 0 && v36 != 4 )
            {
              DevicePowerData = -1073741584;
              goto LABEL_22;
            }
            if ( DeviceRegProp == -1073741275 )
              DevicePowerData = -1073741772;
            goto LABEL_19;
          }
LABEL_51:
          DevicePowerData = -1073741811;
          goto LABEL_22;
        }
        DevicePowerData = PiControlGetDevicePowerData(DeviceNode, v12, v5, PropertyBuffer, a2 + 16);
        if ( DevicePowerData == -2147483643 )
          DevicePowerData = -1073741789;
      }
    }
LABEL_19:
    if ( DevicePowerData >= 0 )
      goto LABEL_20;
    goto LABEL_22;
  }
  return result;
}
