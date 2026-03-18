/*
 * XREFs of ?UnregisterObject@RegistrarClient@CoreMessagingK@@SAJPEBG@Z @ 0x1C00695F8
 * Callers:
 *     ?UninitializeServerPort@ServerPorts@CoreMessagingK@@SAXPEAUServerPortInfo@2@@Z @ 0x1C0069A74 (-UninitializeServerPort@ServerPorts@CoreMessagingK@@SAXPEAUServerPortInfo@2@@Z.c)
 * Callees:
 *     _TlgCreateWsz @ 0x1C00073E8 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x1C0052730 (_TlgWrite.c)
 *     CoreUICallSend @ 0x1C006BF70 (CoreUICallSend.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     ?NtStatusFromHRESULT@HResultUtil@CoreMessagingK@@YAJJ@Z @ 0x1C0156840 (-NtStatusFromHRESULT@HResultUtil@CoreMessagingK@@YAJJ@Z.c)
 */

__int64 __fastcall CoreMessagingK::RegistrarClient::UnregisterObject(const unsigned __int16 *a1)
{
  int v2; // eax
  int v3; // edx
  unsigned int v4; // ebx
  LPCGUID v6; // r9
  __int64 v7; // [rsp+50h] [rbp-59h] BYREF
  void *v8; // [rsp+58h] [rbp-51h] BYREF
  __int128 v9; // [rsp+60h] [rbp-49h]
  __int64 v10; // [rsp+70h] [rbp-39h]
  __int128 v11; // [rsp+80h] [rbp-29h]
  __int64 v12; // [rsp+90h] [rbp-19h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A0h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+C0h] [rbp+17h] BYREF
  __int64 *v15; // [rsp+D0h] [rbp+27h]
  int v16; // [rsp+D8h] [rbp+2Fh]
  int v17; // [rsp+DCh] [rbp+33h]

  CoreMessagingK::RegistrarClient::s_Reply_Result = 18;
  v8 = &CoreMessagingK::SendHost::s_Vtbl;
  v7 = 0LL;
  v10 = 0LL;
  v9 = 1uLL;
  v11 = 1uLL;
  v12 = 0LL;
  v2 = CoreUICallSend((struct IMessageCallSendHost *)&v8, 9, (unsigned __int8 *)&byte_1C01619B8, (char)a1);
  if ( v2 < 0 )
    v4 = CoreMessagingK::HResultUtil::NtStatusFromHRESULT((CoreMessagingK::HResultUtil *)(unsigned int)v2, v3);
  else
    v4 = CoreMessagingK::RegistrarClient::s_Reply_Result != 0 ? 0xC0000001 : 0;
  LODWORD(v7) = v4;
  if ( dword_1C0186C30 > 5u )
  {
    TlgCreateWsz(&pDesc, a1);
    v17 = 0;
    v15 = &v7;
    v16 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C0186C30, &unk_1C016BDFD, 0LL, v6, 4u, &pData);
  }
  return v4;
}
