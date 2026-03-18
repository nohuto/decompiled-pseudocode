/*
 * XREFs of ?DeferUpdateLocked@FxWmiIrpHandler@@AEAAEE@Z @ 0x1C00726C4
 * Callers:
 *     ?AddPowerPolicyProviderAndInstance@FxWmiIrpHandler@@QEAAJPEAU_WDF_WMI_PROVIDER_CONFIG@@PEAUFxWmiInstanceInternalCallbacks@@PEAPEAVFxWmiInstanceInternal@@@Z @ 0x1C00308C0 (-AddPowerPolicyProviderAndInstance@FxWmiIrpHandler@@QEAAJPEAU_WDF_WMI_PROVIDER_CONFIG@@PEAUFxWmi.c)
 *     ?AddProviderLocked@FxWmiIrpHandler@@IEAAJPEAVFxWmiProvider@@EPEAE@Z @ 0x1C0030AAC (-AddProviderLocked@FxWmiIrpHandler@@IEAAJPEAVFxWmiProvider@@EPEAE@Z.c)
 *     ?AddInstance@FxWmiProvider@@QEAAJPEAVFxWmiInstance@@E@Z @ 0x1C003105C (-AddInstance@FxWmiProvider@@QEAAJPEAVFxWmiInstance@@E@Z.c)
 *     imp_WdfWmiInstanceCreate @ 0x1C0031160 (imp_WdfWmiInstanceCreate.c)
 *     ?_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WMI_PROVIDER_CONFIG@@PEAPEAUWDFWMIPROVIDER__@@PEAPEAV1@@Z @ 0x1C0031860 (-_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 *     ?RemoveInstance@FxWmiProvider@@QEAAXPEAVFxWmiInstance@@@Z @ 0x1C0071688 (-RemoveInstance@FxWmiProvider@@QEAAXPEAVFxWmiInstance@@@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall FxWmiIrpHandler::DeferUpdateLocked(FxWmiIrpHandler *this, unsigned __int8 OldIrql)
{
  if ( OldIrql )
  {
    if ( !this->m_WorkItemQueued )
    {
      _InterlockedIncrement(&this->m_UpdateCount);
      this->m_WorkItemQueued = 1;
      IoQueueWorkItem(this->m_WorkItem, FxWmiIrpHandler::_UpdateGuids, DelayedWorkQueue, this);
    }
    return 0;
  }
  else
  {
    _InterlockedIncrement(&this->m_UpdateCount);
    return 1;
  }
}
