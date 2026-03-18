/*
 * XREFs of ?UnregisterAlpcPort@RegistrarClient@CoreMessagingK@@SAJPEBU_GUID@@@Z @ 0x1C0086148
 * Callers:
 *     ?UninitializeServerPort@ServerPorts@CoreMessagingK@@SAXPEAUServerPortInfo@2@@Z @ 0x1C0085FA4 (-UninitializeServerPort@ServerPorts@CoreMessagingK@@SAXPEAUServerPortInfo@2@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C001C674 (_TlgWrite.c)
 *     CoreUICallSend @ 0x1C008726C (CoreUICallSend.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     ?BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z @ 0x1C0155D80 (-BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z.c)
 *     ?NtStatusFromHRESULT@HResultUtil@CoreMessagingK@@YAJJ@Z @ 0x1C0155E30 (-NtStatusFromHRESULT@HResultUtil@CoreMessagingK@@YAJJ@Z.c)
 */

__int64 __fastcall CoreMessagingK::RegistrarClient::UnregisterAlpcPort(const struct _GUID *a1)
{
  struct _GUID v1; // xmm0
  int v3; // eax
  int v4; // edx
  const GUID *v5; // r9
  unsigned int v6; // ebx
  __int64 v8; // [rsp+40h] [rbp-19h] BYREF
  void *v9; // [rsp+48h] [rbp-11h] BYREF
  char v10[16]; // [rsp+50h] [rbp-9h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp+7h] BYREF
  const struct _GUID *v12; // [rsp+80h] [rbp+27h]
  int v13; // [rsp+88h] [rbp+2Fh]
  int v14; // [rsp+8Ch] [rbp+33h]
  __int64 *v15; // [rsp+90h] [rbp+37h]
  int v16; // [rsp+98h] [rbp+3Fh]
  int v17; // [rsp+9Ch] [rbp+43h]

  v1 = *a1;
  v8 = 0LL;
  v9 = &CoreMessagingK::SendHost::s_Vtbl;
  CoreMessagingK::RegistrarClient::s_Reply_Result = 18;
  *(struct _GUID *)v10 = v1;
  v3 = CoreUICallSend((struct IMessageCallSendHost *)&v9, 14, (unsigned __int8 *)&byte_1C0161F18, (char)v10);
  if ( v3 < 0 )
  {
    v6 = CoreMessagingK::HResultUtil::NtStatusFromHRESULT((CoreMessagingK::HResultUtil *)(unsigned int)v3, v4);
  }
  else
  {
    if ( CoreMessagingK::RegistrarClient::s_Reply_Result )
      CoreMessagingK::Runtime::BugCheck(1030LL, CoreMessagingK::RegistrarClient::s_Reply_Result, 0LL);
    v6 = 0;
  }
  LODWORD(v8) = v6;
  if ( dword_1C0188C40 > 5u )
  {
    v14 = 0;
    v17 = 0;
    v15 = &v8;
    v16 = 4;
    v12 = a1;
    v13 = 16;
    TlgWrite((TraceLoggingHProvider)&dword_1C0188C40, &unk_1C016C27B, 0LL, v5, 4u, &pData);
  }
  return v6;
}
