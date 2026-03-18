/*
 * XREFs of imp_WdfDeviceMiniportCreate @ 0x1C007A8F0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0003A40 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00044B0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0017934 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?AllocateTarget@FxDeviceBase@@QEAAJPEAPEAVFxIoTarget@@E@Z @ 0x1C001C710 (-AllocateTarget@FxDeviceBase@@QEAAJPEAPEAVFxIoTarget@@E@Z.c)
 *     ?ConfigureConstraints@FxDeviceBase@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C001CA08 (-ConfigureConstraints@FxDeviceBase@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C001FEF0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C0031E50 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0065088 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ??0FxMpDevice@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDriver@@PEAU_DEVICE_OBJECT@@22@Z @ 0x1C007A800 (--0FxMpDevice@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDriver@@PEAU_DEVICE_OBJECT@@22@Z.c)
 *     ?_Create@FxDisposeList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z @ 0x1C007F560 (-_Create@FxDisposeList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C00816D8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfDeviceMiniportCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDRIVER__ *Driver,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        _DEVICE_OBJECT *DeviceObject,
        _DEVICE_OBJECT *AttachedDeviceObject,
        _DEVICE_OBJECT *Pdo,
        WDFDEVICE__ **Device)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  _DEVICE_OBJECT *v10; // rdi
  _DEVICE_OBJECT *v11; // rbx
  __int64 result; // rax
  unsigned __int16 v13; // r9
  FxMpDevice *v14; // rax
  __int64 v15; // rax
  __int64 v16; // rbx
  int Target; // edi
  void *retaddr; // [rsp+58h] [rbp+0h]
  FxDriver *pDriver; // [rsp+60h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Driver,
    0x1001u,
    (void **)&pDriver);
  m_Globals = pDriver->m_Globals;
  if ( !DeviceObject )
    FxVerifierNullBugCheck(pDriver->m_Globals, retaddr);
  v10 = AttachedDeviceObject;
  v11 = Pdo;
  if ( AttachedDeviceObject )
  {
    if ( !Pdo )
      FxVerifierNullBugCheck(pDriver->m_Globals, retaddr);
  }
  else if ( Pdo )
  {
    FxVerifierNullBugCheck(pDriver->m_Globals, retaddr);
  }
  result = FxVerifierCheckIrqlLevel(pDriver->m_Globals, 0);
  if ( (int)result >= 0 )
  {
    result = FxValidateObjectAttributes(m_Globals, Attributes, 0, v13);
    if ( (int)result >= 0 )
    {
      v14 = (FxMpDevice *)FxObjectHandleAlloc(
                            m_Globals,
                            ExDefaultNonPagedPoolType,
                            0xD0uLL,
                            0,
                            Attributes,
                            0,
                            FxObjectTypeExternal);
      if ( v14 )
      {
        FxMpDevice::FxMpDevice(v14, m_Globals, pDriver, DeviceObject, v10, v11);
        v16 = v15;
      }
      else
      {
        v16 = 0LL;
      }
      if ( v16 )
      {
        if ( v10
          && (Target = FxDeviceBase::AllocateTarget((FxDeviceBase *)v16, (FxIoTarget **)(v16 + 200), 0), Target < 0)
          || (Target = FxDisposeList::_Create(m_Globals, *(void **)(v16 + 144), (FxDisposeList **)(v16 + 128)),
              Target < 0)
          || (Target = FxDeviceBase::ConfigureConstraints((FxDeviceBase *)v16, Attributes), Target < 0)
          || (Target = FxObject::Commit((FxObject *)v16, (_FX_DRIVER_GLOBALS *)Attributes, (void **)Device, 0LL, 1u),
              Target < 0) )
        {
          FxObject::DeleteFromFailedCreate((FxObject *)v16);
        }
        return (unsigned int)Target;
      }
      else
      {
        return 3221225626LL;
      }
    }
  }
  return result;
}
