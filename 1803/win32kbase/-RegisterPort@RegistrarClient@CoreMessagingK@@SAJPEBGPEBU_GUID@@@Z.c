/*
 * XREFs of ?RegisterPort@RegistrarClient@CoreMessagingK@@SAJPEBGPEBU_GUID@@@Z @ 0x1C0165D94
 * Callers:
 *     ?CreatePort@ServerPorts@CoreMessagingK@@SAJDQEAXPEBGPEAPEAX@Z @ 0x1C01665E0 (-CreatePort@ServerPorts@CoreMessagingK@@SAJDQEAXPEBGPEAPEAX@Z.c)
 * Callees:
 *     ?TraceRegisterPort@Log@CoreMessagingK@@SAXPEBGPEBU_GUID@@J@Z @ 0x1C0166008 (-TraceRegisterPort@Log@CoreMessagingK@@SAXPEBGPEBU_GUID@@J@Z.c)
 *     ?NtStatusFromHRESULT@HResultUtil@CoreMessagingK@@YAJJ@Z @ 0x1C01674F8 (-NtStatusFromHRESULT@HResultUtil@CoreMessagingK@@YAJJ@Z.c)
 *     CoreUICallSend @ 0x1C0168DF8 (CoreUICallSend.c)
 */

__int64 __fastcall CoreMessagingK::RegistrarClient::RegisterPort(const unsigned __int16 *a1, const struct _GUID *a2)
{
  int v3; // eax
  int v4; // edx
  const unsigned __int16 *v5; // rcx
  unsigned int v6; // ebx
  void *v8; // [rsp+E8h] [rbp+77h] BYREF

  CoreMessagingK::RegistrarClient::s_Reply_Result = 21;
  v8 = &CoreMessagingK::SendHost::s_Vtbl;
  v3 = CoreUICallSend((struct IMessageCallSendHost *)&v8, 7, byte_1C01753C4, (char)L"Kernel\\MIT\\InputPort");
  if ( v3 >= 0 )
    v6 = CoreMessagingK::RegistrarClient::s_Reply_Result != 0 ? 0xC0000001 : 0;
  else
    v6 = CoreMessagingK::HResultUtil::NtStatusFromHRESULT((CoreMessagingK::HResultUtil *)(unsigned int)v3, v4);
  CoreMessagingK::Log::TraceRegisterPort(v5, a2, v6);
  return v6;
}
