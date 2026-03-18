/*
 * XREFs of IopRemoveDevice @ 0x1405C8B00
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x140144EC4 (PnpRemoveLockedDeviceNode.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x1405C87FC (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PnpDeleteLockedDeviceNode @ 0x1405C9A7C (PnpDeleteLockedDeviceNode.c)
 *     PnpDisableDevice @ 0x140727528 (PnpDisableDevice.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x140727C3C (PnpQueryRemoveLockedDeviceNode.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     PnpFindMountableDevice @ 0x14014523C (PnpFindMountableDevice.c)
 *     PnpMarkDeviceForRemove @ 0x14015E1A4 (PnpMarkDeviceForRemove.c)
 *     PnpLockMountableDevice @ 0x14015E398 (PnpLockMountableDevice.c)
 *     PnpUnlockMountableDevice @ 0x14015E4C8 (PnpUnlockMountableDevice.c)
 *     IopDecrementDeviceObjectHandleCount @ 0x14015F460 (IopDecrementDeviceObjectHandleCount.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     IopSynchronousCall @ 0x140499818 (IopSynchronousCall.c)
 *     PiPnpRtlBeginOperation @ 0x1405097B4 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x140509BA8 (PiPnpRtlEndOperation.c)
 *     PoFxAbandonDevice @ 0x1405C8D04 (PoFxAbandonDevice.c)
 *     PiSwStopDestroy @ 0x1405C8DA8 (PiSwStopDestroy.c)
 *     PiSwProcessParentRemoveIrp @ 0x1405C8E48 (PiSwProcessParentRemoveIrp.c)
 *     PipClearDevNodeFlags @ 0x1405D37AC (PipClearDevNodeFlags.c)
 *     PipClearDevNodeUserFlags @ 0x1405D48DC (PipClearDevNodeUserFlags.c)
 *     IopUncacheInterfaceInformation @ 0x1405D5CF4 (IopUncacheInterfaceInformation.c)
 *     IopInvalidateVolumesForDevice @ 0x1405F212C (IopInvalidateVolumesForDevice.c)
 *     IopDecDisableableDepends @ 0x140655A70 (IopDecDisableableDepends.c)
 */

__int64 __fastcall IopRemoveDevice(PDEVICE_OBJECT DeviceObject, int a2)
{
  PVOID v2; // r14
  int v3; // r12d
  _DWORD *DeviceNode; // rsi
  struct _DEVICE_OBJECT *v7; // r15
  __int64 v8; // rcx
  int v9; // r15d
  __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  ULONG_PTR v13; // [rsp+30h] [rbp-29h] BYREF
  PVOID Object; // [rsp+38h] [rbp-21h]
  _BYTE v15[80]; // [rsp+40h] [rbp-19h] BYREF
  PVOID P; // [rsp+C0h] [rbp+67h] BYREF

  v2 = 0LL;
  v3 = 0;
  v13 = 0LL;
  Object = 0LL;
  if ( DeviceObject )
    DeviceNode = DeviceObject->DeviceObjectExtension->DeviceNode;
  else
    DeviceNode = 0LL;
  P = 0LL;
  PiPnpRtlBeginOperation((__int64 **)&P);
  if ( a2 == 2 )
    IopUncacheInterfaceInformation(DeviceObject, 1LL);
  memset(v15, 0, 0x48uLL);
  v15[0] = 27;
  v15[1] = a2;
  if ( PnpFindMountableDevice((__int64)DeviceObject) )
  {
    v3 = 1;
    PnpLockMountableDevice(DeviceObject);
    v7 = (struct _DEVICE_OBJECT *)PnpMarkDeviceForRemove((ULONG_PTR)DeviceObject, 1, &v13);
    PnpUnlockMountableDevice((__int64)DeviceObject);
    v2 = Object;
  }
  else
  {
    v7 = DeviceObject;
  }
  if ( a2 == 2 || a2 == 23 )
  {
    if ( (DeviceNode[100] & 8) != 0 )
    {
      PipClearDevNodeUserFlags(DeviceNode);
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
      v2 = Object;
    }
    if ( v2 )
    {
      IopDecrementDeviceObjectHandleCount((ULONG_PTR)v2);
      ObfDereferenceObject(v2);
    }
    PnpUnlockMountableDevice((__int64)DeviceObject);
    if ( (a2 != 1 || v9 < 0) && a2 != 23 )
    {
LABEL_21:
      if ( a2 != 2 )
        goto LABEL_26;
      goto LABEL_22;
    }
    v9 = IopInvalidateVolumesForDevice(DeviceObject);
  }
  if ( a2 != 23 )
    goto LABEL_21;
LABEL_22:
  PoFxAbandonDevice(DeviceNode);
  DeviceNode[35] = 0;
  if ( a2 == 2 )
  {
    PipClearDevNodeFlags(DeviceNode, 4104LL);
    v10 = *((_QWORD *)DeviceNode + 81);
    if ( v10 )
    {
      if ( (v10 & 1) != 0 )
      {
        v11 = v10 & 0xFFFFFFFFFFFFFFFEuLL;
        *((_QWORD *)DeviceNode + 81) = v11;
        --*(_DWORD *)(v11 + 656);
      }
    }
  }
LABEL_26:
  if ( P )
    PiPnpRtlEndOperation((PVOID **)P);
  return (unsigned int)v9;
}
