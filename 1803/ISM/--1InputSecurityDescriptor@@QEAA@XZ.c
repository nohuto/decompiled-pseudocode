/*
 * XREFs of ??1InputSecurityDescriptor@@QEAA@XZ @ 0x18003A84C
 * Callers:
 *     ?Initialize@InputStateManager@@IEAAJXZ @ 0x1800063BC (-Initialize@InputStateManager@@IEAAJXZ.c)
 *     ?CreateEndpointToReceiveMessages@TestCommandHost@@AEAAXXZ @ 0x180009D18 (-CreateEndpointToReceiveMessages@TestCommandHost@@AEAAXXZ.c)
 *     ?InitializeCoreMessaging@SpeechRuntimeListener@@AEAAJXZ @ 0x1800602FC (-InitializeCoreMessaging@SpeechRuntimeListener@@AEAAJXZ.c)
 *     ?Initialize@LegacyInjectionRawInputProvider@@IEAAJXZ @ 0x18006B4BC (-Initialize@LegacyInjectionRawInputProvider@@IEAAJXZ.c)
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x18007BDCC (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 *     ?Initialize@DWMCursorBroker@@QEAAJXZ @ 0x180089A14 (-Initialize@DWMCursorBroker@@QEAAJXZ.c)
 *     ?Initialize@DragNDropProcessorLegacy@@AEAAJXZ @ 0x1800B1E90 (-Initialize@DragNDropProcessorLegacy@@AEAAJXZ.c)
 *     ?Create@InputRedirectionProcessor@@SAJPEAUIInputDeviceInfoStore@@PEAPEAV1@@Z @ 0x1800B4C9C (-Create@InputRedirectionProcessor@@SAJPEAUIInputDeviceInfoStore@@PEAPEAV1@@Z.c)
 *     ?Initialize@ButtonRecognizer@@IEAAJXZ @ 0x1800B70B0 (-Initialize@ButtonRecognizer@@IEAAJXZ.c)
 *     _InputStateManager::Initialize_::_1_::dtor$0 @ 0x1800E34C3 (_InputStateManager--Initialize_--_1_--dtor$0.c)
 *     _TestCommandHost::CreateEndpointToReceiveMessages_::_1_::dtor$0 @ 0x1800E38CB (_TestCommandHost--CreateEndpointToReceiveMessages_--_1_--dtor$0.c)
 *     _SpeechRuntimeListener::InitializeCoreMessaging_::_1_::dtor$0 @ 0x1800E6BF8 (_SpeechRuntimeListener--InitializeCoreMessaging_--_1_--dtor$0.c)
 *     _LegacyInjectionRawInputProvider::Initialize_::_1_::dtor$0 @ 0x1800E72C2 (_LegacyInjectionRawInputProvider--Initialize_--_1_--dtor$0.c)
 *     _DWMInputRouter::Initialize_::_1_::dtor$0 @ 0x1800E7A73 (_DWMInputRouter--Initialize_--_1_--dtor$0.c)
 *     _DWMInputRouter::Initialize_::_1_::dtor$1 @ 0x1800E7A7F (_DWMInputRouter--Initialize_--_1_--dtor$1.c)
 *     _DWMInputRouter::Initialize_::_1_::dtor$2 @ 0x1800E7A8B (_DWMInputRouter--Initialize_--_1_--dtor$2.c)
 *     _DWMCursorBroker::Initialize_::_1_::dtor$0 @ 0x1800E8074 (_DWMCursorBroker--Initialize_--_1_--dtor$0.c)
 *     _DragNDropProcessorLegacy::Initialize_::_1_::dtor$0 @ 0x1800E95AC (_DragNDropProcessorLegacy--Initialize_--_1_--dtor$0.c)
 *     _InputRedirectionProcessor::Create_::_1_::dtor$2 @ 0x1800E965E (_InputRedirectionProcessor--Create_--_1_--dtor$2.c)
 *     _ButtonRecognizer::Initialize_::_1_::dtor$0 @ 0x1800E9682 (_ButtonRecognizer--Initialize_--_1_--dtor$0.c)
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
