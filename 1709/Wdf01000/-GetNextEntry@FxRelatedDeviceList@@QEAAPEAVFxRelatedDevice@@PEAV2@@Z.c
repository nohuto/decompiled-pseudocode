/*
 * XREFs of ?GetNextEntry@FxRelatedDeviceList@@QEAAPEAVFxRelatedDevice@@PEAV2@@Z @ 0x1C00A5C10
 * Callers:
 *     imp_WdfDeviceClearRemovalRelationsDevices @ 0x1C0077840 (imp_WdfDeviceClearRemovalRelationsDevices.c)
 *     ?ClearEjectionDevicesList@FxPkgPdo@@QEAAXXZ @ 0x1C009841C (-ClearEjectionDevicesList@FxPkgPdo@@QEAAXXZ.c)
 *     ?HandleQueryDeviceRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAVFxRelatedDeviceList@@@Z @ 0x1C009D230 (-HandleQueryDeviceRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAVFxRelatedDeviceList@@@Z.c)
 *     ?PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C009D5C4 (-PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     ?GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z @ 0x1C002E99C (-GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z.c)
 */

FxTransactionedEntry *__fastcall FxRelatedDeviceList::GetNextEntry(FxRelatedDeviceList *this, FxRelatedDevice *Entry)
{
  FxTransactionedEntry *result; // rax

  result = FxTransactionedList::GetNextEntryLocked(
             this,
             (FxTransactionedEntry *)((unsigned __int64)&Entry->m_TransactionedEntry & -(__int64)(Entry != 0LL)));
  if ( result )
    return (FxTransactionedEntry *)((char *)result - 104);
  return result;
}
