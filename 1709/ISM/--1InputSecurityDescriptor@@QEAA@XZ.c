/*
 * XREFs of ??1InputSecurityDescriptor@@QEAA@XZ @ 0x1800488DC
 * Callers:
 *     ?Initialize@InputStateManager@@IEAAJXZ @ 0x180006028 (-Initialize@InputStateManager@@IEAAJXZ.c)
 *     ?CreateEndpointToReceiveMessages@TestCommandHost@@AEAAXXZ @ 0x180009EE8 (-CreateEndpointToReceiveMessages@TestCommandHost@@AEAAXXZ.c)
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x18001789C (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 *     ?Initialize@DWMCursorBroker@@QEAAJXZ @ 0x180024DBC (-Initialize@DWMCursorBroker@@QEAAJXZ.c)
 *     ?Initialize@DWMHardwareCursor@@IEAAJXZ @ 0x1800277FC (-Initialize@DWMHardwareCursor@@IEAAJXZ.c)
 *     ?Initialize@InputEdgyNotifier@@QEAAJXZ @ 0x18002E488 (-Initialize@InputEdgyNotifier@@QEAAJXZ.c)
 *     ?Initialize@MobileCursorBroker@@QEAAJXZ @ 0x18002F1CC (-Initialize@MobileCursorBroker@@QEAAJXZ.c)
 *     ?Initialize@ControllerNavigationManager@@AEAAJXZ @ 0x18003C350 (-Initialize@ControllerNavigationManager@@AEAAJXZ.c)
 *     ?InitializeCoreMessaging@SpeechRuntimeListener@@AEAAJXZ @ 0x180068C8C (-InitializeCoreMessaging@SpeechRuntimeListener@@AEAAJXZ.c)
 *     ?InitializeCoreMessaging@TouchProcessor@@QEAAJXZ @ 0x180073594 (-InitializeCoreMessaging@TouchProcessor@@QEAAJXZ.c)
 *     ?Initialize@LegacyInjectionRawInputProvider@@IEAAJXZ @ 0x1800864BC (-Initialize@LegacyInjectionRawInputProvider@@IEAAJXZ.c)
 *     ?Initialize@InputRedirectionComponent@@IEAAJPEAUIInputDeviceInfoStore@@@Z @ 0x1800A6D14 (-Initialize@InputRedirectionComponent@@IEAAJPEAUIInputDeviceInfoStore@@@Z.c)
 *     _InputStateManager::Initialize_::_1_::dtor$0 @ 0x1800CC676 (_InputStateManager--Initialize_--_1_--dtor$0.c)
 *     _TestCommandHost::CreateEndpointToReceiveMessages_::_1_::dtor$0 @ 0x1800CCA88 (_TestCommandHost--CreateEndpointToReceiveMessages_--_1_--dtor$0.c)
 *     _DWMInputRouter::Initialize_::_1_::dtor$0 @ 0x1800CD359 (_DWMInputRouter--Initialize_--_1_--dtor$0.c)
 *     _DWMInputRouter::Initialize_::_1_::dtor$1 @ 0x1800CD365 (_DWMInputRouter--Initialize_--_1_--dtor$1.c)
 *     _DWMInputRouter::Initialize_::_1_::dtor$2 @ 0x1800CD371 (_DWMInputRouter--Initialize_--_1_--dtor$2.c)
 *     _DWMCursorBroker::Initialize_::_1_::dtor$0 @ 0x1800CDA31 (_DWMCursorBroker--Initialize_--_1_--dtor$0.c)
 *     _DWMHardwareCursor::Initialize_::_1_::dtor$0 @ 0x1800CDB20 (_DWMHardwareCursor--Initialize_--_1_--dtor$0.c)
 *     _InputEdgyNotifier::Initialize_::_1_::dtor$0 @ 0x1800CDF1C (_InputEdgyNotifier--Initialize_--_1_--dtor$0.c)
 *     _InputEdgyNotifier::Initialize_::_1_::dtor$1 @ 0x1800CDF28 (_InputEdgyNotifier--Initialize_--_1_--dtor$1.c)
 *     _MobileCursorBroker::Initialize_::_1_::dtor$0 @ 0x1800CDF54 (_MobileCursorBroker--Initialize_--_1_--dtor$0.c)
 *     _InputRedirectionComponent::Initialize_::_1_::dtor$0 @ 0x1800CE6C7 (_InputRedirectionComponent--Initialize_--_1_--dtor$0.c)
 *     _TouchProcessor::InitializeCoreMessaging_::_1_::dtor$0 @ 0x1800CFACF (_TouchProcessor--InitializeCoreMessaging_--_1_--dtor$0.c)
 *     _LegacyInjectionRawInputProvider::Initialize_::_1_::dtor$0 @ 0x1800D0A70 (_LegacyInjectionRawInputProvider--Initialize_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall InputSecurityDescriptor::~InputSecurityDescriptor(InputSecurityDescriptor *this)
{
  void *v2; // rcx

  v2 = *(void **)this;
  if ( v2 )
  {
    if ( *((_BYTE *)this + 8) )
      FreeTransientObjectSecurityDescriptor();
    else
      LocalFree(v2);
    *(_QWORD *)this = 0LL;
  }
}
