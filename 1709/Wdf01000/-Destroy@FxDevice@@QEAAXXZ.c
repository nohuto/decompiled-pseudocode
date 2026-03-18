/*
 * XREFs of ?Destroy@FxDevice@@QEAAXXZ @ 0x1C007CDD8
 * Callers:
 *     ?CreateDevice@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@PEAE@Z @ 0x1C002DD64 (-CreateDevice@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@PEAE@Z.c)
 *     ?DeleteDeviceFromFailedCreateNoDelete@FxDevice@@AEAAJJE@Z @ 0x1C007D5AC (-DeleteDeviceFromFailedCreateNoDelete@FxDevice@@AEAAJJE@Z.c)
 *     ?Dispose@FxDevice@@UEAAEXZ @ 0x1C007D8D0 (-Dispose@FxDevice@@UEAAEXZ.c)
 *     ?DeleteDevice@FxPkgPnp@@IEAAXXZ @ 0x1C009D064 (-DeleteDevice@FxPkgPnp@@IEAAXXZ.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0003AD0 (-FxPoolFree@@YAXPEAX@Z.c)
 *     WPP_IFR_SF_qqq @ 0x1C00689B0 (WPP_IFR_SF_qqq.c)
 *     ?DeleteSymbolicLink@FxDevice@@QEAAXXZ @ 0x1C007CD84 (-DeleteSymbolicLink@FxDevice@@QEAAXXZ.c)
 */

void __fastcall FxDevice::Destroy(FxDevice *this)
{
  _DEVICE_OBJECT *m_DeviceObject; // rax
  const void *_a2; // rdx
  _DEVICE_OBJECT *v4; // rcx
  _DEVICE_OBJECT *v5; // rcx
  wchar_t *Buffer; // rcx
  wchar_t *v7; // rcx

  m_DeviceObject = this->m_DeviceObject.m_DeviceObject;
  if ( m_DeviceObject )
    m_DeviceObject->DeviceExtension = 0LL;
  _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !this->m_ObjectSize )
    _a2 = 0LL;
  WPP_IFR_SF_qqq(
    this->m_Globals,
    4u,
    0x12u,
    0xBu,
    WPP_FxDeviceKm_cpp_Traceguids,
    this->m_DeviceObject.m_DeviceObject,
    _a2,
    this->m_AttachedDevice.FxDeviceBase::m_DeviceObject);
  v4 = this->m_AttachedDevice.FxDeviceBase::m_DeviceObject;
  if ( v4 )
  {
    IoDetachDevice(v4);
    this->m_AttachedDevice.FxDeviceBase::m_DeviceObject = 0LL;
  }
  if ( this->m_DeviceObject.m_DeviceObject )
  {
    FxDevice::DeleteSymbolicLink(this);
    v5 = this->m_DeviceObject.m_DeviceObject;
    if ( this->m_DeviceObjectDeleted )
      ObfDereferenceObject(v5);
    else
      IoDeleteDevice(v5);
    this->m_DeviceObject.m_DeviceObject = 0LL;
  }
  Buffer = this->m_DeviceName.Buffer;
  if ( Buffer )
  {
    FxPoolFree(Buffer);
    *(_QWORD *)&this->m_DeviceName.Length = 0LL;
    this->m_DeviceName.Buffer = 0LL;
  }
  v7 = this->m_MofResourceName.Buffer;
  if ( v7 )
  {
    FxPoolFree(v7);
    *(_QWORD *)&this->m_MofResourceName.Length = 0LL;
    this->m_MofResourceName.Buffer = 0LL;
  }
}
