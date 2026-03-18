/*
 * XREFs of ?UnregisterAlpcPort@RegistrarClient@CoreMessagingK@@SAJPEBU_GUID@@@Z @ 0x1C0166144
 * Callers:
 *     ?UninitializeServerPort@ServerPorts@CoreMessagingK@@SAXPEAUServerPortInfo@2@@Z @ 0x1C0166EFC (-UninitializeServerPort@ServerPorts@CoreMessagingK@@SAXPEAUServerPortInfo@2@@Z.c)
 * Callees:
 *     ?TraceUnregisterAlpcPort@Log@CoreMessagingK@@SAXPEBU_GUID@@J@Z @ 0x1C01660B8 (-TraceUnregisterAlpcPort@Log@CoreMessagingK@@SAXPEBU_GUID@@J@Z.c)
 *     ?BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z @ 0x1C01663A8 (-BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z.c)
 *     ?NtStatusFromHRESULT@HResultUtil@CoreMessagingK@@YAJJ@Z @ 0x1C01674F8 (-NtStatusFromHRESULT@HResultUtil@CoreMessagingK@@YAJJ@Z.c)
 *     CoreUICallSend @ 0x1C0168DF8 (CoreUICallSend.c)
 */

__int64 __fastcall CoreMessagingK::RegistrarClient::UnregisterAlpcPort(const struct _GUID *a1)
{
  struct _GUID v1; // xmm0
  unsigned int v2; // ebx
  int v4; // eax
  int v5; // edx
  __int64 v6; // r8
  const GUID *v7; // r9
  struct _GUID v9; // [rsp+40h] [rbp-18h] BYREF
  void *v10; // [rsp+68h] [rbp+10h] BYREF

  v1 = *a1;
  v2 = 0;
  CoreMessagingK::RegistrarClient::s_Reply_Result = 21;
  v10 = &CoreMessagingK::SendHost::s_Vtbl;
  v9 = v1;
  v4 = CoreUICallSend((struct IMessageCallSendHost *)&v10, 11, byte_1C0175382, (char)&v9);
  if ( v4 >= 0 )
  {
    if ( CoreMessagingK::RegistrarClient::s_Reply_Result )
      CoreMessagingK::Runtime::BugCheck(1030LL, CoreMessagingK::RegistrarClient::s_Reply_Result, 0LL);
  }
  else
  {
    v2 = CoreMessagingK::HResultUtil::NtStatusFromHRESULT((CoreMessagingK::HResultUtil *)(unsigned int)v4, v5);
  }
  CoreMessagingK::Log::TraceUnregisterAlpcPort(a1, v2, v6, v7);
  return v2;
}
