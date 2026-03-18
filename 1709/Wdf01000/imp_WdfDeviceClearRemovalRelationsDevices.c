/*
 * XREFs of imp_WdfDeviceClearRemovalRelationsDevices @ 0x1C0077840
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0003A40 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002E750 (-LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002E8E0 (-UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?SearchForAndRemove@FxTransactionedList@@IEAAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C008643C (-SearchForAndRemove@FxTransactionedList@@IEAAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?GetNextEntry@FxRelatedDeviceList@@QEAAPEAVFxRelatedDevice@@PEAV2@@Z @ 0x1C00A5C10 (-GetNextEntry@FxRelatedDeviceList@@QEAAPEAVFxRelatedDevice@@PEAV2@@Z.c)
 */

void __fastcall imp_WdfDeviceClearRemovalRelationsDevices(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Device)
{
  FxPkgPnp *m_PkgPnp; // rbx
  FxTransactionedList *m_RemovalDeviceList; // rcx
  FxRelatedDevice *NextEntry; // rax
  FxTransactionedList *v5; // r9
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  FxDevice *pDevice; // [rsp+30h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Device,
    0x1002u,
    (void **)&pDevice);
  m_PkgPnp = pDevice->m_PkgPnp;
  m_RemovalDeviceList = m_PkgPnp->m_RemovalDeviceList;
  if ( m_RemovalDeviceList )
  {
    FxTransactionedList::LockForEnum(m_RemovalDeviceList, m_PkgPnp->m_Globals);
    while ( 1 )
    {
      NextEntry = FxRelatedDeviceList::GetNextEntry(m_PkgPnp->m_RemovalDeviceList, 0LL);
      m_Globals = m_PkgPnp->m_Globals;
      if ( !NextEntry )
        break;
      FxTransactionedList::SearchForAndRemove(v5, m_Globals, NextEntry->m_DeviceObject);
    }
    FxTransactionedList::UnlockFromEnum(v5, m_Globals);
  }
}
