/*
 * XREFs of ?TransferCompleted@FxDmaPacketTransaction@@UEAAJXZ @ 0x1C0069DE0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0012F30 (WPP_IFR_SF_qd.c)
 *     ?GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C0033744 (-GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003C594 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qqxx @ 0x1C006A83C (WPP_IFR_SF_qqxx.c)
 *     WPP_IFR_SF_qqxxd @ 0x1C006A944 (WPP_IFR_SF_qqxxd.c)
 */

__int64 __fastcall FxDmaPacketTransaction::TransferCompleted(FxDmaPacketTransaction *this, __int64 a2, unsigned int a3)
{
  _FX_DRIVER_GLOBALS **p_m_Globals; // r14
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  _DMA_ADAPTER *AdapterObject; // rdx
  _DMA_OPERATIONS *DmaOperations; // rdi
  unsigned __int16 m_ObjectSize; // ax
  const void *v9; // rcx
  $BB7947A73680E5122718DEC0A57BB44D *DmaDescription; // rax
  __int64 *p_m_CurrentFragmentLength; // r15
  __int64 *p_m_CurrentFragmentOffset; // r12
  _MDL **p_m_CurrentFragmentMdl; // r13
  _DMA_ADAPTER *v14; // rcx
  int id; // edi
  unsigned int v16; // r8d
  unsigned __int16 v17; // r9
  unsigned __int16 *p_m_ObjectSize; // rbp
  const void *v19; // rbx
  const void *_a5; // rdx
  const _GUID *_a4; // [rsp+20h] [rbp-58h]

  p_m_Globals = &this->m_Globals;
  m_Globals = this->m_Globals;
  AdapterObject = this->m_AdapterInfo->AdapterObject;
  DmaOperations = AdapterObject->DmaOperations;
  if ( m_Globals->FxVerifierOn && m_Globals->FxVerboseOn )
  {
    m_ObjectSize = this->m_ObjectSize;
    v9 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      v9 = 0LL;
    WPP_IFR_SF_qqxx(
      m_Globals,
      (unsigned __int8)AdapterObject,
      a3,
      0xFu,
      WPP_FxDmaTransactionPacket_hpp_Traceguids,
      v9,
      this->m_CurrentFragmentMdl,
      this->m_CurrentFragmentOffset,
      this->m_CurrentFragmentLength);
  }
  DmaDescription = FxDmaEnabler::GetDmaDescription(this->m_DmaEnabler, WdfDmaDirectionReadFromDevice);
  p_m_CurrentFragmentLength = (__int64 *)&this->m_CurrentFragmentLength;
  p_m_CurrentFragmentOffset = (__int64 *)&this->m_CurrentFragmentOffset;
  p_m_CurrentFragmentMdl = &this->m_CurrentFragmentMdl;
  v14 = this->m_AdapterInfo->AdapterObject;
  if ( DmaDescription->m_SimplexAdapterInfo.DeviceDescription.Version == 3 )
  {
    LODWORD(_a4) = *(_DWORD *)p_m_CurrentFragmentLength;
    id = ((__int64 (__fastcall *)(_DMA_ADAPTER *, _MDL *, void *, __int64))DmaOperations->FlushAdapterBuffersEx)(
           v14,
           *p_m_CurrentFragmentMdl,
           this->m_MapRegisterBase,
           *p_m_CurrentFragmentOffset);
    goto LABEL_11;
  }
  LODWORD(_a4) = *(_DWORD *)p_m_CurrentFragmentLength;
  if ( ((unsigned __int8 (__fastcall *)(_DMA_ADAPTER *, _MDL *, void *, char *))DmaOperations->FlushAdapterBuffers)(
         v14,
         *p_m_CurrentFragmentMdl,
         this->m_MapRegisterBase,
         (char *)(*p_m_CurrentFragmentMdl)->StartVa + (*p_m_CurrentFragmentMdl)->ByteOffset + *p_m_CurrentFragmentOffset) )
  {
    id = 0;
LABEL_11:
    if ( id >= 0 )
      return (unsigned int)id;
    goto LABEL_12;
  }
  id = -1073741823;
LABEL_12:
  p_m_ObjectSize = &this->m_ObjectSize;
  v19 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  _a5 = v19;
  if ( !*p_m_ObjectSize )
    _a5 = 0LL;
  WPP_IFR_SF_qqxxd(
    *p_m_Globals,
    (unsigned __int8)_a5,
    v16,
    v17,
    _a4,
    _a5,
    *p_m_CurrentFragmentMdl,
    *p_m_CurrentFragmentOffset,
    *p_m_CurrentFragmentLength,
    id);
  if ( !*p_m_ObjectSize )
    v19 = 0LL;
  WPP_IFR_SF_qd(m_Globals, 2u, 0xFu, 0x20u, WPP_FxDmaTransactionPacket_cpp_Traceguids, v19, id);
  FxVerifierDbgBreakPoint(m_Globals);
  return (unsigned int)id;
}
