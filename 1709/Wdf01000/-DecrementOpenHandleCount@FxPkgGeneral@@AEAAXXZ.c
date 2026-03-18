/*
 * XREFs of ?DecrementOpenHandleCount@FxPkgGeneral@@AEAAXXZ @ 0x1C0063264
 * Callers:
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0009360 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0026700 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?_CreateCompletionRoutine@FxPkgGeneral@@CAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C0038220 (-_CreateCompletionRoutine@FxPkgGeneral@@CAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 * Callees:
 *     ?DeleteObject@FxObject@@UEAAXXZ @ 0x1C000A590 (-DeleteObject@FxObject@@UEAAXXZ.c)
 */

void __fastcall FxPkgGeneral::DecrementOpenHandleCount(FxPkgGeneral *this)
{
  FxDeviceBase *m_DeviceBase; // rcx

  if ( _InterlockedExchangeAdd(&this->m_OpenHandleCount, 0xFFFFFFFF) == 1 )
  {
    m_DeviceBase = this->m_DeviceBase;
    if ( BYTE5(m_DeviceBase[1].m_Globals) )
      FxObject::DeleteObject(m_DeviceBase);
  }
}
