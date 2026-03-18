/*
 * XREFs of ?RegisterPort@RegistrarClient@CoreMessagingK@@SAJPEBGPEBU_GUID@@@Z @ 0x1C006A274
 * Callers:
 *     ?CreatePort@ServerPorts@CoreMessagingK@@SAJDQEAXPEBGPEAPEAX@Z @ 0x1C0069EA8 (-CreatePort@ServerPorts@CoreMessagingK@@SAJDQEAXPEBGPEAPEAX@Z.c)
 * Callees:
 *     _TlgCreateWsz @ 0x1C00073E8 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x1C0052730 (_TlgWrite.c)
 *     CoreUICallSend @ 0x1C006BF70 (CoreUICallSend.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     ?NtStatusFromHRESULT@HResultUtil@CoreMessagingK@@YAJJ@Z @ 0x1C0156840 (-NtStatusFromHRESULT@HResultUtil@CoreMessagingK@@YAJJ@Z.c)
 */

__int64 __fastcall CoreMessagingK::RegistrarClient::RegisterPort(const unsigned __int16 *a1, const struct _GUID *a2)
{
  struct _GUID v2; // xmm0
  int v4; // eax
  int v5; // edx
  unsigned int v6; // ebx
  LPCGUID v8; // r9
  _QWORD v9[2]; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v10[4]; // [rsp+78h] [rbp-90h] BYREF
  struct _GUID v11; // [rsp+98h] [rbp-70h]
  __int128 v12; // [rsp+A8h] [rbp-60h]
  __int64 v13; // [rsp+B8h] [rbp-50h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+C8h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+E8h] [rbp-20h] BYREF
  const struct _GUID *v16; // [rsp+F8h] [rbp-10h]
  int v17; // [rsp+100h] [rbp-8h]
  int v18; // [rsp+104h] [rbp-4h]
  _QWORD *v19; // [rsp+108h] [rbp+0h]
  int v20; // [rsp+110h] [rbp+8h]
  int v21; // [rsp+114h] [rbp+Ch]

  v2 = *a2;
  CoreMessagingK::RegistrarClient::s_Reply_Result = 18;
  v10[0] = &CoreMessagingK::SendHost::s_Vtbl;
  LODWORD(v9[0]) = 0;
  v9[1] = 0LL;
  v10[2] = 0LL;
  v10[3] = 0LL;
  v10[1] = 1LL;
  v11 = v2;
  v12 = 1uLL;
  v13 = 0LL;
  v4 = CoreUICallSend(
         (struct IMessageCallSendHost *)v10,
         7,
         (unsigned __int8 *)&byte_1C01619AB,
         (char)L"Kernel\\MIT\\InputPort");
  if ( v4 < 0 )
    v6 = CoreMessagingK::HResultUtil::NtStatusFromHRESULT((CoreMessagingK::HResultUtil *)(unsigned int)v4, v5);
  else
    v6 = CoreMessagingK::RegistrarClient::s_Reply_Result != 0 ? 0xC0000001 : 0;
  LODWORD(v9[0]) = v6;
  if ( dword_1C0186C30 > 5u )
  {
    TlgCreateWsz(&pDesc, L"Kernel\\MIT\\InputPort");
    v18 = 0;
    v21 = 0;
    v19 = v9;
    v16 = a2;
    v17 = 16;
    v20 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C0186C30, &unk_1C016BE31, 0LL, v8, 5u, &pData);
  }
  return v6;
}
