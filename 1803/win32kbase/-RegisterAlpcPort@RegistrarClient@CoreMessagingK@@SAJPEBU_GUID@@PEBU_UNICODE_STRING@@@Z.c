/*
 * XREFs of ?RegisterAlpcPort@RegistrarClient@CoreMessagingK@@SAJPEBU_GUID@@PEBU_UNICODE_STRING@@@Z @ 0x1C0165CD0
 * Callers:
 *     ?CreatePort@ServerPorts@CoreMessagingK@@SAJDQEAXPEBGPEAPEAX@Z @ 0x1C01665E0 (-CreatePort@ServerPorts@CoreMessagingK@@SAJDQEAXPEBGPEAPEAX@Z.c)
 * Callees:
 *     ?TraceRegisterAlpcPort@Log@CoreMessagingK@@SAXPEBU_GUID@@PEBGJ@Z @ 0x1C0165F64 (-TraceRegisterAlpcPort@Log@CoreMessagingK@@SAXPEBU_GUID@@PEBGJ@Z.c)
 *     ?BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z @ 0x1C01663A8 (-BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z.c)
 *     ?NtStatusFromHRESULT@HResultUtil@CoreMessagingK@@YAJJ@Z @ 0x1C01674F8 (-NtStatusFromHRESULT@HResultUtil@CoreMessagingK@@YAJJ@Z.c)
 *     CoreUICallSend @ 0x1C0168DF8 (CoreUICallSend.c)
 */

__int64 __fastcall CoreMessagingK::RegistrarClient::RegisterAlpcPort(
        const struct _GUID *a1,
        const struct _UNICODE_STRING *a2)
{
  struct _GUID v2; // xmm0
  unsigned int v3; // ebx
  int v6; // eax
  int v7; // edx
  struct _GUID v9; // [rsp+40h] [rbp-18h] BYREF
  void *v10; // [rsp+68h] [rbp+10h] BYREF

  v2 = *a1;
  v3 = 0;
  CoreMessagingK::RegistrarClient::s_Reply_Result = 21;
  v10 = &CoreMessagingK::SendHost::s_Vtbl;
  v9 = v2;
  v6 = CoreUICallSend((struct IMessageCallSendHost *)&v10, 10, byte_1C01753D8, (char)&v9);
  if ( v6 >= 0 )
  {
    if ( CoreMessagingK::RegistrarClient::s_Reply_Result )
      CoreMessagingK::Runtime::BugCheck(1029LL, CoreMessagingK::RegistrarClient::s_Reply_Result, 0LL);
  }
  else
  {
    v3 = CoreMessagingK::HResultUtil::NtStatusFromHRESULT((CoreMessagingK::HResultUtil *)(unsigned int)v6, v7);
  }
  CoreMessagingK::Log::TraceRegisterAlpcPort(a1, a2->Buffer, v3);
  return v3;
}
