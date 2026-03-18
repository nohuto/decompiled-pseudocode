/*
 * XREFs of FxUsbTargetDeviceCreate @ 0x1C008B8CC
 * Callers:
 *     imp_WdfUsbTargetDeviceCreate @ 0x1C008BFB0 (imp_WdfUsbTargetDeviceCreate.c)
 *     imp_WdfUsbTargetDeviceCreateWithParameters @ 0x1C008C0C0 (imp_WdfUsbTargetDeviceCreateWithParameters.c)
 * Callees:
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00044B0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0017934 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C001FEF0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?Init@FxIoTarget@@QEAAJPEAVFxDeviceBase@@@Z @ 0x1C002434C (-Init@FxIoTarget@@QEAAJPEAVFxDeviceBase@@@Z.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C0031E50 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0065088 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C00816D8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ??0FxUsbDevice@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0090448 (--0FxUsbDevice@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?CreateInterfaces@FxUsbDevice@@QEAAJXZ @ 0x1C0090CA0 (-CreateInterfaces@FxUsbDevice@@QEAAJXZ.c)
 *     ?InitDevice@FxUsbDevice@@QEAAJK@Z @ 0x1C00941D8 (-InitDevice@FxUsbDevice@@QEAAJK@Z.c)
 */

__int64 __fastcall FxUsbTargetDeviceCreate(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxDeviceBase *Device,
        unsigned int USBDClientContractVersion,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        WDFUSBDEVICE__ **UsbDevice)
{
  WDFUSBDEVICE__ **v5; // rsi
  __int64 result; // rax
  unsigned __int16 v11; // r9
  FxUsbDevice *v12; // rax
  FxUsbDevice *v13; // rax
  FxUsbDevice *v14; // rdi
  int inited; // ebx
  ULONG_PTR retaddr; // [rsp+58h] [rbp+0h]

  v5 = UsbDevice;
  if ( !UsbDevice )
    FxVerifierNullBugCheck(FxDriverGlobals, retaddr);
  *UsbDevice = 0LL;
  result = FxVerifierCheckIrqlLevel(FxDriverGlobals, 0);
  if ( (int)result >= 0 )
  {
    result = FxValidateObjectAttributes(FxDriverGlobals, Attributes, 1, v11);
    if ( (int)result >= 0 )
    {
      v12 = (FxUsbDevice *)FxObjectHandleAlloc(
                             FxDriverGlobals,
                             ExDefaultNonPagedPoolType,
                             0x1F0uLL,
                             0,
                             Attributes,
                             0,
                             FxObjectTypeExternal);
      if ( v12 )
      {
        FxUsbDevice::FxUsbDevice(v12, FxDriverGlobals);
        v14 = v13;
      }
      else
      {
        v14 = 0LL;
      }
      if ( v14 )
      {
        inited = FxIoTarget::Init(v14, Device);
        if ( inited < 0
          || (UsbDevice = 0LL, inited = FxUsbDevice::InitDevice(v14, USBDClientContractVersion), inited < 0)
          || (inited = FxUsbDevice::CreateInterfaces(v14), inited < 0)
          || (inited = Device->AddIoTarget(Device, v14), inited < 0)
          || (inited = FxObject::Commit(v14, (_FX_DRIVER_GLOBALS *)Attributes, (void **)&UsbDevice, Device, 1u),
              inited < 0) )
        {
          FxObject::DeleteFromFailedCreate(v14);
        }
        else
        {
          *v5 = (WDFUSBDEVICE__ *)UsbDevice;
        }
        return (unsigned int)inited;
      }
      else
      {
        return 3221225626LL;
      }
    }
  }
  return result;
}
