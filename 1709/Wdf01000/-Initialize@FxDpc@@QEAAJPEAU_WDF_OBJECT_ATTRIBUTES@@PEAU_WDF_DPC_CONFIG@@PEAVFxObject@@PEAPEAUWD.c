/*
 * XREFs of ?Initialize@FxDpc@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_DPC_CONFIG@@PEAVFxObject@@PEAPEAUWDFDPC__@@@Z @ 0x1C006EEB8
 * Callers:
 *     ?_Create@FxDpc@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_DPC_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@PEAPEAUWDFDPC__@@@Z @ 0x1C006EFF8 (-_Create@FxDpc@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_DPC_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAV.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0012F30 (WPP_IFR_SF_qd.c)
 *     ?_GetEffectiveLock@FxObject@@SAJPEAV1@PEAVIFxHasCallbacks@@EEPEAPEAVFxCallbackLock@@PEAPEAV1@@Z @ 0x1C0018ADC (-_GetEffectiveLock@FxObject@@SAJPEAV1@PEAVIFxHasCallbacks@@EEPEAPEAVFxCallbackLock@@PEAPEAV1@@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C001FD44 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C001FEF0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z @ 0x1C0020270 (-_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z.c)
 */

__int64 __fastcall FxDpc::Initialize(
        FxDpc *this,
        _FX_DRIVER_GLOBALS *Attributes,
        _WDF_DPC_CONFIG *Config,
        FxObject *ParentObject,
        WDFDPC__ **Dpc)
{
  void (__fastcall *EvtDpcFunc)(WDFDPC__ *); // rax
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  FxDeviceBase *v11; // rax
  int EffectiveLock; // edi
  void **v14; // r8
  IFxHasCallbacks *pCallbacks; // [rsp+60h] [rbp+8h] BYREF

  EvtDpcFunc = Config->EvtDpcFunc;
  m_Globals = this->m_Globals;
  pCallbacks = 0LL;
  this->m_Callback = EvtDpcFunc;
  KeInitializeDpc(&this->m_Dpc, (PKDEFERRED_ROUTINE)FxDpc::FxDpcThunk, this);
  FxObject::AddRef(this, this, 170, "minkernel\\wdf\\framework\\kmdf\\src\\core\\fxdpc.cpp");
  v11 = FxDeviceBase::_SearchForDevice((unsigned __int64)ParentObject, &pCallbacks);
  this->m_DeviceBase = v11;
  if ( !v11 )
    return 3221225488LL;
  EffectiveLock = FxObject::_GetEffectiveLock(
                    ParentObject,
                    pCallbacks,
                    Config->AutomaticSerialization,
                    0,
                    &this->m_CallbackLock,
                    &this->m_CallbackLockObject);
  if ( EffectiveLock >= 0 )
  {
    FxObject::AddRef(ParentObject, this, 242, "minkernel\\wdf\\framework\\kmdf\\src\\core\\fxdpc.cpp");
    v14 = (void **)Dpc;
    this->m_Object = ParentObject;
    return FxObject::Commit(this, Attributes, v14, ParentObject, 1u);
  }
  else
  {
    if ( EffectiveLock == -1071644148 )
      WPP_IFR_SF_qd(
        m_Globals,
        2u,
        0x12u,
        0xBu,
        WPP_FxDpc_cpp_Traceguids,
        Attributes->DestroyEvent.m_Event.Header.WaitListHead.Flink,
        -1071644148);
    return (unsigned int)EffectiveLock;
  }
}
