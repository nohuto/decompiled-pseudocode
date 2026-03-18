/*
 * XREFs of ?Initialize@RegistrarClient@CoreMessagingK@@SAXXZ @ 0x1C0087194
 * Callers:
 *     CoreMsgInitialize @ 0x1C0086F68 (CoreMsgInitialize.c)
 * Callees:
 *     ?ComputeMaximumMessageSize@SendProcessor@Calling@CoreMessaging@@QEAAJPEAUIMessageCallSendHost@@PEAPEBEIIIIPEAI@Z @ 0x1C0087A84 (-ComputeMaximumMessageSize@SendProcessor@Calling@CoreMessaging@@QEAAJPEAUIMessageCallSendHost@@P.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     ?BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z @ 0x1C0155D80 (-BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z.c)
 */

void CoreMessagingK::RegistrarClient::Initialize(void)
{
  int v0; // eax
  int v1; // eax
  unsigned int v2; // [rsp+20h] [rbp-D8h]
  unsigned int v3; // [rsp+20h] [rbp-D8h]
  unsigned int v4; // [rsp+28h] [rbp-D0h]
  unsigned int v5; // [rsp+28h] [rbp-D0h]
  unsigned int v6; // [rsp+30h] [rbp-C8h]
  unsigned int v7; // [rsp+30h] [rbp-C8h]
  unsigned int v8; // [rsp+40h] [rbp-B8h] BYREF
  void *v9; // [rsp+48h] [rbp-B0h] BYREF
  _BYTE v10[144]; // [rsp+50h] [rbp-A8h] BYREF

  v9 = &CoreMessagingK::SendHost::s_Vtbl;
  v0 = CoreMessaging::Calling::SendProcessor::ComputeMaximumMessageSize(
         (CoreMessaging::Calling::SendProcessor *)v10,
         (struct IMessageCallSendHost *)&v9,
         (const unsigned __int8 **)&IRegistrarServer_MsgCallInfo::MethodInstructions,
         0x20u,
         v2,
         v4,
         v6,
         &v8);
  if ( v0 >= 0 )
    v0 = 0;
  if ( v0 )
    CoreMessagingK::Runtime::BugCheck(1024LL, v0, 0LL);
  if ( v8 > 0xFFFF )
    CoreMessagingK::Runtime::BugCheck(1025LL, v8, 0LL);
  CoreMessagingK::RegistrarClient::s_MaxSendMessagePayloadSize = v8;
  v1 = CoreMessaging::Calling::SendProcessor::ComputeMaximumMessageSize(
         (CoreMessaging::Calling::SendProcessor *)v10,
         (struct IMessageCallSendHost *)&v9,
         (const unsigned __int8 **)&IRegistrarClient_MsgCallInfo::MethodInstructions,
         0x22u,
         v3,
         v5,
         v7,
         &v8);
  if ( v1 >= 0 )
    v1 = 0;
  if ( v1 )
    CoreMessagingK::Runtime::BugCheck(1026LL, v1, 0LL);
  if ( v8 > 0xFFFF )
    CoreMessagingK::Runtime::BugCheck(1027LL, v8, 0LL);
  CoreMessagingK::RegistrarClient::s_MaxReceiveMessagePayloadSize = v8;
}
