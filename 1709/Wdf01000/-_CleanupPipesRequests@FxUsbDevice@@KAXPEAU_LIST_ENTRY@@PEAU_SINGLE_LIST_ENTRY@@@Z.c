/*
 * XREFs of ?_CleanupPipesRequests@FxUsbDevice@@KAXPEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1C0092AB0
 * Callers:
 *     ?CleanupInterfacePipesAndDelete@FxUsbDevice@@IEAAXPEAVFxUsbInterface@@@Z @ 0x1C0090A3C (-CleanupInterfacePipesAndDelete@FxUsbDevice@@IEAAXPEAVFxUsbInterface@@@Z.c)
 *     ?PipesGotoRemoveState@FxUsbDevice@@IEAAXE@Z @ 0x1C0091B28 (-PipesGotoRemoveState@FxUsbDevice@@IEAAXE@Z.c)
 * Callees:
 *     ?_CancelSentRequests@FxIoTarget@@KAXPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1C0012B10 (-_CancelSentRequests@FxIoTarget@@KAXPEAU_SINGLE_LIST_ENTRY@@@Z.c)
 *     ?RequestCompletionRoutine@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z @ 0x1C0064C74 (-RequestCompletionRoutine@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z.c)
 */

void __fastcall FxUsbDevice::_CleanupPipesRequests(
        _LIST_ENTRY *PendHead,
        _SINGLE_LIST_ENTRY *SentHead,
        unsigned __int8 a3)
{
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY *v6; // rax
  FxRequestBase *p_Blink; // rdx
  FxIoTarget *m_Target; // rcx

  while ( 1 )
  {
    Flink = PendHead->Flink;
    if ( PendHead->Flink == PendHead )
      break;
    if ( Flink->Blink != PendHead || (v6 = Flink->Flink, Flink->Flink->Blink != Flink) )
      __fastfail(3u);
    PendHead->Flink = v6;
    v6->Blink = PendHead;
    Flink->Blink = Flink;
    Flink->Flink = Flink;
    p_Blink = (FxRequestBase *)&Flink[-8].Blink;
    m_Target = p_Blink->m_Target;
    p_Blink->m_Irp.m_Irp->IoStatus.Status = -1071644154;
    p_Blink->m_Irp.m_Irp->IoStatus.Information = 0LL;
    FxIoTarget::RequestCompletionRoutine(m_Target, p_Blink, a3);
  }
  FxIoTarget::_CancelSentRequests(SentHead);
}
