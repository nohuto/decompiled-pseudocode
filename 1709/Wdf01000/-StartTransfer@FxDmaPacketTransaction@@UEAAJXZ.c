/*
 * XREFs of ?StartTransfer@FxDmaPacketTransaction@@UEAAJXZ @ 0x1C0069B60
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0012F30 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_q @ 0x1C001A480 (WPP_IFR_SF_q.c)
 *     ?GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C0033744 (-GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003C594 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?AllocateAdapterChannel@FxDmaPacketTransaction@@IEAAJE@Z @ 0x1C0068B60 (-AllocateAdapterChannel@FxDmaPacketTransaction@@IEAAJE@Z.c)
 *     WPP_IFR_SF_qqxx @ 0x1C006A83C (WPP_IFR_SF_qqxx.c)
 */

__int64 __fastcall FxDmaPacketTransaction::StartTransfer(FxDmaPacketTransaction *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  const void *_a3; // rbp
  unsigned __int8 v4; // dl
  unsigned int v5; // r8d
  __int64 v6; // rcx
  int v7; // esi
  FxDmaEnabler *m_DmaEnabler; // r10
  unsigned __int16 m_ObjectSize; // dx
  const void *v10; // r10
  unsigned __int64 m_MaxFragmentLength; // rdx
  unsigned __int64 m_Remaining; // r8
  unsigned __int64 m_StartOffset; // r9
  bool v14; // zf
  unsigned __int8 v15; // dl
  __int16 v16; // cx
  int AdapterChannel; // eax
  __int64 v18; // rcx

  m_Globals = this->m_Globals;
  _a3 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !this->m_ObjectSize )
    _a3 = 0LL;
  if ( m_Globals->FxVerifierOn )
  {
    if ( m_Globals->FxVerboseOn )
    {
      WPP_IFR_SF_q(m_Globals, 5u, 0xFu, 0x13u, WPP_FxDmaTransactionPacket_cpp_Traceguids, _a3);
      if ( m_Globals->FxVerboseOn )
        WPP_IFR_SF_qqxx(
          m_Globals,
          v4,
          v5,
          0x14u,
          WPP_FxDmaTransactionPacket_cpp_Traceguids,
          _a3,
          this->m_StartMdl,
          this->m_StartOffset,
          this->m_TransactionLength);
    }
  }
  if ( FxDmaEnabler::GetDmaDescription(this->m_DmaEnabler, WdfDmaDirectionReadFromDevice)->m_SimplexAdapterInfo.DeviceDescription.Version == 3 )
    v7 = 0;
  else
    v7 = _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(v6 + 96) + 192LL), 1, 0) != 0
       ? 0xC0200204
       : 0;
  if ( v7 >= 0 )
  {
    m_MaxFragmentLength = this->m_MaxFragmentLength;
    m_Remaining = this->m_Remaining;
    m_StartOffset = this->m_StartOffset;
    this->m_CurrentFragmentOffset = m_StartOffset;
    if ( m_Remaining < m_MaxFragmentLength )
      m_MaxFragmentLength = m_Remaining;
    v14 = this->m_State == FxDmaTransactionStateReserved;
    this->m_CurrentFragmentLength = m_MaxFragmentLength;
    if ( v14 )
    {
      v15 = 0;
      this->m_MapRegistersNeeded = this->m_MapRegistersReserved;
    }
    else
    {
      if ( (*((_BYTE *)this->m_DmaEnabler + 380) & 4) != 0 )
      {
        if ( m_MaxFragmentLength == m_Remaining )
          v16 = m_StartOffset + LOWORD(this->m_CurrentFragmentMdl->StartVa) + this->m_CurrentFragmentMdl->ByteOffset;
        else
          v16 = 4095;
        this->m_MapRegistersNeeded = ((v16 & 0xFFF) + m_MaxFragmentLength + 4095) >> 12;
      }
      else
      {
        this->m_MapRegistersNeeded = this->m_AdapterInfo->NumberOfMapRegisters;
      }
      v15 = this->m_MapRegistersReserved != 0;
    }
    AdapterChannel = FxDmaPacketTransaction::AllocateAdapterChannel(this, v15);
    v7 = AdapterChannel;
    if ( AdapterChannel < 0 )
    {
      WPP_IFR_SF_qd(m_Globals, 2u, 0xFu, 0x16u, WPP_FxDmaTransactionPacket_cpp_Traceguids, _a3, AdapterChannel);
      if ( FxDmaEnabler::GetDmaDescription(this->m_DmaEnabler, WdfDmaDirectionReadFromDevice)->m_SimplexAdapterInfo.DeviceDescription.Version != 3 )
        _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(v18 + 96) + 192LL), 0);
    }
    if ( m_Globals->FxVerifierOn && m_Globals->FxVerboseOn )
      WPP_IFR_SF_qd(m_Globals, 5u, 0xFu, 0x17u, WPP_FxDmaTransactionPacket_cpp_Traceguids, _a3, v7);
  }
  else
  {
    m_DmaEnabler = this->m_DmaEnabler;
    m_ObjectSize = m_DmaEnabler->m_ObjectSize;
    v10 = (const void *)((unsigned __int64)m_DmaEnabler ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      v10 = 0LL;
    WPP_IFR_SF_qd(m_Globals, 2u, 0xFu, 0x15u, WPP_FxDmaTransactionPacket_cpp_Traceguids, v10, v7);
    FxVerifierDbgBreakPoint(m_Globals);
  }
  return (unsigned int)v7;
}
