/*
 * XREFs of ?AllocateAdapterChannel@FxDmaPacketTransaction@@IEAAJE@Z @ 0x1C0068B60
 * Callers:
 *     ?StartTransfer@FxDmaPacketTransaction@@UEAAJXZ @ 0x1C0069B60 (-StartTransfer@FxDmaPacketTransaction@@UEAAJXZ.c)
 * Callees:
 *     ?GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C0033744 (-GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z.c)
 *     WPP_IFR_SF_dq @ 0x1C0065CFC (WPP_IFR_SF_dq.c)
 *     ?_AdapterControl@FxDmaPacketTransaction@@KA?AW4_IO_ALLOCATION_ACTION@@PEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX2@Z @ 0x1C0069FC0 (-_AdapterControl@FxDmaPacketTransaction@@KA-AW4_IO_ALLOCATION_ACTION@@PEAU_DEVICE_OBJECT@@PEAU_I.c)
 *     WPP_IFR_SF_dqd @ 0x1C006A28C (WPP_IFR_SF_dqd.c)
 */

__int64 __fastcall FxDmaPacketTransaction::AllocateAdapterChannel(
        FxDmaPacketTransaction *this,
        unsigned __int8 MapRegistersReserved)
{
  KIRQL v4; // al
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  KIRQL v6; // si
  const void *_a2; // rdx
  const void *v8; // rcx
  bool v9; // zf
  __int64 v10; // r11
  _DMA_ADAPTER *AdapterObject; // rcx
  _DMA_OPERATIONS *DmaOperations; // rax
  int v13; // eax
  int _a3; // edi
  const void *v15; // rcx

  v4 = KfRaiseIrql(2u);
  m_Globals = this->m_Globals;
  v6 = v4;
  if ( m_Globals->FxVerifierOn )
  {
    if ( MapRegistersReserved )
    {
      if ( m_Globals->FxVerboseOn )
      {
        v8 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !this->m_ObjectSize )
          v8 = 0LL;
        WPP_IFR_SF_dq(
          m_Globals,
          5u,
          0xFu,
          0xBu,
          WPP_FxDmaTransactionPacket_hpp_Traceguids,
          this->m_MapRegistersNeeded,
          v8);
      }
    }
    else if ( m_Globals->FxVerboseOn )
    {
      _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        _a2 = 0LL;
      WPP_IFR_SF_dq(
        m_Globals,
        5u,
        0xFu,
        0xAu,
        WPP_FxDmaTransactionPacket_hpp_Traceguids,
        this->m_MapRegistersNeeded,
        _a2);
    }
  }
  v9 = FxDmaEnabler::GetDmaDescription(this->m_DmaEnabler, WdfDmaDirectionReadFromDevice)->m_SimplexAdapterInfo.DeviceDescription.Version == 3;
  AdapterObject = this->m_AdapterInfo->AdapterObject;
  DmaOperations = AdapterObject->DmaOperations;
  if ( v9 )
  {
    if ( MapRegistersReserved )
    {
      FxDmaPacketTransaction::_AdapterControl(*(_DEVICE_OBJECT **)(v10 + 168), 0LL, this->m_MapRegisterBase, this);
      _a3 = 0;
      goto LABEL_17;
    }
    v13 = DmaOperations->AllocateAdapterChannelEx(
            AdapterObject,
            *(_DEVICE_OBJECT **)(v10 + 168),
            this->m_TransferContext,
            this->m_MapRegistersNeeded,
            this->m_Flags,
            FxDmaPacketTransaction::_AdapterControl,
            this,
            0LL);
  }
  else
  {
    v13 = DmaOperations->AllocateAdapterChannel(
            AdapterObject,
            *(_DEVICE_OBJECT **)(v10 + 168),
            this->m_MapRegistersNeeded,
            FxDmaPacketTransaction::_AdapterControl,
            this);
  }
  _a3 = v13;
LABEL_17:
  KeLowerIrql(v6);
  if ( _a3 < 0 )
  {
    v15 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v15 = 0LL;
    WPP_IFR_SF_dqd(
      this->m_Globals,
      2u,
      0xFu,
      0xCu,
      WPP_FxDmaTransactionPacket_hpp_Traceguids,
      this->m_MapRegistersNeeded,
      v15,
      _a3);
  }
  return (unsigned int)_a3;
}
