/*
 * XREFs of ?UnregisterObject@RegistrarClient@CoreMessagingK@@SAJPEBG@Z @ 0x1C01661F0
 * Callers:
 *     ?UninitializeServerPort@ServerPorts@CoreMessagingK@@SAXPEAUServerPortInfo@2@@Z @ 0x1C0166EFC (-UninitializeServerPort@ServerPorts@CoreMessagingK@@SAXPEAUServerPortInfo@2@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C00407C4 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C004E080 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     ?NtStatusFromHRESULT@HResultUtil@CoreMessagingK@@YAJJ@Z @ 0x1C01674F8 (-NtStatusFromHRESULT@HResultUtil@CoreMessagingK@@YAJJ@Z.c)
 *     CoreUICallSend @ 0x1C0168DF8 (CoreUICallSend.c)
 */

__int64 __fastcall CoreMessagingK::RegistrarClient::UnregisterObject(LPCWSTR pwsz)
{
  int v2; // eax
  int v3; // edx
  unsigned int v4; // ebx
  LPCGUID v5; // r9
  __int64 v7; // [rsp+50h] [rbp-49h] BYREF
  void *v8; // [rsp+58h] [rbp-41h] BYREF
  __int128 v9; // [rsp+60h] [rbp-39h]
  __int64 v10; // [rsp+70h] [rbp-29h]
  __int128 v11; // [rsp+80h] [rbp-19h]
  __int64 v12; // [rsp+90h] [rbp-9h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A0h] [rbp+7h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+C0h] [rbp+27h] BYREF
  __int64 *v15; // [rsp+D0h] [rbp+37h]
  int v16; // [rsp+D8h] [rbp+3Fh]
  int v17; // [rsp+DCh] [rbp+43h]

  CoreMessagingK::RegistrarClient::s_Reply_Result = 21;
  v8 = &CoreMessagingK::SendHost::s_Vtbl;
  v7 = 0LL;
  v10 = 0LL;
  v9 = 1uLL;
  v11 = 1uLL;
  v12 = 0LL;
  v2 = CoreUICallSend((struct IMessageCallSendHost *)&v8, 9, byte_1C01753D1, (char)pwsz);
  if ( v2 >= 0 )
    v4 = CoreMessagingK::RegistrarClient::s_Reply_Result != 0 ? 0xC0000001 : 0;
  else
    v4 = CoreMessagingK::HResultUtil::NtStatusFromHRESULT((CoreMessagingK::HResultUtil *)(unsigned int)v2, v3);
  LODWORD(v7) = v4;
  if ( dword_1C019A350 > 5u )
  {
    TlgCreateWsz(&pDesc, pwsz);
    v17 = 0;
    v15 = &v7;
    v16 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C019A350, &unk_1C017A52E, 0LL, v5, 4u, &pData);
  }
  return v4;
}
