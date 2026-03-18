/*
 * XREFs of ?ValidateCmResource@FxPkgPnp@@QEAAJPEAPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@0@Z @ 0x1C0099FA4
 * Callers:
 *     ?ValidateInterruptResourceCm@FxPkgPnp@@QEAAJPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@0PEAU_WDF_INTERRUPT_CONFIG@@@Z @ 0x1C009A198 (-ValidateInterruptResourceCm@FxPkgPnp@@QEAAJPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@0PEAU_WDF_INTER.c)
 * Callees:
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003C594 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C0066834 (WPP_IFR_SF_qid.c)
 */

__int64 __fastcall FxPkgPnp::ValidateCmResource(
        FxPkgPnp *this,
        _CM_PARTIAL_RESOURCE_DESCRIPTOR **CmResourceRaw,
        _CM_PARTIAL_RESOURCE_DESCRIPTOR **CmResource)
{
  FxCmResList *m_Resources; // r9
  _FX_DRIVER_GLOBALS *m_Globals; // r12
  _LIST_ENTRY *Flink; // r10
  FxCollectionInternal *v9; // r9
  _LIST_ENTRY **p_Blink; // r10
  _LIST_ENTRY **v11; // r11
  _LIST_ENTRY *v12; // rcx
  _LIST_ENTRY *v13; // rbp
  const void *v14; // rbx
  unsigned int v15; // ebx
  FxDeviceBase *v16; // rdx
  unsigned __int16 v17; // ax
  unsigned __int64 _a2; // rdx
  _CM_PARTIAL_RESOURCE_DESCRIPTOR *v19; // r15
  FxDeviceBase *v20; // rcx
  unsigned __int16 v21; // ax
  unsigned __int16 v22; // r9
  unsigned __int64 v23; // rcx
  bool v24; // zf
  const void *_a1; // rax
  _CM_PARTIAL_RESOURCE_DESCRIPTOR *v26; // rbp
  FxDeviceBase *v27; // rcx
  unsigned __int16 v28; // ax
  FxDeviceBase *m_DeviceBase; // rcx
  unsigned __int16 m_ObjectSize; // ax
  unsigned __int64 v31; // rcx

  m_Resources = this->m_Resources;
  m_Globals = this->m_Globals;
  Flink = m_Resources->m_ListHead.Flink;
  v9 = &m_Resources->FxCollectionInternal;
  p_Blink = &Flink[-1].Blink;
  v11 = &this->m_ResourcesRaw->m_ListHead.Flink[-1].Blink;
  if ( p_Blink == (_LIST_ENTRY **)v9 )
    goto LABEL_17;
  do
  {
    v12 = *p_Blink;
    v13 = *v11;
    if ( (_CM_PARTIAL_RESOURCE_DESCRIPTOR *)((char *)&(*p_Blink)[7].Blink + 4) == *CmResource )
      break;
    p_Blink = &p_Blink[1][-1].Blink;
    v11 = &v11[1][-1].Blink;
  }
  while ( p_Blink != (_LIST_ENTRY **)v9 );
  if ( p_Blink == (_LIST_ENTRY **)v9 )
  {
LABEL_17:
    v15 = -1073741811;
    m_DeviceBase = this->m_DeviceBase;
    m_ObjectSize = m_DeviceBase->m_ObjectSize;
    v31 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !m_ObjectSize )
      v31 = 0LL;
    WPP_IFR_SF_qid(m_Globals, 2u, 0xCu, 0x22u, WPP_PnpStateMachine_cpp_Traceguids, *CmResource, v31, -1073741811);
    goto LABEL_20;
  }
  v14 = (char *)&v13[7].Blink + 4;
  if ( (_CM_PARTIAL_RESOURCE_DESCRIPTOR *)((char *)&v13[7].Blink + 4) != *CmResourceRaw )
  {
    v15 = -1073741811;
    v16 = this->m_DeviceBase;
    v17 = v16->m_ObjectSize;
    _a2 = (unsigned __int64)v16 ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !v17 )
      _a2 = 0LL;
    WPP_IFR_SF_qid(m_Globals, 2u, 0xCu, 0x23u, WPP_PnpStateMachine_cpp_Traceguids, *CmResourceRaw, _a2, -1073741811);
LABEL_20:
    FxVerifierDbgBreakPoint(m_Globals);
    return v15;
  }
  v19 = (_CM_PARTIAL_RESOURCE_DESCRIPTOR *)&v12[6].Blink;
  if ( RtlCompareMemory((char *)&v12[7].Blink + 4, &v12[6].Blink, 0x14uLL) != 20 )
  {
    v15 = -1073741811;
    v20 = this->m_DeviceBase;
    v21 = v20->m_ObjectSize;
    v22 = 36;
    v23 = (unsigned __int64)v20 ^ 0xFFFFFFFFFFFFFFF8uLL;
    v24 = v21 == 0;
    _a1 = *CmResource;
LABEL_11:
    if ( v24 )
      v23 = 0LL;
    WPP_IFR_SF_qid(m_Globals, 2u, 0xCu, v22, WPP_PnpStateMachine_cpp_Traceguids, _a1, v23, -1073741811);
    goto LABEL_20;
  }
  v26 = (_CM_PARTIAL_RESOURCE_DESCRIPTOR *)&v13[6].Blink;
  if ( RtlCompareMemory(v14, v26, 0x14uLL) != 20 )
  {
    v15 = -1073741811;
    v27 = this->m_DeviceBase;
    v28 = v27->m_ObjectSize;
    v22 = 37;
    v23 = (unsigned __int64)v27 ^ 0xFFFFFFFFFFFFFFF8uLL;
    v24 = v28 == 0;
    _a1 = *CmResourceRaw;
    goto LABEL_11;
  }
  *CmResource = v19;
  v15 = 0;
  *CmResourceRaw = v26;
  return v15;
}
