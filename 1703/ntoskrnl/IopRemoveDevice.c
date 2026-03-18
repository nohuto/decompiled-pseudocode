/*
 * XREFs of IopRemoveDevice @ 0x140570978
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x14013220C (PnpRemoveLockedDeviceNode.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x14056D768 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PnpDeleteLockedDeviceNode @ 0x14057015C (PnpDeleteLockedDeviceNode.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x14059A934 (PnpQueryRemoveLockedDeviceNode.c)
 *     PnpDisableDevice @ 0x14059AF18 (PnpDisableDevice.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     PnpFindMountableDevice @ 0x140132630 (PnpFindMountableDevice.c)
 *     memset @ 0x140192D80 (memset.c)
 *     IopDecrementDeviceObjectHandleCount @ 0x1401EF730 (IopDecrementDeviceObjectHandleCount.c)
 *     PnpLockMountableDevice @ 0x1401F8A9C (PnpLockMountableDevice.c)
 *     PnpMarkDeviceForRemove @ 0x1401F8AF8 (PnpMarkDeviceForRemove.c)
 *     PnpUnlockMountableDevice @ 0x1401F8BE4 (PnpUnlockMountableDevice.c)
 *     IopUncacheInterfaceInformation @ 0x14044C3A0 (IopUncacheInterfaceInformation.c)
 *     PiPnpRtlBeginOperation @ 0x14048823C (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x140488F04 (PiPnpRtlEndOperation.c)
 *     PipClearDevNodeFlags @ 0x1404A770C (PipClearDevNodeFlags.c)
 *     PipClearDevNodeUserFlags @ 0x1404A7AF4 (PipClearDevNodeUserFlags.c)
 *     IopSynchronousCall @ 0x1404DDF94 (IopSynchronousCall.c)
 *     PoFxAbandonDevice @ 0x140570AF4 (PoFxAbandonDevice.c)
 *     PiSwStopDestroy @ 0x140570B8C (PiSwStopDestroy.c)
 *     PiSwProcessParentRemoveIrp @ 0x140570C2C (PiSwProcessParentRemoveIrp.c)
 *     IopDecDisableableDepends @ 0x1405D5EC8 (IopDecDisableableDepends.c)
 *     IopInvalidateVolumesForDevice @ 0x1406894B8 (IopInvalidateVolumesForDevice.c)
 */

__int64 __fastcall IopRemoveDevice(PDEVICE_OBJECT DeviceObject, int a2)
{
  void *v2; // r14
  int v3; // r12d
  _DWORD *DeviceNode; // rsi
  struct _DEVICE_OBJECT *v7; // r15
  __int64 v8; // rcx
  int v9; // r15d
  __int64 v10; // rax
  unsigned __int64 v12; // rax
  ULONG_PTR v13; // [rsp+30h] [rbp-29h] BYREF
  void *v14; // [rsp+38h] [rbp-21h]
  _BYTE v15[80]; // [rsp+40h] [rbp-19h] BYREF
  PVOID P; // [rsp+C0h] [rbp+67h] BYREF

  v2 = 0LL;
  v3 = 0;
  v13 = 0LL;
  v14 = 0LL;
  if ( DeviceObject )
    DeviceNode = DeviceObject->DeviceObjectExtension->DeviceNode;
  else
    DeviceNode = 0LL;
  P = 0LL;
  PiPnpRtlBeginOperation((__int64 **)&P);
  if ( a2 == 2 )
    IopUncacheInterfaceInformation((__int64)DeviceObject, 1);
  memset(v15, 0, 0x48uLL);
  v15[0] = 27;
  v15[1] = a2;
  if ( PnpFindMountableDevice((__int64)DeviceObject) )
  {
    v3 = 1;
    PnpLockMountableDevice(DeviceObject);
    v7 = (struct _DEVICE_OBJECT *)PnpMarkDeviceForRemove((ULONG_PTR)DeviceObject, 1, &v13);
    PnpUnlockMountableDevice((__int64)DeviceObject);
    v2 = v14;
  }
  else
  {
    v7 = DeviceObject;
  }
  if ( a2 == 2 || a2 == 23 )
  {
    if ( (DeviceNode[100] & 8) != 0 )
    {
      PipClearDevNodeUserFlags((__int64)DeviceNode, 8);
      IopDecDisableableDepends(DeviceNode);
    }
    if ( a2 == 2 )
    {
      PiSwProcessParentRemoveIrp(DeviceObject);
      PiSwStopDestroy(v8, *((_QWORD *)DeviceNode + 6));
    }
  }
  v9 = IopSynchronousCall(v7, (__int64)v15, -1073741637, 0LL, 0LL);
  if ( v3 )
  {
    PnpLockMountableDevice(DeviceObject);
    if ( (unsigned int)(a2 - 2) <= 1 )
    {
      PnpMarkDeviceForRemove((ULONG_PTR)DeviceObject, 0, &v13);
      v2 = v14;
    }
    if ( v2 )
    {
      IopDecrementDeviceObjectHandleCount((ULONG_PTR)v2);
      ObfDereferenceObject(v2);
    }
    PnpUnlockMountableDevice((__int64)DeviceObject);
    if ( (a2 != 1 || v9 < 0) && a2 != 23 )
    {
LABEL_14:
      if ( a2 != 2 )
        goto LABEL_17;
      goto LABEL_15;
    }
    v9 = IopInvalidateVolumesForDevice(DeviceObject);
  }
  if ( a2 != 23 )
    goto LABEL_14;
LABEL_15:
  PoFxAbandonDevice(DeviceNode);
  DeviceNode[35] = 0;
  if ( a2 == 2 )
  {
    PipClearDevNodeFlags((__int64)DeviceNode, 4104);
    v10 = *((_QWORD *)DeviceNode + 81);
    if ( v10 )
    {
      if ( (v10 & 1) != 0 )
      {
        v12 = v10 & 0xFFFFFFFFFFFFFFFEuLL;
        *((_QWORD *)DeviceNode + 81) = v12;
        --*(_DWORD *)(v12 + 656);
      }
    }
  }
LABEL_17:
  if ( P )
    PiPnpRtlEndOperation((char *)P);
  return (unsigned int)v9;
}
