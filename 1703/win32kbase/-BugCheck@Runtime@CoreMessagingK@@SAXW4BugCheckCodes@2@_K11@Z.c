/*
 * XREFs of ?BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z @ 0x1C01567B0
 * Callers:
 *     ?UnregisterAlpcPort@RegistrarClient@CoreMessagingK@@SAJPEBU_GUID@@@Z @ 0x1C00696EC (-UnregisterAlpcPort@RegistrarClient@CoreMessagingK@@SAJPEBU_GUID@@@Z.c)
 *     ?RegisterAlpcPort@RegistrarClient@CoreMessagingK@@SAJPEBU_GUID@@PEBU_UNICODE_STRING@@@Z @ 0x1C006A198 (-RegisterAlpcPort@RegistrarClient@CoreMessagingK@@SAJPEBU_GUID@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?InitializeMessageAttributes@RegistrarClient@CoreMessagingK@@CAXPEAU_ALPC_MESSAGE_ATTRIBUTES@@_K@Z @ 0x1C006A570 (-InitializeMessageAttributes@RegistrarClient@CoreMessagingK@@CAXPEAU_ALPC_MESSAGE_ATTRIBUTES@@_K.c)
 *     CoreMsgInitialize @ 0x1C006B0BC (CoreMsgInitialize.c)
 *     ?Initialize@RegistrarClient@CoreMessagingK@@SAXXZ @ 0x1C006B34C (-Initialize@RegistrarClient@CoreMessagingK@@SAXXZ.c)
 *     ?OpenConnection@ServerPorts@CoreMessagingK@@SAJDPEBUtagMsgRoutingInfo@@PEAPEAX@Z @ 0x1C006B6F4 (-OpenConnection@ServerPorts@CoreMessagingK@@SAJDPEBUtagMsgRoutingInfo@@PEAPEAX@Z.c)
 *     ?DrainPort@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@@Z @ 0x1C006B91C (-DrainPort@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@@Z.c)
 *     ?SubmitBuffer@SendHost@CoreMessagingK@@SAJPEAUIMessageCallSendHost@@PEAPEAXIPEAXI@Z @ 0x1C006C1A0 (-SubmitBuffer@SendHost@CoreMessagingK@@SAJPEAUIMessageCallSendHost@@PEAPEAXIPEAXI@Z.c)
 *     ?Acquire@EntryLock@CoreMessagingK@@QEAAXW4BugCheckCodes@2@@Z @ 0x1C006C734 (-Acquire@EntryLock@CoreMessagingK@@QEAAXW4BugCheckCodes@2@@Z.c)
 *     ?AllocateBuffer@SendHost@CoreMessagingK@@SAJPEAUIMessageCallSendHost@@PEAPEAXII1@Z @ 0x1C006C780 (-AllocateBuffer@SendHost@CoreMessagingK@@SAJPEAUIMessageCallSendHost@@PEAPEAXII1@Z.c)
 *     ?ValidateReceiveBuffer@SendHost@CoreMessagingK@@CAXPEAUAlpcBufferK@@_K@Z @ 0x1C006CE04 (-ValidateReceiveBuffer@SendHost@CoreMessagingK@@CAXPEAUAlpcBufferK@@_K@Z.c)
 *     ?Release@ClientPortInfo@CoreMessagingK@@QEAAXXZ @ 0x1C006CEF8 (-Release@ClientPortInfo@CoreMessagingK@@QEAAXXZ.c)
 *     ?NotifyInvalid@SendHost@CoreMessagingK@@SAJPEAUIMessageCallSendHost@@PEAUMsgCallState@@@Z @ 0x1C0156800 (-NotifyInvalid@SendHost@CoreMessagingK@@SAJPEAUIMessageCallSendHost@@PEAUMsgCallState@@@Z.c)
 *     ?Thunk_OnProtocolException_0@?$IRegistrarClient_Receive@URegistrarClientThunk@CoreMessagingK@@@@SAJPEAXPEAPEAX@Z @ 0x1C0156820 (-Thunk_OnProtocolException_0@-$IRegistrarClient_Receive@URegistrarClientThunk@CoreMessagingK@@@@.c)
 *     ?NotifyInvalid@ReceiveHost@CoreMessagingK@@SAJPEAUIMessageCallReceiveHost@@PEAUMsgCallState@@@Z @ 0x1C0156890 (-NotifyInvalid@ReceiveHost@CoreMessagingK@@SAJPEAUIMessageCallReceiveHost@@PEAUMsgCallState@@@Z.c)
 *     ?NotifyProtocolViolation@ReceiveHost@CoreMessagingK@@SAJPEAUIMessageCallReceiveHost@@PEAUMsgCallState@@@Z @ 0x1C01568B0 (-NotifyProtocolViolation@ReceiveHost@CoreMessagingK@@SAJPEAUIMessageCallReceiveHost@@PEAUMsgCall.c)
 * Callees:
 *     <none>
 */

void __fastcall __noreturn CoreMessagingK::Runtime::BugCheck(int a1, ULONG_PTR a2, ULONG_PTR a3)
{
  KeBugCheckEx(0x174u, a1, a2, a3, 0LL);
}
