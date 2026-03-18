/*
 * XREFs of ?SupportsChainedMdls@FxDmaEnabler@@QEAAEXZ @ 0x1C0066098
 * Callers:
 *     imp_WdfDmaTransactionInitialize @ 0x1C0067030 (imp_WdfDmaTransactionInitialize.c)
 *     imp_WdfDmaTransactionInitializeUsingRequest @ 0x1C0067290 (imp_WdfDmaTransactionInitializeUsingRequest.c)
 * Callees:
 *     ?GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C0033744 (-GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z.c)
 */

bool __fastcall FxDmaEnabler::SupportsChainedMdls(FxDmaEnabler *this)
{
  __int64 v1; // rcx

  return FxDmaEnabler::GetDmaDescription(this, WdfDmaDirectionReadFromDevice)->m_SimplexAdapterInfo.DeviceDescription.Version == 3
      || (*(_BYTE *)(v1 + 380) & 0xC) != 4;
}
