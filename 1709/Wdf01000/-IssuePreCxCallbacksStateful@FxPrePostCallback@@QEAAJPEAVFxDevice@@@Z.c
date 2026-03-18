/*
 * XREFs of ?IssuePreCxCallbacksStateful@FxPrePostCallback@@QEAAJPEAVFxDevice@@@Z @ 0x1C009FE00
 * Callers:
 *     ?InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@@Z @ 0x1C0034860 (-InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@.c)
 * Callees:
 *     ?IsCallbackPresent@FxCxPnpPowerCallbackContext@@AEAAEW4FxCxCallbackSubType@@@Z @ 0x1C009FC6C (-IsCallbackPresent@FxCxPnpPowerCallbackContext@@AEAAEW4FxCxCallbackSubType@@@Z.c)
 */

__int64 __fastcall FxPrePostCallback::IssuePreCxCallbacksStateful(FxPrePostCallback *this, FxDevice *Device)
{
  _LIST_ENTRY *p_m_CxDeviceInfoListHead; // rsi
  _LIST_ENTRY *Flink; // rbx
  int v5; // r10d
  __int64 m_CallbackType; // rax
  FxCxPnpPowerCallbackContext *v7; // rdi

  p_m_CxDeviceInfoListHead = &Device->m_CxDeviceInfoListHead;
  Flink = Device->m_CxDeviceInfoListHead.Flink;
  v5 = 0;
  while ( Flink != p_m_CxDeviceInfoListHead && Flink )
  {
    m_CallbackType = (unsigned __int8)this->m_CallbackType;
    v7 = (FxCxPnpPowerCallbackContext *)*((_QWORD *)&Flink[6].Flink + m_CallbackType);
    if ( v7
      && FxCxPnpPowerCallbackContext::IsCallbackPresent(
           *((FxCxPnpPowerCallbackContext **)&Flink[6].Flink + m_CallbackType),
           FxCxPreCallback) )
    {
      v5 = this->InvokeCxCallback(this, v7, FxCxInvokePreCallback);
      if ( v5 < 0 )
        return (unsigned int)v5;
      v7->m_PreCallbackSuccessful = 1;
    }
    Flink = Flink->Flink;
  }
  return (unsigned int)v5;
}
