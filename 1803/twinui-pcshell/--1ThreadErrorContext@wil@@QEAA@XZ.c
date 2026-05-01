/*
 * XREFs of ??1ThreadErrorContext@wil@@QEAA@XZ @ 0x1800F620C
 * Callers:
 *     _CDesktopPositioner::_GetRestorePosition_::_1_::dtor$4 @ 0x1800B2210 (_CDesktopPositioner--_GetRestorePosition_--_1_--dtor$4.c)
 *     _TaskFlowImmersiveShellBroker::SessionDisposed_::_1_::dtor$0 @ 0x1800B4D77 (_TaskFlowImmersiveShellBroker--SessionDisposed_--_1_--dtor$0.c)
 *     _TaskFlowImmersiveShellBroker::SessionCreated_::_1_::dtor$0 @ 0x1800B4D83 (_TaskFlowImmersiveShellBroker--SessionCreated_--_1_--dtor$0.c)
 *     _TaskFlowImmersiveShellBroker::RuntimeClassInitialize_::_1_::dtor$0 @ 0x1801A678B (_TaskFlowImmersiveShellBroker--RuntimeClassInitialize_--_1_--dtor$0.c)
 *     _TaskFlowImmersiveShellBroker::SetLocalOnly_::_1_::dtor$0 @ 0x1801A6B60 (_TaskFlowImmersiveShellBroker--SetLocalOnly_--_1_--dtor$0.c)
 *     _TaskFlowImmersiveShellBroker::StartAppActivitySessionListener_::_1_::dtor$0 @ 0x1801A6DC4 (_TaskFlowImmersiveShellBroker--StartAppActivitySessionListener_--_1_--dtor$0.c)
 *     _TaskFlowImmersiveShellBroker::StartFileListener_::_1_::dtor$0 @ 0x1801A71A8 (_TaskFlowImmersiveShellBroker--StartFileListener_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::ThreadErrorContext::~ThreadErrorContext(wil::ThreadErrorContext *this)
{
  if ( *(_QWORD *)this )
    *(_DWORD *)(*(_QWORD *)this + 16LL) = *((_DWORD *)this + 3);
}
