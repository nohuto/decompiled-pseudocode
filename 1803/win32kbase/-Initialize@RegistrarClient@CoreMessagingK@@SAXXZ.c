/*
 * XREFs of ?Initialize@RegistrarClient@CoreMessagingK@@SAXXZ @ 0x1C01659B4
 * Callers:
 *     CoreMsgInitialize @ 0x1C01653A8 (CoreMsgInitialize.c)
 * Callees:
 *     ?BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z @ 0x1C01663A8 (-BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z.c)
 *     CoreUICallComputeMaximumMessageSize @ 0x1C0168CE8 (CoreUICallComputeMaximumMessageSize.c)
 */

void CoreMessagingK::RegistrarClient::Initialize(void)
{
  int v0; // eax
  int v1; // eax
  unsigned int v2; // [rsp+50h] [rbp+8h]
  void *v3; // [rsp+58h] [rbp+10h] BYREF

  v3 = &CoreMessagingK::SendHost::s_Vtbl;
  v0 = CoreUICallComputeMaximumMessageSize(
         (struct IMessageCallSendHost *)&v3,
         (unsigned __int8 **)&Microsoft::CoreUI::Registrar::IRegistrarServer_MsgCallInfo::MethodInstructions,
         0x1Du);
  if ( v0 )
    CoreMessagingK::Runtime::BugCheck(1024LL, v0, 0LL);
  if ( v2 > 0xFFFF )
    CoreMessagingK::Runtime::BugCheck(1025LL, v2, 0LL);
  CoreMessagingK::RegistrarClient::s_MaxSendMessagePayloadSize = v2;
  v1 = CoreUICallComputeMaximumMessageSize(
         (struct IMessageCallSendHost *)&v3,
         (unsigned __int8 **)&Microsoft::CoreUI::Registrar::IRegistrarClient_MsgCallInfo::MethodInstructions,
         0x21u);
  if ( v1 )
    CoreMessagingK::Runtime::BugCheck(1026LL, v1, 0LL);
  if ( v2 > 0xFFFF )
    CoreMessagingK::Runtime::BugCheck(1027LL, v2, 0LL);
  CoreMessagingK::RegistrarClient::s_MaxReceiveMessagePayloadSize = v2;
}
