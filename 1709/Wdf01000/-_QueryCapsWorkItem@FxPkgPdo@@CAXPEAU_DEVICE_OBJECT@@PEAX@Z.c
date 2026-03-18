/*
 * XREFs of ?_QueryCapsWorkItem@FxPkgPdo@@CAXPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x1C0098A40
 * Callers:
 *     <none>
 * Callees:
 *     ?HandleQueryCapabilities@FxPkgPdo@@AEAAXPEAU_DEVICE_CAPABILITIES@@0@Z @ 0x1C0021580 (-HandleQueryCapabilities@FxPkgPdo@@AEAAXPEAU_DEVICE_CAPABILITIES@@0@Z.c)
 *     ?GetStackCapabilities@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAVMxDeviceObject@@PEAU_D3COLD_SUPPORT_INTERFACE@@PEAU_STACK_DEVICE_CAPABILITIES@@@Z @ 0x1C0022290 (-GetStackCapabilities@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAVMxDeviceObject@@PEAU_D3COLD_SUPPORT_INTERF.c)
 *     ?CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x1C002B79C (-CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 *     __security_check_cookie @ 0x1C003B880 (__security_check_cookie.c)
 */

void __fastcall FxPkgPdo::_QueryCapsWorkItem(_DEVICE_OBJECT *DeviceObject, _IRP *Context)
{
  _QWORD *DeviceExtension; // rax
  struct _IO_WORKITEM *Flink; // rsi
  FxPkgPdo *v5; // rbx
  FxDeviceBase *m_DeviceBase; // r8
  signed int StackCapabilities; // eax
  MxDeviceObject parentDeviceObject; // [rsp+20h] [rbp-88h] BYREF
  FxIrp irp; // [rsp+28h] [rbp-80h] BYREF
  _STACK_DEVICE_CAPABILITIES parentCapabilities; // [rsp+30h] [rbp-78h] BYREF

  DeviceExtension = DeviceObject->DeviceExtension;
  Flink = (struct _IO_WORKITEM *)Context->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Flink;
  irp.m_Irp = Context;
  v5 = *(FxPkgPdo **)(*(DeviceExtension - 6) + 648LL);
  m_DeviceBase = v5->m_DeviceBase;
  parentDeviceObject.m_DeviceObject = *(_DEVICE_OBJECT **)(*(_QWORD *)&m_DeviceBase[1].m_ObjectFlags + 144LL);
  StackCapabilities = GetStackCapabilities(m_DeviceBase->m_Globals, &parentDeviceObject, 0LL, &parentCapabilities);
  if ( StackCapabilities >= 0 )
  {
    FxPkgPdo::HandleQueryCapabilities(
      v5,
      Context->Tail.Overlay.CurrentStackLocation->Parameters.DeviceCapabilities.Capabilities,
      &parentCapabilities.DeviceCaps);
    StackCapabilities = 0;
  }
  FxPkgPnp::CompletePnpRequest(v5, &irp, StackCapabilities);
  IoFreeWorkItem(Flink);
}
