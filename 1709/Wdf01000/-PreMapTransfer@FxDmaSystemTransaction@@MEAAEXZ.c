/*
 * XREFs of ?PreMapTransfer@FxDmaSystemTransaction@@MEAAEXZ @ 0x1C006BAF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qqq @ 0x1C00689B0 (WPP_IFR_SF_qqq.c)
 */

char __fastcall FxDmaSystemTransaction::PreMapTransfer(FxDmaSystemTransaction *this)
{
  unsigned __int8 (__fastcall *Method)(WDFDMATRANSACTION__ *, WDFDEVICE__ *, void *, _MDL *, unsigned __int64, unsigned __int64); // r8
  char v3; // di
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  const void *v5; // rdx
  unsigned __int16 m_ObjectSize; // si
  unsigned __int64 m_CurrentFragmentOffset; // r10
  FxDeviceBase *m_DeviceBase; // rdx
  unsigned __int8 (__fastcall *v9)(WDFDMATRANSACTION__ *, WDFDEVICE__ *, void *, _MDL *, unsigned __int64, unsigned __int64); // rax
  _MDL *m_CurrentFragmentMdl; // r9
  void *m_ConfigureChannelContext; // r8
  unsigned __int16 v12; // r11
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rbx
  unsigned __int64 m_CurrentFragmentLength; // [rsp+28h] [rbp-20h]

  Method = this->m_ConfigureChannelFunction.Method;
  v3 = 1;
  if ( Method )
  {
    m_Globals = this->m_Globals;
    if ( m_Globals->FxVerifierOn && m_Globals->FxVerboseOn )
    {
      v5 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v5 = 0LL;
      WPP_IFR_SF_qqq(
        m_Globals,
        5u,
        0xFu,
        0xBu,
        WPP_FxDmaTransactionSystem_cpp_Traceguids,
        Method,
        this->m_ConfigureChannelContext,
        v5);
    }
    m_ObjectSize = this->m_ObjectSize;
    m_CurrentFragmentOffset = this->m_CurrentFragmentOffset;
    m_DeviceBase = this->m_DmaEnabler->FxDmaPacketTransaction::FxDmaTransactionBase::m_DeviceBase;
    v9 = this->m_ConfigureChannelFunction.Method;
    m_CurrentFragmentMdl = this->m_CurrentFragmentMdl;
    m_ConfigureChannelContext = this->m_ConfigureChannelContext;
    v12 = m_DeviceBase->m_ObjectSize;
    if ( v9 )
    {
      v13 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
      m_CurrentFragmentLength = this->m_CurrentFragmentLength;
      if ( !v12 )
        v13 = 0LL;
      v14 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
      if ( !m_ObjectSize )
        v14 = 0LL;
      return v9(
               (WDFDMATRANSACTION__ *)v14,
               (WDFDEVICE__ *)v13,
               m_ConfigureChannelContext,
               m_CurrentFragmentMdl,
               m_CurrentFragmentOffset,
               m_CurrentFragmentLength);
    }
  }
  return v3;
}
